clc;clear;close all
% figure; hold on; grid on
load('output_velocity_06.mat')
load('Solution_DF_BackR_Ks20.mat')
% plot3(config(1,:),config(8,:),config(2,:),'linewidth',2);
% xlabel('dx'); ylabel('alphaF'); zlabel('y');
%
k = 1;
xFINAL = config(:,k);
% config contains [14 states by 405 solutions]
% [dx,  y,  dy, phi,    dphi,   alphaB, dalphaB,alphaF, dalphaF,tB_TD,  tB_LO,  tF_TD,  tF_LO,  tAPEX   ]
% [1,   2,  3,  4,      5,      6,      7,      8,      9,      10,     11,     12,     13,     14      ]
[~, T, Y, T_EVENT, Y_EVENT, ~] = ZeroFun_Quadruped(xFINAL,Param);
% Y contains [number of nodes by 10 states]
% [x,   dx, y,  dy, phi,    dphi,   alphaB, dalphaB,alphaF, dalphaF ]
% [1,   2,  3,  4,  5,      6,      7,      8,      9,      10      ]
% plot3(Y(1,2)*ones(size(Y)), Y(:,9), Y(:,3))

%% Set the start point to be front TD
tB_TD_idx = find(T == T_EVENT(1)); tB_TD_idx = tB_TD_idx(end); % Mark the start of Back Stance
tB_LO_idx = find(T == T_EVENT(2)); tB_LO_idx = tB_LO_idx(end); % Mark the start of Flight2
tF_TD_idx = find(T == T_EVENT(3)); tF_TD_idx = tF_TD_idx(end); % Mark the start of Front Stance
tF_LO_idx = find(T == T_EVENT(4)); tF_LO_idx = tF_LO_idx(end); % Mark the start of Flight1
tAPEX_idx = find(T == T_EVENT(5)); tAPEX_idx = tAPEX_idx(end); % Mark the Apex time 

tF_TD = T(tF_TD_idx);                           xF_TD = Y(tF_TD_idx,1);
T(tF_TD_idx:end) = T(tF_TD_idx:end) - tF_TD;    Y(tF_TD_idx:end,1) = Y(tF_TD_idx:end,1) - xF_TD;
tAPEX = T(end);                                 x_APEX = Y(end,1);
T(1:tF_TD_idx-1) = T(1:tF_TD_idx-1) + tAPEX;    Y(1:tF_TD_idx-1,1) = Y(1:tF_TD_idx-1,1) + x_APEX;
T = [T(tF_TD_idx:end);T(1:tF_TD_idx-1)];        Y = [Y(tF_TD_idx:end,:);Y(1:tF_TD_idx-1,:)];

%% de-normalized
mass_n = 6.46;      % kg
gravity = 9.81;     % meter/second^2
length_n = 0.25;    % meter

time_n = sqrt(length_n/gravity);% second
velocity_n = sqrt(length_n*gravity);    % meter/second

time = config(end,20)*time_n;   % second
distance = Y(end,1)*length_n;   % meter
avgvel = distance/time;

%% Plot torso states
figure(1);grid on;hold on
plot(T/config(end,k),Y(:,1)*length_n,'linewidth',2);	% x

figure(2);grid on;hold on
plot(T/config(end,k),Y(:,2)*velocity_n,'linewidth',2);	% dx

figure(3);grid on;hold on
plot(T/config(end,k),Y(:,3)*length_n,'linewidth',2);   % y

figure(4);grid on;hold on
plot(T/config(end,k),Y(:,4)*velocity_n,'linewidth',2); % dy

figure(5);grid on;hold on
plot(T/config(end,k),-Y(:,5),'linewidth',2);           % phi

figure(6);grid on;hold on
plot(T/config(end,k),-Y(:,6)/time_n,'linewidth',2);    % dphi

%% Plot front and back leg swing position and velocity
tB_TD_idx = find(T == (T_EVENT(1) - tF_TD)); tB_TD_idx = tB_TD_idx(end); % Mark the new start of Back Stance
tB_LO_idx = find(T == (T_EVENT(2) - tF_TD)); tB_LO_idx = tB_LO_idx(end); % Mark the new start of Flight2
tF_TD_idx = find(T == (T_EVENT(3) - tF_TD)); tF_TD_idx = tF_TD_idx(end); % Mark the new start of Front Stance
tF_LO_idx = find(T == (T_EVENT(4) - tF_TD)); tF_LO_idx = tF_LO_idx(end); % Mark the new start of Flight1

figure(7); grid on; hold on
plot(T(        1:tB_TD_idx)/config(end,k),          Y(1:tB_TD_idx,7),   'linewidth',2,'color',[0,      0.4470, 0.7410]);        % Back Leg Swing
plot(T(tB_TD_idx:tB_LO_idx)/config(end,k),  Y(tB_TD_idx:tB_LO_idx,7),   'linewidth',2,'color',[0.9290, 0.6940, 0.1250]);        % Back Leg Stance
plot(T(tB_LO_idx:end      )/config(end,k),        Y(tB_LO_idx:end,7),   'linewidth',2,'color',[0,      0.4470, 0.7410]);        % Back Leg Swing
ylabel('back swing position, rad')

