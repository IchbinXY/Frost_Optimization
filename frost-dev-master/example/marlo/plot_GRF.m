close all
t_log = [];
f_right_log = [];
f_left_log = []; 
phase = [1,3];
phase_time = [];
endtime = 0;
figure(1)
for i = phase
    t_log = [t_log,tspan{i}+endtime];
    if isfield(inputs{i},'fRight')
        f_right_log = [f_right_log,inputs{i}.fRight(3,:)];
    else
        f_right_log = [f_right_log,zeros(1,21)];
    end
    if isfield(inputs{i},'fLeft')
        f_left_log = [f_left_log,inputs{i}.fLeft(3,:)];
    else
        f_left_log = [f_left_log,zeros(1,21)];
    end
    endtime = t_log(end);
    phase_time = [phase_time,endtime];
end
plot(t_log,f_right_log,'r','linewidth',1)
hold on
plot(t_log,f_left_log,'g','linewidth',1)
line([phase_time(1) phase_time(1)],get(gca,'ylim'));
line([phase_time(2) phase_time(2)],get(gca,'ylim'));
legend('right','left')