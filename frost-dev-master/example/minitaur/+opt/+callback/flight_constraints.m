function flight_constraints(nlp, bounds, varargin)
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

% foot clearance
opt.constraint.foot_clearance(nlp, bounds, left_front_foot_frame);
opt.constraint.foot_clearance(nlp, bounds, right_front_foot_frame);
opt.constraint.foot_clearance(nlp, bounds, right_back_foot_frame);
opt.constraint.foot_clearance(nlp, bounds, left_back_foot_frame);

% swing foot velocity
% opt.constraint.impact_velocity(nlp, bounds, left_front_foot_frame);
% opt.constraint.impact_velocity(nlp, bounds, right_front_foot_frame);
% opt.constraint.impact_velocity(nlp, bounds, right_back_foot_frame);
% opt.constraint.impact_velocity(nlp, bounds, left_back_foot_frame);

opt.constraint.yaw_start(nlp,bounds);
opt.constraint.knee_angle(nlp, bounds);
% opt.constraint.average_velocity(nlp, bounds);
opt.constraint.bezier_symmetry(nlp,bounds);
end
