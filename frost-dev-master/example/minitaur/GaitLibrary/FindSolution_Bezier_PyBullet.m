function [gaitparams, B, b] = FindSolution_Bezier_PyBullet(current_velocity, current_phase, phasing)
if nargin < 1
    % just for example purpose
    current_velocity = 0.57;
    current_phase = 1;
    phasing = 0.32;
end
load('GaitLibrary_PyBullet.mat','GaitLibrary')
gaitparams = ControlPolicy(current_phase, GaitLibrary, current_velocity);
% gaitparams.HAlpha(1,:) contain front left swing points for bezier curve 
[B, b] = BezierCurve(gaitparams.HAlpha(1,:), false, phasing);
end

function gaitparams = ControlPolicy(current_phase, GaitLibrary, phi)
% Saturate interpolation value
phi = clamp(phi, GaitLibrary.Velocity(1,1), GaitLibrary.Velocity(1,end));

% Interpolate gaits
HAlpha_FrontStance = interp1(GaitLibrary.Velocity(1,:), GaitLibrary.FrontStance.HAlpha, phi);
HAlpha_BackStance  = interp1(GaitLibrary.Velocity(1,:), GaitLibrary.BackStance.HAlpha,  phi);

if current_phase == 1
    % Front Stance
    gaitparams.HAlpha = reshape(HAlpha_FrontStance,8,6);
elseif current_phase == 5
    % Back Stance
    gaitparams.HAlpha = reshape(HAlpha_BackStance,8,6);
else
    disp('unrecognized phase')
end
end

function y = clamp(x,bl,bu)
y = min(max(x,bl),bu); 
end

