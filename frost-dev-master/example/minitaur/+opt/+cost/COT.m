function COT(nlp, sys)
    
    domains = sys.Gamma.Nodes.Domain;
    T  = SymVariable('t',[2,1]);
    for i = 1:numel(domains)
        domain = domains{i};
        
        u = domain.Inputs.Control.u;
        dq = domain.States.dx;
        B = domain.Gmap.Control.u;
        
        
        P_over_V = tovector(norm(dq.*(B*u)).^2./dq(1));
        cost_fun = SymFunction(['COT_' sys.Gamma.Nodes.Name{i}],P_over_V,{T,u,dq});
        rs_phase = getPhaseIndex(nlp,sys.Gamma.Nodes.Name{i});
        addRunningCost(nlp.Phase(rs_phase),cost_fun,{'T','u','dx'});
        
    end
    nlp.update;
end