function domain = Stance(model,stance,next_guard)
% initialize stance domain
domain = copy(model);
domain.setName([stance,'Stance']);
name = [stance,'Foot'];

%% Add contact to the stance feet
switch stance
    case 'Front'
        right_foot_frame = sys.frames.RightFrontFoot(domain);
        left_foot_frame = sys.frames.LeftFrontFoot(domain);
    case 'Back'
        right_foot_frame = sys.frames.RightBackFoot(domain);
        left_foot_frame = sys.frames.LeftBackFoot(domain);
end
hol_right_foot = sys.domains.genHolonomicConstraint(domain,right_foot_frame,name,'Right');
domain = addHolonomicConstraint(domain,hol_right_foot);
hol_left_foot = sys.domains.genHolonomicConstraint(domain,left_foot_frame,name,'Left');
domain = addHolonomicConstraint(domain,hol_left_foot);

switch stance
    case 'Front'
        force_right = domain.Inputs.ConstraintWrench.fRightFrontFoot;
        force_left = domain.Inputs.ConstraintWrench.fLeftFrontFoot;
    case 'Back'
        force_right = domain.Inputs.ConstraintWrench.fRightBackFoot;
        force_left = domain.Inputs.ConstraintWrench.fLeftBackFoot;
end
uni_right_foot = sys.domains.genUnilateralConstraint(domain,force_right,right_foot_frame,name,'Right');
domain = addUnilateralConstraint(domain,uni_right_foot);
uni_left_foot = sys.domains.genUnilateralConstraint(domain,force_left,left_foot_frame,name,'Left');
domain = addUnilateralConstraint(domain,uni_left_foot);

%% Add event (ground reaction force) for the next guard (lift)
switch next_guard
    case 'FrontLift'
        force_right = domain.Inputs.ConstraintWrench.fRightFrontFoot;
        force_left = domain.Inputs.ConstraintWrench.fLeftFrontFoot;
        name = 'FrontFootGroundReactionForce';
        dep_left = 'fLeftFrontFoot';
        dep_right = 'fRightFrontFoot';
    case 'BackLift'
        force_right = domain.Inputs.ConstraintWrench.fRightBackFoot;
        force_left = domain.Inputs.ConstraintWrench.fLeftBackFoot;
        name = 'BackFootGroundReactionForce';
        dep_left = 'fLeftBackFoot';
        dep_right = 'fRightBackFoot';
end
f_right = UnilateralConstraint(domain,force_right(3),['Right',name],dep_right);
domain = addEvent(domain,f_right);

f_left = UnilateralConstraint(domain,force_left(3),['Left',name],dep_left);
domain = addEvent(domain,f_left);
%% Add Virtual Constraints
t = SymVariable('t');
p = SymVariable('p',[2,1]);
tau = (t-p(1))/(p(2)-p(1));
q = domain.States.x;
ya_2 = [...
    (q('motor_front_leftL_joint')+q('motor_front_leftR_joint'))./2;
    -q('motor_front_leftL_joint')+q('motor_front_leftR_joint');
    (q('motor_back_leftL_joint')+q('motor_back_leftR_joint'))./2;
    -q('motor_back_leftL_joint')+q('motor_back_leftR_joint');
    (q('motor_front_rightL_joint')+q('motor_front_rightR_joint'))./2;
    -q('motor_front_rightL_joint')+q('motor_front_rightR_joint');
    (q('motor_back_rightL_joint')+q('motor_back_rightR_joint'))./2;
    -q('motor_back_rightL_joint')+q('motor_back_rightR_joint')];
y2_label = {'front_left_angle','front_left_length','back_left_angle','back_left_length','front_right_angle','front_right_length','back_right_angle','back_right_length'};
y2 = VirtualConstraint(domain,ya_2,'output','DesiredType','Bezier','PolyDegree',5,...
        'RelativeDegree',2,'OutputLabel',{y2_label},'PhaseType','TimeBased',...
        'PhaseVariable',tau,'PhaseParams',p,'Holonomic',true, 'LoadPath', []);
domain = addVirtualConstraint(domain,y2);
end