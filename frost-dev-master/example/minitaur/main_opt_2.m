clc;clear;restoredefaultpath;matlabrc;
cur = pwd;
addpath(genpath(cur));
addpath('../../');
frost_addpath;
export_path = 'gen2/opt2';
load_path   = 'gen2/sym2';
%% Settings
LOAD    = 1;
COMPILE = 0;
SAVE    = 0;
OPT     = 0;
ANIMATE = 0;
%% Model and System
minitaur = MINITAUR('urdf/minitaur2.urdf');
if LOAD
    minitaur.loadDynamics(load_path,true,{},'OmitCoriolisSet',true);
    [System,Domains,Guards] = opt.LoadBehavior2(minitaur,load_path);
else
    minitaur.configureDynamics('DelayCoriolisSet',false,'OmitCoriolisSet',true);
    [System,Domains,Guards] = opt.LoadBehavior2(minitaur);
end
%% Problem
bounds = opt.GetBounds2(minitaur);
num_grid.FrontStance = 10;
num_grid.Fight1      = 10;
num_grid.BackStance  = 10;
num_grid.Flight2     = 10;
options = {...
    'EqualityConstraintBoundary',1e-4...
    'DistributeTimeVariable',false...
    'DistributeParameters',false};
nlp = HybridTrajectoryOptimization('Minitaur_opt',System,num_grid,[],options{:});
nlp.configure(bounds);
opt.cost.Power(nlp,System);
opt.updateVariableBounds(nlp, bounds);
nlp.update;
% removeConstraint(nlp.Phase(1),'dynamics_equation');
% removeConstraint(nlp.Phase(1),'u_friction_cone_RightFrontFoot');
% removeConstraint(nlp.Phase(1),'u_friction_cone_LeftFrontFoot');
% removeConstraint(nlp.Phase(3),'dynamics_equation');
% removeConstraint(nlp.Phase(5),'dynamics_equation');
% removeConstraint(nlp.Phase(5),'u_friction_cone_RightBackFoot');
% removeConstraint(nlp.Phase(5),'u_friction_cone_LeftBackFoot');
% removeConstraint(nlp.Phase(7),'dynamics_equation');
%%
% removeConstraint(nlp.Phase(1),'kneeAngles_FrontStance');
% removeConstraint(nlp.Phase(3),'kneeAngles_Flight1');
% removeConstraint(nlp.Phase(5),'kneeAngles_BackStance');
% removeConstraint(nlp.Phase(7),'kneeAngles_Flight2');
%% Compile
if COMPILE
    compileObjective(nlp,[],[],export_path);
    compileConstraint(nlp,[],[],export_path);
end
%%
% for k = 1:8
%     compileConstraint(nlp.Phase(k),'dynamics_equation',[],export_path);
% end


%% Save 
if SAVE
    System.saveExpression(load_path);
end
%% Optimize
if OPT
    ipopt_options.max_iter              = 5000;
    ipopt_options.tol                   = 1e-1;
    ipopt_options.compl_inf_tol         = 1e-1;
    ipopt_options.dual_inf_tol          = 1e-1;
    ipopt_options.constr_viol_tol       = 1e-3;
    solver = IpoptApplication(nlp,ipopt_options);
    tic
    %load('C:\Users\Yizhou Lu\Documents\GitHub\Research-\frost-dev-master\example\minitaur\local\output_solution.mat');
    x0 = solution.x;
    %xo(5) = 0.27;
    %x0(7) = 0.25;
    [sol, info] = optimize(solver,x0);
    toc
    [tspan, states, inputs, params] = exportSolution(nlp, sol);
    gait = struct(...
        'tspan',tspan,...
        'states',states,...
        'inputs',inputs,...
        'params',params);
    solution.x = sol;
    solution.tspan = tspan;
    solution.states = states;
    solution.inputs = inputs;
    solution.params = params;
    new_name = fullfile(cur, 'local', 'output_5.mat');
    %SolutionX = fullfile(cur, 'local', 'output_solution.mat');
    save(new_name, 'solution', 'nlp', 'minitaur', 'bounds', 'info');
    %save(SolutionX, 'solution');
end
%% Animate
if ANIMATE
%     plot.LoadAnimator_test(minitaur,'SkipExporting',true);
    anim = plot.LoadAnimator(minitaur,gait,'SkipExporting',true);
end

%%
%%
if 0
    checkConstraints(nlp, solution.x, 1e-3, fullfile(cur, 'local', 'checkConstraints.txt'));
    checkVariables(nlp, solution.x, 1e-3, fullfile(cur, 'local', 'checkVariables.txt'));
    checkCosts(nlp, solution.x, fullfile(cur, 'local', 'checkCosts.txt'));
    
    open local/checkConstraints.txt
    open local/checkVariables.txt
    open local/checkCosts.txt
    open cassie_opt
end
%%
if 0

    t_log = [solution.tspan{1}, solution.tspan{3}+0.4 , solution.tspan{5}+0.8, solution.tspan{7}+1.2];

    q_log = [solution.states{1}.x, solution.states{3}.x,solution.states{5}.x, solution.states{7}.x]; 

    dq_log = [solution.states{1}.dx, solution.states{3}.dx, solution.states{1}.dx, solution.states{3}.dx]; 

    close all
    % Compare the tracking of the torso
    for k = 4:6

    figure
    clf
    % subplot(2,1,1)
    plot(t_log, q_log(k,:));
    hold on
    plot(t_log, ones(size(t_log))*bounds.FrontStance.states.x.lb(k),':','LineWidth',2);
    plot(t_log, ones(size(t_log))*bounds.FrontStance.states.x.ub(k),':','LineWidth',2);
    xlabel('Time (s)');
    end
    % ylabel('Positions (m)');
    % legend('x','y','z')
    %%

    figure(2)
    clf
    % subplot(2,1,2)
    plot(t_log, q_log(4:6,:));
    hold on
    % reset color order
    set(gca,'ColorOrderIndex',1)
    plot(t_log_, q_log_(4:6,:),':','LineWidth',2);
    xlabel('Time (s)');
    ylabel('Orientations (rad)');
    legend('yaw_z','pitch_y','roll_x')


    % Compare the velocity tracking of the torso
    % solution_new
    dq_log = [solution.states{1}.dx, solution.states{3}.dx]; 
    dq_log_ = [solution_new.states{1}.dx, solution_new.states{3}.dx];    
    % close all


    % subplot(2,1,1)
    figure(3)
    clf
    plot(t_log, dq_log(1:3,:));
    hold on
    % reset color order
    set(gca,'ColorOrderIndex',1)
    plot(t_log_, dq_log_(1:3,:),':','LineWidth',2);
    xlabel('Time (s)');
    ylabel('Velocities (m/s)');
    legend('dx','dy','dz')

    figure(4)
    clf
    % subplot(2,1,2)
    plot(t_log, dq_log(4:6,:));
    hold on
    % reset color order
    set(gca,'ColorOrderIndex',1)
    plot(t_log_, dq_log_(4:6,:),':','LineWidth',2);
    xlabel('Time (s)');
    ylabel('Angular velocities (rad/s)');
    legend('yaw_z','pitch_y','roll_x')
end