function [conGUI] = LoadAnimator(robot, gait, varargin)
    
    
    cont_domain_idx = find(arrayfun(@(x)~isempty(x.tspan),gait));
    
    
    t = [];
    q = []; 
    time = 0;
    for j = cont_domain_idx.'
        t = [t,gait(j).tspan+time*0.4];        %#ok<*AGROW>
        q = [q,gait(j).states.x]; 
        time = time+1;
    end
   
    exo_disp = plot.LoadRobotDisplay(robot, varargin{:});
    
    anim = frost.Animator.AbstractAnimator(exo_disp, t, q);
    anim.isLooping = true;
    anim.speed = 1;
    anim.pov = frost.Animator.AnimatorPointOfView.Free;
    anim.Animate(true);
    conGUI = frost.Animator.AnimatorControls();
    conGUI.anim = anim;
end