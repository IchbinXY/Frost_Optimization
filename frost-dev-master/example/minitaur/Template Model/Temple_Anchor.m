clc;clear;close all
load('output_velocity_071_newT.mat')
load('Solution_DF_J1D7_Ks5.mat')
% Color Specification
Color_Template = [0,      0.4470, 0.7410];
Color_Anchor   = [0.8500, 0.3250, 0.0980];
Color_Stance   = [0.9290, 0.6940, 0.1250];

%% TEMPLATE
k = 122;
xFINAL = config(:,k);
% config contains [14 states by 210 solutions]
% [dx,  y,  dy, phi,    dphi,   alphaB, dalphaB,alphaF, dalphaF,tB_TD,  tB_LO,  tF_TD,  tF_LO,  tAPEX   ]
% [1,   2,  3,  4,      5,      6,      7,      8,      9,      10,     11,     12,     13,     14      ]
[~, T, Y, T_EVENT, Y_EVENT, ~, EXT_m] = ZeroFun_Quadruped(xFINAL,Param);
% Y contains [number of nodes by 10 states]
% [x,   dx, y,  dy, phi,    dphi,   alphaB, dalphaB,alphaF, dalphaF ]
% [1,   2,  3,  4,  5,      6,      7,      8,      9,      10      ]

% Find the index of each event in T and Y
I_EVENT = FindIndex(T, T_EVENT);

% Set the beginning of Front Stance as the start point
[T_new, I_EVENT_new] = WrapVector(T,         I_EVENT(3), I_EVENT);
Y_new(:,1)           = WrapVector(Y(:,1),    I_EVENT(3), I_EVENT);
Y_new(:,2:10)        = MoveVector(Y(:,2:10), I_EVENT(3), I_EVENT);
EXT_m_new            = MoveVector(EXT_m,     I_EVENT(3), I_EVENT);

% De-normalize parameters
mass_n = 6.46;                          % kg
gravity = 9.81;                         % meter/second^2
length_n = 0.2316;                      % meter
time_n = sqrt(length_n/gravity);        % second
velocity_n = sqrt(length_n*gravity);    % meter/second

time = T(end)*time_n;                   % second
distance = Y(end,1)*length_n;           % meter
avgvel = distance/time;
EXT_rad = len2rad(EXT_m_new);

% Plot torso states
figure(1);grid on;hold on
plot(T_new/T_new(end), Y_new(:,1)*length_n,  'linewidth',2);	% x

figure(2);grid on;hold on
plot(T_new/T_new(end), Y_new(:,2)*velocity_n,'linewidth',2);	% dx

figure(3);grid on;hold on
plot(T_new/T_new(end), Y_new(:,3)*length_n,  'linewidth',2);    % y

figure(4);grid on;hold on
plot(T_new/T_new(end), Y_new(:,4)*velocity_n,'linewidth',2);    % dy

figure(5);grid on;hold on
plot(T_new/T_new(end),-Y_new(:,5),           'linewidth',2);    % phi

figure(6);grid on;hold on
plot(T_new/T_new(end),-Y_new(:,6)/time_n,    'linewidth',2);    % dphi

% Plot front and back leg swing position and velocity
B_TD_idx = I_EVENT_new(1);
B_LO_idx = I_EVENT_new(2);
F_TD_idx = I_EVENT_new(3);
F_LO_idx = I_EVENT_new(4);

figure(7); grid on; hold on
plot(T_new/T_new(end),                     -Y_new(:,7),                 'linewidth',2,'color',Color_Template);
plot(T_new(B_TD_idx:B_LO_idx)/T_new(end),  -Y_new(B_TD_idx:B_LO_idx,7), 'linewidth',2,'color',Color_Stance  );        % Back Leg Stance
ylabel('back swing angle, rad')

figure(8); grid on; hold on
plot(T_new/T_new(end),                     -Y_new(:,8)/time_n,                 'linewidth',2,'color',Color_Template);
plot(T_new(B_TD_idx:B_LO_idx)/T_new(end),  -Y_new(B_TD_idx:B_LO_idx,8)/time_n, 'linewidth',2,'color',Color_Stance  ); % Back Leg Stance
ylabel('back swing velocity, rad/s')

