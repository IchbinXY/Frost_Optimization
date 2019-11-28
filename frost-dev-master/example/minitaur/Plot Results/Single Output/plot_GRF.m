% only plot right side of minitaur, assume symmetry 
t_log = [];
f_front_log = [];
f_back_log = []; 
phase = [1,3,5,7];
phase_time = [];
endtime = 0;
figure(1)
for i = phase
    t_log = [t_log,solution.tspan{i}+endtime];
    if isfield(solution.inputs{i},'fLeftFront')
        f_front_log = [f_front_log,solution.inputs{i}.fLeftFront(3,:)];
    else
        f_front_log = [f_front_log,zeros(1,21)];
    end
    if isfield(solution.inputs{i},'fLeftBack')
        f_back_log = [f_back_log,solution.inputs{i}.fLeftBack(3,:)];
    else
        f_back_log = [f_back_log,zeros(1,21)];
    end
    endtime = t_log(end);
    phase_time = [phase_time,endtime];
end
figure(1)
plot(t_log,f_front_log,'r','linewidth',1)
hold on
plot(t_log,f_back_log,'g','linewidth',1)
line([phase_time(1) phase_time(1)],get(gca,'ylim'));
line([phase_time(2) phase_time(2)],get(gca,'ylim'));
line([phase_time(3) phase_time(3)],get(gca,'ylim'));
line([phase_time(4) phase_time(4)],get(gca,'ylim'));
legend('front','back')