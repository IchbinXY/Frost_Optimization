function [minitaur_hs,domains,guards] = load_behavior(robot, load_path, varargin)
%% load hybrid system
% domain, class MINITAUR
front_stance = sys.domains.Stance(robot,'Front','FrontLift');
front_stance.UserNlpConstraint = @opt.callback.front_stance_constraints;
disp('front stance loaded');
back_stance = sys.domains.Stance(robot,'Back','BackLift');
back_stance.UserNlpConstraint = @opt.callback.back_stance_constraints;
disp('back stance loaded');
flight1 = sys.domains.Flight(robot,'BackImpact');
flight1.UserNlpConstraint = @opt.callback.flight_constraints;
disp('flight1 loaded');
flight2 = sys.domains.Flight(robot,'FrontImpact');
flight2.UserNlpConstraint = @opt.callback.flight_constraints;
disp('flight2 loaded');
domains = [front_stance, flight1, back_stance, flight2];

% guard, class RigitImpact
front_lift = sys.domains.Lift(flight1,'Front');
front_lift.UserNlpConstraint = @opt.callback.front_lift_constraints;
disp('front lift loaded');
back_lift = sys.domains.Lift(flight2,'Back');
back_lift.UserNlpConstraint = @opt.callback.back_lift_constraints;
disp('back lift loaded');
front_impact = sys.domains.Impact(front_stance,'Front');
front_impact.UserNlpConstraint = @opt.callback.front_impact_constraints;
disp('front impact loaded');
back_impact = sys.domains.Impact(back_stance,'Back');
back_impact.UserNlpConstraint = @opt.callback.back_impact_constraints;
disp('back impact loaded');
guards = [front_lift, back_impact, back_lift, back_impact];

% system, class HybridSystem
minitaur_hs = HybridSystem('Minitaur_1step');
minitaur_hs = addVertex(minitaur_hs, {'FrontStance','Flight1','BackStance','Flight2'}, 'Domain', {front_stance,flight1,back_stance,flight2});
srcs = {'FrontStance' 'Flight1' 'BackStance' 'Flight2'};
tars = {'Flight1' 'BackStance' 'Flight2'  'FrontStance'};
minitaur_hs = addEdge(minitaur_hs, srcs, tars);
minitaur_hs = setEdgeProperties(minitaur_hs, srcs, tars, 'Guard', {front_lift,back_impact,back_lift,front_impact});
disp('hybrid system loaded')
end