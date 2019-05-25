function uni_constr = genUnilateralConstraint(domain,force,frame,stance,side)
name = [side,stance];
mu = SymVariable('mu');
constr = [...
    force(3)-300;                       %  fz-300 > 0 
    force(1)+(mu/sqrt(2))*force(3);     %  fx+mu/sqrt(2)*fz > 0
   -force(1)+(mu/sqrt(2))*force(3);     % -fx+mu/sqrt(2)*fz > 0
    force(2)+(mu/sqrt(2))*force(3);     %  fy+mu/sqrt(2)*fz > 0
   -force(2)+(mu/sqrt(2))*force(3)];    % -fy+mu/sqrt(2)*fz > 0
fc_SymFun = SymFunction(['u_friction_cone_',frame.Name],constr,{force},{mu});
uni_constr = UnilateralConstraint(domain,fc_SymFun,...
    ['fc',frame.Name],['f',name],...
    'ConstrLabel',{{'normal_force','friction_x_pos','friction_x_neg','friction_y_pos','friction_y_neg'}},...
    'AuxData',0.6); % fric_coef.mu;fric_coef.gamma
end