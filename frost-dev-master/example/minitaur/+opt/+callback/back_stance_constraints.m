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

% opt.constraint.impact_velocity(nlp, bounds, left_foot_frame);
% opt.constraint.impact_velocity(nlp, bounds, right_foot_frame);

% opt.constraint.yaw_start(nlp, bounds);

opt.constraint.knee_angle(nlp, bounds);

opt.constraint.average_velocity(nlp, bounds);

opt.constraint.bezier_symmetry(nlp,bounds);
end