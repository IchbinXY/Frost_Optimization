function I_EVENT = FindIndex(T, T_EVENT)
I_B_TD = find(T == T_EVENT(1));
I_Flight1_end       = I_B_TD(1);
I_Back_Impact       = I_B_TD(2);
I_BackStance_bgn    = I_B_TD(3);

I_B_LO = find(T == T_EVENT(2));
I_BackStance_end    = I_B_LO(1);
I_Flight2_bgn       = I_B_LO(2);

I_F_TD = find(T == T_EVENT(3));
I_Flight2_end       = I_F_TD(1);
I_Front_Impact      = I_F_TD(2);
I_FrontStance_bgn   = I_F_TD(3);

I_F_LO = find(T == T_EVENT(4));
I_FrontStance_end   = I_F_LO(1);
I_Flight1_bgn       = I_F_LO(2);

I_APEX = find(T == T_EVENT(5));

I_EVENT = [...
    I_FrontStance_bgn, I_FrontStance_end, I_Flight1_bgn, I_Flight1_end, ...
    I_BackStance_bgn,  I_BackStance_end,  I_Flight2_bgn, I_Flight2_end, ...
    I_Front_Impact, I_Back_Impact, I_APEX];
end