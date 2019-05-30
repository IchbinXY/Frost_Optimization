/*
 * Automatically Generated from Mathematica.
 * Wed 29 May 2019 23:45:27 GMT-04:00
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
  double t1838;
  double t1914;
  double t12970;
  double t20479;
  double t302;
  double t22974;
  double t24501;
  double t24551;
  double t28071;
  double t28293;
  double t28389;
  double t28516;
  double t29015;
  double t29054;
  double t29062;
  double t24763;
  double t25048;
  double t25086;
  double t25611;
  double t28517;
  double t30103;
  double t30108;
  double t30156;
  double t30177;
  double t30252;
  double t30359;
  double t31237;
  double t30463;
  double t30745;
  double t30795;
  double t30809;
  double t30811;
  double t30985;
  double t31026;
  double t31240;
  double t26064;
  double t30473;
  double t28508;
  double t30512;
  double t30514;
  double t31371;
  double t31028;
  double t28506;
  double t28581;
  double t28636;
  double t29459;
  double t29980;
  double t30361;
  double t30461;
  double t30474;
  double t30490;
  double t30496;
  double t31737;
  double t31742;
  double t31993;
  double t31127;
  double t32338;
  double t32679;
  double t32682;
  double t31337;
  double t31341;
  double t32708;
  double t32768;
  double t32808;
  double t31444;
  double t31446;
  double t31455;
  double t31456;
  double t31461;
  double t31552;
  double t34530;
  double t34569;
  double t34585;
  double t34625;
  double t34492;
  double t34493;
  double t34502;
  double t34507;
  double t34643;
  double t34645;
  double t36037;
  double t36347;
  double t38110;
  double t38121;
  double t38140;
  double t38141;
  double t38433;
  double t38618;
  double t38619;
  double t38620;
  double t38425;
  double t38428;
  double t37906;
  double t38051;
  double t38073;
  double t38109;
  double t38841;
  double t38946;
  double t38796;
  double t39237;
  double t39214;
  double t39219;
  double t39238;
  double t39239;
  double t39282;
  double t39291;
  double t39313;
  double t39351;
  double t39352;
  double t39353;
  double t39354;
  double t39356;
  double t39369;
  double t39383;
  double t39384;
  double t39414;
  double t39415;
  double t39416;
  double t39417;
  double t39554;
  double t39555;
  double t39556;
  double t39557;
  double t39559;
  double t39560;
  double t39561;
  double t39562;
  double t39565;
  double t39566;
  double t39568;
  double t39569;
  double t39633;
  double t39634;
  double t39635;
  double t39637;
  double t39638;
  double t39644;
  double t39646;
  double t39647;
  double t39648;
  double t39650;
  double t39651;
  double t39652;
  double t39655;
  double t39656;
  double t39657;
  double t39686;
  double t39687;
  double t39688;
  double t39699;
  double t39702;
  double t39716;
  double t39717;
  double t39691;
  double t39692;
  double t39693;
  double t39694;
  double t39722;
  double t39723;
  double t39724;
  double t39725;
  double t38122;
  double t38266;
  double t38416;
  double t38423;
  double t38430;
  double t38457;
  double t38540;
  double t38541;
  double t38613;
  double t38673;
  double t38692;
  double t38712;
  double t38728;
  double t38731;
  double t39747;
  double t39748;
  double t39008;
  double t39742;
  double t39743;
  double t39744;
  double t39745;
  double t39750;
  double t39751;
  double t39752;
  double t39083;
  double t39797;
  double t39798;
  double t39800;
  double t39801;
  double t39821;
  double t39822;
  double t39823;
  double t39824;
  double t39827;
  double t39828;
  double t39829;
  double t39830;
  double t39859;
  double t39860;
  double t39861;
  double t39863;
  double t39864;
  double t39866;
  double t39867;
  double t39868;
  double t39871;
  double t39872;
  double t39873;
  double t39891;
  double t39892;
  double t39893;
  double t39901;
  double t39903;
  double t39904;
  double t39905;
  double t39896;
  double t39897;
  double t39898;
  double t39899;
  double t39909;
  double t39910;
  double t39911;
  double t39912;
  double t39937;
  double t39938;
  double t39939;
  double t39934;
  double t39935;
  double t39929;
  double t39930;
  double t39931;
  double t39932;
  t1838 = Cos(var1[6]);
  t1914 = -1.*t1838;
  t12970 = 1. + t1914;
  t20479 = Sin(var1[4]);
  t302 = Cos(var1[5]);
  t22974 = Sin(var1[5]);
  t24501 = Cos(var1[4]);
  t24551 = Sin(var1[6]);
  t28071 = Cos(var1[8]);
  t28293 = -1.*t28071;
  t28389 = 1. + t28293;
  t28516 = Sin(var1[8]);
  t29015 = -3.e-6*t28389;
  t29054 = 3.e-6*t28516;
  t29062 = t29015 + t29054;
  t24763 = -1.*t302*t1838*t20479;
  t25048 = 3.e-6*t12970*t20479*t22974;
  t25086 = t24501*t24551;
  t25611 = t24763 + t25048 + t25086;
  t28517 = -1.*t28516;
  t30103 = -3.e-6*t302*t12970*t20479;
  t30108 = -9.e-12*t12970;
  t30156 = 1. + t30108;
  t30177 = t30156*t20479*t22974;
  t30252 = -3.e-6*t24501*t24551;
  t30359 = t30103 + t30177 + t30252;
  t31237 = 3.e-6*t28389;
  t30463 = -3.e-6*t28516;
  t30745 = -1.000000000009*t12970;
  t30795 = 1. + t30745;
  t30809 = t24501*t30795;
  t30811 = t302*t20479*t24551;
  t30985 = 3.e-6*t20479*t22974*t24551;
  t31026 = t30809 + t30811 + t30985;
  t31240 = t31237 + t29054;
  t26064 = 9.e-13*var1[8];
  t30473 = t29015 + t30463;
  t28508 = -9.e-12*t28389;
  t30512 = -1.000000000009*t28389;
  t30514 = 1. + t30512;
  t31371 = t31237 + t30463;
  t31028 = 9.e-12*t28389;
  t28506 = 0.2000000000018*t28389;
  t28581 = t28508 + t28517;
  t28636 = 0.1*t28581;
  t29459 = -9.e-7*t29062;
  t29980 = t26064 + t28506 + t28636 + t29459;
  t30361 = 3.e-7*var1[8];
  t30461 = -1.62e-17*t28389;
  t30474 = 0.2*t30473;
  t30490 = 0.1*t29062;
  t30496 = t30361 + t30461 + t30474 + t30490;
  t31737 = -3.e-6*t24501*t302*t12970;
  t31742 = -1.*t24501*t1838*t22974;
  t31993 = t31737 + t31742;
  t31127 = t31028 + t28517;
  t32338 = -1.*t24501*t302*t30156;
  t32679 = -3.e-6*t24501*t12970*t22974;
  t32682 = t32338 + t32679;
  t31337 = -1.8e-11*t28389;
  t31341 = 1. + t31337;
  t32708 = -3.e-6*t24501*t302*t24551;
  t32768 = t24501*t22974*t24551;
  t32808 = t32708 + t32768;
  t31444 = 0.1000000000009*t28389;
  t31446 = -9.e-7*t30473;
  t31455 = t28508 + t28516;
  t31456 = 0.2*t31455;
  t31461 = t26064 + t31444 + t31446 + t31456;
  t31552 = t31028 + t28516;
  t34530 = -3.e-6*t1838*t20479;
  t34569 = 3.e-6*t24501*t302*t24551;
  t34585 = 9.e-12*t24501*t22974*t24551;
  t34625 = t34530 + t34569 + t34585;
  t34492 = t1838*t20479;
  t34493 = -1.*t24501*t302*t24551;
  t34502 = -3.e-6*t24501*t22974*t24551;
  t34507 = t34492 + t34493 + t34502;
  t34643 = -1.*t24501*t302*t1838;
  t34645 = -3.e-6*t24501*t1838*t22974;
  t36037 = -1.000000000009*t20479*t24551;
  t36347 = t34643 + t34645 + t36037;
  t38110 = -3.e-6*t28071;
  t38121 = t38110 + t30463;
  t38140 = 3.e-6*t28071;
  t38141 = t38140 + t30463;
  t38433 = -9.e-12*t28516;
  t38618 = t24501*t302*t1838;
  t38619 = t20479*t24551;
  t38620 = t38618 + t32679 + t38619;
  t38425 = t30795*t20479;
  t38428 = t38425 + t34493 + t34502;
  t37906 = 3.e-6*t24501*t302*t12970;
  t38051 = -1.*t24501*t30156*t22974;
  t38073 = -3.e-6*t20479*t24551;
  t38109 = t37906 + t38051 + t38073;
  t38841 = t38140 + t29054;
  t38946 = 9.e-12*t28516;
  t38796 = t38110 + t29054;
  t39237 = Sin(var1[3]);
  t39214 = Cos(var1[3]);
  t39219 = t39214*t302*t20479;
  t39238 = -1.*t39237*t22974;
  t39239 = t39219 + t39238;
  t39282 = -1.*t302*t39237;
  t39291 = -1.*t39214*t20479*t22974;
  t39313 = t39282 + t39291;
  t39351 = t1838*t39239;
  t39352 = 3.e-6*t12970*t39313;
  t39353 = -1.*t39214*t24501*t24551;
  t39354 = t39351 + t39352 + t39353;
  t39356 = 3.e-6*t12970*t39239;
  t39369 = t30156*t39313;
  t39383 = 3.e-6*t39214*t24501*t24551;
  t39384 = t39356 + t39369 + t39383;
  t39414 = -1.*t39214*t24501*t30795;
  t39415 = -1.*t39239*t24551;
  t39416 = 3.e-6*t39313*t24551;
  t39417 = t39414 + t39415 + t39416;
  t39554 = t24501*t302*t1838*t39237;
  t39555 = -3.e-6*t24501*t12970*t39237*t22974;
  t39556 = t39237*t20479*t24551;
  t39557 = t39554 + t39555 + t39556;
  t39559 = 3.e-6*t24501*t302*t12970*t39237;
  t39560 = -1.*t24501*t30156*t39237*t22974;
  t39561 = -3.e-6*t39237*t20479*t24551;
  t39562 = t39559 + t39560 + t39561;
  t39565 = t30795*t39237*t20479;
  t39566 = -1.*t24501*t302*t39237*t24551;
  t39568 = -3.e-6*t24501*t39237*t22974*t24551;
  t39569 = t39565 + t39566 + t39568;
  t39633 = -1.*t302*t39237*t20479;
  t39634 = -1.*t39214*t22974;
  t39635 = t39633 + t39634;
  t39637 = t39214*t302;
  t39638 = -1.*t39237*t20479*t22974;
  t39644 = t39637 + t39638;
  t39646 = 3.e-6*t12970*t39635;
  t39647 = t1838*t39644;
  t39648 = t39646 + t39647;
  t39650 = t30156*t39635;
  t39651 = 3.e-6*t12970*t39644;
  t39652 = t39650 + t39651;
  t39655 = 3.e-6*t39635*t24551;
  t39656 = -1.*t39644*t24551;
  t39657 = t39655 + t39656;
  t39686 = t302*t39237*t20479;
  t39687 = t39214*t22974;
  t39688 = t39686 + t39687;
  t39699 = 3.e-6*t24501*t1838*t39237;
  t39702 = 3.e-6*t39688*t24551;
  t39716 = -9.e-12*t39644*t24551;
  t39717 = t39699 + t39702 + t39716;
  t39691 = -1.*t24501*t1838*t39237;
  t39692 = -1.*t39688*t24551;
  t39693 = 3.e-6*t39644*t24551;
  t39694 = t39691 + t39692 + t39693;
  t39722 = -1.*t1838*t39688;
  t39723 = 3.e-6*t1838*t39644;
  t39724 = 1.000000000009*t24501*t39237*t24551;
  t39725 = t39722 + t39723 + t39724;
  t38122 = 0.2*t38121;
  t38266 = 0.1*t38141;
  t38416 = -1.62e-17*t28516;
  t38423 = 3.e-7 + t38122 + t38266 + t38416;
  t38430 = -9.e-7*t38121;
  t38457 = t28071 + t38433;
  t38540 = 0.2*t38457;
  t38541 = 0.1000000000009*t28516;
  t38613 = 9.e-13 + t38430 + t38540 + t38541;
  t38673 = -9.e-7*t38141;
  t38692 = t28293 + t38433;
  t38712 = 0.1*t38692;
  t38728 = 0.2000000000018*t28516;
  t38731 = 9.e-13 + t38673 + t38712 + t38728;
  t39747 = -1.*t24501*t30795*t39237;
  t39748 = t39747 + t39692 + t39693;
  t39008 = t28293 + t38946;
  t39742 = 3.e-6*t12970*t39688;
  t39743 = t30156*t39644;
  t39744 = 3.e-6*t24501*t39237*t24551;
  t39745 = t39742 + t39743 + t39744;
  t39750 = t1838*t39688;
  t39751 = -1.*t24501*t39237*t24551;
  t39752 = t39750 + t39651 + t39751;
  t39083 = t28071 + t38946;
  t39797 = -1.*t39214*t24501*t302*t1838;
  t39798 = 3.e-6*t39214*t24501*t12970*t22974;
  t39800 = -1.*t39214*t20479*t24551;
  t39801 = t39797 + t39798 + t39800;
  t39821 = -3.e-6*t39214*t24501*t302*t12970;
  t39822 = t39214*t24501*t30156*t22974;
  t39823 = 3.e-6*t39214*t20479*t24551;
  t39824 = t39821 + t39822 + t39823;
  t39827 = -1.*t39214*t30795*t20479;
  t39828 = t39214*t24501*t302*t24551;
  t39829 = 3.e-6*t39214*t24501*t22974*t24551;
  t39830 = t39827 + t39828 + t39829;
  t39859 = t302*t39237;
  t39860 = t39214*t20479*t22974;
  t39861 = t39859 + t39860;
  t39863 = t1838*t39861;
  t39864 = t39356 + t39863;
  t39866 = t30156*t39239;
  t39867 = 3.e-6*t12970*t39861;
  t39868 = t39866 + t39867;
  t39871 = 3.e-6*t39239*t24551;
  t39872 = -1.*t39861*t24551;
  t39873 = t39871 + t39872;
  t39891 = -1.*t39214*t302*t20479;
  t39892 = t39237*t22974;
  t39893 = t39891 + t39892;
  t39901 = -3.e-6*t39214*t24501*t1838;
  t39903 = 3.e-6*t39893*t24551;
  t39904 = -9.e-12*t39861*t24551;
  t39905 = t39901 + t39903 + t39904;
  t39896 = t39214*t24501*t1838;
  t39897 = -1.*t39893*t24551;
  t39898 = 3.e-6*t39861*t24551;
  t39899 = t39896 + t39897 + t39898;
  t39909 = -1.*t1838*t39893;
  t39910 = 3.e-6*t1838*t39861;
  t39911 = -1.000000000009*t39214*t24501*t24551;
  t39912 = t39909 + t39910 + t39911;
  t39937 = t1838*t39893;
  t39938 = t39214*t24501*t24551;
  t39939 = t39937 + t39867 + t39938;
  t39934 = t39214*t24501*t30795;
  t39935 = t39934 + t39897 + t39898;
  t39929 = 3.e-6*t12970*t39893;
  t39930 = t30156*t39861;
  t39931 = -3.e-6*t39214*t24501*t24551;
  t39932 = t39929 + t39930 + t39931;
  p_output1[0]=1.;
  p_output1[1]=-6.000000000054e-7*t12970*t20479*t22974 - 0.2000000000018*t24501*t24551 + t25611*t29980 - 0.2000000000018*t12970*t20479*t302 + t30359*t30496 + 0.2*(t25611*t30514 + t31026*t31127 + t30359*t31240) + 0.100001*(t31026*t31240 + t30359*t31341 + t25611*t31371) + t31026*t31461 - 0.3*(t30514*t31026 + t30359*t31371 + t25611*t31552);
  p_output1[2]=-0.2000000000018*t12970*t22974*t24501 + 6.000000000054e-7*t12970*t24501*t302 + t29980*t31993 + t30496*t32682 + t31461*t32808 - 0.3*(t31552*t31993 + t31371*t32682 + t30514*t32808) + 0.2*(t30514*t31993 + t31240*t32682 + t31127*t32808) + 0.100001*(t31371*t31993 + t31341*t32682 + t31240*t32808);
  p_output1[3]=-0.2000000000018*t1838*t20479 + 6.000000000054e-7*t22974*t24501*t24551 + 0.2000000000018*t24501*t24551*t302 + t29980*t34507 + t30496*t34625 + t31461*t36347 - 0.3*(t31552*t34507 + t31371*t34625 + t30514*t36347) + 0.2*(t30514*t34507 + t31240*t34625 + t31127*t36347) + 0.100001*(t31371*t34507 + t31341*t34625 + t31240*t36347);
  p_output1[4]=t38109*t38423 + t38428*t38613 + t38620*t38731 + 0.100001*(-1.8e-11*t28516*t38109 + t38620*t38796 + t38428*t38841) + 0.2*(-1.000000000009*t28516*t38620 + t38109*t38841 + t38428*t39008) - 0.3*(-1.000000000009*t28516*t38428 + t38109*t38796 + t38620*t39083);
  p_output1[5]=-1.;
  p_output1[6]=1.;
  p_output1[7]=0.2000000000018*t24501*t24551*t39214 + 0.2000000000018*t12970*t39239 - 6.000000000054e-7*t12970*t39313 + t29980*t39354 + t30496*t39384 + t31461*t39417 - 0.3*(t31552*t39354 + t31371*t39384 + t30514*t39417) + 0.2*(t30514*t39354 + t31240*t39384 + t31127*t39417) + 0.100001*(t31371*t39354 + t31341*t39384 + t31240*t39417);
  p_output1[8]=6.000000000054e-7*t12970*t22974*t24501*t39237 - 0.2000000000018*t20479*t24551*t39237 + 0.2000000000018*t12970*t24501*t302*t39237 + t29980*t39557 + t30496*t39562 + t31461*t39569 - 0.3*(t31552*t39557 + t31371*t39562 + t30514*t39569) + 0.2*(t30514*t39557 + t31240*t39562 + t31127*t39569) + 0.100001*(t31371*t39557 + t31341*t39562 + t31240*t39569);
  p_output1[9]=-6.000000000054e-7*t12970*t39635 + 0.2000000000018*t12970*t39644 + t29980*t39648 + t30496*t39652 + t31461*t39657 - 0.3*(t31552*t39648 + t31371*t39652 + t30514*t39657) + 0.2*(t30514*t39648 + t31240*t39652 + t31127*t39657) + 0.100001*(t31371*t39648 + t31341*t39652 + t31240*t39657);
  p_output1[10]=0.2000000000018*t1838*t24501*t39237 - 6.000000000054e-7*t24551*t39644 + 0.2000000000018*t24551*t39688 + t29980*t39694 + t30496*t39717 + t31461*t39725 - 0.3*(t31552*t39694 + t31371*t39717 + t30514*t39725) + 0.2*(t30514*t39694 + t31240*t39717 + t31127*t39725) + 0.100001*(t31371*t39694 + t31341*t39717 + t31240*t39725);
  p_output1[11]=t38423*t39745 + t38613*t39748 + t38731*t39752 + 0.2*(t38841*t39745 + t39008*t39748 - 1.000000000009*t28516*t39752) + 0.100001*(-1.8e-11*t28516*t39745 + t38841*t39748 + t38796*t39752) - 0.3*(t38796*t39745 - 1.000000000009*t28516*t39748 + t39083*t39752);
  p_output1[12]=-1.;
  p_output1[13]=1.;
  p_output1[14]=0.2000000000018*t24501*t24551*t39237 - 6.000000000054e-7*t12970*t39644 + 0.2000000000018*t12970*t39688 + t30496*t39745 + t31461*t39748 + t29980*t39752 + 0.2*(t31240*t39745 + t31127*t39748 + t30514*t39752) + 0.100001*(t31341*t39745 + t31240*t39748 + t31371*t39752) - 0.3*(t31371*t39745 + t30514*t39748 + t31552*t39752);
  p_output1[15]=-6.000000000054e-7*t12970*t22974*t24501*t39214 + 0.2000000000018*t20479*t24551*t39214 - 0.2000000000018*t12970*t24501*t302*t39214 + t29980*t39801 + t30496*t39824 + t31461*t39830 - 0.3*(t31552*t39801 + t31371*t39824 + t30514*t39830) + 0.2*(t30514*t39801 + t31240*t39824 + t31127*t39830) + 0.100001*(t31371*t39801 + t31341*t39824 + t31240*t39830);
  p_output1[16]=-6.000000000054e-7*t12970*t39239 + 0.2000000000018*t12970*t39861 + t29980*t39864 + t30496*t39868 + t31461*t39873 - 0.3*(t31552*t39864 + t31371*t39868 + t30514*t39873) + 0.2*(t30514*t39864 + t31240*t39868 + t31127*t39873) + 0.100001*(t31371*t39864 + t31341*t39868 + t31240*t39873);
  p_output1[17]=-0.2000000000018*t1838*t24501*t39214 - 6.000000000054e-7*t24551*t39861 + 0.2000000000018*t24551*t39893 + t29980*t39899 + t30496*t39905 + t31461*t39912 - 0.3*(t31552*t39899 + t31371*t39905 + t30514*t39912) + 0.2*(t30514*t39899 + t31240*t39905 + t31127*t39912) + 0.100001*(t31371*t39899 + t31341*t39905 + t31240*t39912);
  p_output1[18]=t38423*t39932 + t38613*t39935 + t38731*t39939 + 0.2*(t38841*t39932 + t39008*t39935 - 1.000000000009*t28516*t39939) + 0.100001*(-1.8e-11*t28516*t39932 + t38841*t39935 + t38796*t39939) - 0.3*(t38796*t39932 - 1.000000000009*t28516*t39935 + t39083*t39939);
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
