function leg_sw_abs(nlp, bounds)
    % constraints for leg swing
    
    domain = nlp.Plant;
    x = domain.States.x;
    leg_sw = [...
        (x(8) - x(7)) /2 + x(5);
        (x(12)- x(11))/2 + x(5);
        (x(15)- x(16))/2 + x(5);
        (x(19)- x(20))/2 + x(5)];
    
    leg_sw_fun = SymFunction(['LegSwing_',domain.Name], leg_sw, {x});
    
    addNodeConstraint(nlp, leg_sw_fun, {'x'}, 1, ...
        bounds.constrBounds.leg_sw_bgn.lb, ...
        bounds.constrBounds.leg_sw_bgn.ub,'Linear');
    
%     addNodeConstraint(nlp, leg_sw_fun, {'x'}, 11, ...
%         bounds.constrBounds.leg_sw_mid.lb, ...
%         bounds.constrBounds.leg_sw_mid.ub,'Linear');
    
    addNodeConstraint(nlp, leg_sw_fun, {'x'}, 21, ...
        bounds.constrBounds.leg_sw_end.lb, ...
        bounds.constrBounds.leg_sw_end.ub,'Linear');
    
end

