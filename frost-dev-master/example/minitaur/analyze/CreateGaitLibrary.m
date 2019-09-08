clc;clear;close all
velocity = 4:1:9;
GaitLibrary = struct;
GaitLibrary.Velocity = zeros(1,length(velocity));
GaitLibrary.FrontStance.HAlpha = zeros(length(velocity), 48);
GaitLibrary.Flight1.HAlpha     = zeros(length(velocity), 48);
GaitLibrary.BackStance.HAlpha  = zeros(length(velocity), 48);
GaitLibrary.Flight2.HAlpha     = zeros(length(velocity), 48);

for j = 1:length(velocity)
    load(['output_velocity_0',num2str(velocity(j)),'.mat'])
    GaitLibrary.Velocity(j) = 0.1 * velocity(j);
    GaitLibrary.FrontStance.HAlpha(j,:) = solution.params{1}.aoutput;
    GaitLibrary.Flight1.HAlpha(j,:)     = solution.params{3}.aoutput;
    GaitLibrary.BackStance.HAlpha(j,:)  = solution.params{5}.aoutput;
    GaitLibrary.Flight2.HAlpha(j,:)     = solution.params{7}.aoutput;
end
