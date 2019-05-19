%% Set bounds for optimization problem

% Set Bounds
model_bounds = minitaur.getLimits();
model_bounds.states.x.lb = [-10, 0.5, -1, 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0];
model_bounds.states.x.ub = [10, 2, 1, 1.5,1.5,1.5,1.5,1.5,1.5,1.5,1.5,1.5,1.5,1.5,1.5,1.5,1.5,1.5,1.5];
model_bounds.states.dx.lb = -20*ones(1,19);
model_bounds.states.dx.ub = 20*ones(1,19);
model_bounds.states.ddx.lb = -100*ones(1,19);
model_bounds.states.ddx.ub = 100*ones(1,19);
bounds = struct();

% Right Stance
bounds.RightStance = model_bounds;

bounds.RightStance.time.t0.lb = 0;
bounds.RightStance.time.t0.ub = 0;
bounds.RightStance.time.t0.x0 = 0;

bounds.RightStance.time.tf.lb = 0.25;
bounds.RightStance.time.tf.ub = 0.75;
bounds.RightStance.time.tf.x0 = 0.75;

bounds.RightStance.time.duration.lb = 0.25;
bounds.RightStance.time.duration.ub = 0.75;
bounds.RightStance.time.duration.x0 = 0.75;

bounds.RightStance.inputs.ConstraintWrench.fRightToe.lb = -1000;
bounds.RightStance.inputs.ConstraintWrench.fRightToe.ub = 1000;
bounds.RightStance.inputs.ConstraintWrench.fRightToe.x0 = 100;

bounds.RightStance.inputs.Control.u.lb = -100*ones(8,1);
bounds.RightStance.inputs.Control.u.ub = 100*ones(8,1);
bounds.RightStance.inputs.Control.u.x0 = zeros(8,1);

bounds.RightStance.params.pFrontRightToe.lb = -0*ones(3,1);
bounds.RightStance.params.pFrontRightToe.ub = 0*ones(3,1);
bounds.RightStance.params.pFrontRightToe.x0 = zeros(3,1);

bounds.RightStance.params.pBackLeftToe.lb = -0*ones(3,1);
bounds.RightStance.params.pBackLeftToe.ub = 0*ones(3,1);
bounds.RightStance.params.pBackLeftToe.x0 = zeros(3,1);

bounds.RightStance.params.atime.lb = -10*ones(16*6,1);
bounds.RightStance.params.atime.ub = 10*ones(16*6,1);
bounds.RightStance.params.atime.x0 = zeros(16*6,1);

bounds.RightStance.params.ptime.lb = [bounds.RightStance.time.tf.lb, bounds.RightStance.time.t0.lb];
bounds.RightStance.params.ptime.ub = [bounds.RightStance.time.tf.ub, bounds.RightStance.time.t0.ub];
bounds.RightStance.params.ptime.x0 = [bounds.RightStance.time.t0.x0, bounds.RightStance.time.tf.x0];

bounds.RightStance.time.kp = 100;
bounds.RightStance.time.kd = 20;

% Right Impact
bounds.RightImpact = model_bounds;