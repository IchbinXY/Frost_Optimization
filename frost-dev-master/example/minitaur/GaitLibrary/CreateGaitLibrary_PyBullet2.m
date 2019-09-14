clc;clear;close all
velocity = 4:1:9;

GaitLibrary = struct;
GaitLibrary.Velocity = zeros(1, length(velocity));
GaitLibrary.FrontStance.LegPose = zeros(length(velocity), 3, 21);
GaitLibrary.FrontStance.MotorVelocity = zeros(length(velocity), 2, 21);
GaitLibrary.BackStance.LegPose = zeros(length(velocity), 3, 21);
GaitLibrary.BackStance.MotorVelocity = zeros(length(velocity), 2, 21);

for i = 1:length(velocity)
    load(['output_velocity_0',num2str(velocity(i)),'.mat'])
    GaitLibrary.Velocity(i) = 0.1 * velocity(i);
    %% Front Stance
    org_time_scale = solution.tspan{1};
    org_joint_position = solution.states{1}.x;
    org_joint_velocity = solution.states{1}.dx;
    org_front_leg_pose = [...
        (org_joint_position(8,:) - org_joint_position(7,:))/2;                              % relative front swing angle
        (org_joint_position(8,:) - org_joint_position(7,:))/2 + org_joint_position(5,:);    % absolute front swing angle
        (org_joint_position(8,:) + org_joint_position(7,:))/2 ];                            % front exten angle
    org_front_leg_velocity = org_joint_velocity(7:8,:);
    
    GaitLibrary.FrontStance.Time(i,:,:) = org_time_scale;
    GaitLibrary.FrontStance.LegPose(i,:,:) = org_front_leg_pose;
    GaitLibrary.FrontStance.MotorVelocity(i,:,:) = org_front_leg_velocity;
    
    %% BackStance
    org_time_scale = solution.tspan{5};
    org_joint_position = solution.states{5}.x;
    org_joint_velocity = solution.states{5}.dx;
    org_back_leg_pose = [...
        (org_joint_position(12,:) - org_joint_position(11,:))/2;                            % relative back swing angle
        (org_joint_position(12,:) - org_joint_position(11,:))/2 + org_joint_position(5,:);  % absolute back swing angle
        (org_joint_position(12,:) + org_joint_position(11,:))/2 ];                          % back exten angle
    org_back_leg_velocity = org_joint_velocity(11:12,:);
    
    GaitLibrary.BackStance.Time(i,:,:) = org_time_scale;
    GaitLibrary.BackStance.LegPose(i,:,:) = org_back_leg_pose;
    GaitLibrary.BackStance.MotorVelocity(i,:,:) = org_back_leg_velocity;
    
end
save(fullfile(pwd, 'GaitLibrary', 'GaitLibrary_PyBullet2'), 'GaitLibrary')