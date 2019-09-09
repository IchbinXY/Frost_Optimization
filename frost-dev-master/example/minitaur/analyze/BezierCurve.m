function [B, b] = BezierCurve(points, toPlot, phasing)
if nargin < 3
    phasing = -1;
end

n = length(points)-1;
node = linspace(0,1,21);
B = zeros(1,length(node));
for i = 1:length(node)
    sum = 0;
    for k = 0:n
        sum = sum+nchoosek(n,k)*node(i)^k*(1-node(i))^(n-k)*points(k+1);
    end
    B(i) = sum;
end
b = interp1(node, B, phasing);

if toPlot
    plot(node, B, 'b', 'linewidth', 2)
    hold on; grid on
    for i = 1:6
        scatter((i-1)*0.2,points(i),'r','linewidth',2)
    end
    if phasing ~= -1
        scatter(phasing, b, 'g', 'linewidth', 2);
    end
%     legend('Trajectory', 'Points', 'Current Point')
end
end