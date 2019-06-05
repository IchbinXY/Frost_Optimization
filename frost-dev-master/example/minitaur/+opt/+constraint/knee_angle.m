function knee_angle(nlp, bounds)
    % constraints for step length and step width
    
    domain = nlp.Plant;
    x = domain.States.x;
    
    % knee angle
    knee = [...
        2*pi - x('motor_front_leftR_joint') - x('motor_front_leftL_joint');
        2*pi - x('motor_back_leftR_joint') - x('motor_back_leftL_joint');
        2*pi - x('motor_front_rightR_joint') - x('motor_front_rightL_joint');
        2*pi - x('motor_back_rightR_joint') - x('motor_back_rightL_joint')];
    knee_fun = SymFunction(['kneeAngles_',domain.Name], knee, {x});
    addNodeConstraint(nlp, knee_fun, {'x'}, 'all', ...
        bounds.constrBounds.knee.lb, ...
        bounds.constrBounds.knee.ub,'Linear');
    
end

