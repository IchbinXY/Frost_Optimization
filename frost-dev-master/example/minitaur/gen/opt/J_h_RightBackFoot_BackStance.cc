/*
 * Automatically Generated from Mathematica.
 * Wed 29 May 2019 15:12:36 GMT-04:00
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
  double t341;
  double t556;
  double t645;
  double t780;
  double t835;
  double t846;
  double t847;
  double t910;
  double t1233;
  double t179;
  double t300;
  double t775;
  double t823;
  double t1622;
  double t3641;
  double t9619;
  double t1258;
  double t1265;
  double t9897;
  double t9532;
  double t9606;
  double t9607;
  double t9609;
  double t9610;
  double t9615;
  double t10150;
  double t10151;
  double t10226;
  double t10230;
  double t10793;
  double t10925;
  double t10935;
  double t11069;
  double t11083;
  double t11091;
  double t11097;
  double t11126;
  double t11172;
  double t11101;
  double t10100;
  double t11099;
  double t11293;
  double t725;
  double t758;
  double t764;
  double t774;
  double t833;
  double t904;
  double t1286;
  double t8217;
  double t8287;
  double t9718;
  double t10106;
  double t10141;
  double t10146;
  double t10147;
  double t10407;
  double t10470;
  double t10482;
  double t10581;
  double t10613;
  double t11393;
  double t11405;
  double t11411;
  double t11118;
  double t11418;
  double t11429;
  double t11430;
  double t11498;
  double t11500;
  double t11521;
  double t11304;
  double t11316;
  double t11322;
  double t12007;
  double t12018;
  double t12067;
  double t12069;
  double t12078;
  double t12084;
  double t12085;
  double t12086;
  double t12117;
  double t12120;
  double t12122;
  double t12123;
  double t12290;
  double t12291;
  double t12275;
  double t12282;
  double t12350;
  double t12311;
  double t12314;
  double t12315;
  double t12318;
  double t12376;
  double t12381;
  double t12386;
  double t12425;
  double t12426;
  double t12429;
  double t12439;
  double t12433;
  double t12473;
  double t12493;
  double t12492;
  double t12494;
  double t12498;
  double t12502;
  double t12503;
  double t12505;
  double t12528;
  double t12536;
  double t12537;
  double t12538;
  double t12540;
  double t12543;
  double t12544;
  double t12545;
  double t12553;
  double t12558;
  double t12560;
  double t12561;
  double t12600;
  double t12610;
  double t12616;
  double t12617;
  double t12620;
  double t12622;
  double t12623;
  double t12624;
  double t12628;
  double t12629;
  double t12630;
  double t12631;
  double t12695;
  double t12698;
  double t12704;
  double t12713;
  double t12714;
  double t12719;
  double t12722;
  double t12723;
  double t12724;
  double t12727;
  double t12728;
  double t12729;
  double t12733;
  double t12734;
  double t12735;
  double t12758;
  double t12762;
  double t12763;
  double t12771;
  double t12774;
  double t12781;
  double t12782;
  double t12785;
  double t12786;
  double t12788;
  double t12789;
  double t12794;
  double t12797;
  double t12800;
  double t12810;
  double t12286;
  double t12296;
  double t12308;
  double t12309;
  double t12324;
  double t12356;
  double t12359;
  double t12361;
  double t12363;
  double t12397;
  double t12401;
  double t12405;
  double t12411;
  double t12416;
  double t12839;
  double t12841;
  double t12851;
  double t12852;
  double t12863;
  double t12864;
  double t12873;
  double t12434;
  double t12878;
  double t12879;
  double t12457;
  double t13124;
  double t13127;
  double t13143;
  double t13147;
  double t13153;
  double t13154;
  double t13156;
  double t13158;
  double t13162;
  double t13163;
  double t13164;
  double t13169;
  double t13197;
  double t13202;
  double t13215;
  double t13230;
  double t13231;
  double t13232;
  double t13235;
  double t13236;
  double t13241;
  double t13244;
  double t13252;
  double t13310;
  double t13323;
  double t13343;
  double t13370;
  double t13371;
  double t13372;
  double t13373;
  double t13379;
  double t13389;
  double t13395;
  double t13396;
  double t13400;
  double t13402;
  double t13405;
  double t13407;
  double t13442;
  double t13449;
  double t13450;
  double t13451;
  double t13455;
  double t13458;
  double t13459;
  double t13461;
  double t13467;
  t341 = Cos(var1[19]);
  t556 = -1.*t341;
  t645 = 1. + t556;
  t780 = Sin(var1[4]);
  t835 = Cos(var1[21]);
  t846 = -1.*t835;
  t847 = 1. + t846;
  t910 = -3.e-6*t847;
  t1233 = Sin(var1[21]);
  t179 = Cos(var1[4]);
  t300 = Sin(var1[19]);
  t775 = Cos(var1[5]);
  t823 = Sin(var1[5]);
  t1622 = 3.e-6*t1233;
  t3641 = t910 + t1622;
  t9619 = 3.e-13*var1[21];
  t1258 = -3.e-6*t1233;
  t1265 = t910 + t1258;
  t9897 = -9.e-12*t847;
  t9532 = -3.e-6*t179*t300;
  t9606 = -3.e-6*t645*t775*t780;
  t9607 = -9.e-12*t645;
  t9609 = 1. + t9607;
  t9610 = t9609*t780*t823;
  t9615 = t9532 + t9606 + t9610;
  t10150 = t179*t300;
  t10151 = -1.*t341*t775*t780;
  t10226 = 3.e-6*t645*t780*t823;
  t10230 = t10150 + t10151 + t10226;
  t10793 = -1.000000000009*t645;
  t10925 = 1. + t10793;
  t10935 = t10925*t179;
  t11069 = t775*t300*t780;
  t11083 = 3.e-6*t300*t780*t823;
  t11091 = t10935 + t11069 + t11083;
  t11097 = 3.e-6*t847;
  t11126 = -1.000000000009*t847;
  t11172 = 1. + t11126;
  t11101 = 9.e-12*t847;
  t10100 = -1.*t1233;
  t11099 = t11097 + t1258;
  t11293 = t11097 + t1622;
  t725 = -1.8e-12*t645;
  t758 = -1. + t341;
  t764 = 0.2*t758;
  t774 = t725 + t764;
  t833 = 1.e-7*var1[21];
  t904 = 5.4e-18*t847;
  t1286 = -0.200000000003*t1265;
  t8217 = 0.100000000003*t3641;
  t8287 = t833 + t904 + t1286 + t8217;
  t9718 = -0.2000000000048*t847;
  t10106 = t9897 + t10100;
  t10141 = 0.100000000003*t10106;
  t10146 = 3.e-7*t3641;
  t10147 = t9619 + t9718 + t10141 + t10146;
  t10407 = 0.1000000000039*t847;
  t10470 = 3.e-7*t1265;
  t10482 = t9897 + t1233;
  t10581 = -0.200000000003*t10482;
  t10613 = t9619 + t10407 + t10470 + t10581;
  t11393 = -1.*t9609*t179*t775;
  t11405 = -3.e-6*t645*t179*t823;
  t11411 = t11393 + t11405;
  t11118 = t11101 + t1233;
  t11418 = -3.e-6*t645*t179*t775;
  t11429 = -1.*t341*t179*t823;
  t11430 = t11418 + t11429;
  t11498 = -3.e-6*t179*t775*t300;
  t11500 = t179*t300*t823;
  t11521 = t11498 + t11500;
  t11304 = t11101 + t10100;
  t11316 = -1.8e-11*t847;
  t11322 = 1. + t11316;
  t12007 = -1.*t341*t179*t775;
  t12018 = -1.000000000009*t300*t780;
  t12067 = -3.e-6*t341*t179*t823;
  t12069 = t12007 + t12018 + t12067;
  t12078 = -1.*t179*t775*t300;
  t12084 = t341*t780;
  t12085 = -3.e-6*t179*t300*t823;
  t12086 = t12078 + t12084 + t12085;
  t12117 = 3.e-6*t179*t775*t300;
  t12120 = -3.e-6*t341*t780;
  t12122 = 9.e-12*t179*t300*t823;
  t12123 = t12117 + t12120 + t12122;
  t12290 = 3.e-6*t835;
  t12291 = t12290 + t1258;
  t12275 = -3.e-6*t835;
  t12282 = t12275 + t1258;
  t12350 = -9.e-12*t1233;
  t12311 = 3.e-6*t645*t179*t775;
  t12314 = -3.e-6*t300*t780;
  t12315 = -1.*t9609*t179*t823;
  t12318 = t12311 + t12314 + t12315;
  t12376 = t341*t179*t775;
  t12381 = t300*t780;
  t12386 = t12376 + t12381 + t11405;
  t12425 = t10925*t780;
  t12426 = t12078 + t12425 + t12085;
  t12429 = t12290 + t1622;
  t12439 = t12275 + t1622;
  t12433 = 9.e-12*t1233;
  t12473 = Cos(var1[3]);
  t12493 = Sin(var1[3]);
  t12492 = t12473*t775*t780;
  t12494 = -1.*t12493*t823;
  t12498 = t12492 + t12494;
  t12502 = -1.*t775*t12493;
  t12503 = -1.*t12473*t780*t823;
  t12505 = t12502 + t12503;
  t12528 = 3.e-6*t12473*t179*t300;
  t12536 = 3.e-6*t645*t12498;
  t12537 = t9609*t12505;
  t12538 = t12528 + t12536 + t12537;
  t12540 = -1.*t12473*t179*t300;
  t12543 = t341*t12498;
  t12544 = 3.e-6*t645*t12505;
  t12545 = t12540 + t12543 + t12544;
  t12553 = -1.*t10925*t12473*t179;
  t12558 = -1.*t300*t12498;
  t12560 = 3.e-6*t300*t12505;
  t12561 = t12553 + t12558 + t12560;
  t12600 = 3.e-6*t645*t179*t775*t12493;
  t12610 = -3.e-6*t300*t12493*t780;
  t12616 = -1.*t9609*t179*t12493*t823;
  t12617 = t12600 + t12610 + t12616;
  t12620 = t341*t179*t775*t12493;
  t12622 = t300*t12493*t780;
  t12623 = -3.e-6*t645*t179*t12493*t823;
  t12624 = t12620 + t12622 + t12623;
  t12628 = -1.*t179*t775*t300*t12493;
  t12629 = t10925*t12493*t780;
  t12630 = -3.e-6*t179*t300*t12493*t823;
  t12631 = t12628 + t12629 + t12630;
  t12695 = -1.*t775*t12493*t780;
  t12698 = -1.*t12473*t823;
  t12704 = t12695 + t12698;
  t12713 = t12473*t775;
  t12714 = -1.*t12493*t780*t823;
  t12719 = t12713 + t12714;
  t12722 = t9609*t12704;
  t12723 = 3.e-6*t645*t12719;
  t12724 = t12722 + t12723;
  t12727 = 3.e-6*t645*t12704;
  t12728 = t341*t12719;
  t12729 = t12727 + t12728;
  t12733 = 3.e-6*t300*t12704;
  t12734 = -1.*t300*t12719;
  t12735 = t12733 + t12734;
  t12758 = t775*t12493*t780;
  t12762 = t12473*t823;
  t12763 = t12758 + t12762;
  t12771 = 1.000000000009*t179*t300*t12493;
  t12774 = -1.*t341*t12763;
  t12781 = 3.e-6*t341*t12719;
  t12782 = t12771 + t12774 + t12781;
  t12785 = 3.e-6*t341*t179*t12493;
  t12786 = 3.e-6*t300*t12763;
  t12788 = -9.e-12*t300*t12719;
  t12789 = t12785 + t12786 + t12788;
  t12794 = -1.*t341*t179*t12493;
  t12797 = -1.*t300*t12763;
  t12800 = 3.e-6*t300*t12719;
  t12810 = t12794 + t12797 + t12800;
  t12286 = -0.200000000003*t12282;
  t12296 = 0.100000000003*t12291;
  t12308 = 5.4e-18*t1233;
  t12309 = 1.e-7 + t12286 + t12296 + t12308;
  t12324 = 3.e-7*t12291;
  t12356 = t846 + t12350;
  t12359 = 0.100000000003*t12356;
  t12361 = -0.2000000000048*t1233;
  t12363 = 3.e-13 + t12324 + t12359 + t12361;
  t12397 = 3.e-7*t12282;
  t12401 = t835 + t12350;
  t12405 = -0.200000000003*t12401;
  t12411 = 0.1000000000039*t1233;
  t12416 = 3.e-13 + t12397 + t12405 + t12411;
  t12839 = 3.e-6*t179*t300*t12493;
  t12841 = 3.e-6*t645*t12763;
  t12851 = t9609*t12719;
  t12852 = t12839 + t12841 + t12851;
  t12863 = -1.*t179*t300*t12493;
  t12864 = t341*t12763;
  t12873 = t12863 + t12864 + t12723;
  t12434 = t846 + t12433;
  t12878 = -1.*t10925*t179*t12493;
  t12879 = t12878 + t12797 + t12800;
  t12457 = t835 + t12433;
  t13124 = -3.e-6*t645*t12473*t179*t775;
  t13127 = 3.e-6*t12473*t300*t780;
  t13143 = t9609*t12473*t179*t823;
  t13147 = t13124 + t13127 + t13143;
  t13153 = -1.*t341*t12473*t179*t775;
  t13154 = -1.*t12473*t300*t780;
  t13156 = 3.e-6*t645*t12473*t179*t823;
  t13158 = t13153 + t13154 + t13156;
  t13162 = t12473*t179*t775*t300;
  t13163 = -1.*t10925*t12473*t780;
  t13164 = 3.e-6*t12473*t179*t300*t823;
  t13169 = t13162 + t13163 + t13164;
  t13197 = t775*t12493;
  t13202 = t12473*t780*t823;
  t13215 = t13197 + t13202;
  t13230 = t9609*t12498;
  t13231 = 3.e-6*t645*t13215;
  t13232 = t13230 + t13231;
  t13235 = t341*t13215;
  t13236 = t12536 + t13235;
  t13241 = 3.e-6*t300*t12498;
  t13244 = -1.*t300*t13215;
  t13252 = t13241 + t13244;
  t13310 = -1.*t12473*t775*t780;
  t13323 = t12493*t823;
  t13343 = t13310 + t13323;
  t13370 = -1.000000000009*t12473*t179*t300;
  t13371 = -1.*t341*t13343;
  t13372 = 3.e-6*t341*t13215;
  t13373 = t13370 + t13371 + t13372;
  t13379 = -3.e-6*t341*t12473*t179;
  t13389 = 3.e-6*t300*t13343;
  t13395 = -9.e-12*t300*t13215;
  t13396 = t13379 + t13389 + t13395;
  t13400 = t341*t12473*t179;
  t13402 = -1.*t300*t13343;
  t13405 = 3.e-6*t300*t13215;
  t13407 = t13400 + t13402 + t13405;
  t13442 = -3.e-6*t12473*t179*t300;
  t13449 = 3.e-6*t645*t13343;
  t13450 = t9609*t13215;
  t13451 = t13442 + t13449 + t13450;
  t13455 = t12473*t179*t300;
  t13458 = t341*t13343;
  t13459 = t13455 + t13458 + t13231;
  t13461 = t10925*t12473*t179;
  t13467 = t13461 + t13402 + t13405;
  p_output1[0]=1.;
  p_output1[1]=t10147*t10230 + t10613*t11091 + 0.2000000000018*t179*t300 - 1.*t774*t775*t780 + 6.000000000054e-7*t645*t780*t823 + t8287*t9615 - 0.3*(t10230*t11118 + t11091*t11172 + t11099*t9615) + 0.2*(-1.*t10230*t11172 - 1.*t11091*t11304 - 1.*t11293*t9615) - 0.099999*(t10230*t11099 + t11091*t11293 + t11322*t9615);
  p_output1[2]=t10147*t11430 + t10613*t11521 - 0.3*(t11099*t11411 + t11118*t11430 + t11172*t11521) - 0.099999*(t11322*t11411 + t11099*t11430 + t11293*t11521) + 0.2*(-1.*t11293*t11411 - 1.*t11172*t11430 - 1.*t11304*t11521) - 6.000000000054e-7*t179*t645*t775 - 1.*t179*t774*t823 + t11411*t8287;
  p_output1[3]=t10613*t12069 + t10147*t12086 - 0.3*(t11172*t12069 + t11118*t12086 + t11099*t12123) + 0.2*(-1.*t11304*t12069 - 1.*t11172*t12086 - 1.*t11293*t12123) - 0.099999*(t11293*t12069 + t11099*t12086 + t11322*t12123) - 0.2000000000018*t179*t300*t775 + 0.2000000000018*t341*t780 - 6.000000000054e-7*t179*t300*t823 + t12123*t8287;
  p_output1[4]=t12309*t12318 + t12363*t12386 + t12416*t12426 + 0.2*(1.000000000009*t1233*t12386 - 1.*t12318*t12429 - 1.*t12426*t12434) - 0.099999*(-1.8e-11*t12318*t1233 + t12426*t12429 + t12386*t12439) - 0.3*(-1.000000000009*t1233*t12426 + t12318*t12439 + t12386*t12457);
  p_output1[5]=-1.;
  p_output1[6]=1.;
  p_output1[7]=t10147*t12545 + t10613*t12561 - 0.3*(t11099*t12538 + t11118*t12545 + t11172*t12561) - 0.099999*(t11322*t12538 + t11099*t12545 + t11293*t12561) + 0.2*(-1.*t11293*t12538 - 1.*t11172*t12545 - 1.*t11304*t12561) - 0.2000000000018*t12473*t179*t300 + 6.000000000054e-7*t12505*t645 + t12498*t774 + t12538*t8287;
  p_output1[8]=t10147*t12624 + t10613*t12631 - 0.3*(t11099*t12617 + t11118*t12624 + t11172*t12631) - 0.099999*(t11322*t12617 + t11099*t12624 + t11293*t12631) + 0.2*(-1.*t11293*t12617 - 1.*t11172*t12624 - 1.*t11304*t12631) + t12493*t179*t774*t775 + 0.2000000000018*t12493*t300*t780 - 6.000000000054e-7*t12493*t179*t645*t823 + t12617*t8287;
  p_output1[9]=t10147*t12729 + t10613*t12735 - 0.3*(t11099*t12724 + t11118*t12729 + t11172*t12735) - 0.099999*(t11322*t12724 + t11099*t12729 + t11293*t12735) + 0.2*(-1.*t11293*t12724 - 1.*t11172*t12729 - 1.*t11304*t12735) + 6.000000000054e-7*t12704*t645 + t12719*t774 + t12724*t8287;
  p_output1[10]=t10613*t12782 + t10147*t12810 - 0.099999*(t11293*t12782 + t11322*t12789 + t11099*t12810) - 0.3*(t11172*t12782 + t11099*t12789 + t11118*t12810) + 0.2*(-1.*t11304*t12782 - 1.*t11293*t12789 - 1.*t11172*t12810) + 6.000000000054e-7*t12719*t300 - 0.2000000000018*t12763*t300 - 0.2000000000018*t12493*t179*t341 + t12789*t8287;
  p_output1[11]=t12309*t12852 + t12363*t12873 + t12416*t12879 - 0.3*(t12439*t12852 + t12457*t12873 - 1.000000000009*t1233*t12879) - 0.099999*(-1.8e-11*t1233*t12852 + t12439*t12873 + t12429*t12879) + 0.2*(-1.*t12429*t12852 + 1.000000000009*t1233*t12873 - 1.*t12434*t12879);
  p_output1[12]=-1.;
  p_output1[13]=1.;
  p_output1[14]=t10147*t12873 + t10613*t12879 - 0.3*(t11099*t12852 + t11118*t12873 + t11172*t12879) - 0.099999*(t11322*t12852 + t11099*t12873 + t11293*t12879) + 0.2*(-1.*t11293*t12852 - 1.*t11172*t12873 - 1.*t11304*t12879) - 0.2000000000018*t12493*t179*t300 + 6.000000000054e-7*t12719*t645 + t12763*t774 + t12852*t8287;
  p_output1[15]=t10147*t13158 + t10613*t13169 - 0.3*(t11099*t13147 + t11118*t13158 + t11172*t13169) - 0.099999*(t11322*t13147 + t11099*t13158 + t11293*t13169) + 0.2*(-1.*t11293*t13147 - 1.*t11172*t13158 - 1.*t11304*t13169) - 1.*t12473*t179*t774*t775 - 0.2000000000018*t12473*t300*t780 + 6.000000000054e-7*t12473*t179*t645*t823 + t13147*t8287;
  p_output1[16]=t10147*t13236 + t10613*t13252 - 0.3*(t11099*t13232 + t11118*t13236 + t11172*t13252) - 0.099999*(t11322*t13232 + t11099*t13236 + t11293*t13252) + 0.2*(-1.*t11293*t13232 - 1.*t11172*t13236 - 1.*t11304*t13252) + 6.000000000054e-7*t12498*t645 + t13215*t774 + t13232*t8287;
  p_output1[17]=t10613*t13373 + t10147*t13407 - 0.099999*(t11293*t13373 + t11322*t13396 + t11099*t13407) - 0.3*(t11172*t13373 + t11099*t13396 + t11118*t13407) + 0.2*(-1.*t11304*t13373 - 1.*t11293*t13396 - 1.*t11172*t13407) + 6.000000000054e-7*t13215*t300 - 0.2000000000018*t13343*t300 + 0.2000000000018*t12473*t179*t341 + t13396*t8287;
  p_output1[18]=t12309*t13451 + t12363*t13459 + t12416*t13467 - 0.3*(t12439*t13451 + t12457*t13459 - 1.000000000009*t1233*t13467) - 0.099999*(-1.8e-11*t1233*t13451 + t12439*t13459 + t12429*t13467) + 0.2*(-1.*t12429*t13451 + 1.000000000009*t1233*t13459 - 1.*t12434*t13467);
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
