function domain = AddVirtualConstraint(domain)
t = SymVariable('t');
p = SymVariable('p',[2,1]);
tau = (t-p(1))/(p(2)-p(1));
q = domain.States.x;
ya_2 = [...
    (q(8) - q(7))/2; q(7) + q(8);           % [ front left swing;  front left extension * 2;
    (q(12)- q(11))/2;q(11)+ q(12);          %   back left swing;   back left extension * 2;
    (q(15)- q(16))/2;q(16)+ q(15);          %   front right swing; front right extension * 2;
    (q(19)- q(20))/2;q(20)+ q(19)    ];     %   back right swing;  back right extension * 2     ];
y2_label = {'front_left_angle','front_left_length','back_left_angle','back_left_length','front_right_angle','front_right_length','back_right_angle','back_right_length'};
y2 = VirtualConstraint(domain,ya_2,'output','DesiredType','Bezier','PolyDegree',5,...
        'RelativeDegree',2,'OutputLabel',{y2_label},'PhaseType','TimeBased',...
        'PhaseVariable',tau,'PhaseParams',p,'Holonomic',true, 'LoadPath', []);
domain = addVirtualConstraint(domain,y2);
end

