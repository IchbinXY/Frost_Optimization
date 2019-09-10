clc;clear;close all
velocity = 4:1:9;

GaitLibrary = struct;
GaitLibrary.Velocity = zeros(1, length(velocity));
GaitLibrary.FrontStance.HAlpha = zeros(length(velocity), 8, 6);
GaitLibrary.BackStance.HAlpha  = zeros(length(velocity), 8, 6);
GaitLibrary.FrontStance.MotorAngle = zeros(length(velocity), 8, 21);
GaitLibrary.BackStance.MotorAngle  = zeros(length(velocity), 8, 21);
GaitLibrary.FrontStance.LegPose = zeros(length(velocity), 8, 21);
GaitLibrary.BackStance.LegPose  = zeros(length(velocity), 8, 21);

for i = 1:length(velocity)
    load(['output_velocity_0',num2str(velocity(i)),'.mat'])
    GaitLibrary.Velocity(i) = 0.1 * velocity(i);
    %% Front Stance
    a = solution.params{1}.aoutput;
    a_matrix = reshape(a, 8, 6);
    GaitLibrary.FrontStance.HAlpha(i,:,:) = a_matrix;
    
    % all leg poses are 1 by 21;
    front_left_swing  = BezierCurve(a_matrix(1,:), false); front_left_exten  = BezierCurve(a_matrix(2,:)/2, false);
    back_left_swing   = BezierCurve(a_matrix(3,:), false); back_left_exten   = BezierCurve(a_matrix(4,:)/2, false);
    front_right_swing = BezierCurve(a_matrix(5,:), false); front_right_exten = BezierCurve(a_matrix(6,:)/2, false);
    back_right_swing  = BezierCurve(a_matrix(7,:), false); back_right_exten  = BezierCurve(a_matrix(8,:)/2, false);
    GaitLibrary.FrontStance.LegPose(i,:,:) = [...
        front_left_swing;   front_left_exten; 
        back_left_swing;    back_left_exten; 
        front_right_swing;  front_right_exten; 
        back_right_swing;   back_right_exten    ];

    % all motor angles are 1 by 21;
    motor07 = front_left_exten  - front_left_swing;     motor08 = front_left_exten  + front_left_swing;
    motor11 = back_left_exten   - back_left_swing;      motor12 = back_left_exten   + back_left_swing;
    motor15 = front_right_exten + front_right_swing;    motor16 = front_right_exten - front_right_swing;
    motor19 = back_right_exten  + back_right_swing;     motor20 = back_right_exten  - back_right_swing;
    GaitLibrary.FrontStance.MotorAngle(i,:,:) = [...
        motor07; motor08; 
        motor11; motor12; 
        motor15; motor16; 
        motor19; motor20    ];
    
    %% Back Stance
    a = solution.params{5}.aoutput;
    a_matrix = reshape(a, 8, 6);
    GaitLibrary.BackStance.HAlpha(i,:,:) = a_matrix;

    % all leg poses are 1 by 21;
    front_left_swing  = BezierCurve(a_matrix(1,:), false); front_left_exten  = BezierCurve(a_matrix(2,:)/2, false);
    back_left_swing   = BezierCurve(a_matrix(3,:), false); back_left_exten   = BezierCurve(a_matrix(4,:)/2, false);
    front_right_swing = BezierCurve(a_matrix(5,:), false); front_right_exten = BezierCurve(a_matrix(6,:)/2, false);
    back_right_swing  = BezierCurve(a_matrix(7,:), false); back_right_exten  = BezierCurve(a_matrix(8,:)/2, false);
    GaitLibrary.BackStance.LegPose(i,:,:) = [...
        front_left_swing;   front_left_exten; 
        back_left_swing;    back_left_exten; 
        front_right_swing;  front_right_exten; 
        back_right_swing;   back_right_exten    ];
    
    % all motor angles are 1 by 21;
    motor07 = front_left_exten  - front_left_swing;     motor08 = front_left_exten  + front_left_swing;
    motor11 = back_left_exten   - back_left_swing;      motor12 = back_left_exten   + back_left_swing;
    motor15 = front_right_exten + front_right_swing;    motor16 = front_right_exten - front_right_swing;
    motor19 = back_right_exten  + back_right_swing;     motor20 = back_right_exten  - back_right_swing;
    GaitLibrary.BackStance.MotorAngle(i,:,:) = [...
        motor07; motor08; 
        motor11; motor12; 
        motor15; motor16; 
        motor19; motor20    ];

end
save(fullfile(pwd, 'GaitLibrary', 'GaitLibrary_PyBullet'), 'GaitLibrary')