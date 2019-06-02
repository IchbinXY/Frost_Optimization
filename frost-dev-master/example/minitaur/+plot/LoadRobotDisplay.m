function minitaur_disp = LoadRobotDisplay(robot, varargin)
    
    
    
    
    
    ip = inputParser;
    ip.addParameter('UseExported',true,@(x) isequal(x,true) || isequal(x,false));
    ip.addParameter('ExportPath','',@(x)ischar(x));
    ip.addParameter('SkipExporting',false,@(x) isequal(x,true) || isequal(x,false));
    
    ip.parse(varargin{:});
    
    opts = ip.Results;
    if isempty(opts.ExportPath)
        root_path = utils.get_root_path();
        export_path = fullfile(root_path,'gen','animator');
        opts.ExportPath = export_path;
    else
        export_path = opts.ExportPath;
    end
    if ~exist(export_path,'dir')
        mkdir(export_path);
    end
    addpath(export_path);
    
    f = figure(1000);clf;
    minitaur_disp = frost.Animator.Display(f, robot, opts);
    base = CoordinateFrame(...
        'Name','Base',...
        'Reference',robot.Joints(getJointIndices(robot, 'BaseRotZ')),...
        'Offset',[0,0,0],...
        'R',[0,0,0]...
        );
    
    name = 'Link_TorsoTop';
    offset = [0,0,0.58];
    torso_top = frost.Animator.Cylinder(minitaur_disp.axs, robot, base, offset, name, opts);
    minitaur_disp.addItem(torso_top);
    
    
    knee_front_rightL_link = CoordinateFrame(...
        'Name','knee_front_rightL_link',...
        'Reference',robot.Joints(getJointIndices(robot, 'knee_front_rightL_link')),...
        'Offset',[0,0,0],...
        'R',[0,0,0]...
        );
    name = 'Link_fourBarLinkALeft';
    offset = [0,0,0.5];
    fourbar_left_A_link = frost.Animator.Cylinder(minitaur_disp.axs, robot, knee_front_rightL_link, offset, name, opts);
    minitaur_disp.addItem(fourbar_left_A_link);
    
    knee_front_rightR_link = CoordinateFrame(...
        'Name','knee_front_rightR_link',...
        'Reference',robot.Joints(getJointIndices(robot, 'knee_front_rightR_link')),...
        'Offset',[0,0,0],...
        'R',[0,0,0]...
        );
    name = 'Link_fourBarLinkBLeft';
    offset = [0,0,0.6];
    fourbar_left_B_link = frost.Animator.Cylinder(minitaur_disp.axs, robot, knee_front_rightR_link, offset, name, opts);
    minitaur_disp.addItem(fourbar_left_B_link);
    
    
    knee_back_rightL_link = CoordinateFrame(...
        'Name','knee_back_rightL_link',...
        'Reference',robot.Joints(getJointIndices(robot, 'knee_back_rightL_link')),...
        'Offset',[0,0,0],...
        'R',[0,0,0]...
        );
    name = 'Link_fourBarLinkARight';
    offset = [0,0,0.5];
    fourbar_right_A_link = frost.Animator.Cylinder(minitaur_disp.axs, robot, knee_back_rightL_link, offset, name, opts);
    minitaur_disp.addItem(fourbar_right_A_link);
    
    knee_back_rightR_link = CoordinateFrame(...
        'Name','knee_back_rightR_link',...
        'Reference',robot.Joints(getJointIndices(robot, 'knee_back_rightR_link')),...
        'Offset',[0,0,0],...
        'R',[0,0,0]...
        );
    name = 'Link_fourBarLinkBRight';
    offset = [0,0,0.6];
    fourbar_right_B_link = frost.Animator.Cylinder(minitaur_disp.axs, robot, knee_back_rightR_link, offset, name, opts);
    minitaur_disp.addItem(fourbar_right_B_link);
    
    
end