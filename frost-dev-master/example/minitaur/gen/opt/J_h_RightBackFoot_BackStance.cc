/*
 * Automatically Generated from Mathematica.
 * Tue 28 May 2019 22:41:48 GMT-04:00
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
  double t1645;
  double t2352;
  double t2628;
  double t2964;
  double t2995;
  double t3014;
  double t3017;
  double t3063;
  double t3066;
  double t480;
  double t1218;
  double t2961;
  double t2979;
  double t3105;
  double t3126;
  double t3325;
  double t3067;
  double t3068;
  double t3336;
  double t3289;
  double t3304;
  double t3307;
  double t3311;
  double t3317;
  double t3318;
  double t3360;
  double t3362;
  double t3363;
  double t3364;
  double t3426;
  double t3432;
  double t3442;
  double t3444;
  double t3445;
  double t3446;
  double t3452;
  double t3465;
  double t3466;
  double t3459;
  double t3337;
  double t3453;
  double t3475;
  double t2814;
  double t2902;
  double t2948;
  double t2960;
  double t2993;
  double t3062;
  double t3072;
  double t3215;
  double t3249;
  double t3333;
  double t3351;
  double t3353;
  double t3354;
  double t3359;
  double t3384;
  double t3395;
  double t3408;
  double t3422;
  double t3425;
  double t3550;
  double t3551;
  double t3552;
  double t3462;
  double t3560;
  double t3561;
  double t3565;
  double t3574;
  double t3577;
  double t3588;
  double t3483;
  double t3506;
  double t3512;
  double t3644;
  double t3645;
  double t3646;
  double t3649;
  double t3653;
  double t3654;
  double t3656;
  double t3658;
  double t3661;
  double t3665;
  double t3670;
  double t3676;
  double t3721;
  double t3722;
  double t3711;
  double t3715;
  double t3759;
  double t3729;
  double t3730;
  double t3743;
  double t3750;
  double t3772;
  double t3773;
  double t3776;
  double t3821;
  double t3826;
  double t3838;
  double t3886;
  double t3869;
  double t3920;
  double t3925;
  double t3922;
  double t3933;
  double t3934;
  double t3948;
  double t3956;
  double t3962;
  double t3979;
  double t3990;
  double t3991;
  double t3999;
  double t4003;
  double t4010;
  double t4012;
  double t4013;
  double t4018;
  double t4040;
  double t4041;
  double t4042;
  double t4096;
  double t4100;
  double t4102;
  double t4110;
  double t4117;
  double t4118;
  double t4131;
  double t4156;
  double t4190;
  double t4191;
  double t4209;
  double t4211;
  double t4297;
  double t4299;
  double t4300;
  double t4302;
  double t4307;
  double t4310;
  double t4314;
  double t4316;
  double t4318;
  double t4322;
  double t4323;
  double t4325;
  double t4328;
  double t4331;
  double t4332;
  double t4370;
  double t4372;
  double t4373;
  double t4376;
  double t4377;
  double t4378;
  double t4379;
  double t4381;
  double t4383;
  double t4384;
  double t4385;
  double t4387;
  double t4388;
  double t4389;
  double t4390;
  double t3719;
  double t3723;
  double t3725;
  double t3726;
  double t3754;
  double t3762;
  double t3766;
  double t3769;
  double t3771;
  double t3783;
  double t3784;
  double t3789;
  double t3791;
  double t3808;
  double t4410;
  double t4411;
  double t4412;
  double t4414;
  double t4416;
  double t4417;
  double t4418;
  double t3872;
  double t4421;
  double t4422;
  double t3909;
  double t4490;
  double t4491;
  double t4492;
  double t4493;
  double t4496;
  double t4497;
  double t4498;
  double t4499;
  double t4502;
  double t4503;
  double t4504;
  double t4505;
  double t4532;
  double t4533;
  double t4538;
  double t4545;
  double t4546;
  double t4547;
  double t4553;
  double t4564;
  double t4568;
  double t4569;
  double t4571;
  double t4615;
  double t4616;
  double t4617;
  double t4628;
  double t4631;
  double t4634;
  double t4649;
  double t4669;
  double t4670;
  double t4671;
  double t4673;
  double t4675;
  double t4676;
  double t4677;
  double t4679;
  double t4709;
  double t4711;
  double t4712;
  double t4713;
  double t4716;
  double t4717;
  double t4718;
  double t4720;
  double t4722;
  t1645 = Cos(var1[19]);
  t2352 = -1.*t1645;
  t2628 = 1. + t2352;
  t2964 = Sin(var1[4]);
  t2995 = Cos(var1[21]);
  t3014 = -1.*t2995;
  t3017 = 1. + t3014;
  t3063 = -3.e-6*t3017;
  t3066 = Sin(var1[21]);
  t480 = Cos(var1[4]);
  t1218 = Sin(var1[19]);
  t2961 = Cos(var1[5]);
  t2979 = Sin(var1[5]);
  t3105 = 3.e-6*t3066;
  t3126 = t3063 + t3105;
  t3325 = 3.e-13*var1[21];
  t3067 = -3.e-6*t3066;
  t3068 = t3063 + t3067;
  t3336 = -9.e-12*t3017;
  t3289 = -3.e-6*t480*t1218;
  t3304 = -3.e-6*t2628*t2961*t2964;
  t3307 = -9.e-12*t2628;
  t3311 = 1. + t3307;
  t3317 = t3311*t2964*t2979;
  t3318 = t3289 + t3304 + t3317;
  t3360 = t480*t1218;
  t3362 = -1.*t1645*t2961*t2964;
  t3363 = 3.e-6*t2628*t2964*t2979;
  t3364 = t3360 + t3362 + t3363;
  t3426 = -1.000000000009*t2628;
  t3432 = 1. + t3426;
  t3442 = t3432*t480;
  t3444 = t2961*t1218*t2964;
  t3445 = 3.e-6*t1218*t2964*t2979;
  t3446 = t3442 + t3444 + t3445;
  t3452 = 3.e-6*t3017;
  t3465 = -1.000000000009*t3017;
  t3466 = 1. + t3465;
  t3459 = 9.e-12*t3017;
  t3337 = -1.*t3066;
  t3453 = t3452 + t3067;
  t3475 = t3452 + t3105;
  t2814 = -1.8e-12*t2628;
  t2902 = -1. + t1645;
  t2948 = 0.2*t2902;
  t2960 = t2814 + t2948;
  t2993 = 1.e-7*var1[21];
  t3062 = 5.4e-18*t3017;
  t3072 = -0.200000000003*t3068;
  t3215 = 0.100000000003*t3126;
  t3249 = t2993 + t3062 + t3072 + t3215;
  t3333 = -0.2000000000048*t3017;
  t3351 = t3336 + t3337;
  t3353 = 0.100000000003*t3351;
  t3354 = 3.e-7*t3126;
  t3359 = t3325 + t3333 + t3353 + t3354;
  t3384 = 0.1000000000039*t3017;
  t3395 = 3.e-7*t3068;
  t3408 = t3336 + t3066;
  t3422 = -0.200000000003*t3408;
  t3425 = t3325 + t3384 + t3395 + t3422;
  t3550 = -1.*t3311*t480*t2961;
  t3551 = -3.e-6*t2628*t480*t2979;
  t3552 = t3550 + t3551;
  t3462 = t3459 + t3066;
  t3560 = -3.e-6*t2628*t480*t2961;
  t3561 = -1.*t1645*t480*t2979;
  t3565 = t3560 + t3561;
  t3574 = -3.e-6*t480*t2961*t1218;
  t3577 = t480*t1218*t2979;
  t3588 = t3574 + t3577;
  t3483 = t3459 + t3337;
  t3506 = -1.8e-11*t3017;
  t3512 = 1. + t3506;
  t3644 = -1.*t1645*t480*t2961;
  t3645 = -1.000000000009*t1218*t2964;
  t3646 = -3.e-6*t1645*t480*t2979;
  t3649 = t3644 + t3645 + t3646;
  t3653 = -1.*t480*t2961*t1218;
  t3654 = t1645*t2964;
  t3656 = -3.e-6*t480*t1218*t2979;
  t3658 = t3653 + t3654 + t3656;
  t3661 = 3.e-6*t480*t2961*t1218;
  t3665 = -3.e-6*t1645*t2964;
  t3670 = 9.e-12*t480*t1218*t2979;
  t3676 = t3661 + t3665 + t3670;
  t3721 = 3.e-6*t2995;
  t3722 = t3721 + t3067;
  t3711 = -3.e-6*t2995;
  t3715 = t3711 + t3067;
  t3759 = -9.e-12*t3066;
  t3729 = 3.e-6*t2628*t480*t2961;
  t3730 = -3.e-6*t1218*t2964;
  t3743 = -1.*t3311*t480*t2979;
  t3750 = t3729 + t3730 + t3743;
  t3772 = t1645*t480*t2961;
  t3773 = t1218*t2964;
  t3776 = t3772 + t3773 + t3551;
  t3821 = t3432*t2964;
  t3826 = t3653 + t3821 + t3656;
  t3838 = t3721 + t3105;
  t3886 = t3711 + t3105;
  t3869 = 9.e-12*t3066;
  t3920 = Cos(var1[3]);
  t3925 = Sin(var1[3]);
  t3922 = t3920*t2961*t2964;
  t3933 = -1.*t3925*t2979;
  t3934 = t3922 + t3933;
  t3948 = -1.*t2961*t3925;
  t3956 = -1.*t3920*t2964*t2979;
  t3962 = t3948 + t3956;
  t3979 = 3.e-6*t3920*t480*t1218;
  t3990 = 3.e-6*t2628*t3934;
  t3991 = t3311*t3962;
  t3999 = t3979 + t3990 + t3991;
  t4003 = -1.*t3920*t480*t1218;
  t4010 = t1645*t3934;
  t4012 = 3.e-6*t2628*t3962;
  t4013 = t4003 + t4010 + t4012;
  t4018 = -1.*t3432*t3920*t480;
  t4040 = -1.*t1218*t3934;
  t4041 = 3.e-6*t1218*t3962;
  t4042 = t4018 + t4040 + t4041;
  t4096 = 3.e-6*t2628*t480*t2961*t3925;
  t4100 = -3.e-6*t1218*t3925*t2964;
  t4102 = -1.*t3311*t480*t3925*t2979;
  t4110 = t4096 + t4100 + t4102;
  t4117 = t1645*t480*t2961*t3925;
  t4118 = t1218*t3925*t2964;
  t4131 = -3.e-6*t2628*t480*t3925*t2979;
  t4156 = t4117 + t4118 + t4131;
  t4190 = -1.*t480*t2961*t1218*t3925;
  t4191 = t3432*t3925*t2964;
  t4209 = -3.e-6*t480*t1218*t3925*t2979;
  t4211 = t4190 + t4191 + t4209;
  t4297 = -1.*t2961*t3925*t2964;
  t4299 = -1.*t3920*t2979;
  t4300 = t4297 + t4299;
  t4302 = t3920*t2961;
  t4307 = -1.*t3925*t2964*t2979;
  t4310 = t4302 + t4307;
  t4314 = t3311*t4300;
  t4316 = 3.e-6*t2628*t4310;
  t4318 = t4314 + t4316;
  t4322 = 3.e-6*t2628*t4300;
  t4323 = t1645*t4310;
  t4325 = t4322 + t4323;
  t4328 = 3.e-6*t1218*t4300;
  t4331 = -1.*t1218*t4310;
  t4332 = t4328 + t4331;
  t4370 = t2961*t3925*t2964;
  t4372 = t3920*t2979;
  t4373 = t4370 + t4372;
  t4376 = 1.000000000009*t480*t1218*t3925;
  t4377 = -1.*t1645*t4373;
  t4378 = 3.e-6*t1645*t4310;
  t4379 = t4376 + t4377 + t4378;
  t4381 = 3.e-6*t1645*t480*t3925;
  t4383 = 3.e-6*t1218*t4373;
  t4384 = -9.e-12*t1218*t4310;
  t4385 = t4381 + t4383 + t4384;
  t4387 = -1.*t1645*t480*t3925;
  t4388 = -1.*t1218*t4373;
  t4389 = 3.e-6*t1218*t4310;
  t4390 = t4387 + t4388 + t4389;
  t3719 = -0.200000000003*t3715;
  t3723 = 0.100000000003*t3722;
  t3725 = 5.4e-18*t3066;
  t3726 = 1.e-7 + t3719 + t3723 + t3725;
  t3754 = 3.e-7*t3722;
  t3762 = t3014 + t3759;
  t3766 = 0.100000000003*t3762;
  t3769 = -0.2000000000048*t3066;
  t3771 = 3.e-13 + t3754 + t3766 + t3769;
  t3783 = 3.e-7*t3715;
  t3784 = t2995 + t3759;
  t3789 = -0.200000000003*t3784;
  t3791 = 0.1000000000039*t3066;
  t3808 = 3.e-13 + t3783 + t3789 + t3791;
  t4410 = 3.e-6*t480*t1218*t3925;
  t4411 = 3.e-6*t2628*t4373;
  t4412 = t3311*t4310;
  t4414 = t4410 + t4411 + t4412;
  t4416 = -1.*t480*t1218*t3925;
  t4417 = t1645*t4373;
  t4418 = t4416 + t4417 + t4316;
  t3872 = t3014 + t3869;
  t4421 = -1.*t3432*t480*t3925;
  t4422 = t4421 + t4388 + t4389;
  t3909 = t2995 + t3869;
  t4490 = -3.e-6*t2628*t3920*t480*t2961;
  t4491 = 3.e-6*t3920*t1218*t2964;
  t4492 = t3311*t3920*t480*t2979;
  t4493 = t4490 + t4491 + t4492;
  t4496 = -1.*t1645*t3920*t480*t2961;
  t4497 = -1.*t3920*t1218*t2964;
  t4498 = 3.e-6*t2628*t3920*t480*t2979;
  t4499 = t4496 + t4497 + t4498;
  t4502 = t3920*t480*t2961*t1218;
  t4503 = -1.*t3432*t3920*t2964;
  t4504 = 3.e-6*t3920*t480*t1218*t2979;
  t4505 = t4502 + t4503 + t4504;
  t4532 = t2961*t3925;
  t4533 = t3920*t2964*t2979;
  t4538 = t4532 + t4533;
  t4545 = t3311*t3934;
  t4546 = 3.e-6*t2628*t4538;
  t4547 = t4545 + t4546;
  t4553 = t1645*t4538;
  t4564 = t3990 + t4553;
  t4568 = 3.e-6*t1218*t3934;
  t4569 = -1.*t1218*t4538;
  t4571 = t4568 + t4569;
  t4615 = -1.*t3920*t2961*t2964;
  t4616 = t3925*t2979;
  t4617 = t4615 + t4616;
  t4628 = -1.000000000009*t3920*t480*t1218;
  t4631 = -1.*t1645*t4617;
  t4634 = 3.e-6*t1645*t4538;
  t4649 = t4628 + t4631 + t4634;
  t4669 = -3.e-6*t1645*t3920*t480;
  t4670 = 3.e-6*t1218*t4617;
  t4671 = -9.e-12*t1218*t4538;
  t4673 = t4669 + t4670 + t4671;
  t4675 = t1645*t3920*t480;
  t4676 = -1.*t1218*t4617;
  t4677 = 3.e-6*t1218*t4538;
  t4679 = t4675 + t4676 + t4677;
  t4709 = -3.e-6*t3920*t480*t1218;
  t4711 = 3.e-6*t2628*t4617;
  t4712 = t3311*t4538;
  t4713 = t4709 + t4711 + t4712;
  t4716 = t3920*t480*t1218;
  t4717 = t1645*t4617;
  t4718 = t4716 + t4717 + t4546;
  t4720 = t3432*t3920*t480;
  t4722 = t4720 + t4676 + t4677;
  p_output1[0]=1.;
  p_output1[1]=-1.*t2960*t2961*t2964 + 6.000000000054e-7*t2628*t2964*t2979 + t3249*t3318 + t3359*t3364 + t3425*t3446 - 0.3*(t3318*t3453 + t3364*t3462 + t3446*t3466) + 0.2*(-1.*t3364*t3466 - 1.*t3318*t3475 - 1.*t3446*t3483) - 0.099999*(t3364*t3453 + t3446*t3475 + t3318*t3512) + 0.2000000000018*t1218*t480;
  p_output1[2]=t3249*t3552 + t3359*t3565 + t3425*t3588 - 0.3*(t3453*t3552 + t3462*t3565 + t3466*t3588) - 0.099999*(t3512*t3552 + t3453*t3565 + t3475*t3588) + 0.2*(-1.*t3475*t3552 - 1.*t3466*t3565 - 1.*t3483*t3588) - 6.000000000054e-7*t2628*t2961*t480 - 1.*t2960*t2979*t480;
  p_output1[3]=0.2000000000018*t1645*t2964 + t3425*t3649 + t3359*t3658 + t3249*t3676 - 0.3*(t3466*t3649 + t3462*t3658 + t3453*t3676) + 0.2*(-1.*t3483*t3649 - 1.*t3466*t3658 - 1.*t3475*t3676) - 0.099999*(t3475*t3649 + t3453*t3658 + t3512*t3676) - 0.2000000000018*t1218*t2961*t480 - 6.000000000054e-7*t1218*t2979*t480;
  p_output1[4]=t3726*t3750 + t3771*t3776 + t3808*t3826 + 0.2*(1.000000000009*t3066*t3776 - 1.*t3750*t3838 - 1.*t3826*t3872) - 0.099999*(-1.8e-11*t3066*t3750 + t3826*t3838 + t3776*t3886) - 0.3*(-1.000000000009*t3066*t3826 + t3750*t3886 + t3776*t3909);
  p_output1[5]=-1.;
  p_output1[6]=1.;
  p_output1[7]=t2960*t3934 + 6.000000000054e-7*t2628*t3962 + t3249*t3999 + t3359*t4013 + t3425*t4042 - 0.3*(t3453*t3999 + t3462*t4013 + t3466*t4042) - 0.099999*(t3512*t3999 + t3453*t4013 + t3475*t4042) + 0.2*(-1.*t3475*t3999 - 1.*t3466*t4013 - 1.*t3483*t4042) - 0.2000000000018*t1218*t3920*t480;
  p_output1[8]=0.2000000000018*t1218*t2964*t3925 + t3249*t4110 + t3359*t4156 + t3425*t4211 - 0.3*(t3453*t4110 + t3462*t4156 + t3466*t4211) - 0.099999*(t3512*t4110 + t3453*t4156 + t3475*t4211) + 0.2*(-1.*t3475*t4110 - 1.*t3466*t4156 - 1.*t3483*t4211) + t2960*t2961*t3925*t480 - 6.000000000054e-7*t2628*t2979*t3925*t480;
  p_output1[9]=6.000000000054e-7*t2628*t4300 + t2960*t4310 + t3249*t4318 + t3359*t4325 + t3425*t4332 - 0.3*(t3453*t4318 + t3462*t4325 + t3466*t4332) - 0.099999*(t3512*t4318 + t3453*t4325 + t3475*t4332) + 0.2*(-1.*t3475*t4318 - 1.*t3466*t4325 - 1.*t3483*t4332);
  p_output1[10]=6.000000000054e-7*t1218*t4310 - 0.2000000000018*t1218*t4373 + t3425*t4379 + t3249*t4385 + t3359*t4390 - 0.099999*(t3475*t4379 + t3512*t4385 + t3453*t4390) - 0.3*(t3466*t4379 + t3453*t4385 + t3462*t4390) + 0.2*(-1.*t3483*t4379 - 1.*t3475*t4385 - 1.*t3466*t4390) - 0.2000000000018*t1645*t3925*t480;
  p_output1[11]=t3726*t4414 + t3771*t4418 + t3808*t4422 - 0.3*(t3886*t4414 + t3909*t4418 - 1.000000000009*t3066*t4422) - 0.099999*(-1.8e-11*t3066*t4414 + t3886*t4418 + t3838*t4422) + 0.2*(-1.*t3838*t4414 + 1.000000000009*t3066*t4418 - 1.*t3872*t4422);
  p_output1[12]=-1.;
  p_output1[13]=1.;
  p_output1[14]=6.000000000054e-7*t2628*t4310 + t2960*t4373 + t3249*t4414 + t3359*t4418 + t3425*t4422 - 0.3*(t3453*t4414 + t3462*t4418 + t3466*t4422) - 0.099999*(t3512*t4414 + t3453*t4418 + t3475*t4422) + 0.2*(-1.*t3475*t4414 - 1.*t3466*t4418 - 1.*t3483*t4422) - 0.2000000000018*t1218*t3925*t480;
  p_output1[15]=-0.2000000000018*t1218*t2964*t3920 + t3249*t4493 + t3359*t4499 + t3425*t4505 - 0.3*(t3453*t4493 + t3462*t4499 + t3466*t4505) - 0.099999*(t3512*t4493 + t3453*t4499 + t3475*t4505) + 0.2*(-1.*t3475*t4493 - 1.*t3466*t4499 - 1.*t3483*t4505) - 1.*t2960*t2961*t3920*t480 + 6.000000000054e-7*t2628*t2979*t3920*t480;
  p_output1[16]=6.000000000054e-7*t2628*t3934 + t2960*t4538 + t3249*t4547 + t3359*t4564 + t3425*t4571 - 0.3*(t3453*t4547 + t3462*t4564 + t3466*t4571) - 0.099999*(t3512*t4547 + t3453*t4564 + t3475*t4571) + 0.2*(-1.*t3475*t4547 - 1.*t3466*t4564 - 1.*t3483*t4571);
  p_output1[17]=6.000000000054e-7*t1218*t4538 - 0.2000000000018*t1218*t4617 + t3425*t4649 + t3249*t4673 + t3359*t4679 - 0.099999*(t3475*t4649 + t3512*t4673 + t3453*t4679) - 0.3*(t3466*t4649 + t3453*t4673 + t3462*t4679) + 0.2*(-1.*t3483*t4649 - 1.*t3475*t4673 - 1.*t3466*t4679) + 0.2000000000018*t1645*t3920*t480;
  p_output1[18]=t3726*t4713 + t3771*t4718 + t3808*t4722 - 0.3*(t3886*t4713 + t3909*t4718 - 1.000000000009*t3066*t4722) - 0.099999*(-1.8e-11*t3066*t4713 + t3886*t4718 + t3838*t4722) + 0.2*(-1.*t3838*t4713 + 1.000000000009*t3066*t4718 - 1.*t3872*t4722);
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

#include "J_h_RightBackFoot_BackStance.hh"

namespace BackStance
{

void J_h_RightBackFoot_BackStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
