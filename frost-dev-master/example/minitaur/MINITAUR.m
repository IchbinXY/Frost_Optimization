classdef MINITAUR < RobotLinks
    methods
        function obj = MINITAUR(urdf)
            base = get_base_dofs('floating');
            limits = [base.Limit];
            [limits.lower] = deal(-1, 0,   0, 0, -1.57, 0);
            [limits.upper] = deal( 1, 0, 0.5, 0,  1.57, 0);
            [limits.velocity] = deal(2, 2, 0.5, 0.5, 0.5, 0.1);
            [limits.effort] = deal(0);
            for i = 1:length(base)
                base(i).Limit = limits(i);
            end
            obj = obj@RobotLinks(urdf,base);
            
            q = obj.States.x;
            L1 = 0.1;
            L2 = 0.2;
            
            front_leftL_length = sqrt(L1^2+L2^2-2*L1*L2*cos(q(9)));
            front_leftR_length = sqrt(L1^2+L2^2-2*L1*L2*cos(q(10)));
            front_leftL_angle = asin(L2*sin(q(9))/front_leftL_length);
            front_leftR_angle = asin(L2*sin(q(10))/front_leftR_length);
            front_leftL_x =-L1*sin(q(7)) - L2*sin(q(9) - q(7));
            front_leftL_y = L1*cos(q(7)) - L2*cos(q(9) - q(7));
            front_leftR_x = L1*sin(q(8)) + L2*sin(q(10)- q(8));
            front_leftR_y = L1*cos(q(8)) - L2*cos(q(10)- q(8)); 
            
            back_leftL_length = sqrt(L1^2+L2^2-2*L1*L2*cos(q(13)));
            back_leftR_length = sqrt(L1^2+L2^2-2*L1*L2*cos(q(14)));
            back_leftL_angle = asin(L2*sin(q(13))/back_leftL_length);
            back_leftR_angle = asin(L2*sin(q(14))/back_leftR_length);
            back_leftL_x =-L1*sin(q(11)) - L2*sin(q(13) - q(11));
            back_leftL_y = L1*cos(q(11)) - L2*cos(q(13) - q(11));
            back_leftR_x = L1*sin(q(12)) + L2*sin(q(14) - q(12));
            back_leftR_y = L1*cos(q(12)) - L2*cos(q(14) - q(12)); 
            
            front_rightL_length = sqrt(L1^2+L2^2-2*L1*L2*cos(q(17)));
            front_rightR_length = sqrt(L1^2+L2^2-2*L1*L2*cos(q(18)));
            front_rightL_angle = asin(L2*sin(q(17))/front_rightL_length);
            front_rightR_angle = asin(L2*sin(q(18))/front_rightR_length);
            front_rightL_x =-L1*sin(q(15)) - L2*sin(q(17) - q(15));
            front_rightL_y = L1*cos(q(15)) - L2*cos(q(17) - q(15));
            front_rightR_x = L1*sin(q(16)) + L2*sin(q(18) - q(16));
            front_rightR_y = L1*cos(q(16)) - L2*cos(q(18) - q(16)); 
            
            back_rightL_length = sqrt(L1^2+L2^2-2*L1*L2*cos(q(21)));
            back_rightR_length = sqrt(L1^2+L2^2-2*L1*L2*cos(q(22)));
            back_rightL_angle = asin(L2*sin(q(21))/back_rightL_length);
            back_rightR_angle = asin(L2*sin(q(22))/back_rightR_length);
            back_rightL_x =-L1*sin(q(19)) - L2*sin(q(21) - q(19));
            back_rightL_y = L1*cos(q(19)) - L2*cos(q(21) - q(19));
            back_rightR_x = L1*sin(q(20)) + L2*sin(q(22) - q(20));
            back_rightR_y = L1*cos(q(20)) - L2*cos(q(22) - q(20));
            
            h = [...
                front_leftL_x-front_leftR_x;
                front_leftL_y-front_leftR_y;
                back_leftL_x-back_leftR_x;
                back_leftL_y-back_leftR_y;
                front_rightL_x-front_rightR_x;
                front_rightL_y-front_rightR_y;
                back_rightL_x-back_rightR_x;
                back_rightL_y-back_rightR_y;
                ];
            four_bar_constr = HolonomicConstraint(obj, h, 'fourBar',...
                'ConstrLabel',{{'front_left_length','front_left_angle','back_left_length','back_left_angle','front_right_length','front_right_angle','back_right_length','back_right_angle'}},...
                'DerivativeOrder',2, 'LoadPath', []);
            obj = addHolonomicConstraint(obj, four_bar_constr, []);
            
        end
    end
end


