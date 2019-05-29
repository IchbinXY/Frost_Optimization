/*
 * Automatically Generated from Mathematica.
 * Tue 28 May 2019 22:30:46 GMT-04:00
 */

#ifdef MATLAB_MEX_FILE
#include <stdexcept>
#include <cmath>
#include<math.h>
/**
 * Copied from Wolfram Mathematica C Definitions file mdefs.hpp
 * Changed marcos to inline functions (Eric Cousineau)
 */
inline double Power(double x, double y) { return pow(x, y); }
inline double Sqrt(double x) { return sqrt(x); }

inline double Abs(double x) { return fabs(x); }

inline double Exp(double x) { return exp(x); }
inline double Log(double x) { return log(x); }

inline double Sin(double x) { return sin(x); }
inline double Cos(double x) { return cos(x); }
inline double Tan(double x) { return tan(x); }

inline double ArcSin(double x) { return asin(x); }
inline double ArcCos(double x) { return acos(x); }
inline double ArcTan(double x) { return atan(x); }

/* update ArcTan function to use atan2 instead. */
inline double ArcTan(double x, double y) { return atan2(y,x); }

inline double Sinh(double x) { return sinh(x); }
inline double Cosh(double x) { return cosh(x); }
inline double Tanh(double x) { return tanh(x); }

const double E	= 2.71828182845904523536029;
const double Pi = 3.14159265358979323846264;
const double Degree = 0.01745329251994329576924;

inline double Sec(double x) { return 1/cos(x); }
inline double Csc(double x) { return 1/sin(x); }

#endif

/*
 * Sub functions
 */
