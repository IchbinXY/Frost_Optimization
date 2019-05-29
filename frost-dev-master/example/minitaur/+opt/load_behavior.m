function [minitaur_hs,domains,guards] = load_behavior(robot, load_path, varargin)
    %% Flat-footed wakling

    % RightStance -> LeftImpact -> LeftStance -> RightImpact
    %      ^                                          |
    %      |__________________________________________|

%     % Define domains
%     right_stance = PeriodicOpt.domain.single_support(robot, load_path, 'leg', 'right', 'guard', 'left_impact');
%     left_impact  = cassie.domain.impact(robot, load_path, 'leg', 'left');
%     left_stance = PeriodicOpt.domain.single_support(robot, load_path, 'leg', 'left', 'guard', 'right_impact');
%     right_impact  = cassie.domain.impact(robot, load_path, 'leg', 'right');
%     
%     domains = [right_stance, left_stance];
%     guards = [left_impact, right_impact];
%     
%     % Define hybrid system
%     sys = HybridSystem('Cassie');
%     sys = addVertex(sys, {'RightStance','LeftStance'}, 'Domain', {right_stance, left_stance});
%     srcs = {'RightStance','LeftStance'};
%     tars = {'LeftStance','RightStance'};
%     sys = addEdge(sys, srcs, tars);
%     sys = setEdgeProperties(sys, srcs, tars, 'Guard', {left_impact, right_impact});

%% load hybrid system
% domain, class MINITAUR
front_stance = sys.domains.Stance(robot,'Front','FrontLift');
front_stance.UserNlpConstraint = @opt.callback.front_stance_constraints;
back_stance = sys.domains.Stance(robot,'Back','BackLift');
back_stance.UserNlpConstraint = @opt.callback.back_stance_constraints;

flight1 = sys.domains.Flight(robot,'BackImpact');
flight1.UserNlpConstraint = @opt.callback.flight_constraints;
flight2 = sys.domains.Flight(robot,'FrontImpact');
flight2.UserNlpConstraint = @opt.callback.flight_constraints;

domains = [front_stance, flight1, back_stance, flight2];


% guard, class RigitImpact
front_lift = sys.domains.Lift(flight1,'Front');
front_lift.UserNlpConstraint = @opt.callback.front_lift_constraints;
back_lift = sys.domains.Lift(flight2,'Back');
back_lift.UserNlpConstraint = @opt.callback.back_lift_constraints;

front_impact = sys.domains.Impact(front_stance,'Front');
front_impact.UserNlpConstraint = @opt.callback.front_impact_constraints;
back_impact = sys.domains.Impact(back_stance,'Back');
back_impact.UserNlpConstraint = @opt.callback.back_impact_constraints;

guards = [front_lift, back_impact, back_lift, back_impact];

% system, class HybridSystem
% Define hybrid system
minitaur_hs = HybridSystem('Minitaur_1step');
minitaur_hs = addVertex(minitaur_hs, {'FrontStance','Flight1','BackStance','Flight2'}, 'Domain', {front_stance,flight1,back_stance,flight2});
srcs = {'FrontStance' 'Flight1' 'BackStance' 'Flight2'};
tars = {'Flight1' 'BackStance' 'Flight2'  'FrontStance'};
minitaur_hs = addEdge(minitaur_hs, srcs, tars);
minitaur_hs = setEdgeProperties(minitaur_hs, srcs, tars, 'Guard', {front_lift,back_impact,back_lift,front_impact});
end




