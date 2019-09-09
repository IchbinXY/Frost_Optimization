clc;clear;close all
velocity = 4:1:9;
GaitLibrary = struct;

GaitLibrary.Velocity = zeros(1, length(velocity));
GaitLibrary.Time = zeros(1, length(velocity));
GaitLibrary.FrontStance.HAlpha = zeros(length(velocity), 8, 6);
GaitLibrary.Flight1.HAlpha     = zeros(length(velocity), 8, 6);
GaitLibrary.BackStance.HAlpha  = zeros(length(velocity), 8, 6);
GaitLibrary.Flight2.HAlpha     = zeros(length(velocity), 8, 6);
GaitLibrary.FrontStance.ct = zeros(1, length(velocity));
GaitLibrary.Flight1.ct     = zeros(1, length(velocity));
GaitLibrary.BackStance.ct  = zeros(1, length(velocity));
GaitLibrary.Flight2.ct     = zeros(1, length(velocity));

for i = 1:length(velocity)
    load(['output_velocity_0',num2str(velocity(i)),'.mat'])
    stride_time = 0;
    phase = [1,3,5,7];
    for j = phase    
        stride_time = stride_time+solution.tspan{j}(end);
    end
    GaitLibrary.Time(i) = stride_time;
    GaitLibrary.Velocity(i) = 0.1 * velocity(i);
    GaitLibrary.FrontStance.HAlpha(i,:,:) = reshape(solution.params{1}.aoutput, 8, 6);
    GaitLibrary.Flight1.HAlpha(i,:,:)     = reshape(solution.params{3}.aoutput, 8, 6);
    GaitLibrary.BackStance.HAlpha(i,:,:)  = reshape(solution.params{5}.aoutput, 8, 6);
    GaitLibrary.Flight2.HAlpha(i,:,:)     = reshape(solution.params{7}.aoutput, 8, 6);
    GaitLibrary.FrontStance.ct(i) = 1/solution.params{1}.poutput(2);
    GaitLibrary.Flight1.ct(i)     = 1/solution.params{3}.poutput(2);
    GaitLibrary.BackStance.ct(i)  = 1/solution.params{5}.poutput(2);
    GaitLibrary.Flight2.ct(i)     = 1/solution.params{7}.poutput(2);
end
save(fullfile(pwd, 'analyze', 'GaitLibrary_output'), 'GaitLibrary')