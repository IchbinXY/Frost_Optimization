clc;clear;close all
load('output_velocity_075_updated.mat')
load('Solution_DF_La0D987_J2D3_Ks5.mat')

%% TEMPLATE
k = 86;
[T_new, Y_new, I_EVENT_new, EXT_rad, avgvel] = output_template(config, Param, k);

% De-normalize parameters
mass_n = 6.46;                          % kg
gravity = 9.81;                         % meter/second^2
length_n = 0.2316;                      % meter
time_n = sqrt(length_n/gravity);        % second
velocity_n = sqrt(length_n*gravity);    % meter/second

% Plot torso states
figure(1);
subplot(1,2,1); grid on; hold on
plotTraj(T_new/T_new(end),  Y_new(:,1)*length_n,    'Template', 'Both', I_EVENT_new);
xlabel('normalized time'); ylabel('x position, m');
subplot(1,2,2); grid on; hold on
plotTraj(T_new/T_new(end),  Y_new(:,2)*velocity_n,  'Template', 'Both', I_EVENT_new);
xlabel('normalized time'); ylabel('x velocity, m/s');

figure(2);
subplot(1,2,1); grid on; hold on
plotTraj(T_new/T_new(end),  Y_new(:,3)*length_n,    'Template', 'Both', I_EVENT_new);
xlabel('normalized time'); ylabel('z position, m');
subplot(1,2,2); grid on; hold on
plotTraj(T_new/T_new(end),  Y_new(:,4)*velocity_n,  'Template', 'Both', I_EVENT_new);
xlabel('normalized time'); ylabel('z velocity, m');

figure(3);
subplot(1,2,1); grid on; hold on
plotTraj(T_new/T_new(end), -Y_new(:,5),             'Template', 'Both', I_EVENT_new);
xlabel('normalized time'); ylabel('pitch angle, rad');
subplot(1,2,2); grid on; hold on
plotTraj(T_new/T_new(end), -Y_new(:,6)/time_n,      'Template', 'Both', I_EVENT_new);
xlabel('normalized time'); ylabel('pitch rate, rad/s');

% Plot front and back leg swing position and velocity
figure(4); 
subplot(1,2,1); grid on; hold on
plotTraj(T_new/T_new(end), -Y_new(:,7),             'Template', 'Back', I_EVENT_new);
xlabel('normalized time'); ylabel('back swing angle, rad')
subplot(1,2,2); grid on; hold on
plotTraj(T_new/T_new(end), -Y_new(:,8)/time_n,      'Template', 'Back', I_EVENT_new);
xlabel('normalized time'); ylabel('back swing rate, rad/s')

figure(5); 
subplot(1,2,1); grid on; hold on
plotTraj(T_new/T_new(end), -Y_new(:,9),             'Template', 'Front', I_EVENT_new);
xlabel('normalized time'); ylabel('front swing angle, rad')
subplot(1,2,2); grid on; hold on
plotTraj(T_new/T_new(end), -Y_new(:,10)/time_n,     'Template', 'Front', I_EVENT_new);
xlabel('normalized time'); ylabel('front swing rate, rad/s')

figure(6); grid on; hold on
plotTraj(T_new/T_new(end),  EXT_rad(:,1),           'Template', 'Back', I_EVENT_new);
xlabel('normalized time'); ylabel('back extension angle, rad')

figure(7); grid on; hold on
plotTraj(T_new/T_new(end),  EXT_rad(:,2),           'Template', 'Front', I_EVENT_new);
xlabel('normalized time'); ylabel('front extension angle, rad')

% Plot front and back motor angle
motor_08_template = EXT_rad(:,2)+(-Y_new(:,9));
motor_07_template = EXT_rad(:,2)-(-Y_new(:,9));
motor_12_template = EXT_rad(:,1)+(-Y_new(:,7));
motor_11_template = EXT_rad(:,1)-(-Y_new(:,7));

figure(8)
subplot(1,4,1); hold on; grid on
plotTraj(T_new/T_new(end),  motor_08_template,      'Template', 'Front', I_EVENT_new);
subplot(1,4,2); hold on; grid on
plotTraj(T_new/T_new(end),  motor_07_template,      'Template', 'Front', I_EVENT_new);
subplot(1,4,3); hold on; grid on
plotTraj(T_new/T_new(end),  motor_12_template,      'Template', 'Back', I_EVENT_new);
subplot(1,4,4); hold on; grid on
plotTraj(T_new/T_new(end),  motor_11_template,      'Template', 'Back', I_EVENT_new);

% Plot front and back leg knee angle
knee_front = ext2knee(EXT_rad(:,2));
knee_back = ext2knee(EXT_rad(:,1));

