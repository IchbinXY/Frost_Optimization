% IV = vertcat(nlp.ConstrArray.InitialValue);
LB = vertcat(nlp.ConstrArray.LowerBound);
UB = vertcat(nlp.ConstrArray.UpperBound);
Name = [];
for i = 1:length(nlp.ConstrArray)
    Name = [Name;repmat(convertCharsToStrings(nlp.ConstrArray(i).Name),nlp.ConstrArray(i).Dimension,1)];
end

T = table(Name,LB,UB);
writetable(T,'constr_minitaur.xlsx','Sheet',1)