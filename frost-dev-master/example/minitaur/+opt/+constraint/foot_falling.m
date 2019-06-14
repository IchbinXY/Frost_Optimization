function foot_falling(nlp, bounds, frame)
    % constraints for swing foot clearance
    
    domain = nlp.Plant;
    x = domain.States.x;

    pos = getCartesianPosition(domain, frame);    
    constraint_func = SymFunction(['foot_falling_',frame.Name,'_',domain.Name], pos(3), {x});
    
    % Foot Clearance Middle
    numNode = nlp.NumNode;
    addNodeConstraint(nlp, constraint_func, {'x'}, 'first', ...
        bounds.constrBounds.foot_falling_begin.lb, ...
        bounds.constrBounds.foot_falling_begin.ub, 'Nonlinear');
    addNodeConstraint(nlp, constraint_func, {'x'}, floor(2*numNode/4)+1, ...
        bounds.constrBounds.foot_falling_1.lb, ...
        bounds.constrBounds.foot_falling_1.ub,'Nonlinear');
    addNodeConstraint(nlp, constraint_func, {'x'}, 'last', ...
        bounds.constrBounds.foot_falling_end.lb, ...
        bounds.constrBounds.foot_falling_end.ub, 'Nonlinear');
end