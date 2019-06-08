clc;clear;restoredefaultpath;matlabrc
cur = pwd;
addpath(genpath(cur));
addpath('../../');
frost_addpath;
export_path = 'gen_test/opt_test';
%% Setting
COMPILE = false;
SAVE    = false;
OPT     = true;
ANIMATE = true;
%% Load robot model
minitaur = MINITAUR('urdf/minitaur2.urdf');
%% Load hybrid system
configureDynamics(minitaur,'DelayCoriolisSet', false, 'OmitCoriolisSet', true);
% RightStance
RightStance = copy(minitaur);
RightStance.setName('RightStance');
% first leg
right_frame = sys.frames.RightFrontFoot(minitaur);
p_right = getCartesianPosition(RightStance,right_frame);
r_right = getRelativeEulerAngles(RightStance,right_frame);
constr_right = [p_right(1);p_right(2);p_right(3);r_right(3)];
hol_right = HolonomicConstraint(RightStance,constr_right,'Right',...
    'ConstrLabel',{{'RightX','RightY','RightZ','RightYaw'}},'DerivativeOrder',2);
RightStance = addHolonomicConstraint(RightStance,hol_right);

f_right = RightStance.Inputs.ConstraintWrench.fRight;
mu = SymVariable('mu'); gamma = SymVariable('gamma');
constr_right = [f_right(3)-300;
    f_right(1)+mu/sqrt(2)*f_right(3);   -f_right(1)+mu/sqrt(2)*f_right(3);
    f_right(2)+mu/sqrt(2)*f_right(3);   -f_right(2)+mu/sqrt(2)*f_right(3);
    f_right(4)+gamma*f_right(3);        -f_right(4)+gamma*f_right(3)];
friction_cone_right = SymFunction(['u_friction_cone_',right_frame.Name],...
    constr_right,{f_right},{[mu;gamma]});
fc_label_right = {'normal_force';
    'friction_x_pos';   'friction-x_neg';
    'friction_y_pos';   'friction-y_neg';
    'tor_friction_pos'; 'tor_friction-neg'};