figure(9); grid on; hold on
plot(T_new/T_new(end),                     -Y_new(:,9),                 'linewidth',2,'color',Color_Template);
plot(T_new(F_TD_idx:F_LO_idx)/T_new(end),  -Y_new(F_TD_idx:F_LO_idx,9), 'linewidth',2,'color',Color_Stance  );        % Front Leg Stance
ylabel('front swing angle, rad')

figure(10); grid on; hold on
plot(T_new/T_new(end),                     -Y_new(:,10)/time_n,                 'linewidth',2,'color',Color_Template);
plot(T_new(F_TD_idx:F_LO_idx)/T_new(end),  -Y_new(F_TD_idx:F_LO_idx,10)/time_n, 'linewidth',2,'color',Color_Stance  );% Front Leg Stance
ylabel('front swing velocity, rad/s')

figure(11); grid on; hold on
plot(T_new/T_new(end),                     EXT_rad(:,1),                 'linewidth',2,'color',Color_Template);
plot(T_new(B_TD_idx:B_LO_idx)/T_new(end),  EXT_rad(B_TD_idx:B_LO_idx,1), 'linewidth',2,'color',Color_Stance  );       % Back Leg Stance
ylabel('back extension angle, rad')

figure(12); grid on; hold on
plot(T_new/T_new(end),                     EXT_rad(:,2),                 'linewidth',2,'color',Color_Template);
plot(T_new(F_TD_idx:F_LO_idx)/T_new(end),  EXT_rad(F_TD_idx:F_LO_idx,2), 'linewidth',2,'color',Color_Stance  );       % Front Leg Stance
ylabel('front extension angle, rad')

motor_08_template = EXT_rad(:,2)+(-Y_new(:,9));
motor_07_template = EXT_rad(:,2)-(-Y_new(:,9));
motor_12_template = EXT_rad(:,1)+(-Y_new(:,7));
motor_11_template = EXT_rad(:,1)-(-Y_new(:,7));

figure(13)
subplot(1,4,1); hold on; grid on
plot(T_new/T_new(end),                      motor_08_template,                      'linewidth',2,'color',Color_Template);
plot(T_new(F_TD_idx:F_LO_idx)/T_new(end),   motor_08_template((F_TD_idx:F_LO_idx)), 'linewidth',2,'color',Color_Stance  );

subplot(1,4,2); hold on; grid on
plot(T_new/T_new(end),                      motor_07_template,                      'linewidth',2,'color',Color_Template);
plot(T_new(F_TD_idx:F_LO_idx)/T_new(end),   motor_07_template((F_TD_idx:F_LO_idx)), 'linewidth',2,'color',Color_Stance  );

subplot(1,4,3); hold on; grid on
plot(T_new/T_new(end),                      motor_12_template,                      'linewidth',2,'color',Color_Template);
plot(T_new(B_TD_idx:B_LO_idx)/T_new(end),   motor_12_template((B_TD_idx:B_LO_idx)), 'linewidth',2,'color',Color_Stance  );

subplot(1,4,4); hold on; grid on
plot(T_new/T_new(end),                      motor_11_template,                      'linewidth',2,'color',Color_Template);
plot(T_new(B_TD_idx:B_LO_idx)/T_new(end),   motor_11_template((B_TD_idx:B_LO_idx)), 'linewidth',2,'color',Color_Stance  );

knee_front = ext2knee(EXT_rad(:,2));
knee_back = ext2knee(EXT_rad(:,1));

figure(14)
subplot(1,4,1); hold on; grid on
plot(T_new/T_new(end),                      knee_front,                      'linewidth',2,'color',Color_Template);
plot(T_new(F_TD_idx:F_LO_idx)/T_new(end),   knee_front((F_TD_idx:F_LO_idx)), 'linewidth',2,'color',Color_Stance  );

subplot(1,4,2); hold on; grid on
plot(T_new/T_new(end),                      knee_front,                      'linewidth',2,'color',Color_Template);
plot(T_new(F_TD_idx:F_LO_idx)/T_new(end),   knee_front((F_TD_idx:F_LO_idx)), 'linewidth',2,'color',Color_Stance  );

subplot(1,4,3); hold on; grid on
plot(T_new/T_new(end),                      knee_back,                      'linewidth',2,'color',Color_Template);
plot(T_new(B_TD_idx:B_LO_idx)/T_new(end),   knee_back((B_TD_idx:B_LO_idx)), 'linewidth',2,'color',Color_Stance  );

