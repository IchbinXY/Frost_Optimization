clc;clear
cur = pwd;
addpath(genpath(cur));
addpath('../../');
frost_addpath;
% class RABBIT
rabbit = RABBIT_YL('urdf/five_link_walker.urdf');                           disp('initialize rabbit');
rabbit.configureDynamics('DelayCoriolisSet',false);                         disp('configure rabbit dynamic');
% class RABBIT
r_stance = RightStance_YL(rabbit);                                          disp('initialize r_stance');
r_stance.UserNlpConstraint = str2func('right_stance_constraints_YL');       disp('initialize r_stance constraint');
% class RigitImpact
r_impact = RightImpact_YL(r_stance);                                        disp('initialize r_impact');
r_impact.UserNlpConstraint = str2func('right_impact_constraints_YL');       disp('initialize r_impact constraint');
% class HybridSystem
rabbit_1step = HybridSystem('Rabbit_1step');                                disp('initialize rabbit_1step');
rabbit_1step = addVertex(rabbit_1step, 'RightStance', 'Domain', r_stance);  disp('add r_stance');
rabbit_1step = addEdge(rabbit_1step, {'RightStance'}, {'RightStance'});     disp('add r_impact');
rabbit_1step = setEdgeProperties(rabbit_1step, {'RightStance'}, {'RightStance'}, 'Guard', {r_impact});  disp('set r_impact properties');

u = r_stance.Inputs.Control.u;
u2r = tovector(norm(u).^2);
u2r_fun = SymFunction(['torque_' r_stance.Name],u2r,{u});                   disp('cost function');

num_grid.RightStance = 10;
num_grid.LeftStance = 10;
% classs HybridTrajectoryOptimization
nlp = HybridTrajectoryOptimization('Rabbit_1step',rabbit_1step,num_grid,[],'EqualityConstraintBoundary',1e-4);  disp('initialize nlp');
setBounds;                                                                  disp('set bound');
nlp.configure(bounds);                                                      disp('configure bound');
addRunningCost(nlp.Phase(getPhaseIndex(nlp,'RightStance')),u2r_fun,'u');    disp('add cost')
nlp.update;

solver = IpoptApplication(nlp);
tic
[sol, info] = optimize(solver);
toc
[tspan, states, inputs, params] = exportSolution(nlp, sol);
gait = struct(...
    'tspan',tspan,...
    'states',states,...
    'inputs',inputs,...
    'params',params);
%% Animation 
q_log_R = states{1}.x; % Right stance
q_log_L = q_log_R([1:3,6:7,4:5],:); % symmetric Left stance
q_log_L(1:3,:) = q_log_L(1:3,:) + repmat((q_log_R(1:3,end)-q_log_R(1:3,1)),1,21);
t_log_R = tspan{1};
t_log_L = t_log_R+t_log_R(end);
q_log = [q_log_R,q_log_L];
t_log = [t_log_R,t_log_L];
anim = Animator.FiveLinkAnimator(t_log_R,q_log_R);
anim.pov = Animator.AnimatorPointOfView.West;
anim.Animate(true);
anim.isLooping = false;
anim.updateWorldPosition = true;
anim.endTime = t_log_R(end);
conGUI = Animator.AnimatorControls();
conGUI.anim = anim;

function domain = RightStance_YL(model)
domain = copy(model);
domain.setName('RightStance');
% Add contact to the right toe
right_sole = ToContactFrame(domain.ContactPoints.RightToe,'PointContactWithFriction');
fric_coef.mu = 0.6;
domain = addContact(domain,right_sole,fric_coef,[],[]);
% Add height to the left toe
p_nsf = getCartesianPosition(domain, domain.ContactPoints.LeftToe);
h_nsf = UnilateralConstraint(domain,p_nsf(3),'leftFootHeight','x');
domain = addEvent(domain, h_nsf);

t = SymVariable('t');
p = SymVariable('p',[2,1]);
tau = (t-p(2))/(p(1)-p(2));

x = domain.States.x;    % 7 by 1 SymVariable
ya_2 = [x('q1_right');x('q2_right');x('q1_left');x('q2_left')];
y2_label = {'q1_right','q2_right','q1_left','q2_left'};
% optional: load expression for virtual constraints while creating
y2 = VirtualConstraint(domain,ya_2,'time','DesiredType','Bezier','PolyDegree',5,...
    'RelativeDegree',2,'OutputLabel',{y2_label},'PhaseType','TimeBased',...
    'PhaseVariable',tau,'PhaseParams',p,'Holonomic',true,...
    'LoadPath', []);
domain = addVirtualConstraint(domain,y2);
end

function guard = RightImpact_YL(domain)
guard = RigidImpact('RightImpact',domain,'leftFootHeight');
guard.R = guard.R(:,[1:3,6:7,4:5]);
guard.addImpactConstraint(struct2array(domain.HolonomicConstraints),[]);
end

function right_stance_constraints_YL(nlp, bounds, varargin)
disp('apply r_stance constraint');
domain = nlp.Plant;
p = inputParser;
addParameter(p, 'LoadPath', '');
parse(p, varargin{:});
load_path = p.Results.LoadPath;
domain.VirtualConstraints.time.imposeNLPConstraint(nlp, [bounds.time.kp, bounds.time.kd], [1,1], load_path);
                                                                            % add to nlp.ConstrTable
disp('add constraints of y_time_RightStance,d1y_time_RightStance, and time_output_dynamics');

