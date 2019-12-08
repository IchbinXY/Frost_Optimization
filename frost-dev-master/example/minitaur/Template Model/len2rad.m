function rad = len2rad(len)
rad = zeros(size(len));
for i = 1:size(len,1)
    for j = 1:size(len,2)
        rad(i,j) = (len(i,j)*0.2316+0.0307)/0.1247;
    end
end
end