clc;clear;
restoredefaultpath;matlabrc;
cur = pwd;
addpath(genpath(cur));
addpath('../../');
frost_addpath;
export_path = 'gen/opt';
%% load robot model
% class MINITAUR
minitaur = MINITAUR('urdf/minitaur.urdf');
minitaur.configureDynamics('DelayCoriolisSet',false)
%% load hybrid system
% class MINITAUR
front_stance = Stance(minitaur,'Front');
front_stance.UserNlpConstraint = str2func('front_stance_constraints');
back_stance = Stance(minitaur,'Back');
back_stance.UserNlpConstraint = str2func('back_stance_constraints');
% class RigitImpact
front_impact = Impact(front_stance,'Front');
front_impact.UserNlpConstraint = str2func('front_impact_constraints');
back_impact = Impact(front_stance,'Back');
back_impact.UserNlpConstraint = str2func('back_impact_constraints');
% class HybridSystem
io_control = IOFeedback('IO');
minitaur_1step = HybridSystem('Minitaur_1step');
minitaur_1step = addVertex(minitaur_1step, 'FrontStance', 'Domain', front_stance,'Control',io_control);
minitaur_1step = addVertex(minitaur_1step, 'BackStance', 'Domain', back_stance,'Control',io_control);
srcs = {'FrontStance'
    'BackStance'};
tars = {'BackStance'
    'FrontStance'};
minitaur_1step = addEdge(minitaur_1step, srcs, tars);
minitaur_1step = setEdgeProperties(minitaur_1step, srcs, tars, 'Guard', {front_impact,back_impact});
%% load problem
bounds = opt.GetBounds(minitaur);
num_grid.FrontStance = 10;
num_grid.BackStance = 10;
% classs HybridTrajectoryOptimization
options = {...
    'EqualityConstraintBoundary',1e-4...
    'DistributeTimeVariable',false...
    'DistributeParameters',false};
nlp = HybridTrajectoryOptimization('Minitaur_1step',minitaur_1step,num_grid,[],options{:});
nlp.configure(bounds);
opt.cost.Power(nlp,minitaur_1step);
nlp.update;
%%
% solver = IpoptApplication(nlp);
% tic
% [sol, info] = optimize(solver);
% toc
% [tspan, states, inputs, params] = exportSolution(nlp, sol);
% gait = struct(...
%     'tspan',tspan,...
%     'states',states,...
%     'inputs',inputs,...
%     'params',params);

%% functions
function domain = Stance(model,position)
domain = copy(model);
domain.setName([position,'Stance']);
name = [position,'Foot'];

%% Add contact to the 'position' feet
switch position
    case 'Front'
        right_foot_frame = sys.frames.RightFrontFoot(domain);
        left_foot_frame = sys.frames.LeftFrontFoot(domain);
    case 'Back'
        right_foot_frame = sys.frames.RightBackFoot(domain);
        left_foot_frame = sys.frames.LeftBackFoot(domain);
end
hol_right_foot = genHolonomicConstraint(domain,right_foot_frame,name,'Right');
domain = addHolonomicConstraint(domain,hol_right_foot);
hol_left_foot = genHolonomicConstraint(domain,left_foot_frame,name,'Left');
domain = addHolonomicConstraint(domain,hol_left_foot);

switch position
    case 'Front'
        force_right = domain.Inputs.ConstraintWrench.fRightFrontFoot;
        force_left = domain.Inputs.ConstraintWrench.fLeftFrontFoot;
    case 'Back'
        force_right = domain.Inputs.ConstraintWrench.fRightBackFoot;
        force_left = domain.Inputs.ConstraintWrench.fLeftBackFoot;
end
uni_right_foot = genUnilateralConstraint(domain,force_right,right_foot_frame,name,'Right');
domain = addUnilateralConstraint(domain,uni_right_foot);
uni_left_foot = genUnilateralConstraint(domain,force_left,left_foot_frame,name,'Left');
domain = addUnilateralConstraint(domain,uni_left_foot);