T_name = nlp.OptVarTable.T(1).Name;         % 'T'
T = SymVariable(lower(T_name),[nlp.OptVarTable.T(1).Dimension,1]);          % '{{t11}, {t21}}'
p_name = nlp.OptVarTable.ptime(1).Name;     % 'ptime'
p = SymVariable(lower(p_name),[nlp.OptVarTable.ptime(1).Dimension,1]);      % '{{ptime11}, {ptime21}}'
tau_0_fun = SymFunction(['tau_0_',domain.Name], T(1) - p(2), {T,p});        % '{-ptime21 + t11}'
tau_F_fun = SymFunction(['tau_F_',domain.Name], T(2) - p(1), {T,p});        % '{-ptime11 + t21}'
addNodeConstraint(nlp, tau_0_fun, {'T','ptime'}, 'first', 0, 0, 'Linear');  % add to nlp.ConstrTable
addNodeConstraint(nlp, tau_F_fun, {'T','ptime'}, 'last', 0, 0, 'Linear');   % add to nlp.ConstrTable
disp('add constraints of tau_0_RightStance and tau_F_RightStance');

y_pos = domain.VirtualConstraints.time;
y_bound_idx = str_indices({'q1_right','q2_right','q1_left','q2_left'},y_pos.OutputLabel);
                                            % 1     2     3     4
y_bound = y_pos.ActualOutput(y_bound_idx);  % '{x$4$1, x$5$1, x$6$1, x$7$1}'
lb = [-2*pi,-2*pi,-2*pi,-2*pi]';
ub = [2*pi,2*pi,2*pi,2*pi]';
y_bound_fun = SymFunction(['output_boundary_',domain.Name], y_bound, {domain.States.x});
                                            % '{x$4$1, x$5$1, x$6$1, x$7$1}'
addNodeConstraint(nlp, y_bound_fun, {'x'}, 'all', lb, ub,'Linear');         % add to nlp.ConstrTable
disp('add constraints of output_boundary_RightStance');

velocity_desired = 0.75;
DOF = 7;
T = SymVariable('t',[2,1]);                 % '{{t11}, {t21}}'
X0 = SymVariable('x0',[DOF,1]);             % '{{x011}, {x021}, {x031}, {x041}, {x051}, {x061}, {x071}}'
XF = SymVariable('xF',[DOF,1]);             % '{{xF11}, {xF21}, {xF31}, {xF41}, {xF51}, {xF61}, {xF71}}'
avg_vel = (XF(1) - X0(1)) / (T(2) - T(1));  % '{(-x011 + xF11)/(-t11 + t21)}'
avg_vel_fun = SymFunction('average_velocity', avg_vel, {T,X0,XF});
                                            % '{(-x011 + xF11)/(-t11 + t21)}'
avg_vel_cstr = NlpFunction('Name','average_velocity',...
    'Dimension',1,...
    'lb', velocity_desired,...
    'ub', velocity_desired,...
    'Type','Nonlinear',...
    'SymFun',avg_vel_fun,...
    'DepVariables',[nlp.OptVarTable.T(1); nlp.OptVarTable.x(1); nlp.OptVarTable.x(end)]);
addConstraint(nlp, 'average_velocity', 'last', avg_vel_cstr);               % add to nlp.ConstrTable
disp('add constraints of average_velocity');

% Swing Foot Clearance
X  = SymVariable('x',[DOF,1]);              % '{{x11}, {x21}, {x31}, {x41}, {x51}, {x61}, {x71}}'
swingFootHeight = SymFunction('swing_foot_height', nlp.Plant.EventFuncs.leftFootHeight.ConstrExpr, {X});
                                            % '{{x21+(2(1-Cos[x71])*(Cos[x31]*Cos[x61]-Sin[x31]*Sin[x61]))/5-(2*(-(Cos[x61]*Sin[x31])-Cos[x31]*Sin[x61])*Sin[x71])/5+(4*(Cos[x71]*(Cos[x31]*Cos[x61]-Sin[x31]*Sin[x61])+(-(Cos[x61]*Sin[x31])-Cos[x31]*Sin[x61])*Sin[x71]))/5}}'
addNodeConstraint(nlp, swingFootHeight, {'x'}, floor(nlp.NumNode/2), 0.1, Inf,'Linear');
                                                                            % add to nlp.ConstrTable
disp('add constraints of swing_foot_height');
end

function right_impact_constraints_YL(nlp, src, tar, bounds, varargin)
disp('apply r_impact constraint');
guard = nlp.Plant;
guard.rigidImpactConstraint(nlp, src, tar, bounds, varargin{:});            % add to nlp.ConstrTable
disp('add constraints of xDiscreteMapRightImpact and dxDiscreteMapRightImpact')

removeConstraint(nlp,'tContDomain');                                        % remove from nlp.ConstrTable
removeConstraint(nlp,'xDiscreteMapRightImpact');                            % remove from nlp.ConstrTable
disp('remove constraints of tContDomain and xDiscreteMapRightImpact')

R = guard.R;
x = guard.States.x;
xn = guard.States.xn;
x_diff = R*x-xn;
x_map_fun = SymFunction(['xDiscreteMap' guard.Name],x_diff(3:end),{x,xn});
addNodeConstraint(nlp, x_map_fun, {'x','xn'}, 'first', 0, 0, 'Linear');     % add to nlp.ConstrTable
disp('add constraints of xDiscreteMapRightImpact')
end
