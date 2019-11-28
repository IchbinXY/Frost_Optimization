clc;clear;close all
load('output_velocity_06_newT.mat')
i = 1;
ang = [(solution.states{i}.x(7,:)+solution.states{i}.x(8,:))./2,linspace(0,pi,10)];

for i = 1:length(ang)
    len(i) = rad2len(ang(i));
end

scatter(ang,len)

function len = rad2len(rad)
syms b positive
a = 0.112;
c = 0.2;
len = double(solve(a^2 + b^2 - 2*a*b*cos(pi-rad) - c^2));
end