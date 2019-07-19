function domain = Flight(model,next_guard)
%% create flight domain
domain = copy(model);

%% Add event (height) for the next guard (impact)
switch next_guard
    case 'BackImpact'
        right_foot_frame = sys.frames.RightBackFoot(domain);
        left_foot_frame = sys.frames.LeftBackFoot(domain);
        name = 'BackHeight';
        domain.setName('Flight1');
    case 'FrontImpact'
        right_foot_frame = sys.frames.RightFrontFoot(domain);
        left_foot_frame = sys.frames.LeftFrontFoot(domain);
        name = 'FrontHeight';
        domain.setName('Flight2');
end
p_right_nsf = getCartesianPosition(domain,right_foot_frame);
h_right_nsf = UnilateralConstraint(domain,p_right_nsf(3),['Right',name],'x');
domain = addEvent(domain,h_right_nsf);

p_left_nsf = getCartesianPosition(domain,left_foot_frame);
h_left_nsf = UnilateralConstraint(domain,p_left_nsf(3),['Left',name],'x');
domain = addEvent(domain,h_left_nsf);

%% Add Virtual Constraints
domain = sys.AddVirtualConstraint(domain);
end