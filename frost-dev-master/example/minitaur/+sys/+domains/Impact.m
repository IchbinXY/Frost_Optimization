function guard = Impact(domain,impact)
switch impact
    % TODO if we need to differential left and right legs
    case 'Front'
        guard = RigidImpact('FrontImpact',domain,'FrontFootHeight');
    case 'Back'
        guard = RigidImpact('BackImpact',domain,'BackFootHeight');
end
guard.addImpactConstraint(struct2array(domain.HolonomicConstraints),[]);
end