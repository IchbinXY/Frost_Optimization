function front_stance_constraints(nlp, bounds, varargin)
ip = inputParser;
ip.addParameter('LoadPath',[],@ischar);
ip.parse(varargin{:});

domain = nlp.Plant;

right_foot_frame = sys.frames.RightFrontFoot(domain);
left_foot_frame = sys.frames.LeftFrontFoot(domain);

% virtual constraints
opt.constraint.virtual_constraints(nlp, bounds, ip.Results.LoadPath);
% foot clearance
opt.constraint.foot_clearance(nlp, bounds, left_foot_frame);
opt.constraint.foot_clearance(nlp, bounds, right_foot_frame);

% swing foot velocity
opt.constraint.impact_velocity(nlp, bounds, left_foot_frame);
opt.constraint.impact_velocity(nlp, bounds, right_foot_frame);

%     opt.constraint.feet_distance(nlp, bounds);
opt.constraint.yaw_start(nlp, bounds);
opt.constraint.knee_angle(nlp, bounds);
opt.constraint.average_velocity(nlp, bounds);
end
