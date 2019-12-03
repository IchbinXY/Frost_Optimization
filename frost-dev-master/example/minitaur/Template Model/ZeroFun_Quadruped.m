function [residual, T_out, Y_out, TP_out, YP_out, Param_out, EXT_m] = ZeroFun_Quadruped(X,Param)
% X = [dx, y, dy, phi, dphi, alphaB, dalphaB, alphaF, dalphaF, tB_TD, tB_LO, tF_TD, tF_LO, tAPEX]
%     [1,  2, 3,  4,   5,    6,      7,       8,      9        10,    11,    12,    13,    14   ]

% Y = [x, dx, y, dy, phi, dphi, alphaB, dalphaB, alphaF, dalphaF]
%     [1, 2,  3, 4,  5,   6,    7,      8,       9,      10     ]

%**********************************************************************
% General Preparation
%**********************************************************************
la = Param.la; % 18 inches and 0.4572 m
l  = Param.l;
g  = Param.g;
M  = Param.M;
J  = Param.J;
k  = Param.kl;
ks = Param.ks;

N = 10; % 10 continuous states

% Event timing:
tAPEX    = X(14);
tB_TD    = wrap2tApex(X(10), tAPEX);
tB_LO    = wrap2tApex(X(11), tAPEX);
tF_TD    = wrap2tApex(X(12), tAPEX);
tF_LO    = wrap2tApex(X(13), tAPEX);
eventTime = [tB_TD,tB_LO,tF_TD,tF_LO,tAPEX];

