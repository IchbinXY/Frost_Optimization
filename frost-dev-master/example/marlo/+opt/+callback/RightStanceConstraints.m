function RightStanceConstraints(nlp, bounds, varargin)
    ip = inputParser;
    ip.addParameter('LoadPath',[],@ischar);
    ip.parse(varargin{:});
    domain = nlp.Plant;
    %% virtual constraints    
    opt.constraint.virtual_constraints(nlp, bounds, ip.Results.LoadPath);
    disp('virtual constraints');
    %% foot clearance
    [left_foot_frame] = sys.frames.LeftFoot(domain);
    opt.constraint.foot_clearance(nlp, bounds, left_foot_frame);    
    disp('foot clearance');
    %% swing toe position
    opt.constraint.step_distance(nlp, bounds);
    disp('swing toe position');
    %% swing foot velocity
    opt.constraint.impact_velocity(nlp, bounds, left_foot_frame);
    disp('swing foot velocity')
    %% feet distance
    %     opt.constraint.feet_distance(nlp, bounds);
    opt.constraint.yaw_start(nlp, bounds);
    opt.constraint.knee_angle(nlp, bounds);
    opt.constraint.average_velocity(nlp, bounds);
    disp('feet distance');
end
