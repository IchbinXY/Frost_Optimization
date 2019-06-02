clc;clear;
restoredefaultpath;matlabrc;
cur = pwd;
addpath(genpath(cur));
addpath('../../');
frost_addpath;
export_path = 'gen/opt';
load_path   = 'gen/sym';
%% Some settings for the following script
LOAD    = false;
COMPILE = false;
SAVE    = false;
OPT     = false;

DELAY_CORIOLIS = false;
OMIT_CORIOLIS  = true;
%% load robot model
% class MINITAUR
minitaur = MINITAUR('urdf/minitaur2.urdf');
%% load hybrid system
if LOAD
    minitaur.loadDynamics(load_path, true, {}, 'OmitCoriolisSet', OMIT_CORIOLIS);
    [minitaur_hs, domains, guards] = opt.load_behavior(minitaur, load_path);
else
    minitaur.configureDynamics('DelayCoriolisSet', DELAY_CORIOLIS, 'OmitCoriolisSet', OMIT_CORIOLIS);
    [minitaur_hs, domains, guards] = opt.load_behavior(minitaur, '');
end
%% create optimization problem
num_grid.FrontStance = 10;
num_grid.Flight1     = 10;
num_grid.BackStance  = 10;
num_grid.Flight2     = 10;
% classs HybridTrajectoryOptimization
options = {...
    'EqualityConstraintBoundary',1e-4...
    'DistributeTimeVariable',false...
    'DistributeParameters',false};
nlp = HybridTrajectoryOptimization('Minitaur_Periodic',minitaur_hs,num_grid,[],options{:});
nlp.update;
% update bound values
bounds = opt.GetBounds(minitaur);
nlp.configure(bounds);
% update cost functions
opt.cost.Power(nlp,minitaur_hs);
nlp.update;
%% compile functions
if COMPILE
    compileObjective(nlp, [], [], export_path);
    compileConstraint(nlp, [], [], export_path, 'dynamics_equation');
end
%% save expression
if SAVE
    minitaur_hs.saveExpression(load_path);
end
%% run optimization
if OPT
    ipopt_options.max_iter              = 1000;
    ipopt_options.tol                   = 1e-1;
    ipopt_options.compl_inf_tol         = 1e0;
    ipopt_options.dual_inf_tol          = 1e0;
    ipopt_options.constr_viol_tol       = 1e-3;
    solver = IpoptApplication(nlp, ipopt_options);
    if  exist('solution')
        %x0 = solution.x ;
        [sol, info] = optimize(solver);
    else
        [sol, info] = optimize(solver);
    end
    [tspan, states, inputs, params] = exportSolution(nlp, sol);  
    solution.x = sol;
    solution.tspan = tspan;
    solution.states = states;
    solution.inputs = inputs;
    solution.params = params;
    new_name = fullfile(cur, 'local', 'output_X4.mat');
    save(new_name, 'solution', 'nlp', 'minitaur', 'bounds', 'info');
end
%% animation
anim = plot.LoadAnimator_YL(minitaur,'SkipExporting',true);
