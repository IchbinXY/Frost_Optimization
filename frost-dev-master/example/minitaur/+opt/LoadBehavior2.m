function [system] = LoadBehavior2(robot, varargin)
%% load hybrid system
% domain, class MINITAUR
rightStance = sys.domains.RightStance(robot, []);
rightStance.UserNlpConstraint = @opt.callback.RightStanceConstraints;
disp('right stance loaded');

leftStance = sys.domains.LeftStance(robot, []);
leftStance.UserNlpConstraint = @opt.callback.LeftStanceConstraints;
disp('left stance loaded');

% guard, class RigitImpact
leftImpact = RigidImpact('LeftImpact', leftStance, 'leftFootHeight');
leftImpact.addImpactConstraint(struct2array(leftStance.HolonomicConstraints), []);
leftImpact.UserNlpConstraint = @opt.callback.LeftImpactConstraints;
disp('left impact loaded');
rightImpact = RigidImpact('RightImpact', rightStance, 'rightFootHeight');
rightImpact.addImpactConstraint(struct2array(rightStance.HolonomicConstraints), []);
rightImpact.UserNlpConstraint = @opt.callback.RightImpactConstraints;
disp('right impact loaded');

% system, class HybridSystem
system = HybridSystem('minitaur_1step');
system = addVertex(system, 'RightStance', 'Domain', rightStance);
system = addVertex(system, 'LeftStance', 'Domain', leftStance);
srcs = {'RightStance'
    'LeftStance'};
tars = {'LeftStance'
    'RightStance'};
system = addEdge(system, srcs, tars);
system = setEdgeProperties(system, srcs, tars, 'Guard', {leftImpact, rightImpact});
disp('hybrid system loaded')
end