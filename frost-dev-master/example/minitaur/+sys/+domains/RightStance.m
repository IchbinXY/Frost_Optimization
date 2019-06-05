function domain = RightStance(model, load_path)
domain = copy(model);
domain.setName('RightStance');
if nargin < 2
    load_path = [];
end
%% Add contact
fric_coef.mu = 0.6;
fric_coef.gamma = 100;
right_foot= sys.frames.RightFrontFoot(model);
p_right_foot = getCartesianPosition(domain, right_foot);
r_right_foot = getRelativeEulerAngles(domain, right_foot);
constr = [p_right_foot(1);p_right_foot(2);p_right_foot(3);r_right_foot(3)];
hol = HolonomicConstraint(domain, constr, 'RightFoot',...
        'ConstrLabel',{{'RightFootX','RightFootY','RightFootZ','RightFootYaw'}},...
        'DerivativeOrder',2);
domain = addHolonomicConstraint(domain,hol);

right_back_foot_frame= sys.frames.RightBackFoot(model);
p_right_back_foot = getCartesianPosition(domain, right_back_foot_frame);
r_right_back_foot = getRelativeEulerAngles(domain, right_back_foot_frame);
constr = [p_right_back_foot(1);p_right_back_foot(2);p_right_back_foot(3);r_right_back_foot(3)];
hol = HolonomicConstraint(domain, constr, 'RightBackFoot',...
    'ConstrLabel',{{'RightBackFootX','RightBackFootY','RightBackFootZ','RightBackFootYaw'}},...
    'DerivativeOrder',2);
domain = addHolonomicConstraint(domain,hol);

left_back_foot_frame= sys.frames.LeftBackFoot(model);
p_left_back_foot = getCartesianPosition(domain, left_back_foot_frame);
r_left_back_foot = getRelativeEulerAngles(domain, left_back_foot_frame);
constr = [p_left_back_foot(1);p_left_back_foot(2);p_left_back_foot(3);r_left_back_foot(3)];
hol = HolonomicConstraint(domain, constr, 'LeftBackFoot',...
    'ConstrLabel',{{'LeftBackFootX','LeftBackFootY','LeftBackFootZ','LeftBackFootYaw'}},...
    'DerivativeOrder',2);
domain = addHolonomicConstraint(domain,hol);

f = domain.Inputs.ConstraintWrench.fRightFoot;
mu = SymVariable('mu');
gamma = SymVariable('gamma');
constr = [f(3) - 300; % fz >= 0
    f(1) + (mu/sqrt(2))*f(3);  % -mu/sqrt(2) * fz < fx
   -f(1) + (mu/sqrt(2))*f(3);  % fx < mu/sqrt(2) * fz
    f(2) + (mu/sqrt(2))*f(3);  % -mu/sqrt(2) * fz < fu
   -f(2) + (mu/sqrt(2))*f(3);  % fy < mu/sqrt(2) * fz
    f(4) + gamma * f(3);       % -gamma * fz < wy
   -f(4) + gamma * f(3)];      % wy < gamma * fz
friction_cone = SymFunction(['u_friction_cone_', right_foot.Name],...
    constr,{f},{[mu;gamma]});
fc_label = {'normal_force';
    'friction_x_pos';
    'friction_x_neg';
    'friction_y_pos';
    'friction_y_neg';
    'tor_firction_neg';
    'tor_firction_pos';
    };
