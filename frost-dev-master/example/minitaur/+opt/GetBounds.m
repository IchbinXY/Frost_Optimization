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
    model_bounds.constrBounds.yaw_initial.lb = 0;   % node 1
    model_bounds.constrBounds.yaw_initial.ub = 0;   % node 1
    % feedback control gain for virtual constraints
    model_bounds.gains.kp = 100;
    model_bounds.gains.kd = 20;
    
    %%% Constraint bounds
    %     vel = [0.0, -0.8].';
    %     T   = 0.4;
    
    %%% Step Duration
    model_bounds.time.duration.lb = T;
    model_bounds.time.duration.ub = T;
    
    model_bounds.time.t0.lb = 0;
    model_bounds.time.t0.ub = 0;
    model_bounds.time.t0.x0 = 0;
    
    model_bounds.time.tf.lb = 0;
    model_bounds.time.tf.ub = T;
    model_bounds.time.tf.x0 = T;
    
    model_bounds.constrBounds.foot_clearance_1.lb = 0.03;   % node 5
    model_bounds.constrBounds.foot_clearance_1.ub = 0.3;    % node 5 
    model_bounds.constrBounds.foot_clearance_2.lb = 0.15;   % node 11
    model_bounds.constrBounds.foot_clearance_2.ub = 0.3;    % node 11
    model_bounds.constrBounds.foot_clearance_3.lb = 0.05;   % node 15
    model_bounds.constrBounds.foot_clearance_3.ub = 0.3;    % node 15
    model_bounds.constrBounds.averageVelocity.lb = vel;     % node 1
    model_bounds.constrBounds.averageVelocity.ub = vel;     % node 1
    
    model_bounds.constrBounds.footVelocityBeginning.lb = [-0.15, -0.15, 0]';    % node 1
    model_bounds.constrBounds.footVelocityBeginning.ub = [0.15, 0.15, 0.3]';    % node 1
    model_bounds.constrBounds.footVelocityEnd.lb = [-0.15,-0.15,-0.25]';        % node 21
    model_bounds.constrBounds.footVelocityEnd.ub = [0.15,0.15,-0.05]';          % node 21
    
    
    
    %%% Common Virtual Constraints
    model_bounds.params.aoutput.lb = -2*pi;
    model_bounds.params.aoutput.ub = 2*pi;
    
    model_bounds.params.poutput.lb = [0, 0];
    model_bounds.params.poutput.ub = [0, T];
    model_bounds.params.poutput.x0 = [0, T];
    
    model_bounds.params.pRightFoot.lb = [0, 0, 0, 0];
    model_bounds.params.pRightFoot.ub = [0, 0, 0, 0];
    
    model_bounds.params.pLeftFoot.lb = [-10, -10, 0, 0];
    model_bounds.params.pLeftFoot.ub = [10, 10, 0, 0];
    
    wt = 0.3662;
    vx = vel(1);
    vy = vel(2);
    
    
    %% construct the boundary values for each domain 
    bounds = struct();
    %% Front Stance
    bounds.FrontStance = model_bounds;
    bounds.FrontStance.inputs.ConstraintWrench.fRightFoot.lb = [-1000,-1000,300,-1000]';
    bounds.FrontStance.inputs.ConstraintWrench.fRightFoot.ub = [1000,1000,1000,1000]';
    
%     bounds.FrontStance.constrBounds.knee.lb = [deg2rad(50),deg2rad(50)];
%     bounds.FrontStance.constrBounds.knee.ub = [deg2rad(55),deg2rad(150)];
    bounds.FrontStance.constrBounds.knee.lb = [deg2rad(50),deg2rad(50),deg2rad(50),deg2rad(50)];    % all node 
    bounds.FrontStance.constrBounds.knee.ub = [deg2rad(150),deg2rad(150),deg2rad(150),deg2rad(150)];% all node 

    
    
    %% Back Impact
    bounds.BackImpact.states.x = model_bounds.states.x;
    bounds.BackImpact.states.xn = model_bounds.states.x;
    bounds.BackImpact.states.dx = model_bounds.states.dx;
    bounds.BackImpact.states.dxn = model_bounds.states.dx;
    bounds.BackImpact.inputs = struct();
    bounds.BackImpact.inputs.ConstraintWrench.ffourBar.lb = -20;
    bounds.BackImpact.inputs.ConstraintWrench.ffourBar.ub = 20;
    bounds.BackImpact.inputs.ConstraintWrench.fLeftFoot.lb = [-20,-20,0,-10]';
    bounds.BackImpact.inputs.ConstraintWrench.fLeftFoot.ub = [20,20,150,10]';
    bounds.BackImpact.params = struct();

    %% Back Stance
    bounds.BackStance = model_bounds;
    %%% Time Duration
    bounds.BackStance.inputs.ConstraintWrench.fLeftFoot.lb = [-1000,-1000,300,-1000]';
    bounds.BackStance.inputs.ConstraintWrench.fLeftFoot.ub = [1000,1000,1000,1000]';
    
