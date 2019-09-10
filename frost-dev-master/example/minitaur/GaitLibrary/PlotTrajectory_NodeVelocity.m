function NodeVelocity = PlotTrajectory_NodeVelocity(current_velocity, current_phase, phasing, toPlot)
if nargin < 4
    toPlot = true;
end

if nargin < 1
    current_velocity = 0.57;
    current_phase = 1;
    phasing = 0.32;
end

velocity = 4:1:9;
phase = [1, 3, 5, 7];
color = [0, 0.4470, 0.7410; 0,0,0;
    0.8500, 0.3250, 0.0980; 0,0,0;
    0.9290, 0.6940, 0.1250; 0,0,0;
    0.4940, 0.1840, 0.5560; 0,0,0];
NodeVelocity = zeros(6, 4, 21);

for j = 1:length(velocity)
    load(['output_velocity_0',num2str(velocity(j)),'.mat'])
    node = 1;
    for i = phase
        AvgVelocity = 0.1*velocity(j)*ones(1,21);
        
        if toPlot
            figure(1); hold on; grid on
            plot3(AvgVelocity, node:1:node+20, solution.states{i}.dx(1,:),'linewidth',2,'color',color(i,:));
        end
        
        node = node+20;
        NodeVelocity(j, (i+1)/2, :) = solution.states{i}.dx(1,:);
    end
end

int_NodeVelocity = interp1(velocity*0.1, NodeVelocity, current_velocity);

if toPlot
    node = 1;
    speed = zeros(1,21);
    for k = 1:4
        for i = 1:21
            speed(i) = int_NodeVelocity(1, k, i);
        end
        plot3(current_velocity*ones(1,21), node:1:node+20, speed)
        node = node+20;
    end
end

if toPlot
    xlabel('Average Base Velocity (m/s)')
    ylabel('Node')
    zlabel('Node Base Velocity (m/s)')
end
end
