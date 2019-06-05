clc;clear;
restoredefaultpath;matlabrc;
cur = pwd;
addpath(genpath(cur));
addpath('../../');
frost_addpath;
export_path = 'generation2/optimization2';
load_path   = 'generation2/simulation2';
%% settings
LOAD    = false;
COMPILE = true;
SAVE    = false;
OPT     = true;
ANIMATE = true;

DELAY_CORIOLIS = false;
OMIT_CORIOLIS  = true;
%% load robot model
% class MINITAUR
minitaur = MINITAUR('urdf/minitaur2.urdf');
%% load hybrid system
if LOAD
    minitaur.loadDynamics(load_path, true, {}, 'OmitCoriolisSet', OMIT_CORIOLIS);
    [minitaur_hs, domains, guards] = opt.LoadBehavior(minitaur, load_path);
else
    minitaur.configureDynamics('DelayCoriolisSet', DELAY_CORIOLIS, 'OmitCoriolisSet', OMIT_CORIOLIS);
    minitaur_hs = opt.LoadBehavior2(minitaur);
end
%% create optimization problem
num_grid.RightStance = 10;
num_grid.LeftStance = 10;
options = {...
    'EqualityConstraintBoundary',1e-4...
    'DistributeTimeVariable',false...
    'DistributeParameters',false};
nlp = HybridTrajectoryOptimization('Minitaur_Periodic',minitaur_hs,num_grid,[],options{:});
nlp.update;
% update bound values
bounds = opt.GetBounds2(minitaur);
nlp.configure(bounds);
% update cost functions
opt.cost.Power(nlp,minitaur_hs);
nlp.update;
%% compile functions
if COMPILE
    compileConstraint(nlp, [], [], export_path, 'dynamics_equation');
    compileObjective(nlp, [], [], export_path);
    % compileConstraint(nlp,[],[], export_path);
end
%% save expression
if SAVE
    minitaur_hs.saveExpression(load_path);
end
%% optimization
if OPT
    ipopt_options.max_iter              = 300;
    ipopt_options.tol                   = 1e-1;
    ipopt_options.compl_inf_tol         = 1e1;
    ipopt_options.dual_inf_tol          = 1e1;
    ipopt_options.constr_viol_tol       = 1e-3;
    solver = IpoptApplication(nlp, ipopt_options);
    if  exist('solution')
        %x0 = solution.x ;
        [sol, info] = optimize(solver);
    else
        [sol, info] = optimize(solver);
    end
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
    new_name = fullfile(cur, 'local', 'output_X4.mat');
    save(new_name, 'solution', 'nlp', 'minitaur', 'bounds', 'info');
end
%% animation
if ANIMATE
  plot.LoadAnimator_test(minitaur,'SkipExporting',true);
%     anim = plot.LoadAnimator(minitaur,gait,'SkipExporting',true);
end
%% Check
if 1
    checkConstraints(nlp, solution.x, 1e-3, fullfile(cur, 'local', 'checkConstraints.txt'));
    checkVariables(nlp, solution.x, 1e-3, fullfile(cur, 'local', 'checkVariables.txt'));
    checkConstraints(nlp, solution.x, 1e-3, fullfile(cur, 'local', 'checkConstraints.txt'));
    checkCosts(nlp, solution.x, fullfile(cur, 'local', 'checkCosts.txt'));
    
    open local/checkConstraints.txt
    open local/checkVariables.txt
    open local/checkCosts.txt
    open cassie_opt
end