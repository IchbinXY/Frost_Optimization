function domain = AddVirtualConstraint(domain)
t = SymVariable('t');
p = SymVariable('p',[2,1]);
tau = (t-p(1))/(p(2)-p(1));
q = domain.States.x;
ya_2 = [q('qHRight');
    (q('qARight')+q('qBRight'))./2;
   -q('qARight')+q('qBRight');
    q('qHLeft');
    (q('qALeft')+q('qBLeft'))./2;
   -q('qALeft')+q('qBLeft');];
y2 = VirtualConstraint(domain,ya_2,'output','DesiredType','Bezier','PolyDegree',5,...
    'RelativeDegree',2,'PhaseType','TimeBased',...
    'PhaseVariable',tau,'PhaseParams',p,'Holonomic',true, 'LoadPath', []);
domain = addVirtualConstraint(domain,y2);
end

