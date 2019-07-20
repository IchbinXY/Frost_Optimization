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
marlo = MARLO_YL('urdf/atrias.urdf');
%% Load hybrid system
configureDynamics(marlo,'DelayCoriolisSet',false);
% RightStance
RightStance = copy(marlo);
RightStance.setName('RightStance');
right_frame = sys.frames.RightFoot(marlo);
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

left_frame = sys.frames.LeftFoot(marlo);
p_left = getCartesianPosition(RightStance,left_frame);
h_left = UnilateralConstraint(RightStance,p_left(3),'LeftHeight','x');
RightStance = addEvent(RightStance,h_left);

RightStance = sys.AddVirtualConstraint(RightStance);

RightStance.UserNlpConstraint = @opt.callback.RightStanceConstraints;

% LeftStance
LeftStance = copy(marlo);
LeftStance.setName('LeftStance');
left_frame = sys.frames.LeftFoot(marlo);
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

right_frame = sys.frames.RightFoot(marlo);
p_right = getCartesianPosition(LeftStance,right_frame);
h_right = UnilateralConstraint(LeftStance,p_right(3),'RightHeight','x');
LeftStance = addEvent(LeftStance,h_right);

LeftStance = sys.AddVirtualConstraint(LeftStance);

LeftStance.UserNlpConstraint = @opt.callback.LeftStanceConstraints;

% LeftImpact
LeftImpact = RigidImpact('LeftImpact',LeftStance,'LeftHeight');
LeftImpact.addImpactConstraint(struct2array(LeftStance.HolonomicConstraints),[]);
LeftImpact.UserNlpConstraint = @opt.callback.LeftImpactConstraints;

% RightImpact
RightImpact = RigidImpact('RightImpact',RightStance,'RightHeight');
RightImpact.addImpactConstraint(struct2array(RightStance.HolonomicConstraints),[]);
RightImpact.UserNlpConstraint = @opt.callback.RightImpactConstraints;

System = HybridSystem('Marlo_test');
System = addVertex(System,'RightStance','Domain',RightStance);
System = addVertex(System,'LeftStance','Domain',LeftStance);
srcs = {'RightStance'
    'LeftStance'};
tars = {'LeftStance'
    'RightStance'};
System = addEdge(System, srcs, tars);
System = setEdgeProperties(System, srcs, tars, 'Guard',{LeftImpact,RightImpact});
%% Load nlp 
bounds = opt.GetBounds_test(marlo);
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
%% update bounds
opt.updateVariableBounds(nlp, bounds);
% update initial condition
param = load('local/good_gait_test.mat');

opt.updateInitCondition(nlp,param.gait);
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
%% save
if SAVE
    save('local/good_gait_test.mat','gait','sol','info','bounds');
end
%% animation
if ANIMATE
    anim = plot.LoadAnimator(marlo, gait,'SkipExporting',true);
end