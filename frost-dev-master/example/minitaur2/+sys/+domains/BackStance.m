function domain = BackStance(model)
%% initialize stance domain
domain = copy(model);
domain.setName('BackStance');

%% Add contact to the stance feet
% Right Back Foot
domain = sys.AddContact_RightBack(domain);
% Left Back Foot
domain = sys.AddContact_LeftBack(domain);

%% Add event (ground reaction force) for the next guard (back lift) to the stance feet
f_right = domain.Inputs.ConstraintWrench.fRightBack;
fz_right = UnilateralConstraint(domain,f_right(3),'RightBackGRF','fRightBack');
domain = addEvent(domain,fz_right);

f_left = domain.Inputs.ConstraintWrench.fLeftBack;
fz_left = UnilateralConstraint(domain,f_left(3),'LeftBackGRF','fLeftBack');
domain = addEvent(domain,fz_left);

%% Add Virtual Constraints
domain = sys.AddVirtualConstraint(domain);
end