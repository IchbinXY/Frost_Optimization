function [gaitparams, node, B, b] = Bezier_DesiredOutput (current_velocity, current_phase, phasing)
if nargin < 1
    % just for example purpose
    current_velocity = 0.57;
    current_phase = 1;
    phasing = 0.32;
end
load('GaitLibrary_output.mat','GaitLibrary')
gaitparams = ControlPolicy(current_phase, GaitLibrary, current_velocity);
% gaitparams.HAlpha(1,:) contain front left swing points for bezier curve 
[node, B, b] = BezierCurve(gaitparams.HAlpha(1,:), false, phasing);
end

function gaitparams = ControlPolicy(current_phase, GaitLibrary, phi)
% Saturate interpolation value
phi = clamp(phi, GaitLibrary.Velocity(1,1), GaitLibrary.Velocity(1,end));
% Interpolate gaits
HAlpha_FrontStance = interp1(GaitLibrary.Velocity(1,:), GaitLibrary.FrontStance.HAlpha, phi);
HAlpha_Flight1     = interp1(GaitLibrary.Velocity(1,:), GaitLibrary.Flight1.HAlpha,     phi);
HAlpha_BackStance  = interp1(GaitLibrary.Velocity(1,:), GaitLibrary.BackStance.HAlpha,  phi);
HAlpha_Flight2     = interp1(GaitLibrary.Velocity(1,:), GaitLibrary.Flight2.HAlpha,     phi);
% ct_R = interp1(GaitLibrary.Velocity(1,:), GaitLibrary.ct, phi);
% ct_L = interp1(GaitLibrary.Velocity(1,:), GaitLibrary.ct, phi);
if current_phase == 1
    gaitparams.HAlpha = reshape(HAlpha_FrontStance,8,6);
%     gaitparams.ct = ct_R;
elseif current_phase == 3
    gaitparams.HAlpha = reshape(HAlpha_Flight1,8,6);
%     gaitparams.ct = ct_L;
elseif current_phase == 5
    gaitparams.HAlpha = reshape(HAlpha_BackStance,8,6);
else
    gaitparams.HAlpha = reshape(HAlpha_Flight2,8,6);
end
end

function y = clamp(x,bl,bu) 
y = min(max(x,bl),bu); 
end

