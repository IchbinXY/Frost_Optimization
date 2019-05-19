function step_distance(nlp, bounds)
    % constraints for step length and step width
    
    domain = nlp.Plant;
    x = domain.States.x;
    
    right_front_foot_frame = sys.frames.RightFrontFoot(domain);
    left_front_foot_frame = sys.frames.LeftFrontFoot(domain);
    right_back_foot_frame = sys.frames.RightBackFoot(domain);
    left_back_foot_frame = sys.frames.LeftBackFoot(domain);
    
    right_front_foot = getCartesianPosition(domain, right_front_foot_frame);  
    left_front_foot = getCartesianPosition(domain, left_front_foot_frame);
    right_back_foot = getCartesianPosition(domain, right_back_foot_frame);  
    left_back_foot = getCartesianPosition(domain, left_back_foot_frame);
    
    constraint_left = tomatrix(left_front_foot(1:2) - left_back_foot(1:2));
    constraint_right = tomatrix(right_front_foot(1:2) - right_back_foot(1:2));
    
    constraint_left_func = SymFunction(['step_distance_left',domain.Name], constraint_left, {x});
    constraint_right_func = SymFunction(['step_distance_right',domain.Name], constraint_right, {x});
  
    lb = [bounds.constrBounds.stepWidth.lb
        bounds.constrBounds.stepLength.lb];
    ub = [bounds.constrBounds.stepWidth.ub
        bounds.constrBounds.stepLength.ub];
    
    addNodeConstraint(nlp, constraint_left_func, {'x'}, 'first', lb, ub, 'NonLinear');
    addNodeConstraint(nlp, constraint_right_func, {'x'}, 'first', lb, ub, 'NonLinear');

    wt = 0.3662;
    lb = [-wt-0.01
        0-0.01];
    ub = [-wt+0.01
        0+0.01];
    
    addNodeConstraint(nlp, constraint_left_func, {'x'}, floor(nlp.NumNode/2)+1, lb, ub, 'NonLinear');
    addNodeConstraint(nlp, constraint_right_func, {'x'}, floor(nlp.NumNode/2)+1, lb, ub, 'NonLinear');
end

