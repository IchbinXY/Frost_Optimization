function bezier_symmetry(nlp,bounds)
% constraints for feet trajectory 
domain = nlp.Plant;
x = domain.States.x;

a = SymVariable('a',[48,1]);
a_matrix = [a(1:8),a(9:16),a(17:24),a(25:32),a(33:40),a(41:48)];
BezierSymmetry = a_matrix(1:4,:)-a_matrix(5:8,:);
BezierSymmetry_fun = SymFunction(['BezierSymmetry',domain.Name], BezierSymmetry(:), {SymVariable(a(:))});

BezierSymmetry_cstr = NlpFunction('Name',BezierSymmetry_fun.Name,...
    'Dimension',4*6,...
    'lb', bounds.constrBounds.BezierSymmetry.lb,...
    'ub', bounds.constrBounds.BezierSymmetry.ub,...
    'Type','Linear',...
    'SymFun',BezierSymmetry_fun,...
    'DepVariables',nlp.OptVarTable.aoutput(1));

addConstraint(nlp, 'BezierSymmetry', 'first', BezierSymmetry_cstr);
end