subplot(1,4,4); hold on; grid on
plot(T_new/T_new(end),                      knee_back,                      'linewidth',2,'color',Color_Template);
plot(T_new(B_TD_idx:B_LO_idx)/T_new(end),   knee_back((B_TD_idx:B_LO_idx)), 'linewidth',2,'color',Color_Stance  );


%% ANCHOR
t = [];     q = [];     q_dot = [];
front_swing = [];       back_swing = [];
front_swing_dot = [];   back_swing_dot = [];
phase = [1,3,5,7];      phase_time = [];        endtime = 0;
for i = phase
    t     = [t,solution.tspan{i}+endtime];
    q     = [q,solution.states{i}.x];
    q_dot = [q_dot,solution.states{i}.dx];
    endtime = t(end);
    phase_time = [phase_time,endtime];
end
front_swing     = (q(8, :) - q(7, :))./2;
back_swing      = (q(12,:) - q(11,:))./2;
front_extension = (q(8, :) + q(7, :))./2;
back_extension  = (q(12,:) + q(11,:))./2;
front_swing_dot = (q_dot(8, :) - q_dot(7, :))./2;
back_swing_dot  = (q_dot(12,:) - q_dot(11,:))./2;

figure(1);
plot(t/endtime,q(1,:),'linewidth',2);       % x
ylabel('x, m');legend('template','anchor')

figure(2);
plot(t/endtime,q_dot(1,:),'linewidth',2);   % dx
ylabel('dx, m/s');legend('template','anchor')

figure(3);
plot(t/endtime,q(3,:),'linewidth',2);       % z
ylabel('z, m');legend('template','anchor')

figure(4);
plot(t/endtime,q_dot(3,:),'linewidth',2);   % dz
ylabel('dz, m/s');legend('template','anchor')

figure(5);
plot(t/endtime,q(5,:),'linewidth',2);       % pitch
ylabel('pitch, rad');legend('template','anchor')

figure(6);
plot(t/endtime,q_dot(5,:),'linewidth',2);   % dpitch
ylabel('dpitch, rad/s');legend('template','anchor')

figure(7);grid on;hold on
plot(t/endtime, back_swing,'linewidth',2,'color',Color_Anchor);
plot(t(43:64)/endtime, back_swing(43:64), 'linewidth',2,'color',Color_Stance);

figure(8);grid on;hold on
plot(t/endtime, back_swing_dot,'linewidth',2,'color',Color_Anchor);
plot(t(43:64)/endtime, back_swing_dot(43:64),'linewidth',2,'color',Color_Stance);

figure(9);grid on;hold on
plot(t/endtime,front_swing,'linewidth',2,'color',Color_Anchor);
plot(t(1:21)/endtime,front_swing(1:21),'linewidth',2,'color',Color_Stance);

figure(10);grid on;hold on
plot(t/endtime,front_swing_dot,'linewidth',2,'color',Color_Anchor);
plot(t(1:21)/endtime,front_swing_dot(1:21),'linewidth',2,'color',Color_Stance);

figure(11);grid on;hold on
plot(t/endtime, back_extension,'linewidth',2,'color',Color_Anchor);
plot(t(43:64)/endtime, back_extension(43:64), 'linewidth',2,'color',Color_Stance);

figure(12);grid on;hold on
plot(t/endtime,front_extension,'linewidth',2,'color',Color_Anchor);
plot(t(1:21)/endtime,front_extension(1:21),'linewidth',2,'color',Color_Stance);

figure(13)
subplot(1,4,1); hold on; grid on
plot(t/endtime,       q(8,:),    'linewidth',2,'color',Color_Anchor);
plot(t(1:21)/endtime, q(8,1:21), 'linewidth',2,'color',Color_Stance);
ylabel('motor front leftR')

subplot(1,4,2); hold on; grid on
plot(t/endtime,       q(7,:),    'linewidth',2,'color',Color_Anchor);
plot(t(1:21)/endtime, q(7,1:21), 'linewidth',2,'color',Color_Stance);
ylabel('motor front leftL')

subplot(1,4,3); hold on; grid on
plot(t/endtime,        q(12,:),     'linewidth',2,'color',Color_Anchor);
plot(t(43:64)/endtime, q(12,43:64), 'linewidth',2,'color',Color_Stance);
ylabel('motor back leftR')

subplot(1,4,4); hold on; grid on
plot(t/endtime,        q(11,:),     'linewidth',2,'color',Color_Anchor);
plot(t(43:64)/endtime, q(11,43:64), 'linewidth',2,'color',Color_Stance);
ylabel('motor back leftL')

