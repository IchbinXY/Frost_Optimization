function domain = AddVirtualConstraint(domain)
t = SymVariable('t');
p = SymVariable('p',[2,1]);
tau = (t-p(1))/(p(2)-p(1));
q = domain.States.x;
ya_2 = [...
    (q('motor_front_leftL_joint') - q('motor_front_leftR_joint'))/2+pi;
     q('motor_front_leftL_joint') + q('motor_front_leftR_joint');
    (q('motor_back_leftL_joint')  - q('motor_back_leftR_joint'))/2+pi;
     q('motor_back_leftL_joint')  + q('motor_back_leftR_joint');
   (-q('motor_front_rightL_joint')+ q('motor_front_rightR_joint'))/2+pi;
     q('motor_front_rightL_joint')+ q('motor_front_rightR_joint');
   (-q('motor_back_rightL_joint') + q('motor_back_rightR_joint'))/2+pi;
     q('motor_back_rightL_joint') + q('motor_back_rightR_joint')];
y2_label = {'front_left_angle','front_left_length','back_left_angle','back_left_length','front_right_angle','front_right_length','back_right_angle','back_right_length'};
y2 = VirtualConstraint(domain,ya_2,'output','DesiredType','Bezier','PolyDegree',5,...
        'RelativeDegree',2,'OutputLabel',{y2_label},'PhaseType','TimeBased',...
        'PhaseVariable',tau,'PhaseParams',p,'Holonomic',true, 'LoadPath', []);
domain = addVirtualConstraint(domain,y2);
end

