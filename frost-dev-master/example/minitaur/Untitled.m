clc;clear;close all
vel = 7;
for i = 1:length(vel)
    load(['vel_0', num2str(vel(i)), '_Inputs_to_VS_0006_FrontStance.mat'])
    figure(1); hold on; grid on
    plot3(vel(i)*0.1*ones(1,length(int_front_leg_pose)), 1:34, int_front_leg_pose(:,1)*180/pi, 'linewidth',2)
    figure(2); hold on; grid on
    plot3(vel(i)*0.1*ones(1,length(int_front_leg_pose)), 1:34, int_front_leg_pose(:,2)*180/pi, 'linewidth',2)
    figure(3); hold on; grid on
    plot3(vel(i)*0.1*ones(1,length(int_front_leg_pose)), 1:34, int_front_leg_pose(:,3)*180/pi, 'linewidth',2)
    
    load(['vel_0', num2str(vel(i)), '_Inputs_to_VS_0006_BackStance.mat'])
    figure(4); hold on; grid on
    plot3(vel(i)*0.1*ones(1,length(int_back_leg_pose)), 1:34, int_back_leg_pose(:,1)*180/pi, 'linewidth',2)
    figure(5); hold on; grid on
    plot3(vel(i)*0.1*ones(1,length(int_back_leg_pose)), 1:34, int_back_leg_pose(:,2)*180/pi, 'linewidth',2)
    figure(6); hold on; grid on
    plot3(vel(i)*0.1*ones(1,length(int_back_leg_pose)), 1:34, int_back_leg_pose(:,3)*180/pi, 'linewidth',2)
end

load('org_vel_07_data\vel_07_Inputs_to_VS_0006_FrontStance_org.mat')
figure(1); hold on; grid on
plot3(0.7*ones(1,length(int_front_leg_pose)), 1:34, int_front_leg_pose(:,1)*180/pi, 'linewidth',2)
figure(2); hold on; grid on
plot3(0.7*ones(1,length(int_front_leg_pose)), 1:34, int_front_leg_pose(:,2)*180/pi, 'linewidth',2)
figure(3); hold on; grid on
plot3(0.7*ones(1,length(int_front_leg_pose)), 1:34, int_front_leg_pose(:,3)*180/pi, 'linewidth',2)

load('org_vel_07_data\vel_07_Inputs_to_VS_0006_BackStance_org.mat')
figure(4); hold on; grid on
plot3(0.7*ones(1,length(int_back_leg_pose)), 1:36, int_back_leg_pose(:,1)*180/pi, 'linewidth',2)
figure(5); hold on; grid on
plot3(0.7*ones(1,length(int_back_leg_pose)), 1:36, int_back_leg_pose(:,2)*180/pi, 'linewidth',2)
figure(6); hold on; grid on
plot3(0.7*ones(1,length(int_back_leg_pose)), 1:36, int_back_leg_pose(:,3)*180/pi, 'linewidth',2)

load('inputs\vel_07_Inputs_to_VS_0006_FrontStance_restore.mat')
figure(1); hold on; grid on
plot3(0.7*ones(1,length(int_front_leg_pose)), 1:35, int_front_leg_pose(:,1)*180/pi, 'linewidth',2)
figure(2); hold on; grid on
plot3(0.7*ones(1,length(int_front_leg_pose)), 1:35, int_front_leg_pose(:,2)*180/pi, 'linewidth',2)
figure(3); hold on; grid on
plot3(0.7*ones(1,length(int_front_leg_pose)), 1:35, int_front_leg_pose(:,3)*180/pi, 'linewidth',2)

load('inputs\vel_07_Inputs_to_VS_0006_BackStance_restore.mat')
figure(4); hold on; grid on
plot3(0.7*ones(1,length(int_back_leg_pose)), 1:37, int_back_leg_pose(:,1)*180/pi, 'linewidth',2)
figure(5); hold on; grid on
plot3(0.7*ones(1,length(int_back_leg_pose)), 1:37, int_back_leg_pose(:,2)*180/pi, 'linewidth',2)
figure(6); hold on; grid on
plot3(0.7*ones(1,length(int_back_leg_pose)), 1:37, int_back_leg_pose(:,3)*180/pi, 'linewidth',2)

load('inputs\vel_07_Inputs_to_VS_0006_FrontStance_restore2.mat')
figure(1); hold on; grid on
plot3(0.7*ones(1,length(int_front_leg_pose)), 1:37, int_front_leg_pose(:,1)*180/pi, 'linewidth',2)
legend('current opt', 'original opt', 'restored opt', 'restored2 opt')
figure(2); hold on; grid on
plot3(0.7*ones(1,length(int_front_leg_pose)), 1:37, int_front_leg_pose(:,2)*180/pi, 'linewidth',2)
legend('current opt', 'original opt', 'restored opt', 'restored2 opt')
figure(3); hold on; grid on
plot3(0.7*ones(1,length(int_front_leg_pose)), 1:37, int_front_leg_pose(:,3)*180/pi, 'linewidth',2)
legend('current opt', 'original opt', 'restored opt', 'restored2 opt')

load('inputs\vel_07_Inputs_to_VS_0006_BackStance_restore2.mat')
figure(4); hold on; grid on
plot3(0.7*ones(1,length(int_back_leg_pose)), 1:39, int_back_leg_pose(:,1)*180/pi, 'linewidth',2)
legend('current opt', 'original opt', 'restored opt', 'restored2 opt')
figure(5); hold on; grid on
plot3(0.7*ones(1,length(int_back_leg_pose)), 1:39, int_back_leg_pose(:,2)*180/pi, 'linewidth',2)
legend('current opt', 'original opt', 'restored opt', 'restored2 opt')
figure(6); hold on; grid on
plot3(0.7*ones(1,length(int_back_leg_pose)), 1:39, int_back_leg_pose(:,3)*180/pi, 'linewidth',2)
legend('current opt', 'original opt', 'restored opt', 'restored2 opt')