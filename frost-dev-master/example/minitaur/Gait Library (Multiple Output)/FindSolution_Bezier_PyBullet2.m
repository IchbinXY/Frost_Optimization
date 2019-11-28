function [gaitparams_opt, gaitparams_sim] = FindSolution_Bezier_PyBullet2(current_velocity, current_phase)
if nargin < 1
    % just for example purpose
    current_velocity = 0.36;
    current_phase = 5;
end
load('GaitLibrary_PyBullet2.mat','GaitLibrary')
% Control Policy locates the correct phase the robot is in the GaitLibrary
gaitparams_opt = ControlPolicy(current_velocity, GaitLibrary, current_phase);
% Reshape the desired layer of data
Time_opt = reshape(gaitparams_opt.Time, 1, 21);
LegPose = reshape(gaitparams_opt.LegPose(1,:,:), 3, 21);
MotorVelocity = reshape(gaitparams_opt.MotorVelocity(1,:,:), 2, 21);
% find the desired output
Time_sim = 0:0.006:Time_opt(end);
DesiredLegSwing     = interp1(Time_opt, LegPose(1,:),       Time_sim);
DesiredLegExtension = interp1(Time_opt, LegPose(3,:),       Time_sim);
DesiredMotorV1      = interp1(Time_opt, MotorVelocity(1,:), Time_sim);
DesiredMotorV2      = interp1(Time_opt, MotorVelocity(2,:), Time_sim);

gaitparams_sim = [DesiredLegSwing; DesiredLegExtension; DesiredMotorV1; DesiredMotorV2]';

figure(1); hold on; grid on; 
plot(Time_opt, LegPose(1,:), 'linewidth', 2);
plot(Time_opt, LegPose(3,:), 'linewidth', 2);
scatter(Time_sim, DesiredLegSwing,     'g', 'linewidth', 2);
scatter(Time_sim, DesiredLegExtension, 'g', 'linewidth', 2);
title('Desired Leg Pose')

figure(2); hold on; grid on; 
plot(Time_opt, MotorVelocity(1,:), 'linewidth', 2);
plot(Time_opt, MotorVelocity(2,:), 'linewidth', 2);
scatter(Time_sim, DesiredMotorV1, 'g', 'linewidth', 2);
scatter(Time_sim, DesiredMotorV2, 'g', 'linewidth', 2);
title('Desired Motor Velocity')
end

function gaitparams = ControlPolicy(phi, GaitLibrary, current_phase)
phi = clamp(phi, GaitLibrary.Velocity(1,1), GaitLibrary.Velocity(1,end));

if current_phase == 1
    gaitparams.Time          = interp1(GaitLibrary.Velocity(1,:), GaitLibrary.FrontStance.Time,          phi);
    gaitparams.LegPose       = interp1(GaitLibrary.Velocity(1,:), GaitLibrary.FrontStance.LegPose,       phi);
    gaitparams.MotorVelocity = interp1(GaitLibrary.Velocity(1,:), GaitLibrary.FrontStance.MotorVelocity, phi);
elseif current_phase == 5
    gaitparams.Time          = interp1(GaitLibrary.Velocity(1,:), GaitLibrary.BackStance.Time,           phi);
    gaitparams.LegPose       = interp1(GaitLibrary.Velocity(1,:), GaitLibrary.BackStance.LegPose,        phi);
    gaitparams.MotorVelocity = interp1(GaitLibrary.Velocity(1,:), GaitLibrary.BackStance.MotorVelocity,  phi);
else
    disp('Unrecognized Phase')
end

end

function y = clamp(x,bl,bu)
y = min(max(x,bl),bu); 
end