%     bounds.BackStance.constrBounds.knee.lb = [deg2rad(50),deg2rad(50)];
%     bounds.BackStance.constrBounds.knee.ub = [deg2rad(150),deg2rad(55)];
    bounds.BackStance.constrBounds.knee.lb = [deg2rad(50),deg2rad(50),deg2rad(50),deg2rad(50)];
    bounds.BackStance.constrBounds.knee.ub = [deg2rad(150),deg2rad(150),deg2rad(150),deg2rad(150)];
    
    
    
    %% Front Impact
    bounds.FrontImpact.states.x = model_bounds.states.x;
    bounds.FrontImpact.states.xn = model_bounds.states.x;
    bounds.FrontImpact.states.dx = model_bounds.states.dx;
    bounds.FrontImpact.states.dxn = model_bounds.states.dx;
    bounds.FrontImpact.inputs = struct();
    bounds.FrontImpact.inputs.ConstraintWrench.ffourBar.lb = -20;
    bounds.FrontImpact.inputs.ConstraintWrench.ffourBar.ub = 20;
    bounds.FrontImpact.inputs.ConstraintWrench.fRightFoot.lb = [-20,-20,0,-10]'';
    bounds.FrontImpact.inputs.ConstraintWrench.fRightFoot.ub = [20,20,150,10]'; 
    bounds.FrontImpact.params = struct();
    
    %% Flight1
    bounds.Flight1 = model_bounds;
    bounds.Flight1.inputs.ConstraintWrench.fRightFoot.lb = [-1000,-1000,300,-1000]';
    bounds.Flight1.inputs.ConstraintWrench.fRightFoot.ub = [1000,1000,1000,1000]';
    
%     bounds.FrontStance.constrBounds.knee.lb = [deg2rad(50),deg2rad(50)];
%     bounds.FrontStance.constrBounds.knee.ub = [deg2rad(55),deg2rad(150)];
    bounds.Flight1.constrBounds.knee.lb = [deg2rad(50),deg2rad(50),deg2rad(50),deg2rad(50)];
    bounds.Flight1.constrBounds.knee.ub = [deg2rad(150),deg2rad(150),deg2rad(150),deg2rad(150)];

    
    
    %% Front Lift
    bounds.FrontLift.states.x = model_bounds.states.x;
    bounds.FrontLift.states.xn = model_bounds.states.x;
    bounds.FrontLift.states.dx = model_bounds.states.dx;
    bounds.FrontLift.states.dxn = model_bounds.states.dx;
    bounds.FrontLift.inputs = struct();
    bounds.FrontLift.inputs.ConstraintWrench.ffourBar.lb = -20;
    bounds.FrontLift.inputs.ConstraintWrench.ffourBar.ub = 20;
    bounds.FrontLift.inputs.ConstraintWrench.fRightFoot.lb = [-20,-20,0,-10]'';
    bounds.FrontLift.inputs.ConstraintWrench.fRightFoot.ub = [20,20,150,10]'; 
    bounds.FrontLift.params = struct();
    
    %% Flight2
    bounds.Flight2 = model_bounds;
    bounds.Flight2.inputs.ConstraintWrench.fRightFoot.lb = [-1000,-1000,300,-1000]';
    bounds.Flight2.inputs.ConstraintWrench.fRightFoot.ub = [1000,1000,1000,1000]';
    
%     bounds.FrontStance.constrBounds.knee.lb = [deg2rad(50),deg2rad(50)];
%     bounds.FrontStance.constrBounds.knee.ub = [deg2rad(55),deg2rad(150)];
    bounds.Flight2.constrBounds.knee.lb = [deg2rad(50),deg2rad(50),deg2rad(50),deg2rad(50)];
    bounds.Flight2.constrBounds.knee.ub = [deg2rad(150),deg2rad(150),deg2rad(150),deg2rad(150)];
    
    %% Back Lift
    bounds.BackLift.states.x = model_bounds.states.x;
    bounds.BackLift.states.xn = model_bounds.states.x;
    bounds.BackLift.states.dx = model_bounds.states.dx;
    bounds.BackLift.states.dxn = model_bounds.states.dx;
    bounds.BackLift.inputs = struct();
    bounds.BackLift.inputs.ConstraintWrench.ffourBar.lb = -20;
    bounds.BackLift.inputs.ConstraintWrench.ffourBar.ub = 20;
    bounds.BackLift.inputs.ConstraintWrench.fRightFoot.lb = [-20,-20,0,-10]'';
    bounds.BackLift.inputs.ConstraintWrench.fRightFoot.ub = [20,20,150,10]'; 
    bounds.BackLift.params = struct();
    
end
