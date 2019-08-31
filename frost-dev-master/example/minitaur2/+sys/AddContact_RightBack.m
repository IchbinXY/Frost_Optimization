function domain = AddContact_RightBack(domain)
right_frame = sys.frames.RightBackFoot(domain);
p_right = getCartesianPosition(domain,right_frame);
constr_right = [p_right(1);p_right(2);p_right(3)];
hol_right = HolonomicConstraint(domain,constr_right,'RightBack',...
    'ConstrLabel',{{'RightBackX','RightBackY','RightBackZ'}},...
    'DerivativeOrder',2);
domain = addHolonomicConstraint(domain,hol_right);

f_right = domain.Inputs.ConstraintWrench.fRightBack;
mu = SymVariable('mu');
constr_right = [...
    f_right(3);                         %  fz > 0 
    f_right(1)+(mu/sqrt(2))*f_right(3);     %  fx+mu/sqrt(2)*fz > 0
   -f_right(1)+(mu/sqrt(2))*f_right(3);     % -fx+mu/sqrt(2)*fz > 0
    f_right(2)+(mu/sqrt(2))*f_right(3);     %  fy+mu/sqrt(2)*fz > 0
   -f_right(2)+(mu/sqrt(2))*f_right(3)];    % -fy+mu/sqrt(2)*fz > 0
fc_right = SymFunction(['u_friction_cone_',right_frame.Name],...
    constr_right,{f_right},{mu});
fc_label_right = {...
    'normal_force';
    'friction_x_pos';
    'friction_x_neg';
    'friction_y_pos';
    'friction_y_neg'};
fc_constr_right = UnilateralConstraint(domain,fc_right,...
    ['fc',right_frame.Name],'fRightBack',...
    'ConstrLabel',{fc_label_right(:)'},...
    'AuxData',0.6);
domain = addUnilateralConstraint(domain,fc_constr_right);
end

