function [FrontSwing_anchor, BackSwing_anchor] = reference_template(T, Y, I_EVENT)
FrontStance_idx = I_EVENT(1):I_EVENT(2);
Flight1_idx     = I_EVENT(3):I_EVENT(4);
BackStance_idx  = I_EVENT(5):I_EVENT(6);
Flight2_idx     = I_EVENT(7):I_EVENT(8);
FrontImpact_idx = I_EVENT(9);
BackImpact_idx  = I_EVENT(10);
Apex_idx        = I_EVENT(11);

% Locate the leg swing data
T_BackSwing         =  T(BackStance_idx);
BackSwing_template  = -Y(BackStance_idx,7);
n_BackSwing = length(BackStance_idx);

T_FrontSwing         =  T(FrontStance_idx);
FrontSwing_template  = -Y(FrontStance_idx,9);
n_FrontSwing = length(FrontStance_idx);

% extract 21 nodes for FROST
T_FrontSwing_anchor = spline(1:n_FrontSwing, T_FrontSwing, round(linspace(1,n_FrontSwing,21)));
T_BackSwing_anchor = spline(1:n_BackSwing, T_BackSwing, round(linspace(1,n_BackSwing,21)));

FrontSwing_anchor = spline(1:n_FrontSwing, FrontSwing_template, round(linspace(1,n_FrontSwing,21)));
BackSwing_anchor = spline(1:n_BackSwing, BackSwing_template, round(linspace(1,n_BackSwing,21)));

% plot(T_FrontSwing, FrontSwing_template); hold on; grid on
% plot(T_BackSwing, BackSwing_template);
% scatter(T_FrontSwing_anchor, FrontSwing_anchor);
% scatter(T_BackSwing_anchor, BackSwing_anchor)
end