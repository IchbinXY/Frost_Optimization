function bounds = GetBounds(model, vel, FrontSwing, BackSwing)
    if nargin < 2
        vel = [0.75,0];
    end
    %% first get the model specific boundary values
    model_bounds = model.getLimits(); % x, dx, ddx, Control
    model_bounds.options.enforceVirtualConstraints = true;
    
    model_bounds.states.x.lb = [-5, 0, 0, 0,-0.25, 0, repmat([  deg2rad(0),  deg2rad(0),  deg2rad(0),  deg2rad(0)],1,4)]';
    model_bounds.states.x.ub = [ 5, 0, 1, 0, 0.25, 0, repmat([deg2rad(180),deg2rad(180),deg2rad(180),deg2rad(180)],1,4)]';

    model_bounds.states.dx.lb = [-50, 0,-50,   0,  -100*pi,  0,  -200*pi*ones(1,16)]';
    model_bounds.states.dx.ub = [ 50, 0, 50,   0,   100*pi,  0,   200*pi*ones(1,16)]';
    
    % fixed joint constraint wrench
    model_bounds.inputs.ConstraintWrench.ffourBar.lb = -2000;
    model_bounds.inputs.ConstraintWrench.ffourBar.ub = 2000;
    % fixed joint constraints
    model_bounds.params.pfourBar.lb = zeros(8,1);
    model_bounds.params.pfourBar.ub = zeros(8,1);
    
    % feedback control gain for virtual constraints
    model_bounds.gains.kp = 100;
    model_bounds.gains.kd = 20;
    
    % Virtual Constraints
    model_bounds.params.aoutput.lb = -20;
    model_bounds.params.aoutput.ub = 20;
    
    model_bounds.params.poutput.lb = [0, 0];
    model_bounds.params.poutput.ub = [0, 0.4];
    model_bounds.params.poutput.x0 = [0, 0.4];
    
    model_bounds.params.pRightFront.lb = [-5, -5, 0];
    model_bounds.params.pRightFront.ub = [5, 5, 0];
    
    model_bounds.params.pLeftFront.lb = [-5, -5, 0];
    model_bounds.params.pLeftFront.ub = [5, 5, 0];
    
    model_bounds.params.pRightBack.lb = [-5, -5, 0];
    model_bounds.params.pRightBack.ub = [5, 5, 0];
    
    model_bounds.params.pLeftBack.lb = [-5, -5, 0];
    model_bounds.params.pLeftBack.ub = [5, 5, 0];
    
    % foot clearance
    model_bounds.constrBounds.foot_clearance.lb = 0.05;    % node all
    model_bounds.constrBounds.foot_clearance.ub = 5;    % node all
    
    % knee angle
    model_bounds.constrBounds.leg_ext_bgn.lb = [deg2rad(180),deg2rad(180),deg2rad(180),deg2rad(180)];
    model_bounds.constrBounds.leg_ext_bgn.ub = [deg2rad(350),deg2rad(350),deg2rad(350),deg2rad(350)];
    model_bounds.constrBounds.leg_ext_mid.lb = [deg2rad(180),deg2rad(180),deg2rad(180),deg2rad(180)];
    model_bounds.constrBounds.leg_ext_mid.ub = [deg2rad(350),deg2rad(350),deg2rad(350),deg2rad(350)];
    model_bounds.constrBounds.leg_ext_end.lb = [deg2rad(180),deg2rad(180),deg2rad(180),deg2rad(180)];
    model_bounds.constrBounds.leg_ext_end.ub = [deg2rad(350),deg2rad(350),deg2rad(350),deg2rad(350)];
    
    % leg swing relative to the body
    model_bounds.constrBounds.leg_sw_rel.lb = [deg2rad(-90),deg2rad(-90),deg2rad(-90),deg2rad(-90)];
    model_bounds.constrBounds.leg_sw_rel.ub = [deg2rad( 90),deg2rad( 90),deg2rad( 90),deg2rad( 90)];
    
    % lift velocity 
    model_bounds.constrBounds.footVelocityBeginning.lb = [-0.25, -0.001,    0]';  % node 1
    model_bounds.constrBounds.footVelocityBeginning.ub = [ 0.25,  0.001, 0.25]';  % node 1
    
    % impact velocity
    model_bounds.constrBounds.footVelocityEnd.lb = [-0.25, -0.001, -0.25]';    % node 21
    model_bounds.constrBounds.footVelocityEnd.ub = [ 0.25,  0.001, -0.05]';    % node 21
    
    % average velocity
    model_bounds.constrBounds.averageVelocity.lb = [-5, 0 ];    % node 1
    model_bounds.constrBounds.averageVelocity.ub = [ 5, 0 ];    % node 1
    
    % bezier symmetry
    model_bounds.constrBounds.BezierSymmetry.lb = 0;
    model_bounds.constrBounds.BezierSymmetry.ub = 0;
    
    %% construct the boundary values for each domain 
    bounds = struct();
    %% Front Stance
    bounds.FrontStance = model_bounds;
    
    %%% Step Duration
    bounds.FrontStance.time.duration.lb = 0.15;
    bounds.FrontStance.time.duration.ub = 0.2;
    bounds.FrontStance.time.duration.x0 = 0.1662;
    
    bounds.FrontStance.time.t0.lb = 0;
    bounds.FrontStance.time.t0.ub = 0;
    bounds.FrontStance.time.t0.x0 = 0;
    
    bounds.FrontStance.time.tf.lb = 0.15;
    bounds.FrontStance.time.tf.ub = 0.2;
    bounds.FrontStance.time.tf.x0 = 0.1662;
    
    bounds.FrontStance.inputs.ConstraintWrench.fRightFront.lb = [-1000,-1000,0]';
    bounds.FrontStance.inputs.ConstraintWrench.fRightFront.ub = [1000,1000,1000]';
    bounds.FrontStance.inputs.ConstraintWrench.fLeftFront.lb = [-1000,-1000,0]';
    bounds.FrontStance.inputs.ConstraintWrench.fLeftFront.ub = [1000,1000,1000]';
    
    % leg swing absolute
    bounds.FrontStance.constrBounds.leg_sw_abs_bgn.lb = [deg2rad(-15), deg2rad(-60), deg2rad(-15), deg2rad(-60)];
    bounds.FrontStance.constrBounds.leg_sw_abs_bgn.ub = [deg2rad( 15), deg2rad( 60), deg2rad( 15), deg2rad( 60)];
    bounds.FrontStance.constrBounds.leg_sw_abs_end.lb = [deg2rad( 20), deg2rad(-60), deg2rad( 20), deg2rad(-60)];
    bounds.FrontStance.constrBounds.leg_sw_abs_end.ub = [deg2rad( 40), deg2rad( 60), deg2rad( 40), deg2rad( 60)];
    
    % leg swing relative
    eps = 0.2;
    bounds.FrontStance.constrBounds.leg_sw_rel_1.lb = repmat([FrontSwing(1) - eps, -pi], 1, 2);
    bounds.FrontStance.constrBounds.leg_sw_rel_1.ub = repmat([FrontSwing(1) + eps,  pi], 1, 2);
    bounds.FrontStance.constrBounds.leg_sw_rel_6.lb = repmat([FrontSwing(6) - eps, -pi], 1, 2);
    bounds.FrontStance.constrBounds.leg_sw_rel_6.ub = repmat([FrontSwing(6) + eps,  pi], 1, 2);
    bounds.FrontStance.constrBounds.leg_sw_rel_11.lb = repmat([FrontSwing(11) - eps, -pi], 1, 2);
    bounds.FrontStance.constrBounds.leg_sw_rel_11.ub = repmat([FrontSwing(11) + eps,  pi], 1, 2);
    bounds.FrontStance.constrBounds.leg_sw_rel_16.lb = repmat([FrontSwing(16) - eps, -pi], 1, 2);
    bounds.FrontStance.constrBounds.leg_sw_rel_16.ub = repmat([FrontSwing(16) + eps,  pi], 1, 2);
    bounds.FrontStance.constrBounds.leg_sw_rel_21.lb = repmat([FrontSwing(21) - eps, -pi], 1, 2);
    bounds.FrontStance.constrBounds.leg_sw_rel_21.ub = repmat([FrontSwing(21) + eps,  pi], 1, 2);
    
    % leg extension
    bounds.FrontStance.constrBounds.leg_ext_bgn.lb = [2 * (pi-2.1),   deg2rad( 10),   2*(pi-2.1),     deg2rad( 10)];
    bounds.FrontStance.constrBounds.leg_ext_bgn.ub = [2 * (pi-2.1),   deg2rad(350),   2*(pi-2.1),     deg2rad(350)];
    bounds.FrontStance.constrBounds.leg_ext_mid.lb = [deg2rad( 10), deg2rad( 10),   deg2rad( 10),   deg2rad( 10)];
    bounds.FrontStance.constrBounds.leg_ext_mid.ub = [deg2rad(350), deg2rad(350),   deg2rad(350),   deg2rad(350)];
    bounds.FrontStance.constrBounds.leg_ext_end.lb = [2 * (pi-2.1),   deg2rad( 10),   2*(pi-2.1),     deg2rad( 10)];
    bounds.FrontStance.constrBounds.leg_ext_end.ub = [2 * (pi-2.1),   deg2rad(350),   2*(pi-2.1),     deg2rad(350)];
    
    % ground reaction force
    bounds.FrontStance.constrBounds.GRF.lb = 0;
    bounds.FrontStance.constrBounds.GRF.ub = 0;
    %% Back Impact
    bounds.BackImpact.states.x = model_bounds.states.x;
    bounds.BackImpact.states.xn = model_bounds.states.x;
    bounds.BackImpact.states.dx = model_bounds.states.dx;
    bounds.BackImpact.states.dxn = model_bounds.states.dx;
    
    bounds.BackImpact.inputs = struct();
    bounds.BackImpact.inputs.ConstraintWrench.ffourBar.lb = -2000;
    bounds.BackImpact.inputs.ConstraintWrench.ffourBar.ub = 2000;
    bounds.BackImpact.inputs.ConstraintWrench.fLeftBack.lb = [-2000,-2000,-2000]';
    bounds.BackImpact.inputs.ConstraintWrench.fLeftBack.ub = [2000,2000,2000]';
    bounds.BackImpact.inputs.ConstraintWrench.fRightBack.lb = [-2000,-2000,-2000]';
    bounds.BackImpact.inputs.ConstraintWrench.fRightBack.ub = [2000,2000,2000]';
    
    bounds.BackImpact.params = struct();

    %% Back Stance
    bounds.BackStance = model_bounds;
    
    %%% Step Duration
    bounds.BackStance.time.duration.lb = 0.15;
    bounds.BackStance.time.duration.ub = 0.2;
    bounds.BackStance.time.duration.x0 = 0.1662;
    
    bounds.BackStance.time.t0.lb = 0;
    bounds.BackStance.time.t0.ub = 0;
    bounds.BackStance.time.t0.x0 = 0;
    
    bounds.BackStance.time.tf.lb = 0.15;
    bounds.BackStance.time.tf.ub = 0.2;
    bounds.BackStance.time.tf.x0 = 0.1662;
    
    bounds.BackStance.inputs.ConstraintWrench.fLeftBack.lb = [-1000,-1000,0]';
    bounds.BackStance.inputs.ConstraintWrench.fLeftBack.ub = [1000,1000,1000]';
    bounds.BackStance.inputs.ConstraintWrench.fRightBack.lb = [-1000,-1000,0]';
    bounds.BackStance.inputs.ConstraintWrench.fRightBack.ub = [1000,1000,1000]';
    
    % leg swing absolute 
    bounds.BackStance.constrBounds.leg_sw_abs_bgn.lb = [deg2rad(-60), deg2rad(-40), deg2rad(-60), deg2rad(-40)];    % back TD == - Front LO
    bounds.BackStance.constrBounds.leg_sw_abs_bgn.ub = [deg2rad( 60), deg2rad(-20), deg2rad( 60), deg2rad(-20)];    % back TD == - Front LO
    bounds.BackStance.constrBounds.leg_sw_abs_end.lb = [deg2rad(-60), deg2rad(-15), deg2rad(-60), deg2rad(-15)];    % back LO == - Front TD
    bounds.BackStance.constrBounds.leg_sw_abs_end.ub = [deg2rad( 60), deg2rad( 15), deg2rad( 60), deg2rad( 15)];    % back LO == - Front TD
    
    % leg swing relative
    eps = 0.23;
    bounds.BackStance.constrBounds.leg_sw_rel_1.lb = repmat([-pi, BackSwing(1) - eps], 1, 2);
    bounds.BackStance.constrBounds.leg_sw_rel_1.ub = repmat([ pi, BackSwing(1) + eps], 1, 2);
    bounds.BackStance.constrBounds.leg_sw_rel_6.lb = repmat([-pi, BackSwing(6) - eps], 1, 2);
    bounds.BackStance.constrBounds.leg_sw_rel_6.ub = repmat([ pi, BackSwing(6) + eps], 1, 2);
    bounds.BackStance.constrBounds.leg_sw_rel_11.lb = repmat([-pi, BackSwing(11) - eps], 1, 2);
    bounds.BackStance.constrBounds.leg_sw_rel_11.ub = repmat([ pi, BackSwing(11) + eps], 1, 2);
    bounds.BackStance.constrBounds.leg_sw_rel_16.lb = repmat([-pi, BackSwing(16) - eps], 1, 2);
    bounds.BackStance.constrBounds.leg_sw_rel_16.ub = repmat([ pi, BackSwing(16) + eps], 1, 2);
    bounds.BackStance.constrBounds.leg_sw_rel_21.lb = repmat([-pi, BackSwing(21) - eps], 1, 2);
    bounds.BackStance.constrBounds.leg_sw_rel_21.ub = repmat([ pi, BackSwing(21) + eps], 1, 2);
    
    % leg extension
    bounds.BackStance.constrBounds.leg_ext_bgn.lb = [deg2rad( 10),  2 * (pi-2.1),deg2rad( 10),2 * (pi-2.1)];
    bounds.BackStance.constrBounds.leg_ext_bgn.ub = [deg2rad(350),  2 * (pi-2.1),deg2rad(350),2 * (pi-2.1)];
    bounds.BackStance.constrBounds.leg_ext_mid.lb = [deg2rad( 10),  deg2rad( 10),deg2rad( 10),deg2rad( 10)];
    bounds.BackStance.constrBounds.leg_ext_mid.ub = [deg2rad(350),  deg2rad(350),deg2rad(350),deg2rad(350)];
    bounds.BackStance.constrBounds.leg_ext_end.lb = [deg2rad( 10),  2 * (pi-2.1),deg2rad( 10),2 * (pi-2.1)];
    bounds.BackStance.constrBounds.leg_ext_end.ub = [deg2rad(350),  2 * (pi-2.1),deg2rad(350),2 * (pi-2.1)];
    
    % ground reaction force
    bounds.BackStance.constrBounds.GRF.lb = 0;
    bounds.BackStance.constrBounds.GRF.ub = 0;
    %% Front Impact
    bounds.FrontImpact.states.x = model_bounds.states.x;
    bounds.FrontImpact.states.xn = model_bounds.states.x;
    bounds.FrontImpact.states.dx = model_bounds.states.dx;
    bounds.FrontImpact.states.dxn = model_bounds.states.dx;
    
    bounds.FrontImpact.inputs = struct();
    bounds.FrontImpact.inputs.ConstraintWrench.ffourBar.lb = -2000;
    bounds.FrontImpact.inputs.ConstraintWrench.ffourBar.ub = 2000;
    bounds.FrontImpact.inputs.ConstraintWrench.fLeftFront.lb = [-2000,-2000,-2000]'';
    bounds.FrontImpact.inputs.ConstraintWrench.fLeftFront.ub = [2000,2000,2000]';
    bounds.FrontImpact.inputs.ConstraintWrench.fRightFront.lb = [-2000,-2000,-2000]'';
    bounds.FrontImpact.inputs.ConstraintWrench.fRightFront.ub = [2000,2000,2000]'; 
    
    bounds.FrontImpact.params = struct();
    
    %% Flight1
    bounds.Flight1 = model_bounds;
    
    %%% Step Duration
    bounds.Flight1.time.duration.lb = 0.05;
    bounds.Flight1.time.duration.ub = 0.1;
    bounds.Flight1.time.duration.x0 = 0.0992;
    
    bounds.Flight1.time.t0.lb = 0;
    bounds.Flight1.time.t0.ub = 0;
    bounds.Flight1.time.t0.x0 = 0;
    
    bounds.Flight1.time.tf.lb = 0.05;
    bounds.Flight1.time.tf.ub = 0.1;
    bounds.Flight1.time.tf.x0 = 0.0992;
    
    %% Front Lift
    bounds.FrontLift.states.x = model_bounds.states.x;
    bounds.FrontLift.states.xn = model_bounds.states.x;
    bounds.FrontLift.states.dx = model_bounds.states.dx;
    bounds.FrontLift.states.dxn = model_bounds.states.dx;
    
    bounds.FrontLift.inputs = struct(); 
    bounds.FrontLift.inputs.ConstraintWrench.ffourBar.lb = -2000;
    bounds.FrontLift.inputs.ConstraintWrench.ffourBar.ub = 2000;
    
    bounds.FrontLift.params = struct();
    
    %% Flight2
    bounds.Flight2 = model_bounds;
    
    %%% Step Duration
    bounds.Flight2.time.duration.lb = 0.04;
    bounds.Flight2.time.duration.ub = 0.1;
    bounds.Flight2.time.duration.x0 = 0.0416;
    
    bounds.Flight2.time.t0.lb = 0;
    bounds.Flight2.time.t0.ub = 0;
    bounds.Flight2.time.t0.x0 = 0;
    
    bounds.Flight2.time.tf.lb = 0.04;
    bounds.Flight2.time.tf.ub = 0.1;
    bounds.Flight2.time.tf.x0 = 0.0416;
        
    % average step velocity
    bounds.Flight2.constrBounds.AvgVelocity.lb = vel;
    bounds.Flight2.constrBounds.AvgVelocity.ub = vel;
    
    % TD and LO symmetry 
    bounds.Flight2.constrBounds.SwDifference.lb = 0;
    bounds.Flight2.constrBounds.SwDifference.ub = 0;
    bounds.Flight2.constrBounds.ExtDifference.lb = 0;
    bounds.Flight2.constrBounds.ExtDifference.ub = 0;
    
    %% Back Lift
    bounds.BackLift.states.x = model_bounds.states.x;
    bounds.BackLift.states.xn = model_bounds.states.x;
    bounds.BackLift.states.dx = model_bounds.states.dx;
    bounds.BackLift.states.dxn = model_bounds.states.dx;
    
    bounds.BackLift.inputs = struct();
    bounds.BackLift.inputs.ConstraintWrench.ffourBar.lb = -2000;
    bounds.BackLift.inputs.ConstraintWrench.ffourBar.ub = 2000;
    
    bounds.BackLift.params = struct();
    
end
