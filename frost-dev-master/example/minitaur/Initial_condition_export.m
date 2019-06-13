IV = vertcat(nlp.VariableArray.InitialValue);
LB = vertcat(nlp.VariableArray.LowerBound);
UB = vertcat(nlp.VariableArray.UpperBound);
Name = [];
for i = 1:length(nlp.VariableArray)
    Name = [Name;repmat(convertCharsToStrings(nlp.VariableArray(i).Name),nlp.VariableArray(i).Dimension,1)];
end

T = table(Name,LB,UB,solution.x);
writetable(T,'variable_minitaur.xlsx','Sheet',1)