classdef MINITAUR < RobotLinks
    methods
        function obj = MINITAUR(urdf)
            base = get_base_dofs('floating');
            limits = [base.Limit];
            [limits.lower] = deal(-1, -2, 0.25, -.01, -.01, -0.001);
            [limits.upper] = deal(1, 2, 2, .01, .01, 0.001);
            [limits.velocity] = deal(2, 2, 0.5, 0.5, 0.5, 0.1);
            [limits.effort] = deal(0);
            for i = 1:length(base)
                base(i).Limit = limits(i);
            end
            obj = obj@RobotLinks(urdf,base);
            
            q = obj.States.x;
            L1 = 0.15;
            L2 = 0.2;
            h = [...
                L1*sin(q('motor_front_rightL_joint'))+L2*sin(q('motor_front_rightL_joint')+q('knee_front_rightL_link'))-L1*sin(q('motor_front_rightR_joint'))-L2*sin(q('motor_front_rightR_joint')+q('knee_front_rightR_link'));...
                L1*cos(q('motor_front_rightL_joint'))+L2*cos(q('motor_front_rightL_joint')+q('knee_front_rightL_link'))-L1*cos(q('motor_front_rightR_joint'))-L2*cos(q('motor_front_rightR_joint')+q('knee_front_rightR_link'));
               
                L1*sin(q('motor_front_leftL_joint'))+L2*sin(q('motor_front_leftL_joint')+q('knee_front_leftL_link'))-L1*sin(q('motor_front_leftR_joint'))-L2*sin(q('motor_front_leftR_joint')+q('knee_front_leftR_link'));...
                L1*cos(q('motor_front_leftL_joint'))+L2*cos(q('motor_front_leftL_joint')+q('knee_front_leftL_link'))-L1*cos(q('motor_front_leftR_joint'))-L2*cos(q('motor_front_leftR_joint')+q('knee_front_leftR_link'));
               
                L1*sin(q('motor_back_rightL_joint'))+L2*sin(q('motor_back_rightL_joint')+q('knee_back_rightL_link'))-L1*sin(q('motor_back_rightR_joint'))-L2*sin(q('motor_back_rightR_joint')+q('knee_back_rightR_link'));...
                L1*cos(q('motor_back_rightL_joint'))+L2*cos(q('motor_back_rightL_joint')+q('knee_back_rightL_link'))-L1*cos(q('motor_back_rightR_joint'))-L2*cos(q('motor_back_rightR_joint')+q('knee_back_rightR_link'));
               
                L1*sin(q('motor_back_leftL_joint'))+L2*sin(q('motor_back_leftL_joint')+q('knee_back_leftL_link'))-L1*sin(q('motor_back_leftR_joint'))-L2*sin(q('motor_back_leftR_joint')+q('knee_back_leftR_link'));...
                L1*cos(q('motor_back_leftL_joint'))+L2*cos(q('motor_back_leftL_joint')+q('knee_back_leftL_link'))-L1*cos(q('motor_back_leftR_joint'))-L2*cos(q('motor_back_leftR_joint')+q('knee_back_leftR_link'));
                ];
            four_bar_constr = HolonomicConstraint(obj, h, 'fourBar',...
                'ConstrLabel',{{'front_right_z','front_right_x','front_left_z','front_left_x','back_right_z','back_right_x','back_left_z','back_left_x'}},...
                'DerivativeOrder',2, 'LoadPath', []);
            obj = addHolonomicConstraint(obj, four_bar_constr, []);
            
        end
    end
end