figure(8); grid on; hold on
plot(T(        1:tB_TD_idx)/config(end,k),          Y(1:tB_TD_idx,8)/time_n,    'linewidth',2,'color',[0,      0.4470, 0.7410]);        % Back Leg Swing
plot(T(tB_TD_idx:tB_LO_idx)/config(end,k),  Y(tB_TD_idx:tB_LO_idx,8)/time_n,    'linewidth',2,'color',[0.9290, 0.6940, 0.1250]);        % Back Leg Stance
plot(T(tB_LO_idx:end      )/config(end,k),        Y(tB_LO_idx:end,8)/time_n, 	'linewidth',2,'color',[0,      0.4470, 0.7410]);        % Back Leg Swing
ylabel('back swing velocity, rad/s')

figure(9); grid on; hold on
% plot(T(        1:tF_TD_idx)/config(end,k),          Y(1:tF_TD_idx,9),	'linewidth',2,'color',[0,      0.4470, 0.7410]);        % Front Leg Swing
plot(T(tF_TD_idx:tF_LO_idx)/config(end,k),  Y(tF_TD_idx:tF_LO_idx,9),   'linewidth',2,'color',[0.9290, 0.6940, 0.1250]);        % Front Leg Stance
plot(T(tF_LO_idx:end      )/config(end,k),        Y(tF_LO_idx:end,9), 	'linewidth',2,'color',[0,      0.4470, 0.7410]);        % Front Leg Swing
ylabel('front swing position, rad')

figure(10); grid on; hold on
% plot(T(        1:tF_TD_idx)/config(end,k),          Y(1:tF_TD_idx,10)/time_n,	'linewidth',2,'color',[0,      0.4470, 0.7410]);        % Front Leg Swing
plot(T(tF_TD_idx:tF_LO_idx)/config(end,k),  Y(tF_TD_idx:tF_LO_idx,10)/time_n,   'linewidth',2,'color',[0.9290, 0.6940, 0.1250]);        % Front Leg Stance
plot(T(tF_LO_idx:end      )/config(end,k),        Y(tF_LO_idx:end,10)/time_n, 	'linewidth',2,'color',[0,      0.4470, 0.7410]);        % Front Leg Swing
ylabel('front swing velocity, rad/s')


%% ANCHOR
t_log = [];     q_log = [];     q_dot_log = [];
front_swing = [];   back_swing = [];
phase = [1,3,5,7];  phase_time = [];    endtime = 0;
for i = phase
    t_log = [t_log,solution.tspan{i}+endtime];
    q_log = [q_log,solution.states{i}.x];
    q_dot_log = [q_dot_log,solution.states{i}.dx];
    front_swing = [front_swing, (solution.states{i}.x(8,:)-solution.states{i}.x(7,:))./2];
    back_swing = [back_swing, (solution.states{i}.x(12,:)-solution.states{i}.x(11,:))./2];
    endtime = t_log(end);
    phase_time = [phase_time,endtime];
end

tF_TD_idx = 1;                                                        % Mark the start of Front Stance
tF_LO_idx = find(t_log == phase_time(1)); tF_LO_idx = tF_LO_idx(end); % Mark the start of Flight1
tB_TD_idx = find(t_log == phase_time(2)); tB_TD_idx = tB_TD_idx(end); % Mark the start of Back Stance
tB_LO_idx = find(t_log == phase_time(3)); tB_LO_idx = tB_LO_idx(end); % Mark the start of Flight2

figure(1);
plot(t_log/endtime,q_log(1,:),'linewidth',2);       % x
ylabel('x, m');legend('template','anchor')

figure(2);
plot(t_log/endtime,q_dot_log(1,:),'linewidth',2);   % dx
ylabel('dx, m/s');legend('template','anchor')

figure(3);
plot(t_log/endtime,q_log(3,:),'linewidth',2);       % z
ylabel('z, m');legend('template','anchor')

figure(4);
plot(t_log/endtime,q_dot_log(3,:),'linewidth',2);   % dz
ylabel('dz, m/s');legend('template','anchor')

figure(5);
plot(t_log/endtime,q_log(5,:),'linewidth',2);       % pitch
ylabel('pitch, rad');legend('template','anchor')

figure(6);
plot(t_log/endtime,q_dot_log(5,:),'linewidth',2);   % dpitch
ylabel('dpitch, rad/s');legend('template','anchor')

figure(7);grid on;hold on
plot(t_log(tF_TD_idx:tB_TD_idx)/endtime,back_swing(tF_TD_idx:tB_TD_idx),'linewidth',2,'color',[0.8500    0.3250    0.0980]);
plot(t_log(tB_TD_idx:tB_LO_idx)/endtime,back_swing(tB_TD_idx:tB_LO_idx),'linewidth',2,'color',[0.9290, 0.6940, 0.1250]);
plot(t_log(tB_LO_idx:end)/endtime, back_swing(tB_LO_idx:end),'linewidth',2,'color',[0.8500    0.3250    0.0980]);


figure(9);grid on;hold on
plot(t_log(tF_TD_idx:tF_LO_idx)/endtime,front_swing(tF_TD_idx:tF_LO_idx),'linewidth',2,'color',[0.9290, 0.6940, 0.1250]);
plot(t_log(tF_LO_idx:end)/endtime,front_swing(tF_LO_idx:end),'linewidth',2,'color',[0.8500    0.3250    0.0980]);



function plotPhase(phase_time,phase_time_template,figure_id)
figure(figure_id)
for i = 1:4
    xline(phase_time(i),'r')
    xline(phase_time_template(i),'b')
end
end






