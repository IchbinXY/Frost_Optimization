% only plot left side, assume symmetry
q_front_left_log = [];
q_back_left_log = [];
phase = [1,3,5,7];  phase_time = [];
t_log = [];         endtime = 0;
node = [];          endnode = 0;
%% plot the actual value 
for i = phase
    t_log = [t_log,solution.tspan{i}+endtime];
    q_front_left_log = [q_front_left_log, (solution.states{i}.x(7,:)+solution.states{i}.x(8,:))./2];%.*(180/pi)];
    q_back_left_log = [q_back_left_log, (solution.states{i}.x(11,:)+solution.states{i}.x(12,:))./2];%.*(180/pi)];
    
    if i == 1
        t_front_left_stance = solution.tspan{i}+endtime;
        q_front_left_stance = (solution.states{i}.x(7,:)+solution.states{i}.x(8,:))./2;
    end
    if i == 5
        t_back_left_stance = solution.tspan{i}+endtime;
        q_back_left_stance = (solution.states{i}.x(11,:)+solution.states{i}.x(12,:))./2;
    end
    endtime = t_log(end);
    phase_time = [phase_time,endtime];
    
    for k = [1,11,21]
        node = [node, solution.tspan{i}(k)+endnode];
    end
    endnode = node(end);
end
t_log = [t_log,t_log(1:5)+endtime];
q_front_left_log = [q_front_left_log,q_front_left_log(1:5)];
q_back_left_log = [q_back_left_log, q_back_left_log(1:5)];
figure(2); grid on; hold on
plot(t_log, q_front_left_log,   'b','linewidth',2);
plot(t_log, q_back_left_log,    'r','linewidth',2);
plot(t_front_left_stance,   q_front_left_stance,    'k','linewidth',2);
plot(t_back_left_stance,    q_back_left_stance,     'k','linewidth',2);
title('Leg Extension')

%% plot the boundary value 
% front_left_lb = [180, 10,180,   180,180,180,    180, 10,180,    180,180,180];
% front_left_ub = [350,350,350,   350,350,350,    350,350,350,    350,350,350];
% back_left_lb =  [180, 10,180,   180,180,180,    180, 10,180,    180,180,180];
% back_left_ub =  [350,350,350,   350,350,350,    350,350,350,    350,350,350];
% scatter(node,front_left_lb,'b')
% scatter(node,front_left_ub,'b','x')
% scatter(node,back_left_lb,'r')
% scatter(node,back_left_ub,'r','x')

%% plot the phase
% for i = 1:4
%     line([phase_time(i) phase_time(i)],get(gca,'ylim'))
% end
% legend('front','back')