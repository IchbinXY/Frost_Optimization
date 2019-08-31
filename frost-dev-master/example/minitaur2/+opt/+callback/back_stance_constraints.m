function back_stance_constraints(nlp, bounds, varargin)
ip = inputParser;
ip.addParameter('LoadPath',[],@ischar);
ip.parse(varargin{:});

domain = nlp.Plant;
right_foot_frame = sys.frames.RightFrontFoot(domain);
left_foot_frame = sys.frames.LeftFrontFoot(domain);

opt.constraint.virtual_constraints(nlp, bounds, ip.Results.LoadPath);

opt.constraint.foot_clearance(nlp, bounds, left_foot_frame);
opt.constraint.foot_clearance(nlp, bounds, right_foot_frame);

% opt.constraint.leg_ext(nlp, bounds);
% 
% %opt.constraint.leg_sw_rel(nlp, bounds)
% 
% opt.constraint.ground_reaction_force(nlp, bounds);
% 
opt.constraint.average_velocity(nlp, bounds);

opt.constraint.bezier_symmetry(nlp,bounds);
end