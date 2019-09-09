function plot_circle_bezier
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
        [~, front_left_swing]  = BezierCurve(a_matrix(1,:), false); [~, front_left_exten] = BezierCurve(a_matrix(2,:)/2, false);
        [~, back_left_swing]   = BezierCurve(a_matrix(3,:), false); [~, back_left_exten]   = BezierCurve(a_matrix(4,:)/2, false);
        [~, front_right_swing] = BezierCurve(a_matrix(5,:), false); [~, front_right_exten] = BezierCurve(a_matrix(6,:)/2, false);
        [~, back_right_swing]  = BezierCurve(a_matrix(7,:), false); [~, back_right_exten]  = BezierCurve(a_matrix(8,:)/2, false);
        
        motor07 = front_left_exten  - front_left_swing;
        motor08 = front_left_exten  + front_left_swing;
        motor11 = back_left_exten   - back_left_swing;
        motor12 = back_left_exten   + back_left_swing;
        motor15 = front_right_exten + front_right_swing;
        motor16 = front_right_exten - front_right_swing;
        motor19 = back_right_exten  + back_right_swing;
        motor20 = back_right_exten  - back_right_swing;

        AveVelocity = 0.1*velocity(j)*ones(1,21);
        
        figure(1); hold on; grid on
        plot3(AveVelocity, solution.states{i}.dx(1,:), front_left_swing, 'linewidth',2,'color',color(i,:))
        
%         figure(2); hold on; grid on
%         plot3(AveVelocity, solution.states{i}.dx(1,:), front_left_exten, 'linewidth',2,'color',color(i,:))
        
%         figure(3); hold on; grid on
%         plot(phase_node+endnode, swing, 'linewidth', 2)
%         for k = 1:6
%             scatter((k-1)*0.2+endnode, a_front_left_angle(k), 'r', 'linewidth', 2)
%         end
       
%         figure(4); hold on; grid on
%         plot(phase_node+endnode, exten, 'linewidth', 2)
%         for k = 1:6
%             scatter((k-1)*0.2+endnode, a_front_left_length(k), 'r', 'linewidth', 2)
%         end
        
        figure(5); hold on; grid on
        plot3(AveVelocity, solution.states{i}.dx(1,:), motor07, 'linewidth',2,'color',color(i,:))
        
        figure(6); hold on; grid on
        plot3(AveVelocity, solution.states{i}.dx(1,:), motor08, 'linewidth',2,'color',color(i,:))
        
%         endnode = endnode+1;
    end
end

[~, ~, B] = Bezier_DesiredOutput(0.57, 1, 0.32);
load('output_velocity_06.mat')
figure(1)
plot3(0.57*ones(1,21), solution.states{1}.dx(1,:), B, 'linewidth',2,'color',color(1,:))


figure(1); xlabel('Average Base Velocity (m/s)'); ylabel('Node Base Velocity (m/s)'); zlabel('Swing Angle (rad)')
% figure(2); xlabel('Average Base Velocity (m/s)'); ylabel('Node Base Velocity (m/s)'); zlabel('Extension Angle (rad)')
% figure(3); xlabel('Node'); ylabel('Swing Angle (rad)')
% figure(4); xlabel('Node'); ylabel('Extension Angle (rad)')
figure(5); xlabel('Average Base Velocity (m/s)'); ylabel('Node Base Velocity (m/s)'); zlabel('Motor 7 Angle (rad)')
figure(6); xlabel('Average Base Velocity (m/s)'); ylabel('Node Base Velocity (m/s)'); zlabel('Motor 8 Angle (rad)')
end