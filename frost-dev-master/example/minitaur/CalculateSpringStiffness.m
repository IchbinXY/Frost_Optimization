clc;clear;close all
load('output_velocity_06_newT.mat')
M = 6.46; % kg
g = 9.81; % m/s^2
L = 0.25; % m
%% Front Stance 
% front stance time duration
t = solution.tspan{1};
% front stance ground reaction force
f = solution.inputs{1}.fLeftFront(3,:);
% initial extension angle 
q0_f_exten = (solution.states{1}.x(7,1)+solution.states{1}.x(8,1))./2;
% initial virtual leg length
x0_f_exten = rad2len(q0_f_exten);
% record change in extension angle and virtual leg length throughout front stance
for k = 1:21
    %% extension
    q_f_exten(k) = (solution.states{1}.x(7,k)+solution.states{1}.x(8,k))./2;
    x_f_exten(k) = rad2len(q_f_exten(k));
    dq_f_exten(k) = q0_f_exten - q_f_exten(k);
    dx_f_exten(k) = x0_f_exten - x_f_exten(k);
    %% swing
    q_f_swing(k) = (solution.states{1}.x(8,k)-solution.states{1}.x(7,k))./2;
    ddq_f_swing(k) = (solution.states{1}.ddx(8,k)-solution.states{1}.ddx(7,k))./2;  
end

figure(1); 
subplot(1,2,1);hold on; grid on
plot(dx_f_exten,f)
coe = polyfit(dx_f_exten, f, 1);
xFit = linspace(min(dx_f_exten), max(dx_f_exten), 1000);
yFit = polyval(coe , xFit);
plot(xFit, yFit, 'r', 'LineWidth', 2);
xlabel('dx, meter'); ylabel('GRF, N'); title('Front Extension')
k = coe(1)*L/(M*g)

subplot(1,2,2); hold on; grid on
plot(q_f_swing,ddq_f_swing)
xlabel('swing, rad'); ylabel('ddswing, rad/s^2'); title('Front Swing')

%% Back Stance 
% back stance time duration
t = solution.tspan{5};
% back stance ground reaction froce
f = solution.inputs{5}.fLeftBack(3,:);
% initial extension angle 
q0_b_exten = (solution.states{5}.x(7,1)+solution.states{5}.x(8,1))./2;
% initial virtual leg length
x0_b_exten = rad2len(q0_b_exten);
% record change in extension angle and virtual leg length throughout back stance
for k = 1:21
    %% extension
    q_b_exten(k) = (solution.states{5}.x(7,k)+solution.states{5}.x(8,k))./2;
    x_b_exten(k) = rad2len(q_b_exten(k));
    dq_b_exten(k) = q0_b_exten - q_b_exten(k);
    dx_b_exten(k) = x0_b_exten - x_b_exten(k);
    %% swing
    q_b_swing(k) = (solution.states{5}.x(8,k)-solution.states{5}.x(7,k))./2;
    ddq_b_swing(k) = (solution.states{5}.ddx(8,k)-solution.states{5}.ddx(7,k))./2;  
end

figure(2); 
subplot(1,2,1); hold on; grid on
plot(dx_b_exten,f)
coe = polyfit(dx_b_exten, f, 1);
xFit = linspace(min(dx_b_exten), max(dx_b_exten), 1000);
yFit = polyval(coe , xFit);
plot(xFit, yFit, 'r', 'LineWidth', 2);
xlabel('dx, m'); ylabel('GRF, N'); title('Back Extension')
k = coe(1)*L/(M*g)

subplot(1,2,2); hold on; grid on
plot(q_b_swing,ddq_b_swing)
xlabel('swing, rad'); ylabel('ddswing, rad/s^2'); title('Back Swing')

%% Helper Function
function len = rad2len(rad)
syms b positive
a = 0.112;
c = 0.2;
len = double(solve(a^2 + b^2 - 2*a*b*cos(pi-rad) - c^2));
end