figure(9)
subplot(1,4,1); hold on; grid on
plotTraj(T_new/T_new(end),  knee_front,             'Template', 'Front', I_EVENT_new);
subplot(1,4,2); hold on; grid on
plotTraj(T_new/T_new(end),  knee_front,             'Template', 'Front', I_EVENT_new);
subplot(1,4,3); hold on; grid on
plotTraj(T_new/T_new(end),  knee_back,              'Template', 'Back', I_EVENT_new);
subplot(1,4,4); hold on; grid on
plotTraj(T_new/T_new(end),  knee_back,              'Template', 'Back', I_EVENT_new);


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
subplot(1,2,1); hold on; grid on
plotTraj(t/endtime,  q(1,:) - q(1,1),   'Anchor', 'Both', I_EVENT_new);
legend('template','anchor')
subplot(1,2,2); hold on; grid on
plotTraj(t/endtime,  q_dot(1,:),        'Anchor', 'Both', I_EVENT_new);
legend('template','anchor')

figure(2);
subplot(1,2,1); hold on; grid on
plotTraj(t/endtime,  q(3,:),            'Anchor', 'Both', I_EVENT_new);
legend('template','anchor')
subplot(1,2,2); hold on; grid on
plotTraj(t/endtime,  q_dot(3,:),        'Anchor', 'Both', I_EVENT_new);
legend('template','anchor')

figure(3);
subplot(1,2,1); hold on; grid on
plotTraj(t/endtime,  q(5,:),            'Anchor', 'Both', I_EVENT_new);
legend('template','anchor')
subplot(1,2,2); hold on; grid on
plotTraj(t/endtime,  q_dot(5,:),        'Anchor', 'Both', I_EVENT_new);
legend('template','anchor')

figure(4);
subplot(1,2,1); grid on; hold on
plotTraj(t/endtime,  back_swing,        'Anchor', 'Back', I_EVENT_new);
legend('template','anchor')
subplot(1,2,2); grid on; hold on
plotTraj(t/endtime,  back_swing_dot,	'Anchor', 'Back', I_EVENT_new);
legend('template','anchor')

figure(5);
subplot(1,2,1); grid on; hold on
plotTraj(t/endtime,  front_swing,       'Anchor', 'Front', I_EVENT_new);
legend('template','anchor')
subplot(1,2,2);grid on;hold on
plotTraj(t/endtime,  front_swing_dot, 	'Anchor', 'Front', I_EVENT_new);
legend('template','anchor')

figure(6); grid on; hold on
plotTraj(t/endtime,  back_extension, 	'Anchor', 'Back', I_EVENT_new);
legend('template','anchor')

figure(7); grid on; hold on
plotTraj(t/endtime,  front_extension, 	'Anchor', 'Front', I_EVENT_new);
legend('template','anchor')

figure(8)
subplot(1,4,1); hold on; grid on
plotTraj(t/endtime,  q(8,:),            'Anchor', 'Front', I_EVENT_new);
ylabel('motor front leftR')
subplot(1,4,2); hold on; grid on
plotTraj(t/endtime,  q(7,:),            'Anchor', 'Front', I_EVENT_new);
ylabel('motor front leftL')
subplot(1,4,3); hold on; grid on
plotTraj(t/endtime,  q(12,:),           'Anchor', 'Back', I_EVENT_new);
ylabel('motor back leftR')
subplot(1,4,4); hold on; grid on
plotTraj(t/endtime,  q(11,:),           'Anchor', 'Back', I_EVENT_new);
ylabel('motor back leftL')

figure(9)
subplot(1,4,1); hold on; grid on
plotTraj(t/endtime,  q(9,:),            'Anchor', 'Front', I_EVENT_new);
ylabel('knee front leftL')
subplot(1,4,2); hold on; grid on
plotTraj(t/endtime,  q(10,:),           'Anchor', 'Front', I_EVENT_new);
ylabel('knee front leftR')
subplot(1,4,3); hold on; grid on
plotTraj(t/endtime,  q(13,:),           'Anchor', 'Back', I_EVENT_new);
ylabel('knee back leftL')
subplot(1,4,4); hold on; grid on
plotTraj(t/endtime,  q(14,:),           'Anchor', 'Back', I_EVENT_new);
ylabel('knee back leftR')

%% Index Comparison
%    1 -  213   Apex to B_TD    % 1082 - 1294 Apex to B_TD
%  214          B_TD event      % 1295        B_TD event
%  215 - 1079   B_TD to B_LO    % 1296 - 2160 B_TD to B_LO
% 1080 - 1264   B_LO to F_TD    % 2161 - 2345 B_LO to F_TD
% 1265          F_TD_event      % 2346 (2347) F_TD event 
% 1266 - 2130   F_TD to F_LO    %    1 -  865 F_TD to F_LO     
% 2131 - (2347) F_LO to Apex    %  866 - 1082 F_LO to Apex

% TEMPLATE (10 states)          % ANCHOR (22 states, 19 actives)
%    1 -  865 F_TD to F_LO      %  1 - 21 Front Stance
%  866 - 1294 F_LO to B_TD      % 22 - 42 Flight1
% 1295        B_TD event
% 1296 - 2160 B_TD to B_LO      % 43 - 63 Back Stance
% 2161 - 2345 B_LO to F_TD      % 64 - 84 Flight2
% 2346        F_TD event
% (2347)      F_TD (Continuity)

