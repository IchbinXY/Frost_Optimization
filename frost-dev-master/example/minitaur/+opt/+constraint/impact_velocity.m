function impact_velocity(nlp, bounds, frame)
    % constraints for impact velocities
    
    domain = nlp.Plant;
    x = domain.States.x;
    dx = domain.States.dx;
    
    pos = getCartesianPosition(domain, frame);  
    J_pos = jacobian(pos, x);
    vel = J_pos * dx;
    constraint_func = SymFunction(['impact_velocity_',frame.Name,'_',domain.Name], vel, {x, dx});
    
    % impact swing foot velocity
    % (Make sure foot goes downward and slightly backward)
    addNodeConstraint(nlp, constraint_func, {'x','dx'}, 'last', ...
        bounds.constrBounds.footVelocityEnd.lb, ...
        bounds.constrBounds.footVelocityEnd.ub, 'NonLinear');
    
    % start swing foot velocity
    % (Make sure foot goes upward)
%     lb = bounds.constrBounds.footVelocityBeginning.lb;
%     ub = bounds.constrBounds.footVelocityBeginning.ub;
%     addNodeConstraint(nlp, constraint_func, {'x','dx'}, 'first', lb, ub, 'NonLinear');
%     
end

