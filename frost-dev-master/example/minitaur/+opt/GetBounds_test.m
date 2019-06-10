function bounds = GetBounds_test(model, vel, T)
    if nargin < 2
        vel = [0.0,0];
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
    
    model_bounds.constrBounds.yaw_initial.lb = 0;
    model_bounds.constrBounds.yaw_initial.ub = 0;
    % feedback control gain for virtual constraints
    model_bounds.gains.kp = 100;
    model_bounds.gains.kd = 20;
    
    %%% Step Duration
    model_bounds.time.duration.lb = T;
    model_bounds.time.duration.ub = T;
    model_bounds.time.duration.x0 = T;
    
    model_bounds.time.t0.lb = 0;
    model_bounds.time.t0.ub = 0;
    model_bounds.time.t0.x0 = 0;
    model_bounds.time.tf.lb = T;
    model_bounds.time.tf.ub = T;
    model_bounds.time.tf.x0 = T;
    
    model_bounds.constrBounds.foot_clearance_1.lb = 0.03;
    model_bounds.constrBounds.foot_clearance_1.ub = 0.3;
    model_bounds.constrBounds.foot_clearance_2.lb = 0.15;
    model_bounds.constrBounds.foot_clearance_2.ub = 0.3;
    model_bounds.constrBounds.foot_clearance_3.lb = 0.05;
    model_bounds.constrBounds.foot_clearance_3.ub = 0.3;
    model_bounds.constrBounds.averageVelocity.lb = vel;
    model_bounds.constrBounds.averageVelocity.ub = vel;
    
    
    model_bounds.constrBounds.footVelocityBeginning.lb = [-0.15, -0.15, 0]';
    model_bounds.constrBounds.footVelocityBeginning.ub = [0.15, 0.15, 0.3]';
    model_bounds.constrBounds.footVelocityEnd.lb = [-0.15,-0.15,-0.25]';
    model_bounds.constrBounds.footVelocityEnd.ub = [0.15,0.15,-0.05]';
    
    
    
    %%% Common Virtual Constraints
    model_bounds.params.aoutput.lb = -2*pi;
    model_bounds.params.aoutput.ub = 2*pi;
    
    model_bounds.params.poutput.lb = [0, 0];
    model_bounds.params.poutput.ub = [0, T];
    model_bounds.params.poutput.x0 = [0, T];
    
    model_bounds.params.pRight.lb = [0, 0, 0, 0];
    model_bounds.params.pRight.ub = [0, 0, 0, 0];
    
    model_bounds.params.pLeft.lb = [-10, -10, 0, 0];
    model_bounds.params.pLeft.ub = [10, 10, 0, 0];
    
    model_bounds.params.pRightBack.lb = [-10, -10, 0, 0];
    model_bounds.params.pRightBack.ub = [10, 10, 0, 0];
    
    model_bounds.params.pLeftBack.lb = [-10, -10, 0, 0];
    model_bounds.params.pLeftBack.ub = [10, 10, 0, 0];
    
    wt = 0.3662;
    vx = vel(1);
    vy = vel(2);
    
    
    %% construct the boundary values for each domain 
    bounds = struct();
    bounds.RightStance = model_bounds;
    %% Right Stance
    bounds.RightStance.inputs.ConstraintWrench.fRight.lb = [-1000,-1000,300,-1000]';
    bounds.RightStance.inputs.ConstraintWrench.fRight.ub = [1000,1000,1000,1000]';
    bounds.RightStance.inputs.ConstraintWrench.fRightBack.lb = [-1000,-1000,300,-1000]';
    bounds.RightStance.inputs.ConstraintWrench.fRightBack.ub = [1000,1000,1000,1000]';
    bounds.RightStance.inputs.ConstraintWrench.fLeftBack.lb = [-1000,-1000,300,-1000]';
    bounds.RightStance.inputs.ConstraintWrench.fLeftBack.ub = [1000,1000,1000,1000]';
    
    bounds.RightStance.constrBounds.knee.lb = [deg2rad(170),deg2rad(170),deg2rad(170),deg2rad(170)];
    bounds.RightStance.constrBounds.knee.ub = [deg2rad(300),deg2rad(190),deg2rad(190),deg2rad(190)];
    
    bounds.RightStance.constrBounds.stepWidth.lb = -wt - vx*T;
    bounds.RightStance.constrBounds.stepWidth.ub = -wt - vx*T;
    
    bounds.RightStance.constrBounds.stepLength.lb = -vy*T;
    bounds.RightStance.constrBounds.stepLength.ub = -vy*T;
    
    %% Left Impact
    bounds.LeftImpact.states.x = model_bounds.states.x;
    bounds.LeftImpact.states.xn = model_bounds.states.x;
    bounds.LeftImpact.states.dx = model_bounds.states.dx;
    bounds.LeftImpact.states.dxn = model_bounds.states.dx;
    
    bounds.LeftImpact.inputs = struct();
    bounds.LeftImpact.inputs.ConstraintWrench.ffourBar.lb = -20;
    bounds.LeftImpact.inputs.ConstraintWrench.ffourBar.ub = 20;
    bounds.LeftImpact.inputs.ConstraintWrench.fLeft.lb = [-20,-20,0,-10]';
    bounds.LeftImpact.inputs.ConstraintWrench.fLeft.ub = [20,20,150,10]';
    bounds.LeftImpact.inputs.ConstraintWrench.fRightBack.lb = [-20,-20,0,-10]';
    bounds.LeftImpact.inputs.ConstraintWrench.fRightBack.ub = [20,20,150,10]';
    bounds.LeftImpact.inputs.ConstraintWrench.fLeftBack.lb = [-20,-20,0,-10]';
    bounds.LeftImpact.inputs.ConstraintWrench.fLeftBack.ub = [20,20,150,10]';

    bounds.LeftImpact.params = struct();


    %% Left Stance
    bounds.LeftStance = model_bounds;
    %%% Time Duration
    bounds.LeftStance.inputs.ConstraintWrench.fLeft.lb = [-1000,-1000,300,-1000]';
    bounds.LeftStance.inputs.ConstraintWrench.fLeft.ub = [1000,1000,1000,1000]';
    bounds.LeftStance.inputs.ConstraintWrench.fRightBack.lb = [-1000,-1000,300,-1000]';
    bounds.LeftStance.inputs.ConstraintWrench.fRightBack.ub = [1000,1000,1000,1000]';
    bounds.LeftStance.inputs.ConstraintWrench.fLeftBack.lb = [-1000,-1000,300,-1000]';
    bounds.LeftStance.inputs.ConstraintWrench.fLeftBack.ub = [1000,1000,1000,1000]';
    
    bounds.LeftStance.constrBounds.knee.lb = [deg2rad(170),deg2rad(170),deg2rad(170),deg2rad(170)];
    bounds.LeftStance.constrBounds.knee.ub = [deg2rad(190),deg2rad(190),deg2rad(300),deg2rad(190)];
    
    bounds.LeftStance.constrBounds.stepWidth.lb = -wt + vx*T;
    bounds.LeftStance.constrBounds.stepWidth.ub = -wt + vx*T;
    
    bounds.LeftStance.constrBounds.stepLength.lb = vy*T;
    bounds.LeftStance.constrBounds.stepLength.ub = vy*T;
    %% Right Impact
    bounds.RightImpact.states.x = model_bounds.states.x;
    bounds.RightImpact.states.xn = model_bounds.states.x;
    bounds.RightImpact.states.dx = model_bounds.states.dx;
    bounds.RightImpact.states.dxn = model_bounds.states.dx;
    bounds.RightImpact.inputs = struct();
    bounds.RightImpact.inputs.ConstraintWrench.ffourBar.lb = -20;
    bounds.RightImpact.inputs.ConstraintWrench.ffourBar.ub = 20;
    bounds.RightImpact.inputs.ConstraintWrench.fRight.lb = [-20,-20,0,10]'';
    bounds.RightImpact.inputs.ConstraintWrench.fRight.ub = [20,20,150,10]';
    bounds.RightImpact.inputs.ConstraintWrench.fRightBack.lb = [-20,-20,0,10]'';
    bounds.RightImpact.inputs.ConstraintWrench.fRightBack.ub = [20,20,150,10]';
    bounds.RightImpact.inputs.ConstraintWrench.fLeftBack.lb = [-20,-20,0,10]'';
    bounds.RightImpact.inputs.ConstraintWrench.fLeftBack.ub = [20,20,150,10]';
   
    
    bounds.RightImpact.params = struct();



    
end
