function flight2_constraints(nlp, bounds, varargin)
ip = inputParser;
ip.addParameter('LoadPath',[],@ischar);
ip.parse(varargin{:});

domain = nlp.Plant;

right_front_foot_frame = sys.frames.RightFrontFoot(domain);
left_front_foot_frame = sys.frames.LeftFrontFoot(domain);
right_back_foot_frame = sys.frames.RightBackFoot(domain);
left_back_foot_frame = sys.frames.LeftBackFoot(domain);

% virtual constraints
opt.constraint.virtual_constraints(nlp, bounds, ip.Results.LoadPath);

% constraint back lift velocity at the first node  
opt.constraint.lift_velocity(nlp, bounds, left_back_foot_frame);
opt.constraint.lift_velocity(nlp, bounds, right_back_foot_frame);

% constraint front impact velocity at the last node 
opt.constraint.impact_velocity(nlp, bounds, right_front_foot_frame)
opt.constraint.impact_velocity(nlp, bounds, left_front_foot_frame)

opt.constraint.average_velocity(nlp, bounds);

opt.constraint.bezier_symmetry(nlp,bounds);
end
