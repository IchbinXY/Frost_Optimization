% only plot left side, assume symmetry
velocity = 5:1:9;
figure(1)
subplot(1,2,1)
for j = 1:length(velocity)
    load(['output_velocity_0',num2str(velocity(j)),'.mat'])
    t_log = solution.tspan{1};
    q_front_left_log = (solution.states{1}.x(8,:)+solution.states{1}.x(7,:))./2;%.*(180/pi)];
    plot(t_log,q_front_left_log,'linewidth',2); hold on; grid on
end
legend('0.5','0.6','0.7','0.8','0.9')
title('Front Leg Extension')

subplot(1,2,2)
for j = 1:length(velocity)
    load(['output_velocity_0',num2str(velocity(j)),'.mat'])
    t_log = solution.tspan{1};
    q_front_left_log = (solution.states{1}.x(8,:)-solution.states{1}.x(7,:))./2;%.*(180/pi)];
    plot(t_log,q_front_left_log,'linewidth',2); hold on; grid on
end
legend('0.5','0.6','0.7','0.8','0.9')
title('Front Leg Swing')

figure(2)
subplot(1,2,1)
for j = 1:length(velocity)
    load(['output_velocity_0',num2str(velocity(j)),'.mat'])
    t_log = solution.tspan{5};
    q_left_left_log = (solution.states{5}.x(12,:)+solution.states{5}.x(11,:))./2;%.*(180/pi)];
    plot(t_log,q_left_left_log,'linewidth',2); hold on; grid on
end
legend('0.5','0.6','0.7','0.8','0.9')
title('Back Leg Extension')

subplot(1,2,2)
for j = 1:length(velocity)
    load(['output_velocity_0',num2str(velocity(j)),'.mat'])
    t_log = solution.tspan{5};
    q_left_left_log = (solution.states{5}.x(12,:)-solution.states{5}.x(11,:))./2;%.*(180/pi)];
    plot(t_log,q_left_left_log,'linewidth',2); hold on; grid on
end
legend('0.5','0.6','0.7','0.8','0.9')
title('Back Leg Swing')