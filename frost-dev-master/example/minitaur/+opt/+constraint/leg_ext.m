function leg_ext(nlp, bounds)
    % constraints for leg extension
    
    domain = nlp.Plant;
    x = domain.States.x;
    
    % leg extension
    leg_ext = [...
        (x(8)  + x(7))  / 2;
        (x(12) + x(11)) / 2;
        (x(15) + x(16)) / 2;
        (x(19) + x(20)) / 2];
    
    leg_ext_fun = SymFunction(['LegExtension_',domain.Name], leg_ext, {x});
    
    addNodeConstraint(nlp, leg_ext_fun, {'x'}, 1, ...
        bounds.constrBounds.leg_ext_1.lb, ...
        bounds.constrBounds.leg_ext_1.ub,'Linear');
    
    addNodeConstraint(nlp, leg_ext_fun, {'x'}, 6, ...
        bounds.constrBounds.leg_ext_6.lb, ...
        bounds.constrBounds.leg_ext_6.ub,'Linear');
    
    addNodeConstraint(nlp, leg_ext_fun, {'x'}, 11, ...
        bounds.constrBounds.leg_ext_11.lb, ...
        bounds.constrBounds.leg_ext_11.ub,'Linear');
    
    addNodeConstraint(nlp, leg_ext_fun, {'x'}, 16, ...
        bounds.constrBounds.leg_ext_16.lb, ...
        bounds.constrBounds.leg_ext_16.ub,'Linear');
    
    addNodeConstraint(nlp, leg_ext_fun, {'x'}, 21, ...
        bounds.constrBounds.leg_ext_21.lb, ...
        bounds.constrBounds.leg_ext_21.ub,'Linear');
    
end

