/*
 * Automatically Generated from Mathematica.
 * Tue 28 May 2019 22:30:38 GMT-04:00
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
  double t250;
  double t275;
  double t302;
  double t371;
  double t58;
  double t511;
  double t603;
  double t1006;
  double t1253;
  double t1336;
  double t1445;
  double t1662;
  double t1742;
  double t1746;
  double t1747;
  double t1158;
  double t1215;
  double t1218;
  double t1221;
  double t1697;
  double t2110;
  double t2111;
  double t2169;
  double t2170;
  double t2171;
  double t2178;
  double t2348;
  double t2197;
  double t2279;
  double t2284;
  double t2286;
  double t2294;
  double t2330;
  double t2332;
  double t2353;
  double t1252;
  double t2199;
  double t1661;
  double t2266;
  double t2267;
  double t2532;
  double t2345;
  double t1524;
  double t1729;
  double t1734;
  double t1784;
  double t2088;
  double t2187;
  double t2188;
  double t2214;
  double t2235;
  double t2236;
  double t2722;
  double t2723;
  double t2724;
  double t2346;
  double t2726;
  double t2727;
  double t2728;
  double t2518;
  double t2520;
  double t2741;
  double t2744;
  double t2752;
  double t2629;
  double t2662;
  double t2692;
  double t2694;
  double t2695;
  double t2713;
  double t2808;
  double t2809;
  double t2810;
  double t2811;
  double t2787;
  double t2788;
  double t2789;
  double t2801;
  double t2847;
  double t2851;
  double t2853;
  double t2858;
  double t2902;
  double t2903;
  double t2905;
  double t2921;
  double t2959;
  double t2966;
  double t2967;
  double t2968;
  double t2948;
  double t2952;
  double t2875;
  double t2882;
  double t2883;
  double t2901;
  double t2978;
  double t2986;
  double t2976;
  double t3003;
  double t3001;
  double t3002;
  double t3004;
  double t3005;
  double t3007;
  double t3008;
  double t3012;
  double t3061;
  double t3062;
  double t3063;
  double t3064;
  double t3066;
  double t3067;
  double t3068;
  double t3069;
  double t3072;
  double t3073;
  double t3074;
  double t3075;
  double t3248;
  double t3252;
  double t3256;
  double t3257;
  double t3259;
  double t3260;
  double t3262;
  double t3264;
  double t3268;
  double t3269;
  double t3270;
  double t3271;
  double t3354;
  double t3355;
  double t3356;
  double t3358;
  double t3359;
  double t3360;
  double t3362;
  double t3363;
  double t3364;
  double t3366;
  double t3368;
  double t3369;
  double t3384;
  double t3385;
  double t3392;
  double t3418;
  double t3420;
  double t3421;
  double t3429;
  double t3430;
  double t3431;
  double t3432;
  double t3424;
  double t3425;
  double t3426;
  double t3427;
  double t3436;
  double t3437;
  double t3439;
  double t3440;
  double t2904;
  double t2922;
  double t2938;
  double t2939;
  double t2956;
  double t2961;
  double t2962;
  double t2963;
  double t2964;
  double t2969;
  double t2970;
  double t2972;
  double t2973;
  double t2974;
  double t3465;
  double t3466;
  double t2987;
  double t3460;
  double t3461;
  double t3462;
  double t3463;
  double t3468;
  double t3469;
  double t3472;
  double t2994;
  double t3600;
  double t3601;
  double t3602;
  double t3605;
  double t3607;
  double t3608;
  double t3609;
  double t3610;
  double t3613;
  double t3614;
  double t3615;
  double t3616;
  double t3638;
  double t3639;
  double t3640;
  double t3642;
  double t3643;
  double t3645;
  double t3646;
  double t3647;
  double t3650;
  double t3651;
  double t3652;
  double t3670;
  double t3671;
  double t3672;
  double t3680;
  double t3683;
  double t3684;
  double t3685;
  double t3675;
  double t3676;
  double t3677;
  double t3678;
  double t3689;
  double t3690;
  double t3691;
  double t3692;
  double t3725;
  double t3726;
  double t3727;
  double t3722;
  double t3723;
  double t3710;
  double t3711;
  double t3712;
  double t3715;
  t250 = Cos(var1[6]);
  t275 = -1.*t250;
  t302 = 1. + t275;
  t371 = Sin(var1[4]);
  t58 = Cos(var1[5]);
  t511 = Sin(var1[5]);
  t603 = Cos(var1[4]);
  t1006 = Sin(var1[6]);
  t1253 = Cos(var1[8]);
  t1336 = -1.*t1253;
  t1445 = 1. + t1336;
  t1662 = Sin(var1[8]);
  t1742 = -3.e-6*t1445;
  t1746 = 3.e-6*t1662;
  t1747 = t1742 + t1746;
  t1158 = -1.*t58*t250*t371;
  t1215 = 3.e-6*t302*t371*t511;
  t1218 = t603*t1006;
  t1221 = t1158 + t1215 + t1218;
  t1697 = -1.*t1662;
  t2110 = -3.e-6*t58*t302*t371;
  t2111 = -9.e-12*t302;
  t2169 = 1. + t2111;
  t2170 = t2169*t371*t511;
  t2171 = -3.e-6*t603*t1006;
  t2178 = t2110 + t2170 + t2171;
  t2348 = 3.e-6*t1445;
  t2197 = -3.e-6*t1662;
  t2279 = -1.000000000009*t302;
  t2284 = 1. + t2279;
  t2286 = t603*t2284;
  t2294 = t58*t371*t1006;
  t2330 = 3.e-6*t371*t511*t1006;
  t2332 = t2286 + t2294 + t2330;
  t2353 = t2348 + t1746;
  t1252 = 9.e-13*var1[8];
  t2199 = t1742 + t2197;
  t1661 = -9.e-12*t1445;
  t2266 = -1.000000000009*t1445;
  t2267 = 1. + t2266;
  t2532 = t2348 + t2197;
  t2345 = 9.e-12*t1445;
  t1524 = 0.2000000000018*t1445;
  t1729 = t1661 + t1697;
  t1734 = 0.1*t1729;
  t1784 = -9.e-7*t1747;
  t2088 = t1252 + t1524 + t1734 + t1784;
  t2187 = 3.e-7*var1[8];
  t2188 = -1.62e-17*t1445;
  t2214 = 0.2*t2199;
  t2235 = 0.1*t1747;
  t2236 = t2187 + t2188 + t2214 + t2235;
  t2722 = -3.e-6*t603*t58*t302;
  t2723 = -1.*t603*t250*t511;
  t2724 = t2722 + t2723;
  t2346 = t2345 + t1697;
  t2726 = -1.*t603*t58*t2169;
  t2727 = -3.e-6*t603*t302*t511;
  t2728 = t2726 + t2727;
  t2518 = -1.8e-11*t1445;
  t2520 = 1. + t2518;
  t2741 = -3.e-6*t603*t58*t1006;
  t2744 = t603*t511*t1006;
  t2752 = t2741 + t2744;
  t2629 = 0.1000000000009*t1445;
  t2662 = -9.e-7*t2199;
  t2692 = t1661 + t1662;
  t2694 = 0.2*t2692;
  t2695 = t1252 + t2629 + t2662 + t2694;
  t2713 = t2345 + t1662;
  t2808 = -3.e-6*t250*t371;
  t2809 = 3.e-6*t603*t58*t1006;
  t2810 = 9.e-12*t603*t511*t1006;
  t2811 = t2808 + t2809 + t2810;
  t2787 = t250*t371;
  t2788 = -1.*t603*t58*t1006;
  t2789 = -3.e-6*t603*t511*t1006;
  t2801 = t2787 + t2788 + t2789;
  t2847 = -1.*t603*t58*t250;
  t2851 = -3.e-6*t603*t250*t511;
  t2853 = -1.000000000009*t371*t1006;
  t2858 = t2847 + t2851 + t2853;
  t2902 = -3.e-6*t1253;
  t2903 = t2902 + t2197;
  t2905 = 3.e-6*t1253;
  t2921 = t2905 + t2197;
  t2959 = -9.e-12*t1662;
  t2966 = t603*t58*t250;
  t2967 = t371*t1006;
  t2968 = t2966 + t2727 + t2967;
  t2948 = t2284*t371;
  t2952 = t2948 + t2788 + t2789;
  t2875 = 3.e-6*t603*t58*t302;
  t2882 = -1.*t603*t2169*t511;
  t2883 = -3.e-6*t371*t1006;
  t2901 = t2875 + t2882 + t2883;
  t2978 = t2905 + t1746;
  t2986 = 9.e-12*t1662;
  t2976 = t2902 + t1746;
  t3003 = Sin(var1[3]);
  t3001 = Cos(var1[3]);
  t3002 = t3001*t58*t371;
  t3004 = -1.*t3003*t511;
  t3005 = t3002 + t3004;
  t3007 = -1.*t58*t3003;
  t3008 = -1.*t3001*t371*t511;
  t3012 = t3007 + t3008;
  t3061 = t250*t3005;
  t3062 = 3.e-6*t302*t3012;
  t3063 = -1.*t3001*t603*t1006;
  t3064 = t3061 + t3062 + t3063;
  t3066 = 3.e-6*t302*t3005;
  t3067 = t2169*t3012;
  t3068 = 3.e-6*t3001*t603*t1006;
  t3069 = t3066 + t3067 + t3068;
  t3072 = -1.*t3001*t603*t2284;
  t3073 = -1.*t3005*t1006;
  t3074 = 3.e-6*t3012*t1006;
  t3075 = t3072 + t3073 + t3074;
  t3248 = t603*t58*t250*t3003;
  t3252 = -3.e-6*t603*t302*t3003*t511;
  t3256 = t3003*t371*t1006;
  t3257 = t3248 + t3252 + t3256;
  t3259 = 3.e-6*t603*t58*t302*t3003;
  t3260 = -1.*t603*t2169*t3003*t511;
  t3262 = -3.e-6*t3003*t371*t1006;
  t3264 = t3259 + t3260 + t3262;
  t3268 = t2284*t3003*t371;
  t3269 = -1.*t603*t58*t3003*t1006;
  t3270 = -3.e-6*t603*t3003*t511*t1006;
  t3271 = t3268 + t3269 + t3270;
  t3354 = -1.*t58*t3003*t371;
  t3355 = -1.*t3001*t511;
  t3356 = t3354 + t3355;
  t3358 = t3001*t58;
  t3359 = -1.*t3003*t371*t511;
  t3360 = t3358 + t3359;
  t3362 = 3.e-6*t302*t3356;
  t3363 = t250*t3360;
  t3364 = t3362 + t3363;
  t3366 = t2169*t3356;
  t3368 = 3.e-6*t302*t3360;
  t3369 = t3366 + t3368;
  t3384 = 3.e-6*t3356*t1006;
  t3385 = -1.*t3360*t1006;
  t3392 = t3384 + t3385;
  t3418 = t58*t3003*t371;
  t3420 = t3001*t511;
  t3421 = t3418 + t3420;
  t3429 = 3.e-6*t603*t250*t3003;
  t3430 = 3.e-6*t3421*t1006;
  t3431 = -9.e-12*t3360*t1006;
  t3432 = t3429 + t3430 + t3431;
  t3424 = -1.*t603*t250*t3003;
  t3425 = -1.*t3421*t1006;
  t3426 = 3.e-6*t3360*t1006;
  t3427 = t3424 + t3425 + t3426;
  t3436 = -1.*t250*t3421;
  t3437 = 3.e-6*t250*t3360;
  t3439 = 1.000000000009*t603*t3003*t1006;
  t3440 = t3436 + t3437 + t3439;
  t2904 = 0.2*t2903;
  t2922 = 0.1*t2921;
  t2938 = -1.62e-17*t1662;
  t2939 = 3.e-7 + t2904 + t2922 + t2938;
  t2956 = -9.e-7*t2903;
  t2961 = t1253 + t2959;
  t2962 = 0.2*t2961;
  t2963 = 0.1000000000009*t1662;
  t2964 = 9.e-13 + t2956 + t2962 + t2963;
  t2969 = -9.e-7*t2921;
  t2970 = t1336 + t2959;
  t2972 = 0.1*t2970;
  t2973 = 0.2000000000018*t1662;
  t2974 = 9.e-13 + t2969 + t2972 + t2973;
  t3465 = -1.*t603*t2284*t3003;
  t3466 = t3465 + t3425 + t3426;
  t2987 = t1336 + t2986;
  t3460 = 3.e-6*t302*t3421;
  t3461 = t2169*t3360;
  t3462 = 3.e-6*t603*t3003*t1006;
  t3463 = t3460 + t3461 + t3462;
  t3468 = t250*t3421;
  t3469 = -1.*t603*t3003*t1006;
  t3472 = t3468 + t3368 + t3469;
  t2994 = t1253 + t2986;
  t3600 = -1.*t3001*t603*t58*t250;
  t3601 = 3.e-6*t3001*t603*t302*t511;
  t3602 = -1.*t3001*t371*t1006;
  t3605 = t3600 + t3601 + t3602;
  t3607 = -3.e-6*t3001*t603*t58*t302;
  t3608 = t3001*t603*t2169*t511;
  t3609 = 3.e-6*t3001*t371*t1006;
  t3610 = t3607 + t3608 + t3609;
  t3613 = -1.*t3001*t2284*t371;
  t3614 = t3001*t603*t58*t1006;
  t3615 = 3.e-6*t3001*t603*t511*t1006;
  t3616 = t3613 + t3614 + t3615;
  t3638 = t58*t3003;
  t3639 = t3001*t371*t511;
  t3640 = t3638 + t3639;
  t3642 = t250*t3640;
  t3643 = t3066 + t3642;
  t3645 = t2169*t3005;
  t3646 = 3.e-6*t302*t3640;
  t3647 = t3645 + t3646;
  t3650 = 3.e-6*t3005*t1006;
  t3651 = -1.*t3640*t1006;
  t3652 = t3650 + t3651;
  t3670 = -1.*t3001*t58*t371;
  t3671 = t3003*t511;
  t3672 = t3670 + t3671;
  t3680 = -3.e-6*t3001*t603*t250;
  t3683 = 3.e-6*t3672*t1006;
  t3684 = -9.e-12*t3640*t1006;
  t3685 = t3680 + t3683 + t3684;
  t3675 = t3001*t603*t250;
  t3676 = -1.*t3672*t1006;
  t3677 = 3.e-6*t3640*t1006;
  t3678 = t3675 + t3676 + t3677;
  t3689 = -1.*t250*t3672;
  t3690 = 3.e-6*t250*t3640;
  t3691 = -1.000000000009*t3001*t603*t1006;
  t3692 = t3689 + t3690 + t3691;
  t3725 = t250*t3672;
  t3726 = t3001*t603*t1006;
  t3727 = t3725 + t3646 + t3726;
  t3722 = t3001*t603*t2284;
  t3723 = t3722 + t3676 + t3677;
  t3710 = 3.e-6*t302*t3672;
  t3711 = t2169*t3640;
  t3712 = -3.e-6*t3001*t603*t1006;
  t3715 = t3710 + t3711 + t3712;
  p_output1[0]=1.;
  p_output1[1]=t1221*t2088 + t2178*t2236 + 0.2*(t1221*t2267 + t2332*t2346 + t2178*t2353) + 0.100001*(t2332*t2353 + t2178*t2520 + t1221*t2532) + t2332*t2695 - 0.3*(t2267*t2332 + t2178*t2532 + t1221*t2713) - 6.000000000054e-7*t302*t371*t511 - 0.2000000000018*t302*t371*t58 - 0.2000000000018*t1006*t603;
  p_output1[2]=t2088*t2724 + t2236*t2728 + t2695*t2752 - 0.3*(t2713*t2724 + t2532*t2728 + t2267*t2752) + 0.2*(t2267*t2724 + t2353*t2728 + t2346*t2752) + 0.100001*(t2532*t2724 + t2520*t2728 + t2353*t2752) - 0.2000000000018*t302*t511*t603 + 6.000000000054e-7*t302*t58*t603;
  p_output1[3]=t2088*t2801 + t2236*t2811 + t2695*t2858 - 0.3*(t2713*t2801 + t2532*t2811 + t2267*t2858) + 0.2*(t2267*t2801 + t2353*t2811 + t2346*t2858) + 0.100001*(t2532*t2801 + t2520*t2811 + t2353*t2858) - 0.2000000000018*t250*t371 + 6.000000000054e-7*t1006*t511*t603 + 0.2000000000018*t1006*t58*t603;
  p_output1[4]=t2901*t2939 + t2952*t2964 + t2968*t2974 + 0.100001*(-1.8e-11*t1662*t2901 + t2968*t2976 + t2952*t2978) + 0.2*(-1.000000000009*t1662*t2968 + t2901*t2978 + t2952*t2987) - 0.3*(-1.000000000009*t1662*t2952 + t2901*t2976 + t2968*t2994);
  p_output1[5]=-1.;
  p_output1[6]=1.;
  p_output1[7]=0.2000000000018*t3005*t302 - 6.000000000054e-7*t3012*t302 + t2088*t3064 + t2236*t3069 + t2695*t3075 - 0.3*(t2713*t3064 + t2532*t3069 + t2267*t3075) + 0.2*(t2267*t3064 + t2353*t3069 + t2346*t3075) + 0.100001*(t2532*t3064 + t2520*t3069 + t2353*t3075) + 0.2000000000018*t1006*t3001*t603;
  p_output1[8]=t2088*t3257 + t2236*t3264 + t2695*t3271 - 0.3*(t2713*t3257 + t2532*t3264 + t2267*t3271) + 0.2*(t2267*t3257 + t2353*t3264 + t2346*t3271) + 0.100001*(t2532*t3257 + t2520*t3264 + t2353*t3271) - 0.2000000000018*t1006*t3003*t371 + 6.000000000054e-7*t3003*t302*t511*t603 + 0.2000000000018*t3003*t302*t58*t603;
  p_output1[9]=-6.000000000054e-7*t302*t3356 + 0.2000000000018*t302*t3360 + t2088*t3364 + t2236*t3369 + t2695*t3392 - 0.3*(t2713*t3364 + t2532*t3369 + t2267*t3392) + 0.2*(t2267*t3364 + t2353*t3369 + t2346*t3392) + 0.100001*(t2532*t3364 + t2520*t3369 + t2353*t3392);
  p_output1[10]=-6.000000000054e-7*t1006*t3360 + 0.2000000000018*t1006*t3421 + t2088*t3427 + t2236*t3432 + t2695*t3440 - 0.3*(t2713*t3427 + t2532*t3432 + t2267*t3440) + 0.2*(t2267*t3427 + t2353*t3432 + t2346*t3440) + 0.100001*(t2532*t3427 + t2520*t3432 + t2353*t3440) + 0.2000000000018*t250*t3003*t603;
  p_output1[11]=t2939*t3463 + t2964*t3466 + t2974*t3472 + 0.2*(t2978*t3463 + t2987*t3466 - 1.000000000009*t1662*t3472) + 0.100001*(-1.8e-11*t1662*t3463 + t2978*t3466 + t2976*t3472) - 0.3*(t2976*t3463 - 1.000000000009*t1662*t3466 + t2994*t3472);
  p_output1[12]=-1.;
  p_output1[13]=1.;
  p_output1[14]=-6.000000000054e-7*t302*t3360 + 0.2000000000018*t302*t3421 + t2236*t3463 + t2695*t3466 + t2088*t3472 + 0.2*(t2353*t3463 + t2346*t3466 + t2267*t3472) + 0.100001*(t2520*t3463 + t2353*t3466 + t2532*t3472) - 0.3*(t2532*t3463 + t2267*t3466 + t2713*t3472) + 0.2000000000018*t1006*t3003*t603;
  p_output1[15]=t2088*t3605 + t2236*t3610 + t2695*t3616 - 0.3*(t2713*t3605 + t2532*t3610 + t2267*t3616) + 0.2*(t2267*t3605 + t2353*t3610 + t2346*t3616) + 0.100001*(t2532*t3605 + t2520*t3610 + t2353*t3616) + 0.2000000000018*t1006*t3001*t371 - 6.000000000054e-7*t3001*t302*t511*t603 - 0.2000000000018*t3001*t302*t58*t603;
  p_output1[16]=-6.000000000054e-7*t3005*t302 + 0.2000000000018*t302*t3640 + t2088*t3643 + t2236*t3647 + t2695*t3652 - 0.3*(t2713*t3643 + t2532*t3647 + t2267*t3652) + 0.2*(t2267*t3643 + t2353*t3647 + t2346*t3652) + 0.100001*(t2532*t3643 + t2520*t3647 + t2353*t3652);
  p_output1[17]=-6.000000000054e-7*t1006*t3640 + 0.2000000000018*t1006*t3672 + t2088*t3678 + t2236*t3685 + t2695*t3692 - 0.3*(t2713*t3678 + t2532*t3685 + t2267*t3692) + 0.2*(t2267*t3678 + t2353*t3685 + t2346*t3692) + 0.100001*(t2532*t3678 + t2520*t3685 + t2353*t3692) - 0.2000000000018*t250*t3001*t603;
  p_output1[18]=t2939*t3715 + t2964*t3723 + t2974*t3727 + 0.2*(t2978*t3715 + t2987*t3723 - 1.000000000009*t1662*t3727) + 0.100001*(-1.8e-11*t1662*t3715 + t2978*t3723 + t2976*t3727) - 0.3*(t2976*t3715 - 1.000000000009*t1662*t3723 + t2994*t3727);
  p_output1[19]=-1.;
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
    ( !(mrows == 3 && ncols == 1) && 
      !(mrows == 1 && ncols == 3))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 20, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_h_LeftFrontFoot_FrontStance.hh"

namespace FrontStance
{

void J_h_LeftFrontFoot_FrontStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
