function plot_circle_pitch
velocity = 4:1:9;
phase = [1,3,5,7];
color = [0, 0.4470, 0.7410; 0,0,0;
    0.8500, 0.3250, 0.0980; 0,0,0;
    0.9290, 0.6940, 0.1250; 0,0,0;
    0.4940, 0.1840, 0.5560; 0,0,0];
for j = 1:length(velocity)
    load(['output_velocity_0',num2str(velocity(j)),'.mat'])
    for i = phase
        AvgVelocity = 0.1*velocity(j)*ones(1,21);
        
        figure(1); hold on; grid on
        plot3(AvgVelocity, solution.states{i}.dx(1,:), solution.states{i}.x(5,:),'linewidth',2,'color',color(i,:));
    end
end
xlabel('Average Base Velocity (m/s)')
ylabel('Node Base Velocity (m/s)')
zlabel('Base Pitch Angle (rad)')
end