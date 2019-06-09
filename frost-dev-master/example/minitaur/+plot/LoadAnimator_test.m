function LoadAnimator_test(robot, varargin)

%     cont_domain_idx = find(arrayfun(@(x)~isempty(x.tspan),gait));

%     t = [];
%     q = []; 
    
%     for j = cont_domain_idx.'
%         t = [t,gait(j).tspan];        %#ok<*AGROW>
%         q = [q,gait(j).states.x];       
%     end
    
%     t = [t,t+t(end)];
%     q = [q,[q(1:6,:)+(q(1:6,end)-q(1:6,1));q(7:end,:)]];

    t = 0:0.02:0.4;
    q = repmat([...
        0;0;0.5;...
        0;0;0;...
        0.5;1;0.5;1.2;...
        0.5;1;0.5;1.2;...
        1;0.5;1.6;0.5;...
        1;0.5;1.6;0.5],1,size(t,2));
    
    exo_disp = plot.LoadRobotDisplay(robot, varargin{:});
    
    anim = frost.Animator.AbstractAnimator(exo_disp, t, q);
    anim.isLooping = true;
    anim.speed = 1;
    anim.pov = frost.Animator.AnimatorPointOfView.Free;
    anim.Animate(true);
%     conGUI = frost.Animator.AnimatorControls();
%     conGUI.anim = anim;
end