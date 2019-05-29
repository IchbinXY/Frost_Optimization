/*
 * Automatically Generated from Mathematica.
 * Wed 29 May 2019 15:05:37 GMT-04:00
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
  double t291;
  double t450;
  double t559;
  double t567;
  double t13056;
  double t13061;
  double t13062;
  double t12943;
  double t427;
  double t13051;
  double t12533;
  double t13059;
  double t13063;
  double t13073;
  double t13074;
  double t13900;
  double t14272;
  double t14302;
  double t14308;
  double t14312;
  double t13083;
  double t13102;
  double t13103;
  double t13107;
  double t13195;
  double t13246;
  double t14408;
  double t690;
  double t795;
  double t10622;
  double t12940;
  double t13054;
  double t13055;
  double t14399;
  double t15171;
  double t16961;
  double t14417;
  double t24361;
  double t24384;
  double t24397;
  double t24263;
  double t24272;
  double t24320;
  double t24366;
  double t24451;
  double t24623;
  double t25236;
  double t25180;
  double t25181;
  double t25212;
  double t25239;
  double t24321;
  double t24802;
  double t24364;
  double t25145;
  double t25152;
  double t25335;
  double t25223;
  double t24362;
  double t24369;
  double t24371;
  double t24399;
  double t24403;
  double t24706;
  double t24760;
  double t24803;
  double t25077;
  double t25091;
  double t26728;
  double t27403;
  double t27453;
  double t27555;
  double t25224;
  double t27673;
  double t27676;
  double t27677;
  double t27678;
  double t25277;
  double t25292;
  double t27806;
  double t28281;
  double t28737;
  double t28830;
  double t25400;
  double t25410;
  double t25415;
  double t25419;
  double t25422;
  double t25582;
  double t29158;
  double t29179;
  double t29185;
  double t29195;
  double t29136;
  double t29137;
  double t29199;
  double t29201;
  double t29202;
  double t29203;
  double t29267;
  double t29250;
  double t13064;
  double t13076;
  double t13078;
  double t13081;
  double t29251;
  double t29268;
  double t29288;
  double t29290;
  double t29291;
  double t29292;
  double t13581;
  double t14190;
  double t14197;
  double t14201;
  double t14205;
  double t14395;
  double t14403;
  double t14404;
  double t14405;
  double t14406;
  double t29297;
  double t29298;
  double t29299;
  double t29300;
  double t16998;
  double t29289;
  double t29293;
  double t29294;
  double t29295;
  double t29310;
  double t29311;
  double t29316;
  double t29317;
  double t17209;
  double t29347;
  double t29351;
  double t29352;
  double t29355;
  double t29356;
  double t29357;
  double t29359;
  double t29360;
  double t29363;
  double t29364;
  double t29365;
  double t29400;
  double t29401;
  double t29403;
  double t29405;
  double t29406;
  double t29412;
  double t29420;
  double t29421;
  double t29422;
  double t29423;
  double t29425;
  double t29426;
  double t29427;
  double t29428;
  double t29431;
  double t29432;
  double t29433;
  double t29434;
  double t29469;
  double t29470;
  double t29471;
  double t29472;
  double t29474;
  double t29475;
  double t29476;
  double t29477;
  double t29480;
  double t29481;
  double t29482;
  double t29483;
  double t29507;
  double t29508;
  double t29509;
  double t29510;
  double t29504;
  double t29505;
  double t29515;
  double t29516;
  double t29517;
  double t29519;
  double t29537;
  double t29538;
  double t29539;
  double t29541;
  double t29542;
  double t29543;
  double t29553;
  double t29554;
  double t29555;
  double t29556;
  double t29548;
  double t29549;
  double t29550;
  double t29551;
  double t29540;
  double t29544;
  double t29545;
  double t29546;
  double t29577;
  double t29578;
  double t29580;
  double t29581;
  double t29584;
  double t29585;
  double t29586;
  double t29631;
  double t29632;
  double t29633;
  double t29634;
  double t29636;
  double t29637;
  double t29638;
  double t29639;
  double t29642;
  double t29643;
  double t29644;
  double t29645;
  double t29669;
  double t29670;
  double t29671;
  double t29672;
  double t29666;
  double t29667;
  double t29676;
  double t29677;
  double t29678;
  double t29679;
  t291 = Cos(var1[4]);
  t450 = Cos(var1[6]);
  t559 = -1.*t450;
  t567 = 1. + t559;
  t13056 = Cos(var1[8]);
  t13061 = Sin(var1[8]);
  t13062 = -3.e-6*t13061;
  t12943 = Sin(var1[4]);
  t427 = Cos(var1[5]);
  t13051 = Sin(var1[6]);
  t12533 = Sin(var1[5]);
  t13059 = -3.e-6*t13056;
  t13063 = t13059 + t13062;
  t13073 = 3.e-6*t13056;
  t13074 = t13073 + t13062;
  t13900 = -9.e-12*t13061;
  t14272 = t291*t427*t450;
  t14302 = -3.e-6*t291*t567*t12533;
  t14308 = t12943*t13051;
  t14312 = t14272 + t14302 + t14308;
  t13083 = -1.000000000009*t567;
  t13102 = 1. + t13083;
  t13103 = t13102*t12943;
  t13107 = -1.*t291*t427*t13051;
  t13195 = -3.e-6*t291*t12533*t13051;
  t13246 = t13103 + t13107 + t13195;
  t14408 = 3.e-6*t13061;
  t690 = 3.e-6*t291*t427*t567;
  t795 = -9.e-12*t567;
  t10622 = 1. + t795;
  t12940 = -1.*t291*t10622*t12533;
  t13054 = -3.e-6*t12943*t13051;
  t13055 = t690 + t12940 + t13054;
  t14399 = -1.*t13056;
  t15171 = t13073 + t14408;
  t16961 = 9.e-12*t13061;
  t14417 = t13059 + t14408;
  t24361 = 1. + t14399;
  t24384 = -3.e-6*t24361;
  t24397 = t24384 + t14408;
  t24263 = -3.e-6*t291*t427*t567;
  t24272 = -1.*t291*t450*t12533;
  t24320 = t24263 + t24272;
  t24366 = -1.*t13061;
  t24451 = -1.*t291*t427*t10622;
  t24623 = t24451 + t14302;
  t25236 = 3.e-6*t24361;
  t25180 = -3.e-6*t291*t427*t13051;
  t25181 = t291*t12533*t13051;
  t25212 = t25180 + t25181;
  t25239 = t25236 + t14408;
  t24321 = 9.e-13*var1[8];
  t24802 = t24384 + t13062;
  t24364 = -9.e-12*t24361;
  t25145 = -1.000000000009*t24361;
  t25152 = 1. + t25145;
  t25335 = t25236 + t13062;
  t25223 = 9.e-12*t24361;
  t24362 = 0.2000000000018*t24361;
  t24369 = t24364 + t24366;
  t24371 = 0.1*t24369;
  t24399 = -9.e-7*t24397;
  t24403 = t24321 + t24362 + t24371 + t24399;
  t24706 = 3.e-7*var1[8];
  t24760 = -1.62e-17*t24361;
  t24803 = 0.2*t24802;
  t25077 = 0.1*t24397;
  t25091 = t24706 + t24760 + t24803 + t25077;
  t26728 = -1.*t427*t450*t12943;
  t27403 = 3.e-6*t567*t12943*t12533;
  t27453 = t291*t13051;
  t27555 = t26728 + t27403 + t27453;
  t25224 = t25223 + t24366;
  t27673 = -3.e-6*t427*t567*t12943;
  t27676 = t10622*t12943*t12533;
  t27677 = -3.e-6*t291*t13051;
  t27678 = t27673 + t27676 + t27677;
  t25277 = -1.8e-11*t24361;
  t25292 = 1. + t25277;
  t27806 = t291*t13102;
  t28281 = t427*t12943*t13051;
  t28737 = 3.e-6*t12943*t12533*t13051;
  t28830 = t27806 + t28281 + t28737;
  t25400 = 0.1000000000009*t24361;
  t25410 = -9.e-7*t24802;
  t25415 = t24364 + t13061;
  t25419 = 0.2*t25415;
  t25422 = t24321 + t25400 + t25410 + t25419;
  t25582 = t25223 + t13061;
  t29158 = -3.e-6*t450*t12943;
  t29179 = 3.e-6*t291*t427*t13051;
  t29185 = 9.e-12*t291*t12533*t13051;
  t29195 = t29158 + t29179 + t29185;
  t29136 = t450*t12943;
  t29137 = t29136 + t13107 + t13195;
  t29199 = -1.*t291*t427*t450;
  t29201 = -3.e-6*t291*t450*t12533;
  t29202 = -1.000000000009*t12943*t13051;
  t29203 = t29199 + t29201 + t29202;
  t29267 = Cos(var1[3]);
  t29250 = Sin(var1[3]);
  t13064 = 0.2*t13063;
  t13076 = 0.1*t13074;
  t13078 = -1.62e-17*t13061;
  t13081 = 3.e-7 + t13064 + t13076 + t13078;
  t29251 = t427*t29250*t12943;
  t29268 = t29267*t12533;
  t29288 = t29251 + t29268;
  t29290 = t29267*t427;
  t29291 = -1.*t29250*t12943*t12533;
  t29292 = t29290 + t29291;
  t13581 = -9.e-7*t13063;
  t14190 = t13056 + t13900;
  t14197 = 0.2*t14190;
  t14201 = 0.1000000000009*t13061;
  t14205 = 9.e-13 + t13581 + t14197 + t14201;
  t14395 = -9.e-7*t13074;
  t14403 = t14399 + t13900;
  t14404 = 0.1*t14403;
  t14405 = 0.2000000000018*t13061;
  t14406 = 9.e-13 + t14395 + t14404 + t14405;
  t29297 = -1.*t291*t13102*t29250;
  t29298 = -1.*t29288*t13051;
  t29299 = 3.e-6*t29292*t13051;
  t29300 = t29297 + t29298 + t29299;
  t16998 = t14399 + t16961;
  t29289 = 3.e-6*t567*t29288;
  t29293 = t10622*t29292;
  t29294 = 3.e-6*t291*t29250*t13051;
  t29295 = t29289 + t29293 + t29294;
  t29310 = t450*t29288;
  t29311 = 3.e-6*t567*t29292;
  t29316 = -1.*t291*t29250*t13051;
  t29317 = t29310 + t29311 + t29316;
  t17209 = t13056 + t16961;
  t29347 = -1.*t427*t29250*t12943;
  t29351 = -1.*t29267*t12533;
  t29352 = t29347 + t29351;
  t29355 = 3.e-6*t567*t29352;
  t29356 = t450*t29292;
  t29357 = t29355 + t29356;
  t29359 = t10622*t29352;
  t29360 = t29359 + t29311;
  t29363 = 3.e-6*t29352*t13051;
  t29364 = -1.*t29292*t13051;
  t29365 = t29363 + t29364;
  t29400 = t29267*t427*t12943;
  t29401 = -1.*t29250*t12533;
  t29403 = t29400 + t29401;
  t29405 = -1.*t427*t29250;
  t29406 = -1.*t29267*t12943*t12533;
  t29412 = t29405 + t29406;
  t29420 = t450*t29403;
  t29421 = 3.e-6*t567*t29412;
  t29422 = -1.*t29267*t291*t13051;
  t29423 = t29420 + t29421 + t29422;
  t29425 = 3.e-6*t567*t29403;
  t29426 = t10622*t29412;
  t29427 = 3.e-6*t29267*t291*t13051;
  t29428 = t29425 + t29426 + t29427;
  t29431 = -1.*t29267*t291*t13102;
  t29432 = -1.*t29403*t13051;
  t29433 = 3.e-6*t29412*t13051;
  t29434 = t29431 + t29432 + t29433;
  t29469 = t291*t427*t450*t29250;
  t29470 = -3.e-6*t291*t567*t29250*t12533;
  t29471 = t29250*t12943*t13051;
  t29472 = t29469 + t29470 + t29471;
  t29474 = 3.e-6*t291*t427*t567*t29250;
  t29475 = -1.*t291*t10622*t29250*t12533;
  t29476 = -3.e-6*t29250*t12943*t13051;
  t29477 = t29474 + t29475 + t29476;
  t29480 = t13102*t29250*t12943;
  t29481 = -1.*t291*t427*t29250*t13051;
  t29482 = -3.e-6*t291*t29250*t12533*t13051;
  t29483 = t29480 + t29481 + t29482;
  t29507 = 3.e-6*t291*t450*t29250;
  t29508 = 3.e-6*t29288*t13051;
  t29509 = -9.e-12*t29292*t13051;
  t29510 = t29507 + t29508 + t29509;
  t29504 = -1.*t291*t450*t29250;
  t29505 = t29504 + t29298 + t29299;
  t29515 = -1.*t450*t29288;
  t29516 = 3.e-6*t450*t29292;
  t29517 = 1.000000000009*t291*t29250*t13051;
  t29519 = t29515 + t29516 + t29517;
  t29537 = -1.*t29267*t427*t12943;
  t29538 = t29250*t12533;
  t29539 = t29537 + t29538;
  t29541 = t427*t29250;
  t29542 = t29267*t12943*t12533;
  t29543 = t29541 + t29542;
  t29553 = t450*t29539;
  t29554 = 3.e-6*t567*t29543;
  t29555 = t29267*t291*t13051;
  t29556 = t29553 + t29554 + t29555;
  t29548 = t29267*t291*t13102;
  t29549 = -1.*t29539*t13051;
  t29550 = 3.e-6*t29543*t13051;
  t29551 = t29548 + t29549 + t29550;
  t29540 = 3.e-6*t567*t29539;
  t29544 = t10622*t29543;
  t29545 = -3.e-6*t29267*t291*t13051;
  t29546 = t29540 + t29544 + t29545;
  t29577 = t450*t29543;
  t29578 = t29425 + t29577;
  t29580 = t10622*t29403;
  t29581 = t29580 + t29554;
  t29584 = 3.e-6*t29403*t13051;
  t29585 = -1.*t29543*t13051;
  t29586 = t29584 + t29585;
  t29631 = -1.*t29267*t291*t427*t450;
  t29632 = 3.e-6*t29267*t291*t567*t12533;
  t29633 = -1.*t29267*t12943*t13051;
  t29634 = t29631 + t29632 + t29633;
  t29636 = -3.e-6*t29267*t291*t427*t567;
  t29637 = t29267*t291*t10622*t12533;
  t29638 = 3.e-6*t29267*t12943*t13051;
  t29639 = t29636 + t29637 + t29638;
  t29642 = -1.*t29267*t13102*t12943;
  t29643 = t29267*t291*t427*t13051;
  t29644 = 3.e-6*t29267*t291*t12533*t13051;
  t29645 = t29642 + t29643 + t29644;
  t29669 = -3.e-6*t29267*t291*t450;
  t29670 = 3.e-6*t29539*t13051;
  t29671 = -9.e-12*t29543*t13051;
  t29672 = t29669 + t29670 + t29671;
  t29666 = t29267*t291*t450;
  t29667 = t29666 + t29549 + t29550;
  t29676 = -1.*t450*t29539;
  t29677 = 3.e-6*t450*t29543;
  t29678 = -1.000000000009*t29267*t291*t13051;
  t29679 = t29676 + t29677 + t29678;
  p_output1[0]=var2[0] + (t24403*t27555 + t25091*t27678 + t25422*t28830 - 0.3*(t25582*t27555 + t25335*t27678 + t25152*t28830) + 0.2*(t25152*t27555 + t25239*t27678 + t25224*t28830) + 0.100001*(t25335*t27555 + t25292*t27678 + t25239*t28830) - 0.2000000000018*t13051*t291 - 6.000000000054e-7*t12533*t12943*t567 - 0.2000000000018*t12943*t427*t567)*var2[4] + (t24320*t24403 + t24623*t25091 + 0.2*(t24320*t25152 + t25212*t25224 + t24623*t25239) + 0.100001*(t25212*t25239 + t24623*t25292 + t24320*t25335) + t25212*t25422 - 0.3*(t25152*t25212 + t24623*t25335 + t24320*t25582) - 0.2000000000018*t12533*t291*t567 + 6.000000000054e-7*t291*t427*t567)*var2[5] + (6.000000000054e-7*t12533*t13051*t291 + t24403*t29137 + t25091*t29195 + t25422*t29203 - 0.3*(t25582*t29137 + t25335*t29195 + t25152*t29203) + 0.2*(t25152*t29137 + t25239*t29195 + t25224*t29203) + 0.100001*(t25335*t29137 + t25292*t29195 + t25239*t29203) + 0.2000000000018*t13051*t291*t427 - 0.2000000000018*t12943*t450)*var2[6] + (t13055*t13081 + t13246*t14205 + t14312*t14406 + 0.100001*(-1.8e-11*t13055*t13061 + t14312*t14417 + t13246*t15171) + 0.2*(-1.000000000009*t13061*t14312 + t13055*t15171 + t13246*t16998) - 0.3*(-1.000000000009*t13061*t13246 + t13055*t14417 + t14312*t17209))*var2[8];
  p_output1[1]=var2[1] + (0.2000000000018*t13051*t291*t29267 + t24403*t29423 + t25091*t29428 + t25422*t29434 - 0.3*(t25582*t29423 + t25335*t29428 + t25152*t29434) + 0.2*(t25152*t29423 + t25239*t29428 + t25224*t29434) + 0.100001*(t25335*t29423 + t25292*t29428 + t25239*t29434) + 0.2000000000018*t29403*t567 - 6.000000000054e-7*t29412*t567)*var2[3] + (-0.2000000000018*t12943*t13051*t29250 + t24403*t29472 + t25091*t29477 + t25422*t29483 - 0.3*(t25582*t29472 + t25335*t29477 + t25152*t29483) + 0.2*(t25152*t29472 + t25239*t29477 + t25224*t29483) + 0.100001*(t25335*t29472 + t25292*t29477 + t25239*t29483) + 6.000000000054e-7*t12533*t291*t29250*t567 + 0.2000000000018*t291*t29250*t427*t567)*var2[4] + (t24403*t29357 + t25091*t29360 + t25422*t29365 - 0.3*(t25582*t29357 + t25335*t29360 + t25152*t29365) + 0.2*(t25152*t29357 + t25239*t29360 + t25224*t29365) + 0.100001*(t25335*t29357 + t25292*t29360 + t25239*t29365) + 0.2000000000018*t29292*t567 - 6.000000000054e-7*t29352*t567)*var2[5] + (0.2000000000018*t13051*t29288 - 6.000000000054e-7*t13051*t29292 + t24403*t29505 + t25091*t29510 + t25422*t29519 - 0.3*(t25582*t29505 + t25335*t29510 + t25152*t29519) + 0.2*(t25152*t29505 + t25239*t29510 + t25224*t29519) + 0.100001*(t25335*t29505 + t25292*t29510 + t25239*t29519) + 0.2000000000018*t291*t29250*t450)*var2[6] + (t13081*t29295 + t14205*t29300 + t14406*t29317 + 0.2*(t15171*t29295 + t16998*t29300 - 1.000000000009*t13061*t29317) + 0.100001*(-1.8e-11*t13061*t29295 + t15171*t29300 + t14417*t29317) - 0.3*(t14417*t29295 - 1.000000000009*t13061*t29300 + t17209*t29317))*var2[8];
  p_output1[2]=var2[2] + (0.2000000000018*t13051*t291*t29250 + t25091*t29295 + t25422*t29300 + t24403*t29317 + 0.2*(t25239*t29295 + t25224*t29300 + t25152*t29317) + 0.100001*(t25292*t29295 + t25239*t29300 + t25335*t29317) - 0.3*(t25335*t29295 + t25152*t29300 + t25582*t29317) + 0.2000000000018*t29288*t567 - 6.000000000054e-7*t29292*t567)*var2[3] + (0.2000000000018*t12943*t13051*t29267 + t24403*t29634 + t25091*t29639 + t25422*t29645 - 0.3*(t25582*t29634 + t25335*t29639 + t25152*t29645) + 0.2*(t25152*t29634 + t25239*t29639 + t25224*t29645) + 0.100001*(t25335*t29634 + t25292*t29639 + t25239*t29645) - 6.000000000054e-7*t12533*t291*t29267*t567 - 0.2000000000018*t291*t29267*t427*t567)*var2[4] + (t24403*t29578 + t25091*t29581 + t25422*t29586 - 0.3*(t25582*t29578 + t25335*t29581 + t25152*t29586) + 0.2*(t25152*t29578 + t25239*t29581 + t25224*t29586) + 0.100001*(t25335*t29578 + t25292*t29581 + t25239*t29586) - 6.000000000054e-7*t29403*t567 + 0.2000000000018*t29543*t567)*var2[5] + (0.2000000000018*t13051*t29539 - 6.000000000054e-7*t13051*t29543 + t24403*t29667 + t25091*t29672 + t25422*t29679 - 0.3*(t25582*t29667 + t25335*t29672 + t25152*t29679) + 0.2*(t25152*t29667 + t25239*t29672 + t25224*t29679) + 0.100001*(t25335*t29667 + t25292*t29672 + t25239*t29679) - 0.2000000000018*t291*t29267*t450)*var2[6] + (t13081*t29546 + t14205*t29551 + t14406*t29556 + 0.2*(t15171*t29546 + t16998*t29551 - 1.000000000009*t13061*t29556) + 0.100001*(-1.8e-11*t13061*t29546 + t15171*t29551 + t14417*t29556) - 0.3*(t14417*t29546 - 1.000000000009*t13061*t29551 + t17209*t29556))*var2[8];
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
