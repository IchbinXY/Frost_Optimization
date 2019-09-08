clc;clear;close all
velocity = 4:1:9;
GaitLibrary = struct;

GaitLibrary.Desired_Velocity = zeros(2, length(velocity));
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
    GaitLibrary.Desired_Velocity(i) = 0.1 * velocity(i);
    GaitLibrary.FrontStance.HAlpha(i,:,:) = reshape(solution.params{1}.aoutput, 8, 6);
    GaitLibrary.Flight1.HAlpha(i,:,:)     = reshape(solution.params{3}.aoutput, 8, 6);
    GaitLibrary.BackStance.HAlpha(i,:,:)  = reshape(solution.params{5}.aoutput, 8, 6);
    GaitLibrary.Flight2.HAlpha(i,:,:)     = reshape(solution.params{7}.aoutput, 8, 6);
    GaitLibrary.FrontStance.ct(i) = 1/solution.params{1}.poutput(2);
    GaitLibrary.Flight1.ct(i)     = 1/solution.params{3}.poutput(2);
    GaitLibrary.BackStance.ct(i)  = 1/solution.params{5}.poutput(2);
    GaitLibrary.Flight2.ct(i)     = 1/solution.params{7}.poutput(2);
end

save('GaitLibrary_Output', 'GaitLibrary')