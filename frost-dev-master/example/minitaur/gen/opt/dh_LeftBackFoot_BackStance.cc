/*
 * Automatically Generated from Mathematica.
 * Wed 29 May 2019 15:13:05 GMT-04:00
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
  double t94;
  double t212;
  double t238;
  double t492;
  double t527;
  double t533;
  double t534;
  double t276;
  double t281;
  double t554;
  double t776;
  double t9661;
  double t10358;
  double t125;
  double t250;
  double t12634;
  double t565;
  double t10142;
  double t10326;
  double t10328;
  double t10491;
  double t12092;
  double t15873;
  double t16019;
  double t16020;
  double t17061;
  double t12150;
  double t17989;
  double t18025;
  double t18026;
  double t21050;
  double t21052;
  double t21402;
  double t22571;
  double t22725;
  double t28078;
  double t27585;
  double t29658;
  double t29319;
  double t30104;
  double t29897;
  double t29898;
  double t30444;
  double t30359;
  double t30363;
  double t30412;
  double t30414;
  double t30684;
  double t30448;
  double t30449;
  double t30677;
  double t30678;
  double t30679;
  double t30681;
  double t30694;
  double t33930;
  double t30419;
  double t30711;
  double t30716;
  double t30685;
  double t30641;
  double t30659;
  double t30670;
  double t30672;
  double t30673;
  double t30418;
  double t30420;
  double t30421;
  double t30445;
  double t30446;
  double t29861;
  double t29980;
  double t30204;
  double t30272;
  double t30274;
  double t35149;
  double t35539;
  double t33936;
  double t36350;
  double t36380;
  double t36381;
  double t36448;
  double t36459;
  double t36495;
  double t33945;
  double t30699;
  double t30700;
  double t33992;
  double t34306;
  double t34628;
  double t34746;
  double t37180;
  double t37191;
  double t37205;
  double t37206;
  double t37208;
  double t37209;
  double t37210;
  double t37212;
  double t37215;
  double t37255;
  double t37265;
  double t37743;
  double t38164;
  double t38173;
  double t38175;
  double t38176;
  double t38177;
  double t38239;
  double t38241;
  double t38242;
  double t38247;
  double t38258;
  double t38259;
  double t38261;
  double t38262;
  double t38381;
  double t38386;
  double t38387;
  double t38388;
  double t38391;
  double t38405;
  double t38556;
  double t38669;
  double t38671;
  double t38804;
  double t38947;
  double t39015;
  double t39036;
  double t39037;
  double t39039;
  double t39042;
  double t39044;
  double t39045;
  double t39047;
  double t39420;
  double t39500;
  double t39501;
  double t39506;
  double t39536;
  double t39537;
  double t39541;
  double t39542;
  double t39544;
  double t39568;
  double t39569;
  double t39581;
  double t39588;
  double t39594;
  double t39599;
  double t262;
  double t286;
  double t293;
  double t322;
  double t12139;
  double t13448;
  double t13635;
  double t15170;
  double t15171;
  double t39711;
  double t39712;
  double t39714;
  double t17387;
  double t17739;
  double t17790;
  double t17792;
  double t17952;
  double t39710;
  double t39715;
  double t39718;
  double t39720;
  double t39722;
  double t39723;
  double t39724;
  double t27586;
  double t39726;
  double t39727;
  double t39728;
  double t39729;
  double t29225;
  double t39755;
  double t39756;
  double t39758;
  double t39759;
  double t39762;
  double t39763;
  double t39765;
  double t39766;
  double t39768;
  double t39770;
  double t39799;
  double t39800;
  double t39801;
  double t39803;
  double t39805;
  double t39806;
  double t39807;
  double t39808;
  double t39810;
  double t39811;
  double t39812;
  double t39814;
  double t39838;
  double t39839;
  double t39840;
  double t39843;
  double t39844;
  double t39845;
  double t39847;
  double t39848;
  double t39850;
  double t39851;
  double t39852;
  double t39875;
  double t39876;
  double t39877;
  double t39874;
  double t39878;
  double t39879;
  double t39880;
  double t39883;
  double t39884;
  double t39885;
  double t39888;
  double t39889;
  double t39890;
  double t39891;
  double t39917;
  double t39918;
  double t39919;
  double t39920;
  double t39922;
  double t39923;
  double t39924;
  double t39926;
  double t39928;
  double t39929;
  t94 = Cos(var1[12]);
  t212 = Sin(var1[12]);
  t238 = -3.e-6*t212;
  t492 = Cos(var1[10]);
  t527 = -1.*t492;
  t533 = 1. + t527;
  t534 = Cos(var1[4]);
  t276 = 3.e-6*t94;
  t281 = t276 + t238;
  t554 = Cos(var1[5]);
  t776 = Sin(var1[10]);
  t9661 = Sin(var1[4]);
  t10358 = Sin(var1[5]);
  t125 = -3.e-6*t94;
  t250 = t125 + t238;
  t12634 = -9.e-12*t212;
  t565 = 3.e-6*t533*t534*t554;
  t10142 = -3.e-6*t776*t9661;
  t10326 = -9.e-12*t533;
  t10328 = 1. + t10326;
  t10491 = -1.*t10328*t534*t10358;
  t12092 = t565 + t10142 + t10491;
  t15873 = t492*t534*t554;
  t16019 = t776*t9661;
  t16020 = -3.e-6*t533*t534*t10358;
  t17061 = t15873 + t16019 + t16020;
  t12150 = -1.*t94;
  t17989 = -1.*t534*t554*t776;
  t18025 = -1.000000000009*t533;
  t18026 = 1. + t18025;
  t21050 = t18026*t9661;
  t21052 = -3.e-6*t534*t776*t10358;
  t21402 = t17989 + t21050 + t21052;
  t22571 = 3.e-6*t212;
  t22725 = t276 + t22571;
  t28078 = t125 + t22571;
  t27585 = 9.e-12*t212;
  t29658 = 1. + t12150;
  t29319 = 3.e-13*var1[12];
  t30104 = -9.e-12*t29658;
  t29897 = -3.e-6*t29658;
  t29898 = t29897 + t238;
  t30444 = t29897 + t22571;
  t30359 = -1.*t492*t534*t554;
  t30363 = -1.000000000009*t776*t9661;
  t30412 = -3.e-6*t492*t534*t10358;
  t30414 = t30359 + t30363 + t30412;
  t30684 = 3.e-6*t29658;
  t30448 = t492*t9661;
  t30449 = t17989 + t30448 + t21052;
  t30677 = 3.e-6*t534*t554*t776;
  t30678 = -3.e-6*t492*t9661;
  t30679 = 9.e-12*t534*t776*t10358;
  t30681 = t30677 + t30678 + t30679;
  t30694 = t30684 + t238;
  t33930 = 9.e-12*t29658;
  t30419 = -1.*t212;
  t30711 = -1.000000000009*t29658;
  t30716 = 1. + t30711;
  t30685 = t30684 + t22571;
  t30641 = 1.e-7*var1[12];
  t30659 = 5.4e-18*t29658;
  t30670 = -0.200000000003*t29898;
  t30672 = 0.100000000003*t30444;
  t30673 = t30641 + t30659 + t30670 + t30672;
  t30418 = -0.2000000000048*t29658;
  t30420 = t30104 + t30419;
  t30421 = 0.100000000003*t30420;
  t30445 = 3.e-7*t30444;
  t30446 = t29319 + t30418 + t30421 + t30445;
  t29861 = 0.1000000000039*t29658;
  t29980 = 3.e-7*t29898;
  t30204 = t30104 + t212;
  t30272 = -0.200000000003*t30204;
  t30274 = t29319 + t29861 + t29980 + t30272;
  t35149 = -1.*t10328*t534*t554;
  t35539 = t35149 + t16020;
  t33936 = t33930 + t212;
  t36350 = -3.e-6*t533*t534*t554;
  t36380 = -1.*t492*t534*t10358;
  t36381 = t36350 + t36380;
  t36448 = -3.e-6*t534*t554*t776;
  t36459 = t534*t776*t10358;
  t36495 = t36448 + t36459;
  t33945 = t33930 + t30419;
  t30699 = -1.8e-11*t29658;
  t30700 = 1. + t30699;
  t33992 = -1.8e-12*t533;
  t34306 = -1. + t492;
  t34628 = 0.2*t34306;
  t34746 = t33992 + t34628;
  t37180 = -3.e-6*t534*t776;
  t37191 = -3.e-6*t533*t554*t9661;
  t37205 = t10328*t9661*t10358;
  t37206 = t37180 + t37191 + t37205;
  t37208 = t534*t776;
  t37209 = -1.*t492*t554*t9661;
  t37210 = 3.e-6*t533*t9661*t10358;
  t37212 = t37208 + t37209 + t37210;
  t37215 = t18026*t534;
  t37255 = t554*t776*t9661;
  t37265 = 3.e-6*t776*t9661*t10358;
  t37743 = t37215 + t37255 + t37265;
  t38164 = Sin(var1[3]);
  t38173 = 3.e-6*t533*t534*t554*t38164;
  t38175 = -3.e-6*t776*t38164*t9661;
  t38176 = -1.*t10328*t534*t38164*t10358;
  t38177 = t38173 + t38175 + t38176;
  t38239 = t492*t534*t554*t38164;
  t38241 = t776*t38164*t9661;
  t38242 = -3.e-6*t533*t534*t38164*t10358;
  t38247 = t38239 + t38241 + t38242;
  t38258 = -1.*t534*t554*t776*t38164;
  t38259 = t18026*t38164*t9661;
  t38261 = -3.e-6*t534*t776*t38164*t10358;
  t38262 = t38258 + t38259 + t38261;
  t38381 = Cos(var1[3]);
  t38386 = t38381*t554*t9661;
  t38387 = -1.*t38164*t10358;
  t38388 = t38386 + t38387;
  t38391 = -1.*t554*t38164;
  t38405 = -1.*t38381*t9661*t10358;
  t38556 = t38391 + t38405;
  t38669 = 3.e-6*t38381*t534*t776;
  t38671 = 3.e-6*t533*t38388;
  t38804 = t10328*t38556;
  t38947 = t38669 + t38671 + t38804;
  t39015 = -1.*t38381*t534*t776;
  t39036 = t492*t38388;
  t39037 = 3.e-6*t533*t38556;
  t39039 = t39015 + t39036 + t39037;
  t39042 = -1.*t18026*t38381*t534;
  t39044 = -1.*t776*t38388;
  t39045 = 3.e-6*t776*t38556;
  t39047 = t39042 + t39044 + t39045;
  t39420 = -1.*t554*t38164*t9661;
  t39500 = -1.*t38381*t10358;
  t39501 = t39420 + t39500;
  t39506 = t38381*t554;
  t39536 = -1.*t38164*t9661*t10358;
  t39537 = t39506 + t39536;
  t39541 = t10328*t39501;
  t39542 = 3.e-6*t533*t39537;
  t39544 = t39541 + t39542;
  t39568 = 3.e-6*t533*t39501;
  t39569 = t492*t39537;
  t39581 = t39568 + t39569;
  t39588 = 3.e-6*t776*t39501;
  t39594 = -1.*t776*t39537;
  t39599 = t39588 + t39594;
  t262 = -0.200000000003*t250;
  t286 = 0.100000000003*t281;
  t293 = 5.4e-18*t212;
  t322 = 1.e-7 + t262 + t286 + t293;
  t12139 = 3.e-7*t281;
  t13448 = t12150 + t12634;
  t13635 = 0.100000000003*t13448;
  t15170 = -0.2000000000048*t212;
  t15171 = 3.e-13 + t12139 + t13635 + t15170;
  t39711 = t554*t38164*t9661;
  t39712 = t38381*t10358;
  t39714 = t39711 + t39712;
  t17387 = 3.e-7*t250;
  t17739 = t94 + t12634;
  t17790 = -0.200000000003*t17739;
  t17792 = 0.1000000000039*t212;
  t17952 = 3.e-13 + t17387 + t17790 + t17792;
  t39710 = 3.e-6*t534*t776*t38164;
  t39715 = 3.e-6*t533*t39714;
  t39718 = t10328*t39537;
  t39720 = t39710 + t39715 + t39718;
  t39722 = -1.*t534*t776*t38164;
  t39723 = t492*t39714;
  t39724 = t39722 + t39723 + t39542;
  t27586 = t12150 + t27585;
  t39726 = -1.*t18026*t534*t38164;
  t39727 = -1.*t776*t39714;
  t39728 = 3.e-6*t776*t39537;
  t39729 = t39726 + t39727 + t39728;
  t29225 = t94 + t27585;
  t39755 = 1.000000000009*t534*t776*t38164;
  t39756 = -1.*t492*t39714;
  t39758 = 3.e-6*t492*t39537;
  t39759 = t39755 + t39756 + t39758;
  t39762 = 3.e-6*t492*t534*t38164;
  t39763 = 3.e-6*t776*t39714;
  t39765 = -9.e-12*t776*t39537;
  t39766 = t39762 + t39763 + t39765;
  t39768 = -1.*t492*t534*t38164;
  t39770 = t39768 + t39727 + t39728;
  t39799 = -3.e-6*t533*t38381*t534*t554;
  t39800 = 3.e-6*t38381*t776*t9661;
  t39801 = t10328*t38381*t534*t10358;
  t39803 = t39799 + t39800 + t39801;
  t39805 = -1.*t492*t38381*t534*t554;
  t39806 = -1.*t38381*t776*t9661;
  t39807 = 3.e-6*t533*t38381*t534*t10358;
  t39808 = t39805 + t39806 + t39807;
  t39810 = t38381*t534*t554*t776;
  t39811 = -1.*t18026*t38381*t9661;
  t39812 = 3.e-6*t38381*t534*t776*t10358;
  t39814 = t39810 + t39811 + t39812;
  t39838 = t554*t38164;
  t39839 = t38381*t9661*t10358;
  t39840 = t39838 + t39839;
  t39843 = t10328*t38388;
  t39844 = 3.e-6*t533*t39840;
  t39845 = t39843 + t39844;
  t39847 = t492*t39840;
  t39848 = t38671 + t39847;
  t39850 = 3.e-6*t776*t38388;
  t39851 = -1.*t776*t39840;
  t39852 = t39850 + t39851;
  t39875 = -1.*t38381*t554*t9661;
  t39876 = t38164*t10358;
  t39877 = t39875 + t39876;
  t39874 = -3.e-6*t38381*t534*t776;
  t39878 = 3.e-6*t533*t39877;
  t39879 = t10328*t39840;
  t39880 = t39874 + t39878 + t39879;
  t39883 = t38381*t534*t776;
  t39884 = t492*t39877;
  t39885 = t39883 + t39884 + t39844;
  t39888 = t18026*t38381*t534;
  t39889 = -1.*t776*t39877;
  t39890 = 3.e-6*t776*t39840;
  t39891 = t39888 + t39889 + t39890;
  t39917 = -1.000000000009*t38381*t534*t776;
  t39918 = -1.*t492*t39877;
  t39919 = 3.e-6*t492*t39840;
  t39920 = t39917 + t39918 + t39919;
  t39922 = -3.e-6*t492*t38381*t534;
  t39923 = 3.e-6*t776*t39877;
  t39924 = -9.e-12*t776*t39840;
  t39926 = t39922 + t39923 + t39924;
  t39928 = t492*t38381*t534;
  t39929 = t39928 + t39889 + t39890;
  p_output1[0]=var2[0] + (t30673*t37206 + t30446*t37212 + t30274*t37743 + 0.100001*(t30700*t37206 + t30694*t37212 + t30685*t37743) - 0.3*(t30694*t37206 + t33936*t37212 + t30716*t37743) + 0.2*(-1.*t30685*t37206 - 1.*t30716*t37212 - 1.*t33945*t37743) + 0.2000000000018*t534*t776 + 6.000000000054e-7*t10358*t533*t9661 - 1.*t34746*t554*t9661)*var2[4] + (t30673*t35539 + t30446*t36381 + t30274*t36495 + 0.100001*(t30700*t35539 + t30694*t36381 + t30685*t36495) - 0.3*(t30694*t35539 + t33936*t36381 + t30716*t36495) + 0.2*(-1.*t30685*t35539 - 1.*t30716*t36381 - 1.*t33945*t36495) - 1.*t10358*t34746*t534 - 6.000000000054e-7*t533*t534*t554)*var2[5] + (t30274*t30414 + t30446*t30449 + t30673*t30681 + 0.100001*(t30414*t30685 + t30449*t30694 + t30681*t30700) - 0.3*(t30681*t30694 + t30414*t30716 + t30449*t33936) + 0.2*(-1.*t30681*t30685 - 1.*t30449*t30716 - 1.*t30414*t33945) - 6.000000000054e-7*t10358*t534*t776 - 0.2000000000018*t534*t554*t776 + 0.2000000000018*t492*t9661)*var2[10] + (t15171*t17061 + t17952*t21402 + 0.2*(1.000000000009*t17061*t212 - 1.*t12092*t22725 - 1.*t21402*t27586) + 0.100001*(-1.8e-11*t12092*t212 + t21402*t22725 + t17061*t28078) - 0.3*(-1.000000000009*t212*t21402 + t12092*t28078 + t17061*t29225) + t12092*t322)*var2[12];
  p_output1[1]=var2[1] + (t34746*t38388 + t30673*t38947 + t30446*t39039 + t30274*t39047 + 0.100001*(t30700*t38947 + t30694*t39039 + t30685*t39047) - 0.3*(t30694*t38947 + t33936*t39039 + t30716*t39047) + 0.2*(-1.*t30685*t38947 - 1.*t30716*t39039 - 1.*t33945*t39047) + 6.000000000054e-7*t38556*t533 - 0.2000000000018*t38381*t534*t776)*var2[3] + (t30673*t38177 + t30446*t38247 + t30274*t38262 + 0.100001*(t30700*t38177 + t30694*t38247 + t30685*t38262) - 0.3*(t30694*t38177 + t33936*t38247 + t30716*t38262) + 0.2*(-1.*t30685*t38177 - 1.*t30716*t38247 - 1.*t33945*t38262) - 6.000000000054e-7*t10358*t38164*t533*t534 + t34746*t38164*t534*t554 + 0.2000000000018*t38164*t776*t9661)*var2[4] + (t34746*t39537 + t30673*t39544 + t30446*t39581 + t30274*t39599 + 0.100001*(t30700*t39544 + t30694*t39581 + t30685*t39599) - 0.3*(t30694*t39544 + t33936*t39581 + t30716*t39599) + 0.2*(-1.*t30685*t39544 - 1.*t30716*t39581 - 1.*t33945*t39599) + 6.000000000054e-7*t39501*t533)*var2[5] + (t30274*t39759 + t30673*t39766 + t30446*t39770 + 0.100001*(t30685*t39759 + t30700*t39766 + t30694*t39770) + 0.2*(-1.*t33945*t39759 - 1.*t30685*t39766 - 1.*t30716*t39770) - 0.3*(t30716*t39759 + t30694*t39766 + t33936*t39770) - 0.2000000000018*t38164*t492*t534 + 6.000000000054e-7*t39537*t776 - 0.2000000000018*t39714*t776)*var2[10] + (t322*t39720 + t15171*t39724 + t17952*t39729 - 0.3*(t28078*t39720 + t29225*t39724 - 1.000000000009*t212*t39729) + 0.100001*(-1.8e-11*t212*t39720 + t28078*t39724 + t22725*t39729) + 0.2*(-1.*t22725*t39720 + 1.000000000009*t212*t39724 - 1.*t27586*t39729))*var2[12];
  p_output1[2]=var2[2] + (t34746*t39714 + t30673*t39720 + t30446*t39724 + t30274*t39729 + 0.100001*(t30700*t39720 + t30694*t39724 + t30685*t39729) - 0.3*(t30694*t39720 + t33936*t39724 + t30716*t39729) + 0.2*(-1.*t30685*t39720 - 1.*t30716*t39724 - 1.*t33945*t39729) + 6.000000000054e-7*t39537*t533 - 0.2000000000018*t38164*t534*t776)*var2[3] + (t30673*t39803 + t30446*t39808 + t30274*t39814 + 0.100001*(t30700*t39803 + t30694*t39808 + t30685*t39814) - 0.3*(t30694*t39803 + t33936*t39808 + t30716*t39814) + 0.2*(-1.*t30685*t39803 - 1.*t30716*t39808 - 1.*t33945*t39814) + 6.000000000054e-7*t10358*t38381*t533*t534 - 1.*t34746*t38381*t534*t554 - 0.2000000000018*t38381*t776*t9661)*var2[4] + (t34746*t39840 + t30673*t39845 + t30446*t39848 + t30274*t39852 + 0.100001*(t30700*t39845 + t30694*t39848 + t30685*t39852) - 0.3*(t30694*t39845 + t33936*t39848 + t30716*t39852) + 0.2*(-1.*t30685*t39845 - 1.*t30716*t39848 - 1.*t33945*t39852) + 6.000000000054e-7*t38388*t533)*var2[5] + (t30274*t39920 + t30673*t39926 + t30446*t39929 + 0.100001*(t30685*t39920 + t30700*t39926 + t30694*t39929) + 0.2*(-1.*t33945*t39920 - 1.*t30685*t39926 - 1.*t30716*t39929) - 0.3*(t30716*t39920 + t30694*t39926 + t33936*t39929) + 0.2000000000018*t38381*t492*t534 + 6.000000000054e-7*t39840*t776 - 0.2000000000018*t39877*t776)*var2[10] + (t322*t39880 + t15171*t39885 + t17952*t39891 - 0.3*(t28078*t39880 + t29225*t39885 - 1.000000000009*t212*t39891) + 0.100001*(-1.8e-11*t212*t39880 + t28078*t39885 + t22725*t39891) + 0.2*(-1.*t22725*t39880 + 1.000000000009*t212*t39885 - 1.*t27586*t39891))*var2[12];
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

#include "dh_LeftBackFoot_BackStance.hh"

namespace BackStance
{

void dh_LeftBackFoot_BackStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