%% Add height to the non 'position' feet
switch position
    case 'Front'
        right_foot_frame = sys.frames.RightBackFoot(domain);
        left_foot_frame = sys.frames.RightBackFoot(domain);
        name = 'BackFootHeight';
    case 'Back'
        right_foot_frame = sys.frames.RightFrontFoot(domain);
        left_foot_frame = sys.frames.RightFrontFoot(domain);
        name = 'FrontFootHeight';
end
h_right_foot = genEventFuncs(domain,right_foot_frame,name,'Right');
domain = addEvent(domain,h_right_foot);
h_left_foot = genEventFuncs(domain,left_foot_frame,name,'Left');
domain = addEvent(domain,h_left_foot);
while 0
t = SymVariable('t');
p = SymVariable('p',[2,1]);
tau = (t-p(1))/(p(2)-p(1));
q = domain.States.x;
ya_2 = [...
    q('motor_front_leftL_joint');...
    q('motor_front_leftR_joint');...
    q('knee_front_leftL_link');...
    q('knee_front_leftR_link');...
    q('motor_back_leftL_joint');...
    q('motor_back_leftR_joint');...
    q('knee_back_leftL_link');...
    q('knee_back_leftR_link');...
    q('motor_front_rightL_joint');...
    q('motor_front_rightR_joint');...
    q('knee_front_rightL_link');...
    q('knee_front_rightR_link');...
    q('motor_back_rightL_joint');...
    q('motor_back_rightR_joint');...
    q('knee_back_rightL_link');...
    q('knee_back_rightR_link')];

y2_label = {...
    'motor_front_leftL_joint',...
    'motor_front_leftR_joint',...
    'knee_front_leftL_link',...
    'knee_front_leftR_link',...
    'motor_back_leftL_joint',...
    'motor_back_leftR_joint',...
    'knee_back_leftL_link',...
    'knee_back_leftR_link',...
    'motor_front_rightL_joint',...
    'motor_front_rightR_joint',...
    'knee_front_rightL_link',...
    'knee_front_rightR_link',...
    'motor_back_rightL_joint',...
    'motor_back_rightR_joint',...
    'knee_back_rightL_link',...
    'knee_back_rightR_link'};
% optional: load expression for virtual constraints while creating
y2 = VirtualConstraint(domain,ya_2,'time','DesiredType','Bezier','PolyDegree',5,...
    'RelativeDegree',2,'OutputLabel',{y2_label},'PhaseType','TimeBased',...
    'PhaseVariable',tau,'PhaseParams',p,'Holonomic',true,...
    'LoadPath', []);
domain = addVirtualConstraint(domain,y2);
end
end

function hol_constr = genHolonomicConstraint(domain,frame,position,side)
name = [side,position];
p_foot = getCartesianPosition(domain,frame);
r_foot = getRelativeEulerAngles(domain,frame);
hol_foot_SymFun = [...
    p_foot(1);...
    p_foot(2);...
    p_foot(3);...
    r_foot(3)];
hol_constr = HolonomicConstraint(domain,hol_foot_SymFun,name,...
    'ConstrLabel',{{[name,'X'],[name,'Y'],[name,'Z'],[name,'Yaw']}},...
    'DerivativeOrder',2);
end

function uni_constr = genUnilateralConstraint(domain,force,frame,position,side)
name = [side,position];
mu = SymVariable('mu');
gamma = SymVariable('gamma');
constr = [...
    force(3)-300;
    force(1)+(mu/sqrt(2))*force(3);
   -force(1)+(mu/sqrt(2))*force(3);
    force(2)+(mu/sqrt(2))*force(3);
   -force(2)+(mu/sqrt(2))*force(3);
    force(4)+gamma*force(3);
   -force(4)+gamma*force(3)];
