function foot_falling(nlp, bounds, frame)
    % constraints for swing foot clearance
    
    domain = nlp.Plant;
    x = domain.States.x;

    pos = getCartesianPosition(domain, frame);    
    constraint_func = SymFunction(['foot_falling_',frame.Name,'_',domain.Name], pos(3), {x});
    
    % Foot Clearance Middle
    numNode = nlp.NumNode;
    addNodeConstraint(nlp, constraint_func, {'x'}, 'first', 0.1, 0.5, 'Nonlinear');
    addNodeConstraint(nlp, constraint_func, {'x'}, floor(2*numNode/4)+1, ...
        0.07, ...
        0.35,'Nonlinear');
    addNodeConstraint(nlp, constraint_func, {'x'}, 'last', 0, 0, 'Nonlinear');
end