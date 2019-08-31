function leg_sw_rel(nlp, bounds)
    % constraints for leg swing relative to the body 
    
    domain = nlp.Plant;
    x = domain.States.x;
    leg_sw_rel = [...
        (x(8) - x(7)) /2;
        (x(12)- x(11))/2;
        (x(15)- x(16))/2;
        (x(19)- x(20))/2];
    
    leg_sw_rel_fun = SymFunction(['LegSwing_Relative_',domain.Name], leg_sw_rel, {x});
    
    addNodeConstraint(nlp, leg_sw_rel_fun, {'x'}, 'all', ...
        bounds.constrBounds.leg_sw_rel.lb, ...
        bounds.constrBounds.leg_sw_rel.ub,'Linear');
    
end

