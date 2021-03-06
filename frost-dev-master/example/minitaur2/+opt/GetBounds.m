function bounds = GetBounds(model, vel, T)
    if nargin < 2
        vel = [1.1,0];
    end
    
    if nargin < 3
        T = 0.4;
    end
    
    %% first get the model specific boundary values
    model_bounds = model.getLimits(); % x, dx, ddx, Control
    model_bounds.options.enforceVirtualConstraints = true;
    
    %%% Step Duration
    model_bounds.time.duration.lb = 0.1;
    model_bounds.time.duration.ub = 0.3;
    model_bounds.time.duration.x0 = 0.1;
    
    model_bounds.time.t0.lb = 0;
    model_bounds.time.t0.ub = 0;
    model_bounds.time.t0.x0 = 0;
    
    model_bounds.time.tf.lb = 0.1;
    model_bounds.time.tf.ub = 0.3;
    model_bounds.time.tf.x0 = 0.1;
    
    model_bounds.states.x.lb = [-5, 0, 0, 0,-pi, 0, repmat([  deg2rad(0),  deg2rad(0),  deg2rad(0),  deg2rad(0)],1,4)]';
    model_bounds.states.x.ub = [ 5, 0, 1, 0, pi, 0, repmat([deg2rad(180),deg2rad(180),deg2rad(180),deg2rad(180)],1,4)]';

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
    model_bounds.params.poutput.ub = [0, T];
    model_bounds.params.poutput.x0 = [0, T];
    
    model_bounds.params.pRightFront.lb = [-5, -5, 0];
    model_bounds.params.pRightFront.ub = [5, 5, 0];
    
    model_bounds.params.pLeftFront.lb = [-5, -5, 0];
    model_bounds.params.pLeftFront.ub = [5, 5, 0];
    
    model_bounds.params.pRightBack.lb = [-5, -5, 0];
    model_bounds.params.pRightBack.ub = [5, 5, 0];
    
    model_bounds.params.pLeftBack.lb = [-5, -5, 0];
    model_bounds.params.pLeftBack.ub = [5, 5, 0];
    
    % foot clearance
    model_bounds.constrBounds.foot_clearance.lb = 0;  % node all
    model_bounds.constrBounds.foot_clearance.ub = 5;    % node all
    
    % knee angle
    model_bounds.constrBounds.leg_ext_bgn.lb = [deg2rad(60),deg2rad(60),deg2rad(60),deg2rad(60)];
    model_bounds.constrBounds.leg_ext_bgn.ub = [deg2rad(300),deg2rad(300),deg2rad(300),deg2rad(300)];
    model_bounds.constrBounds.leg_ext_mid.lb = [deg2rad(60),deg2rad(60),deg2rad(60),deg2rad(60)];
    model_bounds.constrBounds.leg_ext_mid.ub = [deg2rad(300),deg2rad(300),deg2rad(300),deg2rad(300)];
    model_bounds.constrBounds.leg_ext_end.lb = [deg2rad(60),deg2rad(60),deg2rad(60),deg2rad(60)];
    model_bounds.constrBounds.leg_ext_end.ub = [deg2rad(300),deg2rad(300),deg2rad(300),deg2rad(300)];
    
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

    bounds.FrontStance.inputs.ConstraintWrench.fRightFront.lb = [-1000,-1000,-1000]';
    bounds.FrontStance.inputs.ConstraintWrench.fRightFront.ub = [1000,1000,1000]';
    bounds.FrontStance.inputs.ConstraintWrench.fLeftFront.lb = [-1000,-1000,-1000]';
    bounds.FrontStance.inputs.ConstraintWrench.fLeftFront.ub = [1000,1000,1000]';
    
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
    bounds.BackImpact.inputs.ConstraintWrench.fLeftFront.lb = [-2000,-2000,-2000]';
    bounds.BackImpact.inputs.ConstraintWrench.fLeftFront.ub = [2000,2000,2000]';
    bounds.BackImpact.inputs.ConstraintWrench.fRightFront.lb = [-2000,-2000,-2000]';
    bounds.BackImpact.inputs.ConstraintWrench.fRightFront.ub = [2000,2000,2000]';
    bounds.BackImpact.inputs.ConstraintWrench.fLeftBack.lb = [-2000,-2000,-2000]';
    bounds.BackImpact.inputs.ConstraintWrench.fLeftBack.ub = [2000,2000,2000]';
    bounds.BackImpact.inputs.ConstraintWrench.fRightBack.lb = [-2000,-2000,-2000]';
    bounds.BackImpact.inputs.ConstraintWrench.fRightBack.ub = [2000,2000,2000]';
    
    bounds.BackImpact.params = struct();
    
    %% Stance
    bounds.Stance = model_bounds;
    
    bounds.Stance.inputs.ConstraintWrench.fRightFront.lb = [-1000,-1000,-1000]';
    bounds.Stance.inputs.ConstraintWrench.fRightFront.ub = [1000,1000,1000]';
    bounds.Stance.inputs.ConstraintWrench.fLeftFront.lb = [-1000,-1000,-1000]';
    bounds.Stance.inputs.ConstraintWrench.fLeftFront.ub = [1000,1000,1000]';
    bounds.Stance.inputs.ConstraintWrench.fRightBack.lb = [-1000,-1000,-1000]';
    bounds.Stance.inputs.ConstraintWrench.fRightBack.ub = [1000,1000,1000]';
    bounds.Stance.inputs.ConstraintWrench.fLeftBack.lb = [-1000,-1000,-1000]';
    bounds.Stance.inputs.ConstraintWrench.fLeftBack.ub = [1000,1000,1000]';
    
    % ground reaction force
    bounds.Stance.constrBounds.GRF.lb = 0;
    bounds.Stance.constrBounds.GRF.ub = 0;
    
    %% Front Lift
    bounds.FrontLift.states.x = model_bounds.states.x;
    bounds.FrontLift.states.xn = model_bounds.states.x;
    bounds.FrontLift.states.dx = model_bounds.states.dx;
    bounds.FrontLift.states.dxn = model_bounds.states.dx;
    
    bounds.FrontLift.inputs = struct(); 
    bounds.FrontLift.inputs.ConstraintWrench.ffourBar.lb = -2000;
    bounds.FrontLift.inputs.ConstraintWrench.ffourBar.ub = 2000;
    bounds.FrontLift.inputs.ConstraintWrench.fLeftBack.lb = [-2000,-2000,-2000]';
    bounds.FrontLift.inputs.ConstraintWrench.fLeftBack.ub = [2000,2000,2000]';
    bounds.FrontLift.inputs.ConstraintWrench.fRightBack.lb = [-2000,-2000,-2000]';
    bounds.FrontLift.inputs.ConstraintWrench.fRightBack.ub = [2000,2000,2000]';
    
    bounds.FrontLift.params = struct();

    %% Back Stance
    bounds.BackStance = model_bounds;
    
    bounds.BackStance.inputs.ConstraintWrench.fLeftBack.lb = [-1000,-1000,-1000]';
    bounds.BackStance.inputs.ConstraintWrench.fLeftBack.ub = [1000,1000,1000]';
    bounds.BackStance.inputs.ConstraintWrench.fRightBack.lb = [-1000,-1000,-1000]';
    bounds.BackStance.inputs.ConstraintWrench.fRightBack.ub = [1000,1000,1000]';
    
    %% Back Lift
    bounds.BackLift.states.x = model_bounds.states.x;
    bounds.BackLift.states.xn = model_bounds.states.x;
    bounds.BackLift.states.dx = model_bounds.states.dx;
    bounds.BackLift.states.dxn = model_bounds.states.dx;
    
    bounds.BackLift.inputs = struct();
    bounds.BackLift.inputs.ConstraintWrench.ffourBar.lb = -2000;
    bounds.BackLift.inputs.ConstraintWrench.ffourBar.ub = 2000;
    
    bounds.BackLift.params = struct();
    
    %% Flight
    bounds.Flight = model_bounds;
    
    %%% Step Duration
    bounds.Flight.time.duration.lb = 0.1;
    bounds.Flight.time.duration.ub = 0.4;
    bounds.Flight.time.duration.x0 = 0.2;
    
    bounds.Flight.time.t0.lb = 0;
    bounds.Flight.time.t0.ub = 0;
    bounds.Flight.time.t0.x0 = 0;
    
    bounds.Flight.time.tf.lb = 0.1;
    bounds.Flight.time.tf.ub = 0.4;
    bounds.Flight.time.tf.x0 = 0.2;
        
    % average step velocity
    bounds.Flight.constrBounds.AvgVelocity.lb = vel;
    bounds.Flight.constrBounds.AvgVelocity.ub = vel;
    
    %% Front Impact
    bounds.FrontImpact.states.x = model_bounds.states.x;
    bounds.FrontImpact.states.xn = model_bounds.states.x;
    bounds.FrontImpact.states.dx = model_bounds.states.dx;
    bounds.FrontImpact.states.dxn = model_bounds.states.dx;
    
    bounds.FrontImpact.inputs = struct();
    bounds.FrontImpact.inputs.ConstraintWrench.ffourBar.lb = -2000;
    bounds.FrontImpact.inputs.ConstraintWrench.ffourBar.ub = 2000;
    bounds.FrontImpact.inputs.ConstraintWrench.fLeftFront.lb = [-2000,-2000,-2000]';
    bounds.FrontImpact.inputs.ConstraintWrench.fLeftFront.ub = [2000,2000,2000]';
    bounds.FrontImpact.inputs.ConstraintWrench.fRightFront.lb = [-2000,-2000,-2000]';
    bounds.FrontImpact.inputs.ConstraintWrench.fRightFront.ub = [2000,2000,2000]'; 
    
    bounds.FrontImpact.params = struct();
    
end
