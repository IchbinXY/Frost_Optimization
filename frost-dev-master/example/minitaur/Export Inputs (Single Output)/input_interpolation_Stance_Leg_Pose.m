% clc;clear;close all
vel = 7;
load(['output_velocity_0',num2str(vel),'.mat'])
%% Front Stance - Front Leg Pose (Stance Leg)
% phase index
phase_idx = 1;
% construct the original leg pose from MATLAB (size: 3 poses by original time scale)
org_time_scale = solution.tspan{phase_idx};
org_joint_position = solution.states{phase_idx}.x;
org_joint_velocity = solution.states{phase_idx}.dx;
org_front_leg_pose = [...
    (org_joint_position(8,:) - org_joint_position(7,:))/2;                              % relative front swing angle
    (org_joint_position(8,:) - org_joint_position(7,:))/2 + org_joint_position(5,:);    % absolute front swing angle 
    (org_joint_position(8,:) + org_joint_position(7,:))/2 ];                            % front exten angle 
org_front_leg_velocity = org_joint_velocity(7:8,:);

figure(1)
plot(org_time_scale, org_front_leg_pose(1,:))
hold on; grid on
plot(org_time_scale, org_front_leg_pose(2,:))
plot(org_time_scale, org_front_leg_pose(3,:))

% figure(2)
% plot(org_time_scale, org_front_leg_velocity(1,:))
% hold on; grid on
% plot(org_time_scale, org_front_leg_velocity(2,:))

% construct the interpolated leg pose for PyBullet (size: interpolated time scale by 3 poses)
int_time_scale = 0:0.006:org_time_scale(end);
int_front_leg_pose = zeros(length(int_time_scale),3);
int_front_leg_velocity = zeros(length(int_time_scale),2);
for j = 1:3
    int_front_leg_pose(:,j) = interp1(org_time_scale, org_front_leg_pose(j,:), int_time_scale);
end
for j = 1:2 
    int_front_leg_velocity(:,j) = interp1(org_time_scale, org_front_leg_velocity(j,:), int_time_scale);
end

figure(1)
plot(int_time_scale, int_front_leg_pose(:,1))
hold on; grid on
plot(int_time_scale, int_front_leg_pose(:,2))
plot(int_time_scale, int_front_leg_pose(:,3))
title('Front Stance Leg Pose')
legend('org rel swing', 'org abs swing', 'org extension', 'int rel swing', 'int abs swing', 'int extension')

% figure(2)
% plot(int_time_scale, int_front_leg_velocity(:,1))
% hold on; grid on
% plot(int_time_scale, int_front_leg_velocity(:,2))
% title('Front Stance Motor Velocity')
% legend('org motor 7', 'org motor 8', 'int motor 7', 'int motor 8')

save(fullfile(pwd, 'inputs', ['vel_0',num2str(vel),'_Inputs_to_VS_0006_FrontStance']), 'int_front_leg_pose', 'int_front_leg_velocity')

%% Back Stance - Back Leg Pose (Stance Leg)
% phase index
phase_idx = 5;
% construct the original leg pose from MATLAB (size: 3 poses by original time scale)
org_time_scale = solution.tspan{phase_idx};
org_joint_position = solution.states{phase_idx}.x;
org_joint_velocity = solution.states{phase_idx}.dx;
org_back_leg_pose = [...
    (org_joint_position(12,:) - org_joint_position(11,:))/2;                            % relative back swing angle
    (org_joint_position(12,:) - org_joint_position(11,:))/2 + org_joint_position(5,:);  % absolute back swing angle
    (org_joint_position(12,:) + org_joint_position(11,:))/2 ];                          % back exten angle 
org_back_leg_velocity = org_joint_velocity(11:12,:);

figure(3)
plot(org_time_scale, org_back_leg_pose(1,:))
hold on; grid on
plot(org_time_scale, org_back_leg_pose(2,:))
plot(org_time_scale, org_back_leg_pose(3,:))

% figure(4)
% plot(org_time_scale, org_back_leg_velocity(1,:))
% hold on; grid on
% plot(org_time_scale, org_back_leg_velocity(2,:))

% construct the interpolated leg pose for PyBullet (size: interpolated time scale by 3 poses)
int_time_scale = 0:0.006:org_time_scale(end);
int_back_leg_pose = zeros(length(int_time_scale),3);
int_back_leg_velocity = zeros(length(int_time_scale),2);
for j = 1:3
    int_back_leg_pose(:,j) = interp1(org_time_scale, org_back_leg_pose(j,:), int_time_scale);
end
for j = 1:2
    int_back_leg_velocity(:,j) = interp1(org_time_scale, org_back_leg_velocity(j,:), int_time_scale);
end

figure(3)
plot(int_time_scale, int_back_leg_pose(:,1))
hold on; grid on
plot(int_time_scale, int_back_leg_pose(:,2))
plot(int_time_scale, int_back_leg_pose(:,3))
title('Back Stance Leg Pose')
legend('org rel swing', 'org abs swing', 'org extension', 'int rel swing', 'int abs swing', 'int extension')

% figure(4)
% plot(int_time_scale, int_back_leg_velocity(:,1))
% hold on; grid on
% plot(int_time_scale, int_back_leg_velocity(:,2))
% title('Back Stance Motor Velocity')
% legend('org motor 11', 'org motor 12', 'int motor 11', 'int motor 12')

save(fullfile(pwd, 'inputs', ['vel_0',num2str(vel),'_Inputs_to_VS_0006_BackStance']), 'int_back_leg_pose', 'int_back_leg_velocity')

%% construct the interpolated states for Pybullet (size: interpolated time scale by 1 state)
% base_velocity_x = interp1(org_time_scale, org_joint_velocity(1,:), int_time_scale)';
% base_position_z = interp1(org_time_scale, org_joint_position(3,:), int_time_scale)';
% base_angle_pitch = interp1(org_time_scale, org_joint_position(5,:), int_time_scale)';
% figure(3)
% plot(org_time_scale, org_joint_velocity(1,:))
% hold on; grid on; title('dx')
% plot(int_time_scale, base_velocity_x)
% figure(4)
% plot(org_time_scale, org_joint_position(5,:))
% hold on; grid on; title('pitch')
% plot(int_time_scale, base_angle_pitch)
% figure(5)
% plot(org_time_scale, org_joint_position(3,:))
% hold on; grid on; title('z')
% plot(int_time_scale, base_position_z)
% save('vel_04_States_to_VS','base_velocity_x','base_angle_pitch','base_position_z')

%% construct the initial condition for Pybullet
InitialState = solution.states{1}.x(:,1);
init_pos = InitialState(1:3);       % size 3 by 1 [x;y;z]
quat = angle2quat(InitialState(6),InitialState(5),InitialState(4));
init_rot = [quat(2:4)';quat(1)];    % size 4 by 1 [x;y;z;scalar]
init_joint = InitialState(7:end);   % size 16 by 1 

InitialVelocity = solution.states{1}.dx(:,1);
init_vel = InitialVelocity(1:3);    % size 3 by 1
init_avel = InitialVelocity(4:6);   % size 3 by 1
init_jvel = InitialVelocity(7:end); % size 16 by 1
save(fullfile(pwd, 'inputs', ['vel_0',num2str(vel),'_InitialCondition_to_VS_0006']),'init_pos','init_rot','init_joint','init_vel','init_avel','init_jvel')