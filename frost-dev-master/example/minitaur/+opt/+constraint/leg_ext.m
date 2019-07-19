function leg_ext(nlp, bounds)
    % constraints for step length and step width
    
    domain = nlp.Plant;
    x = domain.States.x;
    
    % leg extension
    leg_ext = [...
        x(8) + x(7);
        x(12) + x(11);
        x(15) + x(16);
        x(19) + x(20)];
    
    leg_ext_fun = SymFunction(['LegExtension_',domain.Name], leg_ext, {x});
    
    addNodeConstraint(nlp, leg_ext_fun, {'x'}, 1, ...
        bounds.constrBounds.leg_ext_bgn.lb, ...
        bounds.constrBounds.leg_ext_bgn.ub,'Linear');
    
    addNodeConstraint(nlp, leg_ext_fun, {'x'}, 11, ...
        bounds.constrBounds.leg_ext_mid.lb, ...
        bounds.constrBounds.leg_ext_mid.ub,'Linear');
    
    addNodeConstraint(nlp, leg_ext_fun, {'x'}, 21, ...
        bounds.constrBounds.leg_ext_end.lb, ...
        bounds.constrBounds.leg_ext_end.ub,'Linear');
    
end

