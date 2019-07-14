function [conGUI] = LoadAnimator(robot, gait, varargin)
    
    
    cont_domain_idx = find(arrayfun(@(x)~isempty(x.tspan),gait));
    
    
    t = [];
    q = []; 
    endtime = 0;
    for j = cont_domain_idx.'
        t = [t,gait(j).tspan+endtime];
        q = [q,gait(j).states.x]; 
        endtime = t(end);
    end
    
    t = [t,t+t(end)];
    q = [q,[q(1,:)+(q(1,end)-q(1,1));q(2:end,:)]];
   
    exo_disp = plot.LoadRobotDisplay(robot, varargin{:});
    
    anim = frost.Animator.AbstractAnimator(exo_disp, t, q);
    anim.isLooping = true;
    anim.speed = 1;
    anim.pov = frost.Animator.AnimatorPointOfView.Free;
    anim.Animate(true);
    conGUI = frost.Animator.AnimatorControls();
    conGUI.anim = anim;
end