fc_cstr_right = UnilateralConstraint(RightStance,friction_cone_right,...
    ['fc' right_frame.Name],'fRight',...
    'ConstrLabel',{fc_label_right(:)'},...
    'AuxData',[0.6;100]);
RightStance = addUnilateralConstraint(RightStance,fc_cstr_right);
% second leg
right_back_frame = sys.frames.RightBackFoot(minitaur);
p_right_back = getCartesianPosition(RightStance,right_back_frame);
r_right_back = getRelativeEulerAngles(RightStance,right_back_frame);
constr_right_back = [p_right_back(1);p_right_back(2);p_right_back(3);r_right_back(3)];
hol_right_back = HolonomicConstraint(RightStance,constr_right_back,'RightBack',...
    'ConstrLabel',{{'RightBackX','RightBackY','RightBackZ','RightBackYaw'}},'DerivativeOrder',2);
RightStance = addHolonomicConstraint(RightStance,hol_right_back);

f_right_back = RightStance.Inputs.ConstraintWrench.fRightBack;
mu = SymVariable('mu'); gamma = SymVariable('gamma');
constr_right_back = [f_right_back(3)-300;
    f_right_back(1)+mu/sqrt(2)*f_right_back(3);   -f_right_back(1)+mu/sqrt(2)*f_right_back(3);
    f_right_back(2)+mu/sqrt(2)*f_right_back(3);   -f_right_back(2)+mu/sqrt(2)*f_right_back(3);
    f_right_back(4)+gamma*f_right_back(3);        -f_right_back(4)+gamma*f_right_back(3)];
friction_cone_right_back = SymFunction(['u_friction_cone_',right_back_frame.Name],...
    constr_right_back,{f_right_back},{[mu;gamma]});
fc_label_right_back = {'normal_force';
    'friction_x_pos';   'friction-x_neg';
    'friction_y_pos';   'friction-y_neg';
    'tor_friction_pos'; 'tor_friction-neg'};
fc_cstr_right_back = UnilateralConstraint(RightStance,friction_cone_right_back,...
    ['fc' right_back_frame.Name],'fRightBack',...
    'ConstrLabel',{fc_label_right_back(:)'},...
    'AuxData',[0.6;100]);
RightStance = addUnilateralConstraint(RightStance,fc_cstr_right_back);
% third leg
left_back_frame = sys.frames.LeftBackFoot(minitaur);
p_left_back = getCartesianPosition(RightStance,left_back_frame);
r_left_back = getRelativeEulerAngles(RightStance,left_back_frame);
constr_left_back = [p_left_back(1);p_left_back(2);p_left_back(3);r_left_back(3)];
hol_left_back = HolonomicConstraint(RightStance,constr_left_back,'LeftBack',...
    'ConstrLabel',{{'LeftBackX','LeftBackY','LeftBackZ','LeftBackYaw'}},'DerivativeOrder',2);
RightStance = addHolonomicConstraint(RightStance,hol_left_back);

f_left_back = RightStance.Inputs.ConstraintWrench.fLeftBack;
mu = SymVariable('mu'); gamma = SymVariable('gamma');
constr_left_back = [f_left_back(3)-300;
    f_left_back(1)+mu/sqrt(2)*f_left_back(3);   -f_left_back(1)+mu/sqrt(2)*f_left_back(3);
    f_left_back(2)+mu/sqrt(2)*f_left_back(3);   -f_left_back(2)+mu/sqrt(2)*f_left_back(3);
    f_left_back(4)+gamma*f_left_back(3);        -f_left_back(4)+gamma*f_left_back(3)];
friction_cone_left_back = SymFunction(['u_friction_cone_',left_back_frame.Name],...
    constr_left_back,{f_left_back},{[mu;gamma]});
fc_label_left_back = {'normal_force';
    'friction_x_pos';   'friction-x_neg';
    'friction_y_pos';   'friction-y_neg';
    'tor_friction_pos'; 'tor_friction-neg'};
fc_cstr_left_back = UnilateralConstraint(RightStance,friction_cone_left_back,...
    ['fc' left_back_frame.Name],'fLeftBack',...
    'ConstrLabel',{fc_label_left_back(:)'},...
    'AuxData',[0.6;100]);
RightStance = addUnilateralConstraint(RightStance,fc_cstr_left_back);

left_frame = sys.frames.LeftFrontFoot(minitaur);
p_left = getCartesianPosition(RightStance,left_frame);
h_left = UnilateralConstraint(RightStance,p_left(3),'LeftHeight','x');
RightStance = addEvent(RightStance,h_left);

% t = SymVariable('t');
% p = SymVariable('p',[2,1]);
% tau = (t-p(1))/(p(2)-p(1));
% q = RightStance.States.x;
% ya_2 = [...
%     (q('motor_front_leftL_joint') - q('motor_front_leftR_joint'))./2+pi;
%      q('motor_front_leftL_joint') + q('motor_front_leftR_joint');
%     (q('motor_back_leftL_joint')  - q('motor_back_leftR_joint'))./2+pi;
%      q('motor_back_leftL_joint')  + q('motor_back_leftR_joint');
%    (-q('motor_front_rightL_joint')+ q('motor_front_rightR_joint'))./2+pi;
%      q('motor_front_rightL_joint')+ q('motor_front_rightR_joint');
%    (-q('motor_back_rightL_joint') + q('motor_back_rightR_joint'))./2+pi;
%      q('motor_back_rightL_joint') + q('motor_back_rightR_joint')];
% y2 = VirtualConstraint(RightStance,ya_2,'output','DesiredType','Bezier','PolyDegree',5,...
%     'RelativeDegree',2,'PhaseType','TimeBased',...
%     'PhaseVariable',tau,'PhaseParams',p,'Holonomic',true, 'LoadPath', []);
% RightStance = addVirtualConstraint(RightStance,y2);

RightStance.UserNlpConstraint = str2func('RightStanceConstr');

% LeftStance
LeftStance = copy(minitaur);
LeftStance.setName('LeftStance');
% first leg
left_frame = sys.frames.LeftFrontFoot(minitaur);
p_left = getCartesianPosition(LeftStance,left_frame);
r_left = getRelativeEulerAngles(LeftStance,left_frame);
constr_left = [p_left(1);p_left(2);p_left(3);r_left(3)];
hol_left = HolonomicConstraint(LeftStance,constr_left,'Left',...
    'ConstrLabel',{{'LeftX','LeftY','LeftZ','LeftYaw'}},'DerivativeOrder',2);
LeftStance = addHolonomicConstraint(LeftStance,hol_left);

f_left = LeftStance.Inputs.ConstraintWrench.fLeft;
mu = SymVariable('mu'); gamma = SymVariable('gamma');
constr_left = [f_left(3)-300;
    f_left(1)+mu/sqrt(2)*f_left(3);   -f_left(1)+mu/sqrt(2)*f_left(3);
    f_left(2)+mu/sqrt(2)*f_left(3);   -f_left(2)+mu/sqrt(2)*f_left(3);
    f_left(4)+gamma*f_left(3);        -f_left(4)+gamma*f_left(3)];
friction_cone_left = SymFunction(['u_friction_cone_',left_frame.Name],...
    constr_left,{f_left},{[mu;gamma]});
fc_label_left = {'normal_force';
    'friction_x_pos';   'friction-x_neg';
    'friction_y_pos';   'friction-y_neg';
    'tor_friction_pos'; 'tor_friction-neg'};
fc_cstr_left = UnilateralConstraint(LeftStance,friction_cone_left,...
    ['fc' left_frame.Name],'fLeft',...
    'ConstrLabel',{fc_label_left(:)'},...
    'AuxData',[0.6;100]);
LeftStance = addUnilateralConstraint(LeftStance,fc_cstr_left);
% second leg
right_back_frame = sys.frames.RightBackFoot(minitaur);
p_right_back = getCartesianPosition(LeftStance,right_back_frame);
r_right_back = getRelativeEulerAngles(LeftStance,right_back_frame);
constr_right_back = [p_right_back(1);p_right_back(2);p_right_back(3);r_right_back(3)];
hol_right_back = HolonomicConstraint(LeftStance,constr_right_back,'RightBack',...
    'ConstrLabel',{{'RightBackX','RightBackY','RightBackZ','RightBackYaw'}},'DerivativeOrder',2);
LeftStance = addHolonomicConstraint(LeftStance,hol_right_back);

f_right_back = LeftStance.Inputs.ConstraintWrench.fRightBack;
mu = SymVariable('mu'); gamma = SymVariable('gamma');
constr_right_back = [f_right_back(3)-300;
    f_right_back(1)+mu/sqrt(2)*f_right_back(3);   -f_right_back(1)+mu/sqrt(2)*f_right_back(3);
    f_right_back(2)+mu/sqrt(2)*f_right_back(3);   -f_right_back(2)+mu/sqrt(2)*f_right_back(3);
    f_right_back(4)+gamma*f_right_back(3);        -f_right_back(4)+gamma*f_right_back(3)];
friction_cone_right_back = SymFunction(['u_friction_cone_',right_back_frame.Name],...
    constr_right_back,{f_right_back},{[mu;gamma]});
fc_label_right_back = {'normal_force';
    'friction_x_pos';   'friction-x_neg';
    'friction_y_pos';   'friction-y_neg';
    'tor_friction_pos'; 'tor_friction-neg'};
fc_cstr_right_back = UnilateralConstraint(LeftStance,friction_cone_right_back,...
    ['fc' right_back_frame.Name],'fRightBack',...
    'ConstrLabel',{fc_label_right_back(:)'},...
    'AuxData',[0.6;100]);
LeftStance = addUnilateralConstraint(LeftStance,fc_cstr_right_back);
% third leg
left_back_frame = sys.frames.LeftBackFoot(minitaur);
p_left_back = getCartesianPosition(LeftStance,left_back_frame);
r_left_back = getRelativeEulerAngles(LeftStance,left_back_frame);
constr_left_back = [p_left_back(1);p_left_back(2);p_left_back(3);r_left_back(3)];
hol_left_back = HolonomicConstraint(LeftStance,constr_left_back,'LeftBack',...
    'ConstrLabel',{{'LeftBackX','LeftBackY','LeftBackZ','LeftBackYaw'}},'DerivativeOrder',2);
LeftStance = addHolonomicConstraint(LeftStance,hol_left_back);

f_left_back = LeftStance.Inputs.ConstraintWrench.fLeftBack;
mu = SymVariable('mu'); gamma = SymVariable('gamma');
constr_left_back = [f_left_back(3)-300;
    f_left_back(1)+mu/sqrt(2)*f_left_back(3);   -f_left_back(1)+mu/sqrt(2)*f_left_back(3);
    f_left_back(2)+mu/sqrt(2)*f_left_back(3);   -f_left_back(2)+mu/sqrt(2)*f_left_back(3);
    f_left_back(4)+gamma*f_left_back(3);        -f_left_back(4)+gamma*f_left_back(3)];
friction_cone_left_back = SymFunction(['u_friction_cone_',left_back_frame.Name],...
    constr_left_back,{f_left_back},{[mu;gamma]});
fc_label_left_back = {'normal_force';
    'friction_x_pos';   'friction-x_neg';
    'friction_y_pos';   'friction-y_neg';
    'tor_friction_pos'; 'tor_friction-neg'};
fc_cstr_left_back = UnilateralConstraint(LeftStance,friction_cone_left_back,...
    ['fc' left_back_frame.Name],'fLeftBack',...
    'ConstrLabel',{fc_label_left_back(:)'},...
    'AuxData',[0.6;100]);
LeftStance = addUnilateralConstraint(LeftStance,fc_cstr_left_back);

right_frame = sys.frames.RightFrontFoot(minitaur);
p_right = getCartesianPosition(LeftStance,right_frame);
h_right = UnilateralConstraint(LeftStance,p_right(3),'RightHeight','x');
LeftStance = addEvent(LeftStance,h_right);

% t = SymVariable('t');
% p = SymVariable('p',[2,1]);
% tau = (t-p(1))/(p(2)-p(1));
% q = LeftStance.States.x;
% ya_2 = [...
%     (q('motor_front_leftL_joint') - q('motor_front_leftR_joint'))./2+pi;
%      q('motor_front_leftL_joint') + q('motor_front_leftR_joint');
%     (q('motor_back_leftL_joint')  - q('motor_back_leftR_joint'))./2+pi;
%      q('motor_back_leftL_joint')  + q('motor_back_leftR_joint');
%    (-q('motor_front_rightL_joint')+ q('motor_front_rightR_joint'))./2+pi;
%      q('motor_front_rightL_joint')+ q('motor_front_rightR_joint');
%    (-q('motor_back_rightL_joint') + q('motor_back_rightR_joint'))./2+pi;
%      q('motor_back_rightL_joint') + q('motor_back_rightR_joint')];
% y2 = VirtualConstraint(LeftStance,ya_2,'output','DesiredType','Bezier','PolyDegree',5,...
%     'RelativeDegree',2,'PhaseType','TimeBased',...
%     'PhaseVariable',tau,'PhaseParams',p,'Holonomic',true, 'LoadPath', []);
% LeftStance = addVirtualConstraint(LeftStance,y2);

LeftStance.UserNlpConstraint = str2func('LeftStanceConstr');

% LeftImpact
LeftImpact = RigidImpact('LeftImpact',LeftStance,'LeftHeight');
LeftImpact.addImpactConstraint(struct2array(LeftStance.HolonomicConstraints),[]);

LeftImpact.UserNlpConstraint = str2func('LeftImpactConstr');

% RightImpact
RightImpact = RigidImpact('RightImpact',RightStance,'RightHeight');
RightImpact.addImpactConstraint(struct2array(RightStance.HolonomicConstraints),[]);

RightImpact.UserNlpConstraint = str2func('RightImpactConstr');

System = HybridSystem('Marlo_test');
System = addVertex(System,'RightStance','Domain',RightStance);
System = addVertex(System,'LeftStance','Domain',LeftStance);
srcs = {'RightStance'
    'LeftStance'};
tars = {'LeftStance'
    'RightStance'};
System = addEdge(System, srcs, tars);
System = setEdgeProperties(System, srcs, tars, 'Guard',{LeftImpact,RightImpact});

bounds = opt.GetBounds_test(minitaur);
%% Load nlp 
num_grid.RightStance = 10;
num_grid.LeftStance = 10;
options = {'EqualityConstraintBoundary', 1e-4,...
    'DistributeTimeVariable', false,...
    'DistributeParameters',false};
nlp = HybridTrajectoryOptimization('Marlo_opt',System,num_grid,[],options{:});
nlp.configure(bounds);
opt.cost.Power(nlp,System);
nlp.update;
%% Compile stuff if needed
if COMPILE
    compileObjective(nlp,[],[],export_path);
    compileConstraint(nlp,[],[],export_path);
end
%% solve
if OPT
    ipopt_options.max_iter              = 500;
    ipopt_options.tol                   = 1e-1;
    ipopt_options.compl_inf_tol         = 1e-1;
    ipopt_options.dual_inf_tol          = 1e-1;
    ipopt_options.constr_viol_tol       = 1e-3;
    solver = IpoptApplication(nlp,ipopt_options);
    tic
    [sol, info] = optimize(solver);
    toc
    [tspan, states, inputs, params] = exportSolution(nlp, sol);
    gait = struct(...
        'tspan',tspan,...
        'states',states,...
        'inputs',inputs,...
        'params',params);
end
%% animation
if ANIMATE
    anim = plot.LoadAnimator(minitaur, gait,'SkipExporting',true);
end
%%
function RightStanceConstr(nlp, bounds, varargin)
ip = inputParser;
ip.addParameter('LoadPath',[],@ischar);
ip.parse(varargin{:});
domain = nlp.Plant;
%% virtual constraints
% opt.constraint.virtual_constraints(nlp, bounds, ip.Results.LoadPath);
% disp('virtual constraints');
%% foot clearance
% left_frame = sys.frames.LeftFrontFoot(domain);
% opt.constraint.foot_clearance(nlp, bounds, left_frame);
% disp('foot clearance');
%% swing foot velocity
% opt.constraint.impact_velocity(nlp, bounds, left_frame);
% disp('swing foot velocity')
%% the rest
% opt.constraint.yaw_start(nlp, bounds);
% opt.constraint.knee_angle(nlp, bounds);
% opt.constraint.average_velocity(nlp, bounds);
end

function LeftImpactConstr(nlp, src, tar, bounds, varargin)
plant = nlp.Plant;
removeConstraint(nlp,'tContDomain');
plant.rigidImpactConstraint(nlp, src, tar, bounds, varargin{:});
end

function LeftStanceConstr(nlp, bounds, varargin)
domain = nlp.Plant;
ip = inputParser;
ip.addParameter('LoadPath',[],@ischar);
ip.parse(varargin{:});
%% virtual constraints
% opt.constraint.virtual_constraints(nlp, bounds, ip.Results.LoadPath);
% disp('virtual constraints');
%% foot clearance
% [right_foot_frame] = sys.frames.RightFrontFoot(domain);
% opt.constraint.foot_clearance(nlp, bounds, right_foot_frame);
% disp('foot clearance');
%% swing toe position
% opt.constraint.step_distance(nlp,bounds);
% disp('swing toe position');
%% swing foot velocity
% opt.constraint.impact_velocity(nlp, bounds, right_foot_frame);
% disp('swing foot velocity')
%% the rest
% opt.constraint.yaw_start(nlp, bounds);
% opt.constraint.knee_angle(nlp, bounds);
% opt.constraint.average_velocity(nlp, bounds);
end

function RightImpactConstr(nlp, src, tar, bounds, varargin)
plant = nlp.Plant;
removeConstraint(nlp,'tContDomain');
plant.rigidImpactConstraint(nlp, src, tar, bounds, varargin{:});

removeConstraint(nlp,'xDiscreteMapRightImpact');
R = plant.R;
x = plant.States.x;
xn = plant.States.xn;
x_diff = R*x-xn;
x_map = SymFunction(['xPartialDiscreteMap' plant.Name],x_diff(7:end),{x,xn});
addNodeConstraint(nlp, x_map, {'x','xn'}, 'first', 0, 0, 'Linear');
end

