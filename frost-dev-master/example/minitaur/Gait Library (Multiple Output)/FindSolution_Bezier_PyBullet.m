function [gaitparams, MotorAngle, DesiredMotorAngle] = FindSolution_Bezier_PyBullet(current_velocity, current_phase, phasing)
if nargin < 1
    % just for example purpose
    current_velocity = 0.57;
    current_phase = 1;
    phasing = 0.32;
end
load('GaitLibrary_PyBullet.mat','GaitLibrary')
% Control Policy locates the correct phase the robot is in the GaitLibrary
gaitparams = ControlPolicy(current_velocity, GaitLibrary, current_phase);
% gaitparams.MotorAngle(1,:,:) contains all motor angle data at
% current_velocity
MotorAngle = reshape(gaitparams.MotorAngle(1,:,:),8,21);
motor07 = MotorAngle(1,:);
DesiredMotorAngle = interp1(linspace(0,1,21), motor07, phasing);

figure(1); hold on; grid on; 
plot(linspace(0,1,21), motor07, 'b', 'linewidth', 2)
scatter(phasing, DesiredMotorAngle, 'g', 'linewidth', 2);
end

function gaitparams = ControlPolicy(phi, GaitLibrary, current_phase)
phi = clamp(phi, GaitLibrary.Velocity(1,1), GaitLibrary.Velocity(1,end));

if current_phase == 1
    size(GaitLibrary.Velocity(1,:))
    size(GaitLibrary.FrontStance.MotorAngle(:,1:3,:))
    MotorAngle_FrontStance = interp1(GaitLibrary.Velocity(1,:), GaitLibrary.FrontStance.MotorAngle(:,1:3,:), phi);
    size(MotorAngle_FrontStance)
    gaitparams.MotorAngle = MotorAngle_FrontStance;
elseif current_phase == 5
    MotorAngle_BackStance = interp1(GaitLibrary.Velocity(1,:), GaitLibrary.BackStance.MotorAngle, phi);
    gaitparams.MotorAngle = MotorAngle_BackStance;
else
    disp('Unrecognized Phase')
end

end

function y = clamp(x,bl,bu)
y = min(max(x,bl),bu); 
end

