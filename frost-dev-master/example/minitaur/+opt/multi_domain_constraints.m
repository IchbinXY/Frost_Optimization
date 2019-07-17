function [nlp] = multi_domain_constraints(nlp, bounds)
% constraints for average velocity
x0 = SymVariable('x0',[22,1]);
xf = SymVariable('xf',[22,1]);
T1 = SymVariable('t1',[2,1]);
T3 = SymVariable('t3',[2,1]);
T5 = SymVariable('t5',[2,1]);
T7 = SymVariable('t7',[2,1]);
T_total = T1(2)-T1(1)+T3(2)-T3(1)+T5(2)-T5(1)+T7(2)-T7(1);
AvgVelocity = [(xf(1)-x0(1))/T_total
    (xf(2)-x0(2))/T_total];
AvgVelocity_fun = SymFunction('AvgVelocity',AvgVelocity,{T1,T3,T5,T7,x0,xf});
x0_var = nlp.Phase(1).OptVarTable.x(1);
xf_var = nlp.Phase(7).OptVarTable.x(end);
T1_var = nlp.Phase(1).OptVarTable.T(1);
T3_var = nlp.Phase(3).OptVarTable.T(1);
T5_var = nlp.Phase(5).OptVarTable.T(1);
T7_var = nlp.Phase(7).OptVarTable.T(1);
AvgVelocity_cstr = NlpFunction('Name',AvgVelocity_fun.Name,...
    'Dimension',2,...
    'lb',bounds.Flight2.constrBounds.AvgVelocity.lb, ...
    'ub',bounds.Flight2.constrBounds.AvgVelocity.ub,...
    'Type','Nonlinear',...
    'SymFun',AvgVelocity_fun,...
    'DepVariables',[T1_var,T3_var,T5_var,T7_var,x0_var,xf_var]);
addConstraint(nlp.Phase(7), 'AvgVelocity', 'first', AvgVelocity_cstr);

% Front TD and Back LO
xf2 = SymVariable('xf2',[22,1]);
xf1 = SymVariable('xf1',[22,1]);
x02 = SymVariable('x02',[22,1]);
x01 = SymVariable('x01',[22,1]);
front_LO = x01(7)-x01(8);
front_TD = xf2(7)-xf2(8);
back_LO  = x02(11)-x02(12);
back_TD  = xf1(11)-xf1(12);
AngleDifference = [front_LO+back_TD
    front_TD+back_LO];
AngleDifference_fun = SymFunction('AngleDifference',AngleDifference,{xf2,xf1,x02,x01});
xf_flight2_var = nlp.Phase(7).OptVarTable.x(end);
xf_flight1_var = nlp.Phase(3).OptVarTable.x(end);
x0_flight2_var = nlp.Phase(7).OptVarTable.x(1);
x0_flight1_var = nlp.Phase(3).OptVarTable.x(1);
AngleDifference_cstr = NlpFunction('Name',AngleDifference_fun.Name,...
    'Dimension',2,...
    'lb',bounds.Flight2.constrBounds.AngleDifference.lb, ...
    'ub',bounds.Flight2.constrBounds.AngleDifference.ub,...
    'Type','Linear',...
    'SymFun',AngleDifference_fun,...
    'DepVariables',[xf_flight2_var,xf_flight1_var,x0_flight2_var,x0_flight1_var]);
addConstraint(nlp.Phase(7), 'AngleDifference', 'last', AngleDifference_cstr);
end
