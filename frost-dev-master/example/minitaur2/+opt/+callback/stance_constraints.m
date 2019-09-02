function stance_constraints(nlp, bounds, varargin)
ip = inputParser;
ip.addParameter('LoadPath',[],@ischar);
ip.parse(varargin{:});

opt.constraint.virtual_constraints(nlp, bounds, ip.Results.LoadPath);

opt.constraint.leg_ext(nlp, bounds);

% %opt.constraint.leg_sw_rel(nlp, bounds)
% 
opt.constraint.ground_reaction_force(nlp, bounds);

opt.constraint.average_velocity(nlp, bounds);
 
opt.constraint.bezier_symmetry(nlp,bounds);
end