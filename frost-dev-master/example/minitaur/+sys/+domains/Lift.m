function guard = Lift(domain,lift)
switch lift
    case 'Front'
        % set guard (impact for now, we remove all impact constraints though)
        guard = RigidImpact('FrontLift', domain, 'FrontFootGroundReactionForce');
    case 'Back'
        guard = RigidImpact('BackLift', domain, 'BackFootGroundReactionForce');
end
% Set the impact constraint
guard.addImpactConstraint(struct2array(domain.HolonomicConstraints), []);
end