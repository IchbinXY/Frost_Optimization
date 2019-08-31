function domain = FrontStance(model)
%% initialize stance domain
domain = copy(model);
domain.setName('FrontStance');

%% Add contact to the stance feet
% Right Front Foot
domain = sys.AddContact_RightFront(domain);
% Left Front Foot
domain = sys.AddContact_LeftFront(domain);

%% Add event (height) for the next guard (back impact)
right_foot_frame = sys.frames.RightBackFoot(domain);
p_right_nsf = getCartesianPosition(domain,right_foot_frame);
h_right_nsf = UnilateralConstraint(domain,p_right_nsf(3),'RightBackHeight','x');
domain = addEvent(domain,h_right_nsf);

left_foot_frame = sys.frames.LeftBackFoot(domain);
p_left_nsf = getCartesianPosition(domain,left_foot_frame);
h_left_nsf = UnilateralConstraint(domain,p_left_nsf(3),'LeftBackHeight','x');
domain = addEvent(domain,h_left_nsf);

%% Add Virtual Constraints
domain = sys.AddVirtualConstraint(domain);
end