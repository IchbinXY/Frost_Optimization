classdef RABBIT_YL < RobotLinks
    properties
        ContactPoints
        OtherPoints
    end
    
    methods
        function obj = RABBIT_YL(urdf)
            base = get_base_dofs('planar');
            limits = [base.Limit];
            [limits.lower] = deal(-10,-10,pi/4);
            [limits.upper] = deal(10,10,pi/4);
            [limits.velocity] = deal(20,20,20);
            [limits.effort] = deal(0);
            for i = 1:length(base)
                % BasePosX, BasePosZ, BaseRotY
                base(i).Limit = limits(i);
            end
            obj = obj@RobotLinks(urdf,base);
            r_foot_frame = obj.Joints(getJointIndices(obj, 'q2_right'));
            obj.ContactPoints.RightToe = CoordinateFrame(...
                'Name','RightToe',...
                'Reference',r_foot_frame,...
                'Offset',[0,0,0.4],...
                'R',[pi,0,0]);
            l_foot_frame = obj.Joints(getJointIndices(obj, 'q2_left'));
            obj.ContactPoints.LeftToe = CoordinateFrame(...
                'Name','LeftToe',...
                'Reference',l_foot_frame,...
                'Offset',[0,0,0.4],...
                'R',[pi,0,0]);
            torso_frame = obj.Joints(getJointIndices(obj, 'BaseRotY'));
            obj.OtherPoints.Torso = CoordinateFrame(...
                'Name','Torso',...
                'Reference',torso_frame,...
                'Offset',[0,0,0.63],...
                'R',[0,0,0]);
        end
    end
end

