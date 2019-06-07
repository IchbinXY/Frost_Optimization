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

t = SymVariable('t');
p = SymVariable('p',[2,1]);
tau = (t-p(1))/(p(2)-p(1));
q = RightStance.States.x;
ya_2 = [q('qHRight');
    (q('qARight')+q('qBRight'))./2;
   -q('qARight')+q('qBRight');
    q('qHLeft');
    (q('qALeft')+q('qBLeft'))./2;
   -q('qALeft')+q('qBLeft');];
y2 = VirtualConstraint(RightStance,ya_2,'output','DesiredType','Bezier','PolyDegree',5,...
    'RelativeDegree',2,'PhaseType','TimeBased',...
    'PhaseVariable',tau,'PhaseParams',p,'Holonomic',true, 'LoadPath', []);
RightStance = addVirtualConstraint(RightStance,y2);

RightStance.UserNlpConstraint = str2func('RightStanceConstr');

% LeftImpact
LeftImpact = RigidImpact('LeftImpact',RightStance,'LeftHeight');
LeftImpact.addImpactConstraint(struct2array(RightStance.HolonomicConstraints),[]);

LeftImpact.UserNlpConstraint = str2func('LeftImpactConstr');

System = HybridSystem('Marlo_test');
System = addVertex(System,'RightStance','Domain',RightStance);
System = addEdge(System, {'RightStance'}, {'RightStance'});
System = setEdgeProperties(System, {'RightStance'}, {'RightStance'}, 'Guard',{LeftImpact});

bounds = opt.GetBounds_test(marlo);
%% Load nlp 
num_grid.RightStance = 10;
% num_grid.LeftStance = 10;
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
anim = plot.LoadAnimator(marlo, gait,'SkipExporting',true);
%%
function RightStanceConstr(nlp, bounds, varargin)
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
% %% swing foot velocity
% opt.constraint.impact_velocity(nlp, bounds, left_foot_frame);
% disp('swing foot velocity')
%% swing toe position
opt.constraint.step_distance(nlp, bounds);
% disp('swing toe position');
% %% the rest
% opt.constraint.yaw_start(nlp, bounds);
opt.constraint.knee_angle(nlp, bounds);
% opt.constraint.average_velocity(nlp, bounds);
end

function LeftImpactConstr(nlp, src, tar, bounds, varargin)
plant = nlp.Plant;
removeConstraint(nlp,'tContDomain');
plant.rigidImpactConstraint(nlp, src, tar, bounds, varargin{:});

removeConstraint(nlp,'xDiscreteMapLeftImpact');
R = plant.R;
x = plant.States.x;
xn = plant.States.xn;
x_diff = R*x-xn;
x_map = SymFunction(['xPartialDiscreteMap' plant.Name],x_diff(7:end),{x,xn});
addNodeConstraint(nlp, x_map, {'x','xn'}, 'first', 0, 0, 'Linear');
end



