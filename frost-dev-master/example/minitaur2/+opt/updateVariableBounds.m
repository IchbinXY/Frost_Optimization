function [nlp] = updateVariableBounds(nlp, bounds)
    nlp.updateVariableBounds(bounds);
    
    nlp.Phase(1).Plant.UserNlpConstraint(nlp.Phase(1),bounds.FrontStance);
    nlp.Phase(3).Plant.UserNlpConstraint(nlp.Phase(3),bounds.Stance);
    nlp.Phase(5).Plant.UserNlpConstraint(nlp.Phase(5),bounds.BackStance);
    nlp.Phase(7).Plant.UserNlpConstraint(nlp.Phase(7),bounds.Flight);
    
    nlp.update();
end
