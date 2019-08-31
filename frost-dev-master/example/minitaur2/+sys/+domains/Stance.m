function domain = Stance(model)
%% initialize stance domain
domain = copy(model);
domain.setName('Stance');

%% Add contact to the stance feet
% Right Front Foot
domain = sys.AddContact_RightFront(domain);
% Left Front Foot
domain = sys.AddContact_LeftFront(domain);
% Right Back Foot
domain = sys.AddContact_RightBack(domain);
% Left Back Foot
domain = sys.AddContact_LeftBack(domain);

%% Add event (ground reaction force) for the next guard (front lift) to the stance feet
f_right = domain.Inputs.ConstraintWrench.fRightFront;
fz_right = UnilateralConstraint(domain,f_right(3),'RightFrontGRF','fRightFront');
domain = addEvent(domain,fz_right);

f_left = domain.Inputs.ConstraintWrench.fLeftFront;
fz_left = UnilateralConstraint(domain,f_left(3),'LeftFrontGRF','fLeftFront');
domain = addEvent(domain,fz_left);

%% Add Virtual Constraints
domain = sys.AddVirtualConstraint(domain);
end