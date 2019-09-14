function [gaitparams, DesiredLegSwing_Relative] = FindSolution_Bezier_PyBullet2(current_velocity, current_phase, phasing)
if nargin < 1
    % just for example purpose
    current_velocity = 0.49;
    current_phase = 1;
    phasing = 0.2;
end
load('GaitLibrary_PyBullet2.mat','GaitLibrary')
% Control Policy locates the correct phase the robot is in the GaitLibrary
gaitparams = ControlPolicy(current_velocity, GaitLibrary, current_phase);
% current_velocity
LegPose = reshape(gaitparams.LegPose(1,:,:), 3, 21);
Time = reshape(gaitparams.Time, 1, 21);
DesiredLegSwing_Relative = interp1(Time, LegPose(1,:), 0.24);
DesiredLegSwing_Absolute = interp1(Time, LegPose(2,:), 0.24);
DesiredLegExtension = interp1(Time, LegPose(3,:), 0.24);

figure(1); hold on; grid on; 
plot(Time, LegPose(1,:), 'b', 'linewidth', 2)
plot(Time, LegPose(2,:), 'r', 'linewidth', 2)
plot(Time, LegPose(3,:), 'y', 'linewidth', 2)
scatter(0.24, DesiredLegSwing_Relative, 'g', 'linewidth', 2);
scatter(0.24, DesiredLegSwing_Absolute, 'g', 'linewidth', 2);
scatter(0.24, DesiredLegExtension, 'g', 'linewidth', 2);
end

function gaitparams = ControlPolicy(phi, GaitLibrary, current_phase)
phi = clamp(phi, GaitLibrary.Velocity(1,1), GaitLibrary.Velocity(1,end));

if current_phase == 1
    gaitparams.LegPose = interp1(GaitLibrary.Velocity(1,:), GaitLibrary.FrontStance.LegPose, phi);
    gaitparams.Time = interp1(GaitLibrary.Velocity(1,:), GaitLibrary.FrontStance.Time, phi);
elseif current_phase == 5
    gaitparams.LegPose = interp1(GaitLibrary.Velocity(1,:), GaitLibrary.BackStance.LegPose, phi);
    gaitparams.Time = interp1(GaitLibrary.Velocity(1,:), GaitLibrary.FrontStance.Time, phi);
else
    disp('Unrecognized Phase')
end

end

function y = clamp(x,bl,bu)
y = min(max(x,bl),bu); 
end

