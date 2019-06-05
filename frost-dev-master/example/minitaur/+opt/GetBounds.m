function bounds = GetBounds(model, vel, T)
    if nargin < 2
        vel = [0,0];
    end
    if nargin < 3
        T = 0.4;
    end
    %% first get the model specific boundary values
    model_bounds = model.getLimits(); % x, dx, ddx, Control
    
    model_bounds.options.enforceVirtualConstraints = true;
    
    % fixed joint constraint wrench
    model_bounds.inputs.ConstraintWrench.ffourBar.lb = -1000;
    model_bounds.inputs.ConstraintWrench.ffourBar.ub = 1000;
    
    % fixed joint constraints
    model_bounds.params.pfourBar.lb = zeros(8,1);
    model_bounds.params.pfourBar.ub = zeros(8,1);
    
    % feedback control gain for virtual constraints
    model_bounds.gains.kp = 100;
    model_bounds.gains.kd = 20;
    
    %%% Step Duration
    model_bounds.time.duration.lb = T;
    model_bounds.time.duration.ub = T;
    
    model_bounds.time.t0.lb = 0;
    model_bounds.time.t0.ub = 0;
    model_bounds.time.t0.x0 = 0;
    
    model_bounds.time.tf.lb = 0;
    model_bounds.time.tf.ub = T;
    model_bounds.time.tf.x0 = T;
    
    % Virtual Constraints
    model_bounds.params.aoutput.lb = -2*pi;
    model_bounds.params.aoutput.ub = 2*pi;
    
    model_bounds.params.poutput.lb = [0, 0];
    model_bounds.params.poutput.ub = [0, T];
    model_bounds.params.poutput.x0 = [0, T];
    
    model_bounds.params.pRightFrontFoot.lb = [0, 0, 0];
    model_bounds.params.pRightFrontFoot.ub = [0, 0, 0];
    
    model_bounds.params.pLeftFrontFoot.lb = [0, 0, 0];
    model_bounds.params.pLeftFrontFoot.ub = [0, 0, 0];
    
    model_bounds.params.pRightBackFoot.lb = [0, 0, 0];
    model_bounds.params.pRightBackFoot.ub = [0, 0, 0];
    
    model_bounds.params.pLeftBackFoot.lb = [0, 0, 0];
    model_bounds.params.pLeftBackFoot.ub = [0, 0, 0];
    
    % foot clearance
    model_bounds.constrBounds.foot_clearance_1.lb = 0.03;   % node 5
    model_bounds.constrBounds.foot_clearance_1.ub = 0.3;    % node 5 
    model_bounds.constrBounds.foot_clearance_2.lb = 0.15;   % node 11
    model_bounds.constrBounds.foot_clearance_2.ub = 0.3;    % node 11
    model_bounds.constrBounds.foot_clearance_3.lb = 0.05;   % node 15
    model_bounds.constrBounds.foot_clearance_3.ub = 0.3;    % node 15
    
    % impact velocity
    model_bounds.constrBounds.footVelocityBeginning.lb = [-0.15, -0.15, 0]';    % node 1
    model_bounds.constrBounds.footVelocityBeginning.ub = [0.15, 0.15, 0.3]';    % node 1
    model_bounds.constrBounds.footVelocityEnd.lb = [-0.15,-0.15,-0.25]';        % node 21
    model_bounds.constrBounds.footVelocityEnd.ub = [0.15,0.15,-0.05]';          % node 21
    
    % yaw start
    model_bounds.constrBounds.yaw_initial.lb = 0;   % node 1
    model_bounds.constrBounds.yaw_initial.ub = 0;   % node 1
    
    % knee angle
    model_bounds.constrBounds.knee.lb = [deg2rad(50),deg2rad(50),deg2rad(50),deg2rad(50)];    % all node 
    model_bounds.constrBounds.knee.ub = [deg2rad(150),deg2rad(150),deg2rad(150),deg2rad(150)];% all node 
    
    % average velocity
    model_bounds.constrBounds.averageVelocity.lb = vel;     % node 1
    model_bounds.constrBounds.averageVelocity.ub = vel;     % node 1
    
    %% construct the boundary values for each domain 
    bounds = struct();
    %% Front Stance
    bounds.FrontStance = model_bounds;
    bounds.FrontStance.inputs.ConstraintWrench.fRightFrontFoot.lb = [-1000,-1000,300]';
    bounds.FrontStance.inputs.ConstraintWrench.fRightFrontFoot.ub = [1000,1000,1000]';
    bounds.FrontStance.inputs.ConstraintWrench.fLeftFrontFoot.lb = [-1000,-1000,300]';
    bounds.FrontStance.inputs.ConstraintWrench.fLeftFrontFoot.ub = [1000,1000,1000]';
    
    %% Back Impact
    bounds.BackImpact.states.x = model_bounds.states.x;
    bounds.BackImpact.states.xn = model_bounds.states.x;
    bounds.BackImpact.states.dx = model_bounds.states.dx;
    bounds.BackImpact.states.dxn = model_bounds.states.dx;
    
    bounds.BackImpact.inputs = struct();
    bounds.BackImpact.inputs.ConstraintWrench.ffourBar.lb = -20;
    bounds.BackImpact.inputs.ConstraintWrench.ffourBar.ub = 20;
    bounds.BackImpact.inputs.ConstraintWrench.fLeftBackFoot.lb = [-20,-20,0]';
    bounds.BackImpact.inputs.ConstraintWrench.fLeftBackFoot.ub = [20,20,150]';
    bounds.BackImpact.inputs.ConstraintWrench.fRightBackFoot.lb = [-20,-20,0]';
    bounds.BackImpact.inputs.ConstraintWrench.fRightBackFoot.ub = [20,20,150]';
    
    bounds.BackImpact.params = struct();

    %% Back Stance
    bounds.BackStance = model_bounds;
    bounds.BackStance.inputs.ConstraintWrench.fLeftBackFoot.lb = [-1000,-1000,300]';
    bounds.BackStance.inputs.ConstraintWrench.fLeftBackFoot.ub = [1000,1000,1000]';
    bounds.BackStance.inputs.ConstraintWrench.fRightBackFoot.lb = [-1000,-1000,300]';
    bounds.BackStance.inputs.ConstraintWrench.fRightBackFoot.ub = [1000,1000,1000]';
    
    %% Front Impact
    bounds.FrontImpact.states.x = model_bounds.states.x;
    bounds.FrontImpact.states.xn = model_bounds.states.x;
    bounds.FrontImpact.states.dx = model_bounds.states.dx;
    bounds.FrontImpact.states.dxn = model_bounds.states.dx;
    
    bounds.FrontImpact.inputs = struct();
    bounds.FrontImpact.inputs.ConstraintWrench.ffourBar.lb = -20;
    bounds.FrontImpact.inputs.ConstraintWrench.ffourBar.ub = 20;
    bounds.FrontImpact.inputs.ConstraintWrench.fLeftFrontFoot.lb = [-20,-20,0]'';
    bounds.FrontImpact.inputs.ConstraintWrench.fLeftFrontFoot.ub = [20,20,150]';
    bounds.FrontImpact.inputs.ConstraintWrench.fRightFrontFoot.lb = [-20,-20,0]'';
    bounds.FrontImpact.inputs.ConstraintWrench.fRightFrontFoot.ub = [20,20,150]'; 
    
    bounds.FrontImpact.params = struct();
    
    %% Flight1
    bounds.Flight1 = model_bounds;

    %% Front Lift
    bounds.FrontLift.states.x = model_bounds.states.x;
    bounds.FrontLift.states.xn = model_bounds.states.x;
    bounds.FrontLift.states.dx = model_bounds.states.dx;
    bounds.FrontLift.states.dxn = model_bounds.states.dx;
    
    bounds.FrontLift.inputs = struct(); 
    
    bounds.FrontLift.params = struct();
    
    %% Flight2
    bounds.Flight2 = model_bounds;
    
    %% Back Lift
    bounds.BackLift.states.x = model_bounds.states.x;
    bounds.BackLift.states.xn = model_bounds.states.x;
    bounds.BackLift.states.dx = model_bounds.states.dx;
    bounds.BackLift.states.dxn = model_bounds.states.dx;
    
    bounds.BackLift.inputs = struct();
    
    bounds.BackLift.params = struct();
    
end
