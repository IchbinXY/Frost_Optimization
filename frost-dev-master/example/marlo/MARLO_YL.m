classdef MARLO_YL < RobotLinks
    properties
        ContactPoints
    end
    methods
        function obj = MARLO_YL(urdf)
            base = get_base_dofs('floating');
            limits = [base.Limit];
            [limits.lower] = deal(-1, -2, 0.25, -.01, -.01, -0.001);
            [limits.upper] = deal(1, 2, 2, .01, .01, 0.001);
            [limits.velocity] = deal(2, 2, 0.5, 0.5, 0.5, 0.1);
            [limits.effort] = deal(0);
            for i = 1:length(base)
                base(i).Limit = limits(i);
            end
            obj = obj@RobotLinks(urdf, base);
            
            % Add 4-bar holonomic constraint
            q = obj.States.x;
            h = [...
                q('qARight') - q('qBRight') + q('fourBarARight');
               -q('qARight') + q('qBRight') + q('fourBarBRight');
                q('qALeft') - q('qBLeft') + q('fourBarALeft');
               -q('qALeft') + q('qBLeft') + q('fourBarBLeft');
                ]
            four_bar_constr = HolonomicConstraint(obj, h, 'fourBar',...
                'ConstrLabel',{{'fourBarARight','fourBarBRight','fourBarALeft','fourBarBLeft'}},...
                'DerivativeOrder',2, 'LoadPath', []);
            obj = addHolonomicConstraint(obj, four_bar_constr, []);
            
            % add contact points
            r_knee_frame = obj.Joints(getJointIndices(obj, 'fourBarBRight'));
            obj.ContactPoints.RightFoot = CoordinateFrame(...
                'Name','RightFoot',...
                'Reference',r_knee_frame,...
                'Offset',[0,0,0.6],...
                'R',[0,0,0],...
                'Type','PointContactWithFriction'...
                );
            l_knee_frame = obj.Joints(getJointIndices(obj, 'fourBarBLeft'));
            obj.ContactPoints.LeftFoot = CoordinateFrame(...
                'Name','LeftFoot',...
                'Reference',l_knee_frame,...
                'Offset',[0,0,0.6],...
                'R',[0,0,0],...
                'Type','PointContactWithFriction'...
                );
        end
    end
end
