function reference = reference_generator(Y, EXT_rad, I_EVENT)
FrontStance_idx = I_EVENT(1):I_EVENT(2);
Flight1_idx     = I_EVENT(3):I_EVENT(4);
BackStance_idx  = I_EVENT(5):I_EVENT(6);
Flight2_idx     = I_EVENT(7):I_EVENT(8);
FrontImpact_idx = I_EVENT(9);
BackImpact_idx  = I_EVENT(10);
Apex_idx        = I_EVENT(11);

% Locate the leg swing data
BackSwing_template  = -Y(BackStance_idx,7);
BackExten_template = EXT_rad(BackStance_idx,1);
n_BackStance = length(BackStance_idx);

FrontSwing_template  = -Y(FrontStance_idx,9);
FrontExten_template = EXT_rad(FrontStance_idx,2);
n_FrontStance = length(FrontStance_idx);

% extract 21 nodes for FROST
reference = struct();
reference.frontswing = spline(1:n_FrontStance, FrontSwing_template, round(linspace(1,n_FrontStance,21)));
reference.frontexten = spline(1:n_FrontStance, FrontExten_template, round(linspace(1,n_FrontStance,21)));
reference.backswing  = spline(1:n_BackStance, BackSwing_template, round(linspace(1,n_BackStance,21)));
reference.backexten  = spline(1:n_BackStance, BackExten_template, round(linspace(1,n_BackStance,21)));
end