clc;clear;restoredefaultpath;matlabrc;
cur = pwd;
addpath(genpath(cur));
addpath('../../');
frost_addpath;
% load robot model
export_path = 'gen/opt';
load_path = [];%'gen/sym';
cur = utils.get_root_path();
urdf = fullfile(cur,'urdf','atrias.urdf');
robot = MARLO_YL(urdf);
configureDynamics(robot, 'DelayCoriolisSet', false);                        disp('load robot model');
% load hybrid system
rightStance = sys.domains.RightStance(robot, []);                           disp('right stance');
rightStance.UserNlpConstraint = @opt.callback.RightStanceConstraints;
leftStance = sys.domains.LeftStance(robot, []);                             disp('left stance');
leftStance.UserNlpConstraint = @opt.callback.LeftStanceConstraints;

leftImpact = RigidImpact('LeftImpact', leftStance, 'leftFootHeight');       disp('left impact');
leftImpact.addImpactConstraint(struct2array(leftStance.HolonomicConstraints), []);
leftImpact.UserNlpConstraint = @opt.callback.LeftImpactConstraints;
rightImpact = RigidImpact('RightImpact', rightStance, 'rightFootHeight'); 	disp('right impact');
rightImpact.addImpactConstraint(struct2array(rightStance.HolonomicConstraints), []);
rightImpact.UserNlpConstraint = @opt.callback.RightImpactConstraints;

io_control  = IOFeedback('IO');
system = HybridSystem('atrias');                                            disp('initialize hybrid system');
system = addVertex(system, 'RightStance', 'Domain', rightStance, 'Control', io_control);
system = addVertex(system, 'LeftStance', 'Domain', leftStance, 'Control', io_control);
srcs = {'RightStance'
    'LeftStance'};
tars = {'LeftStance'
    'RightStance'};
system = addEdge(system, srcs, tars);
system = setEdgeProperties(system, srcs, tars, 'Guard', {leftImpact, rightImpact});
% get bounds
bounds = opt.GetBounds(robot);                                              disp('set bounds');
% load problem
num_grid.RightStance = 10;
num_grid.LeftStance = 10;
options = {'EqualityConstraintBoundary', 1e-4,...
    'DistributeTimeVariable', false,...
    'DistributeParameters',false};
nlp = HybridTrajectoryOptimization('atrias_opt', system, num_grid, [], options{:});disp('initialize nlp');
nlp.configure(bounds);                                                      disp('nlp configure bounds');
opt.cost.Power(nlp, system);
nlp.update;

%% Compile stuff if needed
% compileConstraint(nlp,[],[],export_path,{'dynamics_equation'});
% compileObjective(nlp,[],[],export_path);
% compileConstraint(nlp,[],[],export_path);
% % Save expression
% load_path   = 'gen/sym';
% system.saveExpression(load_path); % run this after loaded the optimization problem

%% gait library




%% update bounds
bounds = opt.GetBounds(robot);
opt.updateVariableBounds(nlp, bounds);
% update initial condition
param = load('local/good_gait.mat');

opt.updateInitCondition(nlp,param.gait);
%% solve
[gait, sol, info] = opt.solve(nlp);

% solver = IpoptApplication(nlp);
% tic
% [sol, info] = optimize(solver);
% toc
% [tspan, states, inputs, params] = exportSolution(nlp, sol);
% gait = struct(...
%     'tspan',tspan,...
%     'states',states,...
%     'inputs',inputs,...
%     'params',params);

%% save
save('local/good_gait.mat','gait','sol','info','bounds');

%% animation
% anim = plot.LoadAnimator_YL(robot, gait,'SkipExporting',true);
anim = plot.LoadAnimator_YL(robot,'SkipExporting',true);
