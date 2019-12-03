clc;clear;close all
load('output_velocity_06_newT.mat')
i = 1;
ang = (solution.states{i}.x(7,:)+solution.states{i}.x(8,:))./2;
ang2 = linspace(0,pi,10);

for i = 1:length(ang)
    len(i) = rad2len(ang(i));
end

for j = 1:length(ang2)
    len2(j) = rad2len(ang2(j));
end

scatter(ang,len,'b'); hold on; grid on
scatter(ang2,len2,'r')

xlabel('angle, rad')
ylabel('length, m')

y = 0.15:0.01:0.25;
for i = 1:length(y)
    % convert len(meter) to ang(rad)
    x(i) = (y(i)+0.0307)/0.1247;
end

plot(x,y)

rad2len(2.1)

function len = rad2len(rad)
syms b positive
a = 0.112;
c = 0.2;
len = double(solve(a^2 + b^2 - 2*a*b*cos(pi-rad) - c^2));
end