%**********************************************************************
% Integration
%**********************************************************************
% Set up start of integration:
T_START = 0;
Y_START = [0,X(1:9)'];
% Integrate motion in 4 steps, which are determined by the order of the
% event times:
% Determine this order (iEVENT(i) is the Eventnumber of the ith event)
[tEVENT,iEVENT] = sort(eventTime);
% Prepare output:
T = [];
Y = [];
EXT_m = [];
Y_EVENT = zeros(5,N);

for i = 1:5
    %% Determine current contact configuration
    t_ = (T_START+tEVENT(i))/2;
    contactB = determineContact(t_,tB_TD,tB_LO);
    contactF = determineContact(t_,tF_TD,tF_LO);
    %% Integrate the phase 
    if T_START == tEVENT(i) % abs(T_START - tEVENT(i))<1e-12 %
        Y_phase = Y_START;
        T_phase = T_START;
    else
        options = odeset('RelTol',1e-12, 'AbsTol',1e-12);
        [T_phase,Y_phase] = ode45(@ode,[T_START,tEVENT(i)],Y_START,options);
    end
    %% Append the event 
    T_event = T_phase(end);
    Y_event = Y_phase(end,:);
    if iEVENT(i) == 1 || iEVENT(i) == 3
        Pv = [Y_event(end, 1:2:9), Y_event(end, 2:2:10), zeros(1,5)]';
        if iEVENT(i) == 1
            
            
            
            
            Y_event(8) = Func_alphaB_VA(Pv,la);
            
        end
        if iEVENT(i) == 3
            
            
            
            
            Y_event(10) = Func_alphaF_VA(Pv,la);
            
        end
        T_PART = [T_phase; T_event];
        Y_PART = [Y_phase; Y_event];
    else
        T_PART = T_phase;
        Y_PART = Y_phase;
    end
    ext_m = calculateExt(Y_PART);
    %% Compose total solution
    T = [T; T_PART];
    Y = [Y; Y_PART];
    EXT_m = [EXT_m; ext_m];
    %% Extract values at events
    Y_EVENT(iEVENT(i),:) = Y_event;
    %% Prepare initial values for next integration
    T_START = T_event;
    Y_START = Y_event;
end

%**********************************************************************
% Compute Residuals
%**********************************************************************
% Relabel event values:
YB_TD = Y_EVENT(1,:)';
YB_LO = Y_EVENT(2,:)';
YF_TD = Y_EVENT(3,:)';
YF_LO = Y_EVENT(4,:)';
YAPEX = Y_EVENT(5,:)';
% Compute residuals
residual = zeros(N+9,1);
% Periodicity:
residual(1:N-1) = Y(1,2:N).' - YAPEX(2:N); % x is not periodic
% At the touch-down events, the feet have to be on the ground:
residual(N+0)  = YB_TD(3)  - la*sin(YB_TD(5)) - l*cos(YB_TD(5)+YB_TD(7));
residual(N+1)  = YF_TD(3)  + la*sin(YF_TD(5)) - l*cos(YF_TD(5)+YF_TD(9));
% At the lift-off events, the feet also have to be on the ground:
residual(N+2)  = YB_LO(3)  - la*sin(YB_LO(5)) - l*cos(YB_LO(5)+YB_LO(7));
residual(N+3)  = YF_LO(3)  + la*sin(YF_LO(5)) - l*cos(YF_LO(5)+YF_LO(9));

residual(N+4)  = YB_TD(7) + YF_LO(9);
residual(N+5)  = YF_TD(9) + YB_LO(7);

residual(N+6)  = YAPEX(4);
residual(N+7)  = YAPEX(5);

% Y = [x, dx, y, dy, phi, dphi, alphaB, dalphaB, alphaF, dalphaF]
%     [1, 2,  3, 4,  5,   6,    7,      8,       9,      10     ]


% residual(N+14) = tB_TD - tF_LO - 0.1;                 % double phase
% residual(N+15) = tAPEX - 1.6; 

% residual(N+8)  = alphaB_before - 0.1634;              % position should be positive (not necessarily required, however FROST does)
% residual(N+9)  = dalphaB_after + 0.8;                 % velocity should be negative (required if swing retract)       
% residual(N+10) = dalphaB_before - dalphaB_after;      % velocity continuity         (required) 

% residual(N+11) = alphaF_before - 0.05;                % position should be positive (not necessarily required, however FROST does)
% residual(N+12)  = dalphaF_after - 1.3;                % velocity should be negative (required if swing retract) 
% residual(N+13) = dalphaF_before - dalphaF_after;      % velocity continuity         (required)

% residual(N+14) = tB_TD - tF_LO % flight1 duration
% residual(N+15) = tF_TD + (tAPEX - tB_LO) - (tB_TD - tF_LO) - 1.05;

%     residual(N+7)  = delta_ds - (YAPEX(1)-0);
%     residual(N+7)  = tF_TD - tB_TD + 0.1;%YF_TD(9) + YB_TD(7);

if nargout > 1
    T_out  = T;
    Y_out  = Y;
    TP_out = eventTime;
    YP_out = Y_EVENT;
    Param_out = Param; 
end

%**********************************************************************
% Dynamics Function
%**********************************************************************
    function dydt_ = ode(~,Y)
        % Extract individual states:
        x       = Y(1);
        dx      = Y(2);
        y       = Y(3);
        dy      = Y(4);
        phi     = Y(5);
        dphi    = Y(6);
        alphaB  = Y(7);
        dalphaB = Y(8);
        alphaF  = Y(9);
        dalphaF = Y(10);
        
        pos0 = [x;y];
        posF = pos0 + la*[cos(phi);sin(phi)] ;
        posB = pos0 + la*[cos(phi + pi);sin(phi + pi)] ;
        
        % Compute forces acting on the main body (only legs in contact
        % contribute):
        
        Bforce = 0;
        Fforce = 0;
        
        if contactB
            Bforce = (1 - posB(2)/cos(alphaB+phi))*k;
            %             Bforce = (1- norm(posB - [pB_ds_;0]))*k;
        end
        if contactF
            Fforce = (1 - posF(2)/cos(alphaF+phi))*k;
            %             Fforce = (1- norm(posF - [pF_ds_;0]))*k;
        end
        
        Fx  = -Bforce*sin(alphaB+phi) - Fforce*sin(alphaF+phi);
        Fy  =  Bforce*cos(alphaB+phi) + Fforce*cos(alphaF+phi);
        Tor = -Bforce*la*cos(alphaB)  + Fforce*la*cos(alphaF);
        
        % Compute main body acceleration:
        ddx   = Fx/M;
        ddy   = Fy/M-g;
        ddphi = Tor/J;  
        Asv = [x y phi alphaB alphaF dx dy dphi dalphaB dalphaF ddx ddy ddphi 0 0]';
        % Compute leg acceleration:
        
        if contactB
            [dalphaB,ddalphaB] = Func_alphaB_VA(Asv,la);   
        else      
            ddalphaB = - ( Tor/J - Tor*la*sin(alphaB)/(J*l) ...
                + Fx*cos(alphaB + phi)/(M*g*l)...
                + Fy*sin(alphaB + phi)/(M*g*l)...
                + alphaB*ks/(l^2)...
                + dphi^2*la*cos(alphaB)/l);
        end
        
        if contactF
            [dalphaF,ddalphaF] = Func_alphaF_VA(Asv, la);
        else
            ddalphaF = - ( Tor/J + Tor*la*sin(alphaF)/(J*l)...
                + Fx*cos(alphaF + phi)/(M*g*l)...
                + Fy*sin(alphaF + phi)/(M*g*l)...
                + alphaF*ks/(l^2)...
                - dphi^2*la*cos(alphaF)/l);
        end   
        dydt_ = [dx;ddx;dy;ddy;dphi;ddphi;dalphaB;ddalphaB;dalphaF;ddalphaF];
    end

%**********************************************************************
% Helper Function
%**********************************************************************
    function tEvent = wrap2tApex(tEvent, tApex)
        while tEvent < 0
            tEvent = tEvent + tApex;
        end
        while tEvent > tApex
            tEvent = tEvent - tApex;
        end
    end

    function contact = determineContact(t,t_TD,t_LO)
        if (t > t_TD && t < t_LO && t_TD < t_LO)% contact point is the same
            contact = true;
        elseif (t < t_LO && t_TD > t_LO)        % contact points are not the same
            contact = true;
        elseif (t > t_TD && t_TD > t_LO)        % contact points are not the same
            contact = true;
        else
            contact = false;
        end
    end

    function ext_m = calculateExt(Y)
        ext_m = zeros(size(Y,1),2);
        for ii = 1:size(Y,1)
            x   = Y(ii,1);
            y   = Y(ii,3);
            phi = Y(ii,5);
            alphaB = Y(ii,7);
            alphaF = Y(ii,9);
            
            torso_position = [x;y];
            front_position = torso_position + la*[cos(phi);sin(phi)];
            back_position = torso_position + la*[cos(phi + pi);sin(phi + pi)];
            if contactB
                front_leg_length = 1;
                back_leg_length = back_position(2)/cos(alphaB + phi);
            elseif contactF
                front_leg_length = front_position(2)/cos(alphaF + phi);
                back_leg_length = 1;
            else
                front_leg_length = 1;
                back_leg_length = 1;
            end
            ext_m(ii,:) = [back_leg_length, front_leg_length];
        end
    end
end