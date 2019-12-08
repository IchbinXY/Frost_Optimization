function plotTraj(Time, Traj, Model, Stance, I_EVENT)
Color_Template = [0,      0.4470, 0.7410];
Color_Anchor   = [0.8500, 0.3250, 0.0980];

FrontStance_idx = I_EVENT(1):I_EVENT(2);
Flight1_idx     = I_EVENT(3):I_EVENT(4);
BackStance_idx  = I_EVENT(5):I_EVENT(6);
Flight2_idx     = I_EVENT(7):I_EVENT(8);
FrontImpact_idx = I_EVENT(9);
BackImpact_idx  = I_EVENT(10);
Apex_idx        = I_EVENT(11);

switch Model
    case 'Template'
        plot(Time, Traj, '--', 'linewidth',2, 'color',Color_Template, 'HandleVisibility','off'); 
        switch Stance
            case 'Front'
                plot(Time(FrontStance_idx), Traj(FrontStance_idx), 'linewidth',2, 'color',Color_Template); 
            case 'Back'
                plot(Time(BackStance_idx),  Traj(BackStance_idx),  'linewidth',2, 'color',Color_Template); 
            case 'Both'
                plot(Time(BackStance_idx),  Traj(BackStance_idx),  'linewidth',2, 'color',Color_Template, 'HandleVisibility','off');
                plot(Time(FrontStance_idx), Traj(FrontStance_idx), 'linewidth',2, 'color',Color_Template); 
        end
    case 'Anchor'
        plot(Time, Traj, '--', 'linewidth',2, 'color',Color_Anchor, 'HandleVisibility','off'); 
        switch Stance
            case 'Front'
                plot(Time(1:21),  Traj(1:21), 'linewidth',2, 'color',Color_Anchor); 
            case 'Back'
                plot(Time(43:64),  Traj(43:64), 'linewidth',2, 'color',Color_Anchor); 
            case 'Both'
                plot(Time(43:64),  Traj(43:64), 'linewidth',2, 'color',Color_Anchor, 'HandleVisibility','off');
                plot(Time(1:21),  Traj(1:21), 'linewidth',2, 'color',Color_Anchor); 
        end
end
end