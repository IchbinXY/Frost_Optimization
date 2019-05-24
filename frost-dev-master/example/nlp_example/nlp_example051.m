clear

cur = fileparts(mfilename('fullpath'));

export_path = fullfile(cur, 'export');
if ~exist(export_path,'dir')
    mkdir(export_path);
end
addpath(genpath(cur));

%% Create NLP
nlp = NonlinearProgram('nlp051');

%% NLP.Options
nlp.setOption('DerivativeLevel',1);

%% NLP.VariableArray
% SymVariable
x_s = SymVariable('x',[3,1]);
y_s = SymVariable('y',[2,1]);
% convert SymVariable to NLPVariable
x_var = NlpVariable('Name', 'x', 'Dimension', 3, ...
    'lb', -inf, 'ub', inf, 'x0', [2.5 0.5 2]);
y_var = NlpVariable('Name', 'y', 'Dimension', 2, ...
    'lb', -inf, 'ub', inf, 'x0', [-1 0.5]);
nlp = regVariable(nlp,x_var);
nlp = regVariable(nlp,y_var);
nlp = update(nlp);

%% NLP.CostArray
% sym expression
f1 = (x_s(1)-x_s(2)).^2;
f2 = (x_s(2) + x_s(3) - 2).^2;
f3 = (y_s(1)-1).^2 + (y_s(2)-1).^2;
% SymFunction
f_cost1 = SymFunction('f_cost1',f1,{x_s});
f_cost2 = SymFunction('f_cost2',f2,{x_s});
f_cost3 = SymFunction('f_cost3',f3,{y_s});
% convert SymFunction to NLPFunction
costs(1) = NlpFunction('Name', 'f_cost1',...
    'SymFun',f_cost1, 'Type', 'Nonlinear',...
    'DepVariables',x_var);
costs(2) = NlpFunction('Name', 'f_cost21',...
    'SymFun',f_cost2, 'Type', 'Nonlinear',...
    'DepVariables',x_var);
costs(3) = NlpFunction('Name', 'f_cost3',...
    'SymFun',f_cost3, 'Type', 'Nonlinear',...
    'DepVariables',y_var);
nlp = regObjective(nlp,costs);

%% NLP.ConstrArray
% sym expression
c1 = x_s(1) + 3*x_s(2);
c2 = x_s(3) + y_s(1) - 2*y_s(2);
c3 = x_s(2) - y_s(2);
% SymFunction
f_constr1 = SymFunction('f_constr1',c1,{x_s});
f_constr2 = SymFunction('f_constr2',c2,{x_s,y_s});
f_constr3 = SymFunction('f_constr3',c3,{x_s,y_s});
% convert SymFunction to NLPFunction
constrs(1) = NlpFunction('Name','f_constr1','Type','nonlinear',...
    'SymFun',f_constr1,'DepVariables',x_var,'lb',4,'ub',4);
constrs(2) = NlpFunction('Name','f_constr2','Type','nonlinear',...
    'SymFun',f_constr2,'DepVariables',[x_var;y_var],'lb',0,'ub',0);
constrs(3) = NlpFunction('Name','f_constr3','Type','nonlinear',...
    'SymFun',f_constr3,'DepVariables',[x_var;y_var],'lb',0,'ub',0);
nlp = regConstraint(nlp,constrs);

%%
nlp.update;
% nlp.compileConstraint(export_path);
% nlp.compileObjective(export_path);

extraOpts.fixed_variable_treatment = 'RELAX_BOUNDS';
extraOpts.point_perturbation_radius = 0;
extraOpts.jac_c_constant        = 'yes';
extraOpts.hessian_approximation = 'limited-memory';
extraOpts.derivative_test = 'first-order';
extraOpts.derivative_test_perturbation = 1e-11;

solverApp = IpoptApplication(nlp, extraOpts);
[sol, info] = optimize(solverApp);

% solverApp = SnoptApplication(nlp);
% nlp051.spc = which('nlp051.spc');
% snspec(nlp051.spc);
% 
% [sol, info] = optimize(solverApp);
