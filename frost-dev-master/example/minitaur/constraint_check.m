

if 1
    checkConstraints(nlp, solution.x, 1e-3, fullfile(cur, 'local', 'checkConstraints.txt'));
    checkVariables(nlp, solution.x, 1e-3, fullfile(cur, 'local', 'checkVariables.txt'));
    checkConstraints(nlp, solution.x, 1e-3, fullfile(cur, 'local', 'checkConstraints.txt'));
    checkCosts(nlp, solution.x, fullfile(cur, 'local', 'checkCosts.txt'));
    
    open local/checkConstraints.txt
    open local/checkVariables.txt
    open local/checkCosts.txt
end