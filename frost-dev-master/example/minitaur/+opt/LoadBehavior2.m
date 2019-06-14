function [System,Domains,Guards] = LoadBehavior2(robot, varargin)
FrontStance = sys.domains.FrontStance(robot);
FrontStance.UserNlpConstraint = @opt.callback.front_stance_constraints;
BackStance = sys.domains.BackStance(robot);
BackStance.UserNlpConstraint = @opt.callback.back_stance_constraints;
Flight1 = sys.domains.Flight(robot,'BackImpact');
Flight1.UserNlpConstraint = @opt.callback.flight1_constraints;
Flight2 = sys.domains.Flight(robot,'FrontImpact');
Flight2.UserNlpConstraint = @opt.callback.flight2_constraints;
Domains = [FrontStance,Flight1,BackStance,Flight2];

FrontImpact = RigidImpact('FrontImpact',FrontStance,'FrontHeight');
FrontImpact.addImpactConstraint(struct2array(FrontStance.HolonomicConstraints),[]);
FrontImpact.UserNlpConstraint = @opt.callback.front_impact_constraints;

BackImpact = RigidImpact('BackImpact',BackStance,'BackHeight');
BackImpact.addImpactConstraint(struct2array(BackStance.HolonomicConstraints),[]);
BackImpact.UserNlpConstraint = @opt.callback.back_impact_constraints;

FrontLift = RigidImpact('FrontLift',Flight1,'FrontGRF');
FrontLift.addImpactConstraint(struct2array(Flight1.HolonomicConstraints), []);
FrontLift.UserNlpConstraint = @opt.callback.front_lift_constraints;
BackLift = RigidImpact('BackLift',Flight2,'BackGRF');
BackLift.addImpactConstraint(struct2array(Flight2.HolonomicConstraints), []);
BackLift.UserNlpConstraint = @opt.callback.back_lift_constraints;
Guards = [FrontImpact,FrontLift,BackImpact,BackLift];

System = HybridSystem('Minitaur_HS');
System = addVertex(System,{'FrontStance','Flight1','BackStance','Flight2'},'Domain',{FrontStance,Flight1,BackStance,Flight2});
srcs = {'FrontStance' 'Flight1' 'BackStance' 'Flight2'};
tars = {'Flight1' 'BackStance' 'Flight2' 'FrontStance'};
System = addEdge(System,srcs,tars);
System = setEdgeProperties(System,srcs,tars,'Guard',{FrontLift,BackImpact,BackLift,FrontImpact});
end