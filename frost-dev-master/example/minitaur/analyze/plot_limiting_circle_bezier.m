clc;clear;close all
velocity = 4:1:9;
phase = [1,3,5,7];
color = [0, 0.4470, 0.7410; 0,0,0;
    0.8500, 0.3250, 0.0980; 0,0,0;
    0.9290, 0.6940, 0.1250; 0,0,0;
    0.4940, 0.1840, 0.5560; 0,0,0];
endnode = 0;

for j = 1:length(velocity)
    load(['output_velocity_0',num2str(velocity(j)),'.mat'])
    for i = phase
        a = solution.params{i}.aoutput;
        a_matrix = reshape(a,8,6);
        a_front_left_angle = a_matrix(1,:);
        [~, swing] = BezierCurve(a_front_left_angle, false);
        
        a_front_left_length = a_matrix(2,:)/2;
        [phase_node, exten] = BezierCurve(a_front_left_length, false);
        
        motor7 = exten-swing;
        motor8 = exten+swing;

        AveVelocity = 0.1*velocity(j)*ones(1,21);
        
        figure(1); hold on; grid on
        plot3(AveVelocity, solution.states{i}.dx(1,:), swing, 'linewidth',2,'color',color(i,:))
        
        figure(2); hold on; grid on
        plot3(AveVelocity, solution.states{i}.dx(1,:), exten, 'linewidth',2,'color',color(i,:))
        
%         figure(3); hold on; grid on
%         plot(phase_node+endnode, swing, 'linewidth', 2)
%         for k = 1:6
%             scatter((k-1)*0.2+endnode, a_front_left_angle(k), 'r', 'linewidth', 2)
%         end
%         
%         figure(4); hold on; grid on
%         plot(phase_node+endnode, exten, 'linewidth', 2)
%         for k = 1:6
%             scatter((k-1)*0.2+endnode, a_front_left_length(k), 'r', 'linewidth', 2)
%         end
        
        figure(5); hold on; grid on
        plot3(AveVelocity, solution.states{i}.dx(1,:), motor7, 'linewidth',2,'color',color(i,:))
        
        figure(6); hold on; grid on
        plot3(AveVelocity, solution.states{i}.dx(1,:), motor8, 'linewidth',2,'color',color(i,:))
        
        endnode = endnode+1;
    end
end

figure(1); xlabel('Average Base Velocity (m/s)'); ylabel('Node Base Velocity (m/s)'); zlabel('Swing Angle (rad)')
figure(2); xlabel('Average Base Velocity (m/s)'); ylabel('Node Base Velocity (m/s)'); zlabel('Extension Angle (rad)')
% figure(3); xlabel('Node'); ylabel('Swing Angle (rad)')
% figure(4); xlabel('Node'); ylabel('Extension Angle (rad)')
figure(5); xlabel('Average Base Velocity (m/s)'); ylabel('Node Base Velocity (m/s)'); zlabel('Motor 7 Angle (rad)')
figure(6); xlabel('Average Base Velocity (m/s)'); ylabel('Node Base Velocity (m/s)'); zlabel('Motor 8 Angle (rad)')

