function [domain] = AddContact_LeftFront(domain)
left_frame = sys.frames.LeftFrontFoot(domain);
p_left = getCartesianPosition(domain,left_frame);
constr_left = [p_left(1);p_left(2);p_left(3)];
hol_left = HolonomicConstraint(domain,constr_left,'LeftFront',...
    'ConstrLabel',{{'LeftFrontX','LeftFrontY','LeftFrontZ'}},...
    'DerivativeOrder',2);
domain = addHolonomicConstraint(domain,hol_left);

f_left = domain.Inputs.ConstraintWrench.fLeftFront;
mu = SymVariable('mu');
constr_left = [...
    f_left(3);                       %  fz > 0 
    f_left(1)+(mu/sqrt(2))*f_left(3);     %  fx+mu/sqrt(2)*fz > 0
   -f_left(1)+(mu/sqrt(2))*f_left(3);     % -fx+mu/sqrt(2)*fz > 0
    f_left(2)+(mu/sqrt(2))*f_left(3);     %  fy+mu/sqrt(2)*fz > 0
   -f_left(2)+(mu/sqrt(2))*f_left(3)];    % -fy+mu/sqrt(2)*fz > 0
fc_left = SymFunction(['u_friction_cone_',left_frame.Name],...
    constr_left,{f_left},{mu});
fc_label_left = {...
    'normal_force';
    'friction_x_pos';
    'friction_x_neg';
    'friction_y_pos';
    'friction_y_neg'};
fc_constr_left = UnilateralConstraint(domain,fc_left,...
    ['fc',left_frame.Name],'fLeftFront',...
    'ConstrLabel',{fc_label_left(:)'},...
    'AuxData',0.6);
domain = addUnilateralConstraint(domain,fc_constr_left);
end

