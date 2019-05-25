clc;clear;
restoredefaultpath;matlabrc;
cur = pwd;
addpath(genpath(cur));
addpath('../../');
frost_addpath;
export_path = 'gen/opt';
%% load robot model
% class MINITAUR
minitaur = MINITAUR('urdf/minitaur.urdf');
minitaur.configureDynamics('DelayCoriolisSet',false);
%% load hybrid system
% domain, class MINITAUR
front_stance = sys.domains.Stance(minitaur,'Front','FrontLift');
front_stance.UserNlpConstraint = @opt.callback.front_stance_constraints;
back_stance = sys.domains.Stance(minitaur,'Back','BackLift');
back_stance.UserNlpConstraint = @opt.callback.back_stance_constraints;

flight1 = sys.domains.Flight(minitaur,'BackImpact');
flight1.UserNlpConstraint = @opt.callback.flight_constraints;
flight2 = sys.domains.Flight(minitaur,'FrontImpact');
flight2.UserNlpConstraint = @opt.callback.flight_constraints;

% guard, class RigitImpact
front_lift = sys.domains.Lift(flight1,'Front');
front_lift.UserNlpConstraint = @opt.callback.front_lift_constraints;
back_lift = sys.domains.Lift(flight2,'Back');
back_lift.UserNlpConstraint = @opt.callback.back_lift_constraints;

front_impact = sys.domains.Impact(front_stance,'Front');
front_impact.UserNlpConstraint = @opt.callback.front_impact_constraints;
back_impact = sys.domains.Impact(back_stance,'Back');
back_impact.UserNlpConstraint = @opt.callback.back_impact_constraints;

% system, class HybridSystem
io_control = IOFeedback('IO');
minitaur_1step = HybridSystem('Minitaur_1step');
minitaur_1step = addVertex(minitaur_1step, 'FrontStance', 'Domain', front_stance,'Control',io_control);
minitaur_1step = addVertex(minitaur_1step, 'Flight1', 'Domain', flight1,'Control',io_control);
minitaur_1step = addVertex(minitaur_1step, 'BackStance', 'Domain', back_stance,'Control',io_control);
minitaur_1step = addVertex(minitaur_1step, 'Flight2', 'Domain', flight2,'Control',io_control);
srcs = {'FrontStance'
    'Flight1'
    'BackStance'
    'Flight2'};
tars = {'Flight1'
    'BackStance'
    'Flight2'
    'FrontStance'};
minitaur_1step = addEdge(minitaur_1step, srcs, tars);
minitaur_1step = setEdgeProperties(minitaur_1step, srcs, tars, 'Guard', {front_lift,back_impact,back_lift,front_impact});
%% load problem
bounds = opt.GetBounds(minitaur);
num_grid.FrontStance = 10;
num_grid.BackStance = 10;
% classs HybridTrajectoryOptimization
options = {...
    'EqualityConstraintBoundary',1e-4...
    'DistributeTimeVariable',false...
    'DistributeParameters',false};
nlp = HybridTrajectoryOptimization('Minitaur_1step',minitaur_1step,num_grid,[],options{:});
nlp.configure(bounds);
% opt.cost.Power(nlp,minitaur_1step);
% nlp.update;


