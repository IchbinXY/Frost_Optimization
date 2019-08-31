function back_lift_constraints(nlp, src, tar, bounds, varargin)
plant = nlp.Plant;

% first call the class method
plant.rigidImpactConstraint(nlp, src, tar, bounds, varargin{:});

% Don't need time continuity constraint
removeConstraint(nlp,'tContDomain');

% No impact
removeConstraint(nlp,['dxDiscreteMap' nlp.Plant.Name]);
dx = plant.States.dx;
dxn = plant.States.dxn;
dx_diff = dx-dxn;
dx_map = SymFunction(['dxDiscreteMap' plant.Name], dx_diff, {dx,dxn});
addNodeConstraint(nlp, dx_map, {'dx','dxn'}, 'first', 0, 0, 'Linear');
end