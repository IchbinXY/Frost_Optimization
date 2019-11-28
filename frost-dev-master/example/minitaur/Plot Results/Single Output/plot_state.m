t_log = [];     q_log = [];     q_dot_log = [];
phase = [1,3,5,7];  phase_time = [];    endtime = 0;
for i = phase
    t_log = [t_log,solution.tspan{i}+endtime];
    q_log = [q_log,solution.states{i}.x];
    q_dot_log = [q_dot_log,solution.states{i}.dx];
    endtime = t_log(end);
    phase_time = [phase_time,endtime];
end

plot_torso_state(t_log, q_log, phase_time, 1)
plot_torso_state(t_log, q_dot_log, phase_time, 2)
plot_joint_state(t_log, q_log, phase_time, [3,4,5,6])

function plot_torso_state(t_log, q_log, phase_time, figure_id)
state = {'x','y','z','roll','pitch','yaw'};
figure(figure_id)
for k = 1:6
    subplot(6,1,k)
    plot(t_log,q_log(k,:),'linewidth',2)
    hold on
    for i = 1:4
        line([phase_time(i) phase_time(i)],get(gca,'ylim'));
    end
    ylabel(state{k})
end
xlabel('Time, s')
end

function plot_joint_state(t_log, q_log, phase_time, figure_id)
joint_position = {'front left';'back left';'front right';'back right'};
for n = 1:4
    figure(figure_id(n))
    plot(t_log,q_log(6+(n-1)*4+1,:),'linewidth',2)
    hold on
    plot(t_log,q_log(6+(n-1)*4+2,:),'linewidth',2)
    plot(t_log,q_log(6+(n-1)*4+3,:),'linewidth',2)
    plot(t_log,q_log(6+(n-1)*4+4,:),'linewidth',2)
    plot(t_log,ones(size(t_log))*deg2rad(0),  ':r','linewidth',2)
    plot(t_log,ones(size(t_log))*deg2rad(180),':r','linewidth',2)
    for i = 1:4
        line([phase_time(i) phase_time(i)],get(gca,'ylim'));
    end
    ylabel(joint_position{n})
    legend('motor L', 'motor R', 'knee L', 'knee R') 
end
end

    