%% State Comparison
%       x ---  q(1)
%      dx --- dq(1)
%       y ---  q(3)
%      dy --- dq(3)
%     phi ---  q(5)
%    dphi --- dq(5)
%  alphaB ---  (q(8)  -  q(7)) /2
% dalphaB --- (dq(8)  - dq(7)) /2
%  alphaF ---  (q(12) -  q(11))/2
% dalphaF --- (dq(12) - dq(11))/2


%% Test Helper Function

%% Helper Function
% function [new_vector, new_event_index] = MoveVector(vector, start_index, event_index)
% k = 1;
% index_map = zeros(size(vector,1),1);
% new_vector = zeros(size(vector));
% new_event_index = zeros(size(event_index));
% for i = start_index:length(vector)
%     index_map(i) = k;
%     new_vector(k,:) = vector(i,:);
%     k = k + 1;   
% end
% for i = 2:start_index
%     index_map(i-1) = k-1;
%     new_vector(k,:) = vector(i,:);
%     k = k + 1;
% end
% for j = 1:length(event_index)
%     new_event_index(j) = index_map(event_index(j));
% end
% end
% 
% function [new_vector, new_event_index] = WrapVector(vector, start_index, event_index)
% k = 1;
% index_map = zeros(size(vector,1),1);
% new_vector = zeros(size(vector));
% new_event_index = zeros(size(event_index));
% for i = start_index:length(vector)
%     index_map(i) = k;
%     new_vector(k,:) = vector(i,:) - vector(start_index,:);
%     k = k + 1;
% end
% for i = 2:start_index
%     index_map(i-1) = k-1;
%     new_vector(k,:) = vector(i,:) + (vector(end,:) - vector(start_index,:));
%     k = k + 1;
% end
% for j = 1:length(event_index)
%     new_event_index(j) = index_map(event_index(j));
% end
% end
% 
% function I_EVENT = FindIndex(T, T_EVENT)
% I_EVENT = zeros(size(T_EVENT));
% for i = 1:length(T_EVENT)
%     I_event = find(T == T_EVENT(i));
%     I_event = I_event(end);
%     I_EVENT(i) = I_event;
% end
% end
% 
% function rad = len2rad(len)
% rad = zeros(size(len));
% for i = 1:size(len,1)
%     for j = 1:size(len,2)
%         rad(i,j) = (len(i,j)*0.2316+0.0307)/0.1247;
%     end
% end
% end
% 
% function knee = ext2knee(ext)
% knee = zeros(size(ext));
% a = 0.112;
% c = 0.199;
% for i = 1:length(ext)
%     alpha = asin(sin(pi-ext(i))*a/c);
%     knee(i) = ext(i) - alpha;
% end
% end
% 
% function plotTraj(Time, Traj, Model, Stance, I_EVENT_template)
% Color_Template = [0,      0.4470, 0.7410];
% Color_Anchor   = [0.8500, 0.3250, 0.0980];
% 
% B_TD_idx = I_EVENT_template(1);
% B_LO_idx = I_EVENT_template(2);
% F_TD_idx = I_EVENT_template(3);
% F_LO_idx = I_EVENT_template(4);
% 
% switch Model
%     case 'Template'
%         plot(Time, Traj, '--', 'linewidth',2, 'color',Color_Template, 'HandleVisibility','off'); 
%         switch Stance
%             case 'Front'
%                 plot(Time(F_TD_idx:F_LO_idx),  Traj(F_TD_idx:F_LO_idx), 'linewidth',2, 'color',Color_Template); 
%             case 'Back'
%                 plot(Time(B_TD_idx:B_LO_idx),  Traj(B_TD_idx:B_LO_idx), 'linewidth',2, 'color',Color_Template); 
%             case 'Both'
%                 plot(Time(B_TD_idx:B_LO_idx),  Traj(B_TD_idx:B_LO_idx), 'linewidth',2, 'color',Color_Template, 'HandleVisibility','off');
%                 plot(Time(F_TD_idx:F_LO_idx),  Traj(F_TD_idx:F_LO_idx), 'linewidth',2, 'color',Color_Template); 
%         end
%     case 'Anchor'
%         plot(Time, Traj, '--', 'linewidth',2, 'color',Color_Anchor, 'HandleVisibility','off'); 
%         switch Stance
%             case 'Front'
%                 plot(Time(1:21),  Traj(1:21), 'linewidth',2, 'color',Color_Anchor); 
%             case 'Back'
%                 plot(Time(43:64),  Traj(43:64), 'linewidth',2, 'color',Color_Anchor); 
%             case 'Both'
%                 plot(Time(43:64),  Traj(43:64), 'linewidth',2, 'color',Color_Anchor, 'HandleVisibility','off');
%                 plot(Time(1:21),  Traj(1:21), 'linewidth',2, 'color',Color_Anchor); 
%         end
% end
% end
