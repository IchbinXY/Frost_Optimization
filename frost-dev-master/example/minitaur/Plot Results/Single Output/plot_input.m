t_log = [];
u_log = [];
phase = [1,3,5,7];
phase_time = [];
endtime = 0;
for i = phase
    t_log = [t_log,solution.tspan{i}+endtime];
    u_log = [u_log,solution.inputs{i}.u];
    endtime = t_log(end);
    phase_time = [phase_time,endtime];
end
figure(10)
YLABEL = {'front left','back left'};
for k = 1:2
    subplot(2,1,k)
    plot(t_log,u_log((k-1)*2+1,:),'linewidth',2)
    hold on
    plot(t_log,u_log((k-1)*2+2,:),'linewidth',2)
    for i = 1:4
        line([phase_time(i) phase_time(i)],get(gca,'ylim'));
    end
    ylabel(YLABEL{k})
    legend('L','R')
end
xlabel('Time, s')