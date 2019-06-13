function bezier_symmetry(nlp,bounds)
% constraints for feet trajectory 

domain = nlp.Plant;
x = domain.States.x;

% bezier symmetry
b_lb = bounds.FrontStance.BezierSymmetry.lb;
b_ub = bounds.FrontStance.BezierSymmetry.ub;

a = SymVariable('a',[8,6]);
BezierSymmetry = [a(1:2,:);a(5:6,:)]-[a(3:4,:);a(7:8,:)];
BezierSymmetry_fun = SymFunction(['BezierSymmetry',domain.Name], BezierSymmetry, {a});

BezierSymmetry_cstr = NlpFunction('Name',BezierSymmetry_fun.Name,...
    'Dimension',4*6,...
    'lb', b_lb,...
    'ub', b_ub,...
    'Type','Linear',...
    'SymFun',BezierSymmetry_fun,...
    'DepVariables',nlp.OptVarTable.aoutput(1));

addConstraint(nlp, 'BezierSymmetry', 'first', BezierSymmetry_cstr);
end