fc_SymFun = SymFunction(['u_friction_cone_',frame.Name],constr,{force},{[mu;gamma]});
uni_constr = UnilateralConstraint(domain,fc_SymFun,...
    ['fc',frame.Name],['f',name],...
    'ConstrLabel',{ {'normal_force','friction_x_pos','friction_x_neg','friction_y_pos','friction_y_neg','tor_friction_neg','tor_friction_pos'}},...
    'AuxData',[0.6;100]); % fric_coef.mu;fric_coef.gamma
end

function h = genEventFuncs(domain,frame,position,side)
name = [side,position];
p = getCartesianPosition(domain,frame);
h = UnilateralConstraint(domain,p(3),name,'x');
end

function guard = Impact(domain,position)
switch position
    case 'Front'
        guard = RigidImpact('FrontImpact',domain,'FrontFootHeight');
    case 'Back'
        guard = RigidImpact('BackImpact',domain,'BackFootHeight');
end
guard.addImpactConstraint(struct2array(domain.HolonomicConstraints),[]);
end

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
% swing toe position
opt.constraint.step_distance(nlp, bounds);
% swing foot velocity
opt.constraint.impact_velocity(nlp, bounds, left_foot_frame);
opt.constraint.impact_velocity(nlp, bounds, right_foot_frame);

%     opt.constraint.feet_distance(nlp, bounds);
opt.constraint.yaw_start(nlp, bounds);
opt.constraint.knee_angle(nlp, bounds);
opt.constraint.average_velocity(nlp, bounds);
end

function back_stance_constraints(nlp, bounds, varargin)
ip = inputParser;
ip.addParameter('LoadPath',[],@ischar);
ip.parse(varargin{:});

domain = nlp.Plant;

right_foot_frame = sys.frames.RightBackFoot(domain);
left_foot_frame = sys.frames.LeftBackFoot(domain);

% virtual constraints
opt.constraint.virtual_constraints(nlp, bounds, ip.Results.LoadPath);
% foot clearance
opt.constraint.foot_clearance(nlp, bounds, left_foot_frame);
opt.constraint.foot_clearance(nlp, bounds, right_foot_frame);
% swing toe position
opt.constraint.step_distance(nlp, bounds);
% swing foot velocity
opt.constraint.impact_velocity(nlp, bounds, left_foot_frame);
opt.constraint.impact_velocity(nlp, bounds, right_foot_frame);
% feet distance
%     opt.constraint.feet_distance(nlp, bounds);
opt.constraint.yaw_start(nlp, bounds);
opt.constraint.knee_angle(nlp, bounds);
opt.constraint.average_velocity(nlp, bounds);
end

function front_impact_constraints(nlp, src, tar, bounds, varargin)
guard = nlp.Plant;
removeConstraint(nlp,'tContDomain');                                        
guard.rigidImpactConstraint(nlp, src, tar, bounds, varargin{:});            
end

function back_impact_constraints(nlp, src, tar, bounds, varargin)
disp('apply r_impact constraint');
guard = nlp.Plant;

removeConstraint(nlp,'tContDomain');                                        % remove from nlp.ConstrTable
disp('remove constraints of tContDomain');

guard.rigidImpactConstraint(nlp, src, tar, bounds, varargin{:});            % add to nlp.ConstrTable
disp('add constraints of xDiscreteMapRightImpact and dxDiscreteMapRightImpact')

removeConstraint(nlp,'xDiscreteMapRightImpact');                            % remove from nlp.ConstrTable
disp('remove constraints of xDiscreteMapRightImpact')

R = guard.R;
x = guard.States.x;
xn = guard.States.xn;
x_diff = R*x-xn;
x_map_fun = SymFunction(['xDiscreteMap' guard.Name],x_diff(7:end),{x,xn});
addNodeConstraint(nlp, x_map_fun, {'x','xn'}, 'first', 0, 0, 'Linear');     % add to nlp.ConstrTable
disp('add constraints of xDiscreteMapRightImpact')
end





