figure(14)
subplot(1,4,1); hold on; grid on
plot(t/endtime,       q(9,:),    'linewidth',2,'color',Color_Anchor);
plot(t(1:21)/endtime, q(9,1:21), 'linewidth',2,'color',Color_Stance);
ylabel('knee front leftL')

subplot(1,4,2); hold on; grid on
plot(t/endtime,       q(10,:),    'linewidth',2,'color',Color_Anchor);
plot(t(1:21)/endtime, q(10,1:21), 'linewidth',2,'color',Color_Stance);
ylabel('knee front leftR')

subplot(1,4,3); hold on; grid on
plot(t/endtime,        q(13,:),     'linewidth',2,'color',Color_Anchor);
plot(t(43:64)/endtime, q(13,43:64), 'linewidth',2,'color',Color_Stance);
ylabel('knee back leftL')

subplot(1,4,4); hold on; grid on
plot(t/endtime,        q(14,:),     'linewidth',2,'color',Color_Anchor);
plot(t(43:64)/endtime, q(14,43:64), 'linewidth',2,'color',Color_Stance);
ylabel('knee back leftR')

%% Index Comparison
%    1 -  193   Apex to B_TD    % 1078 - 1270 Apex to B_TD
%  194          B_TD event      % 1271        B_TD event
%  195 - 1075   B_TD to B_LO    % 1272 - 2152 B_TD to B_LO
% 1076 - 1252   B_LO to F_TD    % 2153 - 2329 B_LO to F_TD
% 1253          F_TD_event      % 2330 (2331) F_TD event 
% 1254 - 2134   F_TD to F_LO    %    1 -  881 F_TD to F_LO     
% 2135 - (2331) F_LO to Apex    %  882 - 1078 F_LO to Apex

% TEMPLATE (10 states)          % ANCHOR (22 states, 19 actives)
%    1 -  881 F_TD to F_LO      %  1 - 21 Front Stance
%  882 - 1270 F_LO to B_TD      % 22 - 42 Flight1
% 1271        B_TD event
% 1272 - 2152 B_TD to B_LO      % 43 - 63 Back Stance
% 2153 - 2329 B_LO to F_TD      % 64 - 84 Flight2
% 2330        F_TD event
% (2331)      F_TD

%% Test Helper Function

%% Helper Function
function [new_vector, new_event_index] = MoveVector(vector, start_index, event_index)
k = 1;
index_map = zeros(size(vector,1),1);
new_vector = zeros(size(vector));
new_event_index = zeros(size(event_index));
for i = start_index:length(vector)
    index_map(i) = k;
    new_vector(k,:) = vector(i,:);
    k = k + 1;   
end
for i = 2:start_index
    index_map(i-1) = k-1;
    new_vector(k,:) = vector(i,:);
    k = k + 1;
end
for j = 1:length(event_index)
    new_event_index(j) = index_map(event_index(j));
end
end

function [new_vector, new_event_index] = WrapVector(vector, start_index, event_index)
k = 1;
index_map = zeros(size(vector,1),1);
new_vector = zeros(size(vector));
new_event_index = zeros(size(event_index));
for i = start_index:length(vector)
    index_map(i) = k;
    new_vector(k,:) = vector(i,:) - vector(start_index,:);
    k = k + 1;
end
for i = 2:start_index
    index_map(i-1) = k-1;
    new_vector(k,:) = vector(i,:) + (vector(end,:) - vector(start_index,:));
    k = k + 1;
end
for j = 1:length(event_index)
    new_event_index(j) = index_map(event_index(j));
end
end

function I_EVENT = FindIndex(T, T_EVENT)
I_EVENT = zeros(size(T_EVENT));
for i = 1:length(T_EVENT)
    I_event = find(T == T_EVENT(i));
    I_event = I_event(end);
    I_EVENT(i) = I_event;
end
end

function rad = len2rad(len)
rad = zeros(size(len));
for i = 1:size(len,1)
    for j = 1:size(len,2)
        rad(i,j) = (len(i,j)*0.2316+0.0307)/0.1247;
    end
end
end

function knee = ext2knee(ext)
knee = zeros(size(ext));
a = 0.112;
c = 0.199;
for i = 1:length(ext)
    alpha = asin(sin(pi-ext(i))*a/c);
    knee(i) = ext(i) - alpha;
end
end

