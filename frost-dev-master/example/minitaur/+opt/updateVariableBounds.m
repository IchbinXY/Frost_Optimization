function [nlp] = updateVariableBounds(nlp, bounds)
    nlp.updateVariableBounds(bounds);
    
    nlp.Phase(1).Plant.UserNlpConstraint(nlp.Phase(1),bounds.FrontStance);
    nlp.Phase(3).Plant.UserNlpConstraint(nlp.Phase(3),bounds.Flight1);
    nlp.Phase(5).Plant.UserNlpConstraint(nlp.Phase(3),bounds.BackStance);
    nlp.Phase(7).Plant.UserNlpConstraint(nlp.Phase(3),bounds.Flight2);
    
    nlp.update();
end
