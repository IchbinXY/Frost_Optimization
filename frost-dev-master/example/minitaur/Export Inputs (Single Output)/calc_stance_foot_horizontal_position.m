%% plot stance foot x relative to the motor joint in the front stance
load('vel_07_States_to_VS.mat')
load('output_velocity_07.mat')
x = zeros(1,201);
y = zeros(1,201);
init_swing = (solution.states{1}.x(8,1)-solution.states{1}.x(7,1))/2+solution.states{1}.x(5,1);
init_exten = (solution.states{1}.x(8,1)+solution.states{1}.x(7,1))/2;
init_foot_position = leg_pose_to_foot_position([init_swing, init_exten]);
x(1) = init_foot_position(1);
y(1) = init_foot_position(2);
for i = 1:200
%     time = solution.tspan{1}(i+1) - solution.tspan{1}(i);
%     desired_velocity_x = solution.states{1}.dx(1,i+1);
%     desired_angle_pitch = solution.states{1}.x(5,i+1);
%     desired_position_z = solution.states{1}.x(3,i+1);
    % use the next time step data to calculate for the next desired foot
    % location
    time = 0.001;
    desired_velocity_x = base_velocity_x(i+1);
    desired_angle_pitch = base_angle_pitch(i+1);
    desired_position_z = base_position_z(i+1);
    y(i+1) = 0.2*sin(desired_angle_pitch) - desired_position_z;
    x(i+1) = x(i) - desired_velocity_x * time;
end
target_leg_swing = zeros(1,201);
target_leg_exten = zeros(1,201);
for i = 1:201
    target_leg_pose = foot_position_to_leg_pose([x(i),y(i)]);
    target_leg_swing(i) = target_leg_pose(1) - base_angle_pitch(i);
    target_leg_exten(i) = target_leg_pose(2);
end
actual_leg_swing = (solution.states{1}.x(8,:)-solution.states{1}.x(7,:))./2;
actual_leg_exten = (solution.states{1}.x(7,:)+solution.states{1}.x(8,:))./2;
figure(1)
subplot(2,1,1)
plot(0:0.001:0.2, target_leg_swing, solution.tspan{1}, actual_leg_swing, 'linewidth', 2)
subplot(2,1,2)
plot(0:0.001:0.2, target_leg_exten, solution.tspan{1}, actual_leg_exten, 'linewidth', 2)

function foot_position = leg_pose_to_foot_position(leg_pose)
l1 = 0.112;
l2 = 0.199;
l3 = 0.2315;

sw = leg_pose(1);
ext = leg_pose(2);
alpha = asin(l1*sin(ext)/l2);

x = l3*sin(alpha - sw) - l1*sin(ext - sw);
y = l3*cos(alpha - sw) - l1*cos(ext - sw);
foot_position = [x, -y];
end

function leg_pose = foot_position_to_leg_pose(foot_position)
l1 = 0.112;
l2 = 0.199;
l3 = 0.2315;
x = foot_position(1);
y = foot_position(2);
hip_toe_sqr = x^2 + y^2;
cos_beta = (l1^2 + l3^2 - hip_toe_sqr)/(2*l1*l3);
hip_ankle_sqr = l1^2 + l2^2 - 2*l1*l2*cos_beta;
hip_ankle = sqrt(hip_ankle_sqr);
cos_ext = -(l1^2 + hip_ankle_sqr - l2^2)/(2*l1*hip_ankle);
ext = acos(cos_ext);

hip_toe = sqrt(hip_toe_sqr);
cos_theta = (hip_toe_sqr + hip_ankle_sqr - (l3 - l2)^2)/(2*hip_ankle*hip_toe);

theta = acos(cos_theta);
sw = asin(x/hip_toe) - theta;
leg_pose = [-sw, ext];
end

function leg_swing = foot_horizontal_position_to_leg_swing(foot_horizontal_position, leg_extension)
l1 = 0.112;
l2 = 0.199;
l3 = 0.2315;
alpha = asin(l1/l2*sin(leg_extension));
toe_hip_orth = l3*sin(alpha) - l1*sin(leg_extension);
toe_hip_proj = l3*cos(alpha) - l1*cos(leg_extension);

theta = atan(toe_hip_orth / toe_hip_proj);

toe_hip_len = sqrt(toe_hip_orth^2 + toe_hip_proj^2);

foot_position = max(min(toe_hip_len*0.8, foot_horizontal_position), -toe_hip_len*0.5);

sw_and_theta = asin(foot_position/toe_hip_len);

sw = sw_and_theta - theta;

leg_swing = -sw;
end