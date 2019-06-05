function RightStanceConstraints(nlp, bounds, varargin)
    ip = inputParser;
    ip.addParameter('LoadPath',[],@ischar);
    ip.parse(varargin{:});
    domain = nlp.Plant;
    %% virtual constraints    
    opt.constraint.virtual_constraints(nlp, bounds, ip.Results.LoadPath);
    disp('virtual constraints');
    %% foot clearance
    left_foot_frame = sys.frames.LeftFrontFoot(domain);
    opt.constraint.foot_clearance(nlp, bounds, left_foot_frame);    
    disp('foot clearance');
    %% swing foot velocity
    opt.constraint.impact_velocity(nlp, bounds, left_foot_frame);
    disp('swing foot velocity')
    %% the rest
    opt.constraint.yaw_start(nlp, bounds);
    opt.constraint.knee_angle(nlp, bounds);
    opt.constraint.average_velocity(nlp, bounds);
end