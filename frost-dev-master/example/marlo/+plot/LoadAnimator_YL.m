function [conGUI] = LoadAnimator_YL(robot, varargin)

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
       -0.1828; 0.0018; 0.9768;...
        0.0085; 0.0028;-0.0001;...
       -0.0024; 2.6986; 3.6585; 0.9598;-0.9600;...
       -0.0025; 2.6986; 3.6587; 0.9600;-0.9602],1,size(t,2));
    
    exo_disp = plot.LoadRobotDisplay(robot, varargin{:});
    
    anim = frost.Animator.AbstractAnimator(exo_disp, t, q);
    anim.isLooping = true;
    anim.speed = 1;
    anim.pov = frost.Animator.AnimatorPointOfView.Free;
    anim.Animate(true);
    conGUI = frost.Animator.AnimatorControls();
    conGUI.anim = anim;
end