static void output1(double *p_output1,const double *var1,const double *var2)
{
  double t60;
  double t351;
  double t400;
  double t423;
  double t957;
  double t1067;
  double t1070;
  double t892;
  double t242;
  double t917;
  double t542;
  double t991;
  double t1076;
  double t1081;
  double t1102;
  double t1699;
  double t1780;
  double t1940;
  double t1956;
  double t1964;
  double t1285;
  double t1317;
  double t1392;
  double t1561;
  double t1574;
  double t1583;
  double t2113;
  double t431;
  double t471;
  double t541;
  double t886;
  double t921;
  double t932;
  double t1977;
  double t2121;
  double t2151;
  double t2117;
  double t2485;
  double t2524;
  double t2529;
  double t2399;
  double t2409;
  double t2419;
  double t2506;
  double t2609;
  double t2656;
  double t2718;
  double t2705;
  double t2710;
  double t2714;
  double t2719;
  double t2484;
  double t2670;
  double t2498;
  double t2691;
  double t2693;
  double t2770;
  double t2715;
  double t2486;
  double t2509;
  double t2514;
  double t2539;
  double t2564;
  double t2657;
  double t2664;
  double t2678;
  double t2681;
  double t2685;
  double t2859;
  double t2860;
  double t2861;
  double t2862;
  double t2716;
  double t2864;
  double t2865;
  double t2866;
  double t2867;
  double t2751;
  double t2753;
  double t2870;
  double t2871;
  double t2873;
  double t2874;
  double t2775;
  double t2776;
  double t2777;
  double t2778;
  double t2779;
  double t2783;
  double t3020;
  double t3024;
  double t3026;
  double t3042;
  double t3000;
  double t3006;
  double t3071;
  double t3076;
  double t3077;
  double t3081;
  double t3244;
  double t3242;
  double t1077;
  double t1176;
  double t1260;
  double t1264;
  double t3243;
  double t3250;
  double t3258;
  double t3266;
  double t3287;
  double t3293;
  double t1599;
  double t1708;
  double t1756;
  double t1765;
  double t1766;
  double t1965;
  double t1979;
  double t2037;
  double t2045;
  double t2046;
  double t3300;
  double t3301;
  double t3302;
  double t3303;
  double t2156;
  double t3265;
  double t3296;
  double t3297;
  double t3298;
  double t3322;
  double t3341;
  double t3348;
  double t3349;
  double t2298;
  double t3406;
  double t3411;
  double t3412;
  double t3415;
  double t3416;
  double t3417;
  double t3423;
  double t3428;
  double t3435;
  double t3441;
  double t3443;
  double t3481;
  double t3487;
  double t3488;
  double t3491;
  double t3493;
  double t3494;
  double t3503;
  double t3504;
  double t3507;
  double t3525;
  double t3529;
  double t3530;
  double t3536;
  double t3537;
  double t3553;
  double t3556;
  double t3557;
  double t3558;
  double t3617;
  double t3618;
  double t3619;
  double t3620;
  double t3622;
  double t3623;
  double t3624;
  double t3625;
  double t3628;
  double t3629;
  double t3634;
  double t3635;
  double t3673;
  double t3674;
  double t3679;
  double t3686;
  double t3667;
  double t3668;
  double t3696;
  double t3697;
  double t3698;
  double t3699;
  double t3733;
  double t3734;
  double t3735;
  double t3737;
  double t3738;
  double t3739;
  double t3751;
  double t3752;
  double t3755;
  double t3756;
  double t3744;
  double t3747;
  double t3748;
  double t3749;
  double t3736;
  double t3740;
  double t3741;
  double t3742;
  double t3778;
  double t3779;
  double t3781;
  double t3782;
  double t3785;
  double t3786;
  double t3787;
  double t3840;
  double t3841;
  double t3842;
  double t3843;
  double t3845;
  double t3846;
  double t3847;
  double t3848;
  double t3857;
  double t3858;
  double t3859;
  double t3860;
  double t3890;
  double t3891;
  double t3892;
  double t3893;
  double t3887;
  double t3888;
  double t3903;
  double t3914;
  double t3915;
  double t3939;
  t60 = Cos(var1[4]);
  t351 = Cos(var1[6]);
  t400 = -1.*t351;
  t423 = 1. + t400;
  t957 = Cos(var1[8]);
  t1067 = Sin(var1[8]);
  t1070 = -3.e-6*t1067;
  t892 = Sin(var1[4]);
  t242 = Cos(var1[5]);
  t917 = Sin(var1[6]);
  t542 = Sin(var1[5]);
  t991 = -3.e-6*t957;
  t1076 = t991 + t1070;
  t1081 = 3.e-6*t957;
  t1102 = t1081 + t1070;
  t1699 = -9.e-12*t1067;
  t1780 = t60*t242*t351;
  t1940 = -3.e-6*t60*t423*t542;
  t1956 = t892*t917;
  t1964 = t1780 + t1940 + t1956;
  t1285 = -1.000000000009*t423;
  t1317 = 1. + t1285;
  t1392 = t1317*t892;
  t1561 = -1.*t60*t242*t917;
  t1574 = -3.e-6*t60*t542*t917;
  t1583 = t1392 + t1561 + t1574;
  t2113 = 3.e-6*t1067;
  t431 = 3.e-6*t60*t242*t423;
  t471 = -9.e-12*t423;
  t541 = 1. + t471;
  t886 = -1.*t60*t541*t542;
  t921 = -3.e-6*t892*t917;
  t932 = t431 + t886 + t921;
  t1977 = -1.*t957;
  t2121 = t1081 + t2113;
  t2151 = 9.e-12*t1067;
  t2117 = t991 + t2113;
  t2485 = 1. + t1977;
  t2524 = -3.e-6*t2485;
  t2529 = t2524 + t2113;
  t2399 = -3.e-6*t60*t242*t423;
  t2409 = -1.*t60*t351*t542;
  t2419 = t2399 + t2409;
  t2506 = -1.*t1067;
  t2609 = -1.*t60*t242*t541;
  t2656 = t2609 + t1940;
  t2718 = 3.e-6*t2485;
  t2705 = -3.e-6*t60*t242*t917;
  t2710 = t60*t542*t917;
  t2714 = t2705 + t2710;
  t2719 = t2718 + t2113;
  t2484 = 9.e-13*var1[8];
  t2670 = t2524 + t1070;
  t2498 = -9.e-12*t2485;
  t2691 = -1.000000000009*t2485;
  t2693 = 1. + t2691;
  t2770 = t2718 + t1070;
  t2715 = 9.e-12*t2485;
  t2486 = 0.2000000000018*t2485;
  t2509 = t2498 + t2506;
  t2514 = 0.1*t2509;
  t2539 = -9.e-7*t2529;
  t2564 = t2484 + t2486 + t2514 + t2539;
  t2657 = 3.e-7*var1[8];
  t2664 = -1.62e-17*t2485;
  t2678 = 0.2*t2670;
  t2681 = 0.1*t2529;
  t2685 = t2657 + t2664 + t2678 + t2681;
  t2859 = -1.*t242*t351*t892;
  t2860 = 3.e-6*t423*t892*t542;
  t2861 = t60*t917;
  t2862 = t2859 + t2860 + t2861;
  t2716 = t2715 + t2506;
  t2864 = -3.e-6*t242*t423*t892;
  t2865 = t541*t892*t542;
  t2866 = -3.e-6*t60*t917;
  t2867 = t2864 + t2865 + t2866;
  t2751 = -1.8e-11*t2485;
  t2753 = 1. + t2751;
  t2870 = t60*t1317;
  t2871 = t242*t892*t917;
  t2873 = 3.e-6*t892*t542*t917;
  t2874 = t2870 + t2871 + t2873;
  t2775 = 0.1000000000009*t2485;
  t2776 = -9.e-7*t2670;
  t2777 = t2498 + t1067;
  t2778 = 0.2*t2777;
  t2779 = t2484 + t2775 + t2776 + t2778;
  t2783 = t2715 + t1067;
  t3020 = -3.e-6*t351*t892;
  t3024 = 3.e-6*t60*t242*t917;
  t3026 = 9.e-12*t60*t542*t917;
  t3042 = t3020 + t3024 + t3026;
  t3000 = t351*t892;
  t3006 = t3000 + t1561 + t1574;
  t3071 = -1.*t60*t242*t351;
  t3076 = -3.e-6*t60*t351*t542;
  t3077 = -1.000000000009*t892*t917;
  t3081 = t3071 + t3076 + t3077;
  t3244 = Cos(var1[3]);
  t3242 = Sin(var1[3]);
  t1077 = 0.2*t1076;
  t1176 = 0.1*t1102;
  t1260 = -1.62e-17*t1067;
  t1264 = 3.e-7 + t1077 + t1176 + t1260;
  t3243 = t242*t3242*t892;
  t3250 = t3244*t542;
  t3258 = t3243 + t3250;
  t3266 = t3244*t242;
  t3287 = -1.*t3242*t892*t542;
  t3293 = t3266 + t3287;
  t1599 = -9.e-7*t1076;
  t1708 = t957 + t1699;
  t1756 = 0.2*t1708;
  t1765 = 0.1000000000009*t1067;
  t1766 = 9.e-13 + t1599 + t1756 + t1765;
  t1965 = -9.e-7*t1102;
  t1979 = t1977 + t1699;
  t2037 = 0.1*t1979;
  t2045 = 0.2000000000018*t1067;
  t2046 = 9.e-13 + t1965 + t2037 + t2045;
  t3300 = -1.*t60*t1317*t3242;
  t3301 = -1.*t3258*t917;
  t3302 = 3.e-6*t3293*t917;
  t3303 = t3300 + t3301 + t3302;
  t2156 = t1977 + t2151;
  t3265 = 3.e-6*t423*t3258;
  t3296 = t541*t3293;
  t3297 = 3.e-6*t60*t3242*t917;
  t3298 = t3265 + t3296 + t3297;
  t3322 = t351*t3258;
  t3341 = 3.e-6*t423*t3293;
  t3348 = -1.*t60*t3242*t917;
  t3349 = t3322 + t3341 + t3348;
  t2298 = t957 + t2151;
  t3406 = -1.*t242*t3242*t892;
  t3411 = -1.*t3244*t542;
  t3412 = t3406 + t3411;
  t3415 = 3.e-6*t423*t3412;
  t3416 = t351*t3293;
  t3417 = t3415 + t3416;
  t3423 = t541*t3412;
  t3428 = t3423 + t3341;
  t3435 = 3.e-6*t3412*t917;
  t3441 = -1.*t3293*t917;
  t3443 = t3435 + t3441;
  t3481 = t3244*t242*t892;
  t3487 = -1.*t3242*t542;
  t3488 = t3481 + t3487;
  t3491 = -1.*t242*t3242;
  t3493 = -1.*t3244*t892*t542;
  t3494 = t3491 + t3493;
  t3503 = t351*t3488;
  t3504 = 3.e-6*t423*t3494;
  t3507 = -1.*t3244*t60*t917;
  t3525 = t3503 + t3504 + t3507;
  t3529 = 3.e-6*t423*t3488;
  t3530 = t541*t3494;
  t3536 = 3.e-6*t3244*t60*t917;
  t3537 = t3529 + t3530 + t3536;
  t3553 = -1.*t3244*t60*t1317;
  t3556 = -1.*t3488*t917;
  t3557 = 3.e-6*t3494*t917;
  t3558 = t3553 + t3556 + t3557;
  t3617 = t60*t242*t351*t3242;
  t3618 = -3.e-6*t60*t423*t3242*t542;
  t3619 = t3242*t892*t917;
  t3620 = t3617 + t3618 + t3619;
  t3622 = 3.e-6*t60*t242*t423*t3242;
  t3623 = -1.*t60*t541*t3242*t542;
  t3624 = -3.e-6*t3242*t892*t917;
  t3625 = t3622 + t3623 + t3624;
  t3628 = t1317*t3242*t892;
  t3629 = -1.*t60*t242*t3242*t917;
  t3634 = -3.e-6*t60*t3242*t542*t917;
  t3635 = t3628 + t3629 + t3634;
  t3673 = 3.e-6*t60*t351*t3242;
  t3674 = 3.e-6*t3258*t917;
  t3679 = -9.e-12*t3293*t917;
  t3686 = t3673 + t3674 + t3679;
  t3667 = -1.*t60*t351*t3242;
  t3668 = t3667 + t3301 + t3302;
  t3696 = -1.*t351*t3258;
  t3697 = 3.e-6*t351*t3293;
  t3698 = 1.000000000009*t60*t3242*t917;
  t3699 = t3696 + t3697 + t3698;
  t3733 = -1.*t3244*t242*t892;
  t3734 = t3242*t542;
  t3735 = t3733 + t3734;
  t3737 = t242*t3242;
  t3738 = t3244*t892*t542;
  t3739 = t3737 + t3738;
  t3751 = t351*t3735;
  t3752 = 3.e-6*t423*t3739;
  t3755 = t3244*t60*t917;
  t3756 = t3751 + t3752 + t3755;
  t3744 = t3244*t60*t1317;
  t3747 = -1.*t3735*t917;
  t3748 = 3.e-6*t3739*t917;
  t3749 = t3744 + t3747 + t3748;
  t3736 = 3.e-6*t423*t3735;
  t3740 = t541*t3739;
  t3741 = -3.e-6*t3244*t60*t917;
  t3742 = t3736 + t3740 + t3741;
  t3778 = t351*t3739;
  t3779 = t3529 + t3778;
  t3781 = t541*t3488;
  t3782 = t3781 + t3752;
  t3785 = 3.e-6*t3488*t917;
  t3786 = -1.*t3739*t917;
  t3787 = t3785 + t3786;
  t3840 = -1.*t3244*t60*t242*t351;
  t3841 = 3.e-6*t3244*t60*t423*t542;
  t3842 = -1.*t3244*t892*t917;
  t3843 = t3840 + t3841 + t3842;
  t3845 = -3.e-6*t3244*t60*t242*t423;
  t3846 = t3244*t60*t541*t542;
  t3847 = 3.e-6*t3244*t892*t917;
  t3848 = t3845 + t3846 + t3847;
  t3857 = -1.*t3244*t1317*t892;
  t3858 = t3244*t60*t242*t917;
  t3859 = 3.e-6*t3244*t60*t542*t917;
  t3860 = t3857 + t3858 + t3859;
  t3890 = -3.e-6*t3244*t60*t351;
  t3891 = 3.e-6*t3735*t917;
  t3892 = -9.e-12*t3739*t917;
  t3893 = t3890 + t3891 + t3892;
  t3887 = t3244*t60*t351;
  t3888 = t3887 + t3747 + t3748;
  t3903 = -1.*t351*t3735;
  t3914 = 3.e-6*t351*t3739;
  t3915 = -1.000000000009*t3244*t60*t917;
  t3939 = t3903 + t3914 + t3915;
  p_output1[0]=var2[0] + (t2564*t2862 + t2685*t2867 + t2779*t2874 - 0.3*(t2783*t2862 + t2770*t2867 + t2693*t2874) + 0.2*(t2693*t2862 + t2719*t2867 + t2716*t2874) + 0.100001*(t2770*t2862 + t2753*t2867 + t2719*t2874) - 0.2000000000018*t242*t423*t892 - 6.000000000054e-7*t423*t542*t892 - 0.2000000000018*t60*t917)*var2[4] + (t2419*t2564 + t2656*t2685 + 0.2*(t2419*t2693 + t2714*t2716 + t2656*t2719) + 0.100001*(t2714*t2719 + t2656*t2753 + t2419*t2770) + t2714*t2779 - 0.3*(t2693*t2714 + t2656*t2770 + t2419*t2783) + 6.000000000054e-7*t242*t423*t60 - 0.2000000000018*t423*t542*t60)*var2[5] + (t2564*t3006 + t2685*t3042 + t2779*t3081 - 0.3*(t2783*t3006 + t2770*t3042 + t2693*t3081) + 0.2*(t2693*t3006 + t2719*t3042 + t2716*t3081) + 0.100001*(t2770*t3006 + t2753*t3042 + t2719*t3081) - 0.2000000000018*t351*t892 + 0.2000000000018*t242*t60*t917 + 6.000000000054e-7*t542*t60*t917)*var2[6] + (t1583*t1766 + t1964*t2046 + t1264*t932 + 0.100001*(t1964*t2117 + t1583*t2121 - 1.8e-11*t1067*t932) - 0.3*(-1.000000000009*t1067*t1583 + t1964*t2298 + t2117*t932) + 0.2*(-1.000000000009*t1067*t1964 + t1583*t2156 + t2121*t932))*var2[8];
  p_output1[1]=var2[1] + (t2564*t3525 + t2685*t3537 + t2779*t3558 - 0.3*(t2783*t3525 + t2770*t3537 + t2693*t3558) + 0.2*(t2693*t3525 + t2719*t3537 + t2716*t3558) + 0.100001*(t2770*t3525 + t2753*t3537 + t2719*t3558) + 0.2000000000018*t3488*t423 - 6.000000000054e-7*t3494*t423 + 0.2000000000018*t3244*t60*t917)*var2[3] + (t2564*t3620 + t2685*t3625 + t2779*t3635 - 0.3*(t2783*t3620 + t2770*t3625 + t2693*t3635) + 0.2*(t2693*t3620 + t2719*t3625 + t2716*t3635) + 0.100001*(t2770*t3620 + t2753*t3625 + t2719*t3635) + 0.2000000000018*t242*t3242*t423*t60 + 6.000000000054e-7*t3242*t423*t542*t60 - 0.2000000000018*t3242*t892*t917)*var2[4] + (t2564*t3417 + t2685*t3428 + t2779*t3443 - 0.3*(t2783*t3417 + t2770*t3428 + t2693*t3443) + 0.2*(t2693*t3417 + t2719*t3428 + t2716*t3443) + 0.100001*(t2770*t3417 + t2753*t3428 + t2719*t3443) + 0.2000000000018*t3293*t423 - 6.000000000054e-7*t3412*t423)*var2[5] + (t2564*t3668 + t2685*t3686 + t2779*t3699 - 0.3*(t2783*t3668 + t2770*t3686 + t2693*t3699) + 0.2*(t2693*t3668 + t2719*t3686 + t2716*t3699) + 0.100001*(t2770*t3668 + t2753*t3686 + t2719*t3699) + 0.2000000000018*t3242*t351*t60 + 0.2000000000018*t3258*t917 - 6.000000000054e-7*t3293*t917)*var2[6] + (t1264*t3298 + t1766*t3303 + t2046*t3349 + 0.2*(t2121*t3298 + t2156*t3303 - 1.000000000009*t1067*t3349) + 0.100001*(-1.8e-11*t1067*t3298 + t2121*t3303 + t2117*t3349) - 0.3*(t2117*t3298 - 1.000000000009*t1067*t3303 + t2298*t3349))*var2[8];
  p_output1[2]=var2[2] + (t2685*t3298 + t2779*t3303 + t2564*t3349 + 0.2*(t2719*t3298 + t2716*t3303 + t2693*t3349) + 0.100001*(t2753*t3298 + t2719*t3303 + t2770*t3349) - 0.3*(t2770*t3298 + t2693*t3303 + t2783*t3349) + 0.2000000000018*t3258*t423 - 6.000000000054e-7*t3293*t423 + 0.2000000000018*t3242*t60*t917)*var2[3] + (t2564*t3843 + t2685*t3848 + t2779*t3860 - 0.3*(t2783*t3843 + t2770*t3848 + t2693*t3860) + 0.2*(t2693*t3843 + t2719*t3848 + t2716*t3860) + 0.100001*(t2770*t3843 + t2753*t3848 + t2719*t3860) - 0.2000000000018*t242*t3244*t423*t60 - 6.000000000054e-7*t3244*t423*t542*t60 + 0.2000000000018*t3244*t892*t917)*var2[4] + (t2564*t3779 + t2685*t3782 + t2779*t3787 - 0.3*(t2783*t3779 + t2770*t3782 + t2693*t3787) + 0.2*(t2693*t3779 + t2719*t3782 + t2716*t3787) + 0.100001*(t2770*t3779 + t2753*t3782 + t2719*t3787) - 6.000000000054e-7*t3488*t423 + 0.2000000000018*t3739*t423)*var2[5] + (t2564*t3888 + t2685*t3893 + t2779*t3939 - 0.3*(t2783*t3888 + t2770*t3893 + t2693*t3939) + 0.2*(t2693*t3888 + t2719*t3893 + t2716*t3939) + 0.100001*(t2770*t3888 + t2753*t3893 + t2719*t3939) - 0.2000000000018*t3244*t351*t60 + 0.2000000000018*t3735*t917 - 6.000000000054e-7*t3739*t917)*var2[6] + (t1264*t3742 + t1766*t3749 + t2046*t3756 + 0.2*(t2121*t3742 + t2156*t3749 - 1.000000000009*t1067*t3756) + 0.100001*(-1.8e-11*t1067*t3742 + t2121*t3749 + t2117*t3756) - 0.3*(t2117*t3742 - 1.000000000009*t1067*t3749 + t2298*t3756))*var2[8];
}



#ifdef MATLAB_MEX_FILE

#include "mex.h"
/*
 * Main function
 */
void mexFunction( int nlhs, mxArray *plhs[],
                  int nrhs, const mxArray *prhs[] )
{
  size_t mrows, ncols;

  double *var1,*var2;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 2)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Two input(s) required (var1,var2).");
    }
  else if( nlhs > 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:maxlhs", "Too many output arguments.");
    }

  /*  The input must be a noncomplex double vector or scaler.  */
  mrows = mxGetM(prhs[0]);
  ncols = mxGetN(prhs[0]);
  if( !mxIsDouble(prhs[0]) || mxIsComplex(prhs[0]) ||
    ( !(mrows == 22 && ncols == 1) && 
      !(mrows == 1 && ncols == 22))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }
  mrows = mxGetM(prhs[1]);
  ncols = mxGetN(prhs[1]);
  if( !mxIsDouble(prhs[1]) || mxIsComplex(prhs[1]) ||
    ( !(mrows == 22 && ncols == 1) && 
      !(mrows == 1 && ncols == 22))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "dh_LeftFrontFoot_FrontStance.hh"

namespace FrontStance
{

void dh_LeftFrontFoot_FrontStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
