function [nlp] = multi_domain_constraints(nlp, bounds)
%MULTI_DOMAIN_CONSTRAINTS  Add constraints that go across multiple domains
    FrontStance = nlp.Phase(1);
    leftStance = nlp.Phase(3);
    
    %% Bezier symmetry
    [N,M] = size(FrontStance.Plant.Params.atime);
    selected = SymVariable('s',[N,1]);
    a1  = SymVariable('a1',[N,M]);
    a2  = SymVariable('a2',[N,M]);
    constraint_matrix = repmat(selected,1,M) .* ...
        ([-a2(6:7,:);a2(8:10,:);-a2(1:2,:);a2(3:5,:)] - a1);
    constraint = constraint_matrix(:);
    BezierSymmetry = SymFunction('BezierSymmetry', constraint, {SymVariable(a1(:)),SymVariable(a2(:))}, selected);

    selected = ones(10,1);
    
    BezierSymmetry_cstr = NlpFunction('Name','BezierSymmetry',...
        'Dimension',N*M,...
        'lb', bounds.RightStance.BezierSymmetry.lb,...
        'ub', bounds.RightStance.BezierSymmetry.ub,...
        'Type','Linear',...
        'SymFun',BezierSymmetry,...
        'DepVariables',[nlp.Phase(1).OptVarTable.atime(end), leftStance.OptVarTable.atime(1)],...
        'AuxData',selected);

    addConstraint(FrontStance, 'BezierSymmetry', 'last', BezierSymmetry_cstr);
end
