function knee = ext2knee(ext)
knee = zeros(size(ext));
a = 0.112;
c = 0.199;
for i = 1:length(ext)
    alpha = asin(sin(pi-ext(i))*a/c);
    knee(i) = ext(i) - alpha;
end
end