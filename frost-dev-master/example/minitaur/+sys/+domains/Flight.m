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
t = SymVariable('t');
p = SymVariable('p',[2,1]);
tau = (t-p(1))/(p(2)-p(1));
q = domain.States.x;
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
        'PhaseVariable',tau,'PhaseParams',p,'Holonomic',true, 'LoadPath', []);
domain = addVirtualConstraint(domain,y2);
end