auxdata = [fric_coef.mu; fric_coef.gamma];
fc_cstr = UnilateralConstraint(domain, friction_cone,...
    ['fc' right_foot.Name], 'fRightFoot', ...
    'ConstrLabel',{fc_label(:)'},...
    'AuxData',auxdata);
domain = addUnilateralConstraint(domain, fc_cstr);

f = domain.Inputs.ConstraintWrench.fRightBackFoot;
mu = SymVariable('mu');
gamma = SymVariable('gamma');
constr = [f(3) - 300; % fz >= 0
    f(1) + (mu/sqrt(2))*f(3);  % -mu/sqrt(2) * fz < fx
   -f(1) + (mu/sqrt(2))*f(3);  % fx < mu/sqrt(2) * fz
    f(2) + (mu/sqrt(2))*f(3);  % -mu/sqrt(2) * fz < fu
   -f(2) + (mu/sqrt(2))*f(3);  % fy < mu/sqrt(2) * fz
    f(4) + gamma * f(3);       % -gamma * fz < wy
   -f(4) + gamma * f(3)];      % wy < gamma * fz
friction_cone = SymFunction(['u_friction_cone_', right_back_foot_frame.Name],...
    constr,{f},{[mu;gamma]});
fc_label = {'normal_force';
    'friction_x_pos';
    'friction_x_neg';
    'friction_y_pos';
    'friction_y_neg';
    'tor_firction_neg';
    'tor_firction_pos';
    };
auxdata = [fric_coef.mu; fric_coef.gamma];
fc_cstr = UnilateralConstraint(domain, friction_cone,...
    ['fc' right_back_foot_frame.Name], 'fRightBackFoot', ...
    'ConstrLabel',{fc_label(:)'},...
    'AuxData',auxdata);
domain = addUnilateralConstraint(domain, fc_cstr);

f = domain.Inputs.ConstraintWrench.fLeftBackFoot;
mu = SymVariable('mu');
gamma = SymVariable('gamma');
constr = [f(3) - 300; % fz >= 0
    f(1) + (mu/sqrt(2))*f(3);  % -mu/sqrt(2) * fz < fx
   -f(1) + (mu/sqrt(2))*f(3);  % fx < mu/sqrt(2) * fz
    f(2) + (mu/sqrt(2))*f(3);  % -mu/sqrt(2) * fz < fu
   -f(2) + (mu/sqrt(2))*f(3);  % fy < mu/sqrt(2) * fz
    f(4) + gamma * f(3);       % -gamma * fz < wy
   -f(4) + gamma * f(3)];      % wy < gamma * fz
friction_cone = SymFunction(['u_friction_cone_', left_back_foot_frame.Name],...
    constr,{f},{[mu;gamma]});
fc_label = {'normal_force';
    'friction_x_pos';
    'friction_x_neg';
    'friction_y_pos';
    'friction_y_neg';
    'tor_firction_neg';
    'tor_firction_pos';
    };
auxdata = [fric_coef.mu; fric_coef.gamma];
fc_cstr = UnilateralConstraint(domain, friction_cone,...
    ['fc' left_back_foot_frame.Name], 'fLeftBackFoot', ...
    'ConstrLabel',{fc_label(:)'},...
    'AuxData',auxdata);
domain = addUnilateralConstraint(domain, fc_cstr);

%% Add event
left_foot = sys.frames.LeftFrontFoot(model);
p_swingFoot = getCartesianPosition(domain, left_foot);
h_nsf = UnilateralConstraint(domain,p_swingFoot(3),'leftFootHeight','x');
domain = addEvent(domain, h_nsf);

% phase variable: time
t = SymVariable('t');
p = SymVariable('p',[2,1]);
tau = (t-p(1))/(p(2)-p(1));
q = domain.States.x;
% relative degree two outputs:
ya_2 = [...
    (q('motor_front_leftL_joint') - q('motor_front_leftR_joint'))./2+pi;
     q('motor_front_leftL_joint') + q('motor_front_leftR_joint');
    (q('motor_back_leftL_joint')  - q('motor_back_leftR_joint'))./2+pi;
     q('motor_back_leftL_joint')  + q('motor_back_leftR_joint');
   (-q('motor_front_rightL_joint')+ q('motor_front_rightR_joint'))./2+pi;
     q('motor_front_rightL_joint')+ q('motor_front_rightR_joint');
   (-q('motor_back_rightL_joint') + q('motor_back_rightR_joint'))./2+pi;
     q('motor_back_rightL_joint') + q('motor_back_rightR_joint')];
y2_label = {'front_left_angle','front_left_length','back_left_angle','back_left_length','front_right_angle','front_right_length','back_right_angle','back_right_length'};
y2 = VirtualConstraint(domain,ya_2,'output','DesiredType','Bezier','PolyDegree',5,...
    'RelativeDegree',2,'OutputLabel',{y2_label},'PhaseType','TimeBased',...
    'PhaseVariable',tau,'PhaseParams',p,'Holonomic',true, 'LoadPath', load_path);
domain = addVirtualConstraint(domain,y2);
end