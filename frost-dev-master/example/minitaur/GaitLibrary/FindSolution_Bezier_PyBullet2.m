function [gaitparams, DesiredLegSwing_Relative] = FindSolution_Bezier_PyBullet2(current_velocity, current_phase, phasing)
if nargin < 1
    % just for example purpose
    current_velocity = 0.57;
    current_phase = 1;
    phasing = 0.32;
end
load('GaitLibrary_PyBullet2.mat','GaitLibrary')
% Control Policy locates the correct phase the robot is in the GaitLibrary
gaitparams = ControlPolicy(current_velocity, GaitLibrary, current_phase);
% current_velocity
LegPose = reshape(gaitparams.LegPose(1,:,:),3,21);
DesiredLegSwing_Relative = interp1(linspace(0,1,21), LegPose(1,:), phasing);
DesiredLegSwing_Absolute = interp1(linspace(0,1,21), LegPose(2,:), phasing);
DesiredLegExtension = interp1(linspace(0,1,21), LegPose(3,:), phasing);

figure(1); hold on; grid on; 
plot(linspace(0,1,21), LegPose(1,:), 'b', 'linewidth', 2)
plot(linspace(0,1,21), LegPose(2,:), 'r', 'linewidth', 2)
plot(linspace(0,1,21), LegPose(3,:), 'y', 'linewidth', 2)
scatter(phasing, DesiredLegSwing_Relative, 'g', 'linewidth', 2);
scatter(phasing, DesiredLegSwing_Absolute, 'g', 'linewidth', 2);
scatter(phasing, DesiredLegExtension, 'g', 'linewidth', 2);
end

function gaitparams = ControlPolicy(phi, GaitLibrary, current_phase)
phi = clamp(phi, GaitLibrary.Velocity(1,1), GaitLibrary.Velocity(1,end));

if current_phase == 1
    gaitparams.LegPose = interp1(GaitLibrary.Velocity(1,:), GaitLibrary.FrontStance.LegPose, phi);
elseif current_phase == 5
    gaitparams.LegPose = interp1(GaitLibrary.Velocity(1,:), GaitLibrary.BackStance.LegPose, phi);
else
    disp('Unrecognized Phase')
end

end

function y = clamp(x,bl,bu)
y = min(max(x,bl),bu); 
end

