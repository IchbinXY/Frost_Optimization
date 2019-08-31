function domain = Flight(model)
%% create flight domain
domain = copy(model);
domain.setName('Flight');

%% Add event (height) for the next guard (front impact)
right_foot_frame = sys.frames.RightFrontFoot(domain);
p_right_nsf = getCartesianPosition(domain,right_foot_frame);
h_right_nsf = UnilateralConstraint(domain,p_right_nsf(3),'RightFrontHeight','x');
domain = addEvent(domain,h_right_nsf);

left_foot_frame = sys.frames.LeftFrontFoot(domain);
p_left_nsf = getCartesianPosition(domain,left_foot_frame);
h_left_nsf = UnilateralConstraint(domain,p_left_nsf(3),'LeftFrontHeight','x');
domain = addEvent(domain,h_left_nsf);

%% Add Virtual Constraints
domain = sys.AddVirtualConstraint(domain);
end