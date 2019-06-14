function foot_rising(nlp, bounds, frame)
    % constraints for swing foot clearance
    
    domain = nlp.Plant;
    x = domain.States.x;

    pos = getCartesianPosition(domain, frame);    
    constraint_func = SymFunction(['foot_rising_',frame.Name,'_',domain.Name], pos(3), {x});
    % Foot Clearance Middle
    numNode = nlp.NumNode;
    addNodeConstraint(nlp, constraint_func, {'x'}, 'first', ...
        bounds.constrBounds.foot_rising_begin.lb, ...
        bounds.constrBounds.foot_rising_begin.ub, 'Nonlinear');
    addNodeConstraint(nlp, constraint_func, {'x'}, floor(2*numNode/4)+1, ...
        bounds.constrBounds.foot_rising_1.lb, ...
        bounds.constrBounds.foot_rising_1.ub,'Nonlinear');
    addNodeConstraint(nlp, constraint_func, {'x'}, 'last', ...
        bounds.constrBounds.foot_rising_end.lb, ...
        bounds.constrBounds.foot_rising_end.ub, 'Nonlinear');
end