function plot_trajectory_bezier
velocity = 4:1:9;
phase = [1,3,5,7];
color = [0, 0.4470, 0.7410; 0,0,0;
    0.8500, 0.3250, 0.0980; 0,0,0;
    0.9290, 0.6940, 0.1250; 0,0,0;
    0.4940, 0.1840, 0.5560; 0,0,0];

for j = 1:length(velocity)
    load(['output_velocity_0',num2str(velocity(j)),'.mat'], 'solution');
    endtime = 0;
    stride_time = 0;
    
    for i = phase
        
        stride_time = stride_time+solution.tspan{i}(end);
    end
    for i = phase
        a = solution.params{i}.aoutput;
        p = solution.params{i}.poutput;
        a_matrix = reshape(a,8,6);
        normalized_phase_time = p(2)/stride_time;
        
        front_left_swing  = BezierCurve(a_matrix(1,:), false); front_left_exten  = BezierCurve(a_matrix(2,:)/2, false);
        back_left_swing   = BezierCurve(a_matrix(3,:), false); back_left_exten   = BezierCurve(a_matrix(4,:)/2, false);
        front_right_swing = BezierCurve(a_matrix(5,:), false); front_right_exten = BezierCurve(a_matrix(6,:)/2, false);
        back_right_swing  = BezierCurve(a_matrix(7,:), false); back_right_exten  = BezierCurve(a_matrix(8,:)/2, false);
        
        motor07 = front_left_exten  - front_left_swing;
        motor08 = front_left_exten  + front_left_swing;
        motor11 = back_left_exten   - back_left_swing;
        motor12 = back_left_exten   + back_left_swing;
        motor15 = front_right_exten + front_right_swing;
        motor16 = front_right_exten - front_right_swing;
        motor19 = back_right_exten  + back_right_swing;
        motor20 = back_right_exten  - back_right_swing;

        AveVelocity = 0.1*velocity(j)*ones(1,21);
    
%         figure(1); hold on; grid on
%         plot3(AveVelocity, linspace(0, normalized_phase_time, 21)+endtime, front_left_swing, 'linewidth', 2, 'color', color(i,:))
%        
%         figure(2); hold on; grid on
%         plot3(AveVelocity, linspace(0, normalized_phase_time, 21)+endtime, front_left_exten, 'linewidth', 2, 'color', color(i,:))

        figure(3); hold on; grid on
        plot3(AveVelocity, linspace(0, normalized_phase_time, 21)+endtime, motor07, 'linewidth', 2, 'color', color(i,:))
       
        figure(4); hold on; grid on
        plot3(AveVelocity, linspace(0, normalized_phase_time, 21)+endtime, motor08, 'linewidth', 2, 'color', color(i,:))

        endtime = endtime+normalized_phase_time;
    end
end
% figure(1); xlabel('Average Base Velocity (m/s)'); ylabel('Normalized Node'); zlabel('Swing Angle (rad)')
% figure(2); xlabel('Average Base Velocity (m/s)'); ylabel('Normalized Node'); zlabel('Extension Angle (rad)')
figure(3); xlabel('Average Base Velocity (m/s)'); ylabel('Normalized Time'); zlabel('Motor 7 (rad)')
figure(4); xlabel('Average Base Velocity (m/s)'); ylabel('Normalized Time'); zlabel('Motor 8 (rad)')
end