function lift_velocity(nlp, bounds, frame)
    % constraints for impact velocities
    
    domain = nlp.Plant;
    x = domain.States.x;
    dx = domain.States.dx;
    
    pos = getCartesianPosition(domain, frame);  
    J_pos = jacobian(pos, x);
    vel = J_pos * dx;
    constraint_func = SymFunction(['lift_velocity_',frame.Name,'_',domain.Name], vel, {x, dx});
    
    addNodeConstraint(nlp, constraint_func, {'x','dx'}, 'first', ...
        bounds.constrBounds.footVelocityBeginning.lb, ...
        bounds.constrBounds.footVelocityBeginning.ub, 'NonLinear');  
    addNodeConstraint(nlp, constraint_func, {'x','dx'}, 5, ...
        bounds.constrBounds.footVelocity_5.lb, ...
        bounds.constrBounds.footVelocity_5.ub, 'NonLinear');
end

