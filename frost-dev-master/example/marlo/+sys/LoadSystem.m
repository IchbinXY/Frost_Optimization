function [system] = LoadSystem(model)

    rightStance = sys.domains.RightStance(model, []);
    rightStance.UserNlpConstraint = @opt.callback.RightStanceConstraints;
    leftStance = sys.domains.LeftStance(model, []);
    leftStance.UserNlpConstraint = @opt.callback.LeftStanceConstraints;
    
    leftImpact = RigidImpact('LeftImpact', leftStance, 'leftFootHeight'); % To leftStance
    leftImpact.addImpactConstraint(struct2array(leftStance.HolonomicConstraints), []);
    leftImpact.UserNlpConstraint = @opt.callback.LeftImpactConstraints;
    
    rightImpact = RigidImpact('RightImpact', rightStance, 'rightFootHeight'); % To rightStance
    rightImpact.addImpactConstraint(struct2array(rightStance.HolonomicConstraints), []);
    rightImpact.UserNlpConstraint = @opt.callback.RightImpactConstraints;
    
    
    io_control  = IOFeedback('IO');

    system = HybridSystem('atrias');
    system = addVertex(system, 'RightStance', 'Domain', rightStance, ...
        'Control', io_control);
    system = addVertex(system, 'LeftStance', 'Domain', leftStance, ...
        'Control', io_control);

    srcs = {'RightStance'
        'LeftStance'};

    tars = {'LeftStance'
        'RightStance'};

    system = addEdge(system, srcs, tars);
    system = setEdgeProperties(system, srcs, tars, ...
        'Guard', {leftImpact, rightImpact});
    
    
end

