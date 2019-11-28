function PlotTrajectory_Bezier_Output
velocity = 4:1:9;
phase = [1,3,5,7];
color = [0, 0.4470, 0.7410; 0,0,0;
    0.8500, 0.3250, 0.0980; 0,0,0;
    0.9290, 0.6940, 0.1250; 0,0,0;
    0.4940, 0.1840, 0.5560; 0,0,0];

load('GaitLibrary_Output.mat','GaitLibrary');

for i = 1:length(velocity)
    stride_time = GaitLibrary.Time(i);
    current_end_time = 0;
    for j = phase
        switch j
            case 1
                a_matrix = GaitLibrary.FrontStance.HAlpha(i,:,:);
                phase_time = 1/GaitLibrary.FrontStance.ct(i);
            case 3
                a_matrix = GaitLibrary.Flight1.HAlpha(i,:,:);
                phase_time = 1/GaitLibrary.Flight1.ct(i);
            case 5
                a_matrix = GaitLibrary.BackStance.HAlpha(i,:,:);
                phase_time = 1/GaitLibrary.BackStance.ct(i);
            case 7
                a_matrix = GaitLibrary.Flight2.HAlpha(i,:,:);
                phase_time = 1/GaitLibrary.Flight2.ct(i);
        end
        norm_phase_time = phase_time/stride_time;
        
        front_left_swing  = BezierCurve(a_matrix(1,1,:), false); front_left_exten  = BezierCurve(a_matrix(1,2,:)/2, false);
        back_left_swing   = BezierCurve(a_matrix(1,3,:), false); back_left_exten   = BezierCurve(a_matrix(1,4,:)/2, false);
        front_right_swing = BezierCurve(a_matrix(1,5,:), false); front_right_exten = BezierCurve(a_matrix(1,6,:)/2, false);
        back_right_swing  = BezierCurve(a_matrix(1,7,:), false); back_right_exten  = BezierCurve(a_matrix(1,8,:)/2, false);
        
        motor07 = front_left_exten  - front_left_swing;     motor08 = front_left_exten  + front_left_swing;
        motor11 = back_left_exten   - back_left_swing;      motor12 = back_left_exten   + back_left_swing;
        motor15 = front_right_exten + front_right_swing;    motor16 = front_right_exten - front_right_swing;
        motor19 = back_right_exten  + back_right_swing;     motor20 = back_right_exten  - back_right_swing;
        
        AveVelocity = 0.1*velocity(i)*ones(1,21);
        
        figure(5); hold on; grid on
        plot3(AveVelocity, linspace(0, norm_phase_time, 21)+current_end_time, motor07, 'linewidth', 2, 'color', color(j,:))
        
        figure(6); hold on; grid on
        plot3(AveVelocity, linspace(0, norm_phase_time, 21)+current_end_time, motor08, 'linewidth', 2, 'color', color(j,:))
        
        current_end_time = current_end_time+norm_phase_time;
    end
end
figure(3); xlabel('Average Base Velocity (m/s)'); ylabel('Normalized Time'); zlabel('Motor 7 (rad)')
figure(4); xlabel('Average Base Velocity (m/s)'); ylabel('Normalized Time'); zlabel('Motor 8 (rad)')
end