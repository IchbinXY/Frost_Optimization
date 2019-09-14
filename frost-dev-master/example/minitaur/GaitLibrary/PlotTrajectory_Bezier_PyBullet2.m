function PlotTrajectory_Bezier_PyBullet2
velocity = 4:1:9;
color = [0, 0.4470, 0.7410; 0,0,0;
    0.8500, 0.3250, 0.0980; 0,0,0;
    0.9290, 0.6940, 0.1250; 0,0,0;
    0.4940, 0.1840, 0.5560; 0,0,0];

load('GaitLibrary_PyBullet2.mat','GaitLibrary');

for i = 1:length(velocity)
    AveVelocity = 0.1*velocity(i)*ones(1,21);
    
    %% Front Stance         
    figure(1); hold on; grid on
    motor07 = reshape(GaitLibrary.FrontStance.LegPose(i,1,:), 1, 21);
    plot3(AveVelocity, linspace(0, 1, 21), motor07, 'linewidth', 2, 'color', color(1,:))
    
    figure(2); hold on; grid on
    motor08 = reshape(GaitLibrary.FrontStance.LegPose(i,3,:), 1, 21);
    plot3(AveVelocity, linspace(0, 1, 21), motor08, 'linewidth', 2, 'color', color(1,:))
    
    %% Back Stance         
    figure(3); hold on; grid on
    motor11 = reshape(GaitLibrary.BackStance.LegPose(i,1,:), 1, 21);
    plot3(AveVelocity, linspace(2, 3, 21), motor11, 'linewidth', 2, 'color', color(5,:))
    
    figure(4); hold on; grid on
    motor12 = reshape(GaitLibrary.BackStance.LegPose(i,3,:), 1, 21);
    plot3(AveVelocity, linspace(2, 3, 21), motor12, 'linewidth', 2, 'color', color(5,:))
    
end
figure(1); xlabel('Average Base Velocity (m/s)'); ylabel('Normalized Time'); zlabel('Front Leg Relative Swing (rad)')
figure(2); xlabel('Average Base Velocity (m/s)'); ylabel('Normalized Time'); zlabel('Front Leg Extension (rad)')
figure(3); xlabel('Average Base Velocity (m/s)'); ylabel('Normalized Time'); zlabel('Back Leg Relative Swing (rad)')
figure(4); xlabel('Average Base Velocity (m/s)'); ylabel('Normalized Time'); zlabel('Back Leg Extension (rad)')
end