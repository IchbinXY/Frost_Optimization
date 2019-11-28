clc;clear;close all
vel = 2:1:7;
for i = 1:length(vel)
    load(['inputs\vel_0', num2str(vel(i)), '_Inputs_to_VS_0006_FrontStance.mat'])
    figure(1); hold on; grid on
    plot3(vel(i)*0.1*ones(1,length(int_front_leg_pose)), 1:length(int_front_leg_pose), int_front_leg_pose(:,1)*180/pi, 'linewidth',2)
    figure(2); hold on; grid on
    plot3(vel(i)*0.1*ones(1,length(int_front_leg_pose)), 1:length(int_front_leg_pose), int_front_leg_pose(:,2)*180/pi, 'linewidth',2)
    figure(3); hold on; grid on
    plot3(vel(i)*0.1*ones(1,length(int_front_leg_pose)), 1:length(int_front_leg_pose), int_front_leg_pose(:,3)*180/pi, 'linewidth',2)
    
    load(['inputs\vel_0', num2str(vel(i)), '_Inputs_to_VS_0006_BackStance.mat'])
    figure(4); hold on; grid on
    plot3(vel(i)*0.1*ones(1,length(int_back_leg_pose)), 1:length(int_back_leg_pose), int_back_leg_pose(:,1)*180/pi, 'linewidth',2)
    figure(5); hold on; grid on
    plot3(vel(i)*0.1*ones(1,length(int_back_leg_pose)), 1:length(int_back_leg_pose), int_back_leg_pose(:,2)*180/pi, 'linewidth',2)
    figure(6); hold on; grid on
    plot3(vel(i)*0.1*ones(1,length(int_back_leg_pose)), 1:length(int_back_leg_pose), int_back_leg_pose(:,3)*180/pi, 'linewidth',2)
end

