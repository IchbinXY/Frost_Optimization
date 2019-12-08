function [T_new, Y_new, I_EVENT_new, EXT_rad, avgvel] = output_template(config, Param, k)
xFINAL = config(:,k);
% config contains [14 states by number of solutions]
% [dx,  y,  dy, phi,    dphi,   alphaB, dalphaB,alphaF, dalphaF,tB_TD,  tB_LO,  tF_TD,  tF_LO,  tAPEX   ]
% [1,   2,  3,  4,      5,      6,      7,      8,      9,      10,     11,     12,     13,     14      ]
[~, T, Y, T_EVENT, ~, ~, EXT_m] = ZeroFun_Quadruped(xFINAL,Param);
% Y contains [number of nodes by 10 states]
% [x,   dx, y,  dy, phi,    dphi,   alphaB, dalphaB,alphaF, dalphaF ]
% [1,   2,  3,  4,  5,      6,      7,      8,      9,      10      ]

% Find the index of each event in T and Y
I_EVENT = FindIndex(T, T_EVENT);

% Set the beginning of Front Stance as the start point
[T_new, I_EVENT_new] = WrapVector(T,         I_EVENT(1), I_EVENT);
Y_new(:,1)           = WrapVector(Y(:,1),    I_EVENT(1), I_EVENT);
Y_new(:,2:10)        = MoveVector(Y(:,2:10), I_EVENT(1), I_EVENT);
EXT_m_new            = MoveVector(EXT_m,     I_EVENT(1), I_EVENT);

% De-normalize parameters
mass_n = 6.46;                          % kg
gravity = 9.81;                         % meter/second^2
length_n = 0.2316;                      % meter
time_n = sqrt(length_n/gravity);        % second
velocity_n = sqrt(length_n*gravity);    % meter/second

time = T(end)*time_n;                   % second
distance = Y(end,1)*length_n;           % meter
avgvel = distance/time;
EXT_rad = len2rad(EXT_m_new);
end