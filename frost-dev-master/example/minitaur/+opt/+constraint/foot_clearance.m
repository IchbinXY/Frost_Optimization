function foot_clearance(nlp, bounds, frame)
    % constraints for swing foot clearance
    
    domain = nlp.Plant;
    x = domain.States.x;
    pos = getCartesianPosition(domain, frame);    
    constraint_func = SymFunction(['foot_clearance_',frame.Name,'_',domain.Name], pos(3), {x});

    addNodeConstraint(nlp, constraint_func, {'x'}, 'all', ...
        bounds.constrBounds.foot_clearance.lb, ...
        bounds.constrBounds.foot_clearance.ub, 'Nonlinear');
    
end

