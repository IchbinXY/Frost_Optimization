function [System,Domains,Guards] = LoadBehavior(robot, varargin)
%% Domains
FrontStance = sys.domains.FrontStance(robot);
FrontStance.UserNlpConstraint = @opt.callback.front_stance_constraints;

Stance = sys.domains.Stance(robot);
Stance.UserNlpConstraint = @opt.callback.stance_constraints;

BackStance = sys.domains.BackStance(robot);
BackStance.UserNlpConstraint = @opt.callback.back_stance_constraints;

Flight = sys.domains.Flight(robot);
Flight.UserNlpConstraint = @opt.callback.flight_constraints;

Domains = [FrontStance,Stance,BackStance,Flight];

%% Guards
FrontImpact = RigidImpact('FrontImpact',FrontStance,'FrontHeight');
FrontImpact.addImpactConstraint(struct2array(FrontStance.HolonomicConstraints),[]);
FrontImpact.UserNlpConstraint = @opt.callback.front_impact_constraints;

BackImpact = RigidImpact('BackImpact',Stance,'BackHeight');
BackImpact.addImpactConstraint(struct2array(Stance.HolonomicConstraints),[]);
BackImpact.UserNlpConstraint = @opt.callback.back_impact_constraints;

FrontLift = RigidImpact('FrontLift',BackStance,'FrontGRF');
FrontLift.addImpactConstraint(struct2array(BackStance.HolonomicConstraints),[]);
FrontLift.UserNlpConstraint = @opt.callback.front_lift_constraints;

BackLift = RigidImpact('BackLift',Flight,'BackGRF');
BackLift.addImpactConstraint(struct2array(Flight.HolonomicConstraints),[]);
BackLift.UserNlpConstraint = @opt.callback.back_lift_constraints;

Guards = [BackImpact,FrontLift,BackLift,FrontImpact];

%% System
System = HybridSystem('Minitaur_HS');
System = addVertex(System,{'FrontStance','Stance','BackStance','Flight'},'Domain',{FrontStance,Stance,BackStance,Flight});
srcs = {'FrontStance' 'Stance' 'BackStance' 'Flight'};
tars = {'Stance' 'BackStance' 'Flight' 'FrontStance'};
System = addEdge(System,srcs,tars);
System = setEdgeProperties(System,srcs,tars,'Guard',{BackImpact,FrontLift,BackLift,FrontImpact});
end