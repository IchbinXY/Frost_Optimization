function [System,Domains,Guards] = LoadBehavior2(robot, varargin)
FrontStance = sys.domains.FrontStance(robot);
FrontStance.UserNlpConstraint = @opt.callback.front_stance_constraints;
BackStance = sys.domains.BackStance(robot);
BackStance.UserNlpConstraint = @opt.callback.back_stance_constraints;

end