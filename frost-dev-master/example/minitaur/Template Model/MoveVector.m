function [new_vector, new_event_index] = MoveVector(vector, start_index, event_index)
k = 1;
index_map = zeros(size(vector,1),1);
new_vector = zeros(size(vector));
new_event_index = zeros(size(event_index));
for i = start_index:length(vector)
    index_map(i) = k;
    new_vector(k,:) = vector(i,:);
    k = k + 1;   
end
for i = 2:start_index
    index_map(i-1) = k-1;
    new_vector(k,:) = vector(i,:);
    k = k + 1;
end
for j = 1:length(event_index)
    new_event_index(j) = index_map(event_index(j));
end
end