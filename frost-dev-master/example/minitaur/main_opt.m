clc;clear;restoredefaultpath;matlabrc;
cur = pwd;
addpath(genpath(cur));
addpath('../../');
frost_addpath;
export_path = 'gen/opt';
load_path   = 'gen/sym';
%% Settings
LOAD    = 0;
COMPILE = 0;
SAVE    = 0;
OPT     = 1;
ANIMATE = 1;
%% Model and System
minitaur = MINITAUR('urdf/minitaur.urdf');
if LOAD
    minitaur.loadDynamics(load_path,true,{},'OmitCoriolisSet',true);
    [System,Domains,Guards] = opt.LoadBehavior(minitaur,load_path);
else
    minitaur.configureDynamics('DelayCoriolisSet',false,'OmitCoriolisSet',true);
    [System,Domains,Guards] = opt.LoadBehavior(minitaur);
end
%% Problem
bounds = opt.GetBounds(minitaur);
num_grid.FrontStance = 10;
num_grid.Fight1      = 10;
num_grid.BackStance  = 10;
num_grid.Flight2     = 10;
options = {...
    'EqualityConstraintBoundary',1e-4...
    'DistributeTimeVariable',false...
    'DistributeParameters',false};
nlp = HybridTrajectoryOptimization('Minitaur_opt',System,num_grid,[],options{:});
nlp.configure(bounds);
opt.cost.Power(nlp,System);
opt.updateVariableBounds(nlp, bounds);
opt.multi_domain_constraints(nlp, bounds);
nlp.update;
%% Compile
if COMPILE
    compileObjective(nlp,[],[],export_path);
    compileConstraint(nlp,[],[],export_path);
end
% removeConstraint(nlp.Phase(1),'u_friction_cone_RightFrontFoot')
% removeConstraint(nlp.Phase(1),'u_friction_cone_LeftFrontFoot')
% removeConstraint(nlp.Phase(1),'y_output_FrontStance')
% removeConstraint(nlp.Phase(1),'d1y_output_FrontStance')
% removeConstraint(nlp.Phase(1),'output_output_dynamics')
% removeConstraint(nlp.Phase(1),'tau_0_poutput_FrontStance')
% removeConstraint(nlp.Phase(1),'tau_F_poutput_FrontStance')
% removeConstraint(nlp.Phase(1),'foot_clearance_FrontStance')
% removeConstraint(nlp.Phase(1),'yaw_FrontStance')
% removeConstraint(nlp.Phase(1),'avgStepVelocity')
% removeConstraint(nlp.Phase(1),'BezierSymmetry')
% removeConstraint(nlp.Phase(1),'u_RightFrontGRF_FrontStance')
% removeConstraint(nlp.Phase(1),'u_LeftFrontGRF_FrontStance')
% removeConstraint(nlp.Phase(1),'kneeAngles_FrontStance')
% 
% removeConstraint(nlp.Phase(3),'y_output_Flight1')
% removeConstraint(nlp.Phase(3),'d1y_output_Flight1')
% removeConstraint(nlp.Phase(3),'output_output_dynamics')
% removeConstraint(nlp.Phase(3),'tau_0_poutput_Flight1')
% removeConstraint(nlp.Phase(3),'tau_F_poutput_Flight1')
% removeConstraint(nlp.Phase(3),'foot_clearance_Flight1')
% removeConstraint(nlp.Phase(3),'yaw_Flight1')
% removeConstraint(nlp.Phase(3),'avgStepVelocity')
% removeConstraint(nlp.Phase(3),'BezierSymmetry')
% removeConstraint(nlp.Phase(3),'u_RightBackHeight_Flight1')
% removeConstraint(nlp.Phase(3),'u_LeftBackHeight_Flight1')
% removeConstraint(nlp.Phase(3),'kneeAngles_Flight1')
% 
% removeConstraint(nlp.Phase(5),'u_friction_cone_RightBackFoot')
% removeConstraint(nlp.Phase(5),'u_friction_cone_LeftBackFoot')
% removeConstraint(nlp.Phase(5),'y_output_BackStance')
% removeConstraint(nlp.Phase(5),'d1y_output_BackStance')
% removeConstraint(nlp.Phase(5),'output_output_dynamics')
% removeConstraint(nlp.Phase(5),'tau_0_poutput_BackStance')
% removeConstraint(nlp.Phase(5),'tau_F_poutput_BackStance')
% removeConstraint(nlp.Phase(5),'foot_clearance_BackStance')
% removeConstraint(nlp.Phase(5),'yaw_BackStance')
% removeConstraint(nlp.Phase(5),'avgStepVelocity')
% removeConstraint(nlp.Phase(5),'BezierSymmetry')
% removeConstraint(nlp.Phase(5),'u_RightBackGRF_BackStance')
% removeConstraint(nlp.Phase(5),'u_LeftBackGRF_BackStance')
% removeConstraint(nlp.Phase(5),'kneeAngles_BackStance')
% 
% removeConstraint(nlp.Phase(7),'y_output_Flight2')
% removeConstraint(nlp.Phase(7),'d1y_output_Flight2')
% removeConstraint(nlp.Phase(7),'output_output_dynamics')
% removeConstraint(nlp.Phase(7),'tau_0_poutput_Flight2')
% removeConstraint(nlp.Phase(7),'tau_F_poutput_Flight2')
% removeConstraint(nlp.Phase(7),'foot_clearance_Flight2')
% removeConstraint(nlp.Phase(7),'yaw_Flight2')
% removeConstraint(nlp.Phase(7),'avgStepVelocity')
% removeConstraint(nlp.Phase(7),'BezierSymmetry')
% removeConstraint(nlp.Phase(7),'u_RightBackHeight_Flight2')
% removeConstraint(nlp.Phase(7),'u_LeftBackHeight_Flight2')
% removeConstraint(nlp.Phase(7),'kneeAngles_Flight2')

%% Save 
if SAVE
    System.saveExpression(load_path);
end
%% Optimize
if OPT
    ipopt_options.max_iter              = 5000;
    ipopt_options.tol                   = 1e-1;
    ipopt_options.compl_inf_tol         = 1e-1;
    ipopt_options.dual_inf_tol          = 1e-1;
    ipopt_options.constr_viol_tol       = 1e-3;
    solver = IpoptApplication(nlp,ipopt_options);
    tic
    load('output_kneeAngle000.mat', 'solution')
    x0 = solution.x;
    [sol, info] = optimize(solver,x0);
    toc
    [tspan, states, inputs, params] = exportSolution(nlp, sol);
    gait = struct(...
        'tspan',tspan,...
        'states',states,...
        'inputs',inputs,...
        'params',params);
    solution.x = sol;
    solution.tspan = tspan;
    solution.states = states;
    solution.inputs = inputs;
    solution.params = params;
end
%% Animate
if ANIMATE
    anim = plot.LoadAnimator(minitaur,gait,'SkipExporting',true);
end