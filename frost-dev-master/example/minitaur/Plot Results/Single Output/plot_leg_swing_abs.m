% only plot left side, assume symmetry
q_front_left_log = [];
q_back_left_log = [];
phase = [1,3,5,7];  phase_time = [];
t_log = [];         endtime = 0;
node = [];          endnode = 0;
%% plot the actual value
for i = phase
    t_log = [t_log,solution.tspan{i}+endtime];
    q_front_left_log = [q_front_left_log, ((solution.states{i}.x(8,:)-solution.states{i}.x(7,:))./2+solution.states{i}.x(5,:)).*(180/pi)];
    q_back_left_log = [q_back_left_log, ((solution.states{i}.x(12,:)-solution.states{i}.x(11,:))./2+solution.states{i}.x(5,:)).*(180/pi)];
    endtime = t_log(end);
    phase_time = [phase_time,endtime];
end
t_log = [t_log,t_log(1:5)+endtime];
q_front_left_log = [q_front_left_log,q_front_left_log(1:5)];
q_back_left_log = [q_back_left_log, q_back_left_log(1:5)];
figure(3)
plot(t_log,q_front_left_log,'b','linewidth',2); hold on
plot(t_log,q_back_left_log,'r','linewidth',2);  hold on
title('Leg Swing')
%% plot the phase
for i = 1:4
    line([phase_time(i) phase_time(i)],get(gca,'ylim'))
end
legend('front','back')