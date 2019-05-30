/*
 * Automatically Generated from Mathematica.
 * Wed 29 May 2019 23:45:35 GMT-04:00
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
  double t1825;
  double t24256;
  double t24354;
  double t24554;
  double t29985;
  double t30505;
  double t30538;
  double t29566;
  double t22693;
  double t29608;
  double t28464;
  double t30095;
  double t30747;
  double t31233;
  double t31247;
  double t31573;
  double t32689;
  double t32702;
  double t32825;
  double t32831;
  double t31381;
  double t31437;
  double t31440;
  double t31468;
  double t31470;
  double t31548;
  double t34336;
  double t27388;
  double t28090;
  double t28201;
  double t29529;
  double t29627;
  double t29845;
  double t33102;
  double t34454;
  double t34480;
  double t34369;
  double t37697;
  double t38881;
  double t38931;
  double t37636;
  double t37646;
  double t37672;
  double t38779;
  double t39079;
  double t39080;
  double t39421;
  double t39355;
  double t39389;
  double t39407;
  double t39422;
  double t37674;
  double t39159;
  double t38617;
  double t39245;
  double t39346;
  double t39453;
  double t39418;
  double t38424;
  double t38840;
  double t38869;
  double t38942;
  double t39072;
  double t39081;
  double t39085;
  double t39197;
  double t39201;
  double t39206;
  double t39627;
  double t39629;
  double t39630;
  double t39631;
  double t39419;
  double t39636;
  double t39645;
  double t39649;
  double t39653;
  double t39438;
  double t39450;
  double t39659;
  double t39660;
  double t39661;
  double t39662;
  double t39523;
  double t39524;
  double t39553;
  double t39558;
  double t39563;
  double t39616;
  double t39731;
  double t39732;
  double t39733;
  double t39734;
  double t39728;
  double t39729;
  double t39739;
  double t39740;
  double t39741;
  double t39746;
  double t39771;
  double t39769;
  double t30797;
  double t31267;
  double t31333;
  double t31356;
  double t39770;
  double t39772;
  double t39773;
  double t39775;
  double t39776;
  double t39777;
  double t31555;
  double t31575;
  double t31581;
  double t31585;
  double t31625;
  double t32908;
  double t33181;
  double t33275;
  double t33360;
  double t33516;
  double t39782;
  double t39784;
  double t39785;
  double t39786;
  double t34484;
  double t39774;
  double t39778;
  double t39779;
  double t39780;
  double t39788;
  double t39789;
  double t39790;
  double t39792;
  double t36532;
  double t39844;
  double t39845;
  double t39846;
  double t39853;
  double t39862;
  double t39865;
  double t39870;
  double t39874;
  double t39877;
  double t39878;
  double t39879;
  double t39913;
  double t39914;
  double t39915;
  double t39917;
  double t39918;
  double t39919;
  double t39923;
  double t39924;
  double t39925;
  double t39926;
  double t39928;
  double t39933;
  double t39936;
  double t39940;
  double t39943;
  double t39944;
  double t39945;
  double t39946;
  double t39973;
  double t39974;
  double t39975;
  double t39976;
  double t39978;
  double t39979;
  double t39980;
  double t39981;
  double t39984;
  double t39985;
  double t39986;
  double t39987;
  double t40013;
  double t40014;
  double t40015;
  double t40016;
  double t40009;
  double t40010;
  double t40020;
  double t40024;
  double t40025;
  double t40026;
  double t40055;
  double t40056;
  double t40057;
  double t40059;
  double t40060;
  double t40061;
  double t40071;
  double t40072;
  double t40073;
  double t40074;
  double t40066;
  double t40067;
  double t40068;
  double t40069;
  double t40058;
  double t40062;
  double t40063;
  double t40064;
  double t40097;
  double t40098;
  double t40100;
  double t40101;
  double t40104;
  double t40105;
  double t40106;
  double t40185;
  double t40187;
  double t40188;
  double t40189;
  double t40191;
  double t40192;
  double t40193;
  double t40194;
  double t40198;
  double t40199;
  double t40200;
  double t40201;
  double t40277;
  double t40278;
  double t40279;
  double t40280;
  double t40256;
  double t40275;
  double t40285;
  double t40287;
  double t40288;
  double t40289;
  t1825 = Cos(var1[4]);
  t24256 = Cos(var1[6]);
  t24354 = -1.*t24256;
  t24554 = 1. + t24354;
  t29985 = Cos(var1[8]);
  t30505 = Sin(var1[8]);
  t30538 = -3.e-6*t30505;
  t29566 = Sin(var1[4]);
  t22693 = Cos(var1[5]);
  t29608 = Sin(var1[6]);
  t28464 = Sin(var1[5]);
  t30095 = -3.e-6*t29985;
  t30747 = t30095 + t30538;
  t31233 = 3.e-6*t29985;
  t31247 = t31233 + t30538;
  t31573 = -9.e-12*t30505;
  t32689 = t1825*t22693*t24256;
  t32702 = -3.e-6*t1825*t24554*t28464;
  t32825 = t29566*t29608;
  t32831 = t32689 + t32702 + t32825;
  t31381 = -1.000000000009*t24554;
  t31437 = 1. + t31381;
  t31440 = t31437*t29566;
  t31468 = -1.*t1825*t22693*t29608;
  t31470 = -3.e-6*t1825*t28464*t29608;
  t31548 = t31440 + t31468 + t31470;
  t34336 = 3.e-6*t30505;
  t27388 = 3.e-6*t1825*t22693*t24554;
  t28090 = -9.e-12*t24554;
  t28201 = 1. + t28090;
  t29529 = -1.*t1825*t28201*t28464;
  t29627 = -3.e-6*t29566*t29608;
  t29845 = t27388 + t29529 + t29627;
  t33102 = -1.*t29985;
  t34454 = t31233 + t34336;
  t34480 = 9.e-12*t30505;
  t34369 = t30095 + t34336;
  t37697 = 1. + t33102;
  t38881 = -3.e-6*t37697;
  t38931 = t38881 + t34336;
  t37636 = -3.e-6*t1825*t22693*t24554;
  t37646 = -1.*t1825*t24256*t28464;
  t37672 = t37636 + t37646;
  t38779 = -1.*t30505;
  t39079 = -1.*t1825*t22693*t28201;
  t39080 = t39079 + t32702;
  t39421 = 3.e-6*t37697;
  t39355 = -3.e-6*t1825*t22693*t29608;
  t39389 = t1825*t28464*t29608;
  t39407 = t39355 + t39389;
  t39422 = t39421 + t34336;
  t37674 = 9.e-13*var1[8];
  t39159 = t38881 + t30538;
  t38617 = -9.e-12*t37697;
  t39245 = -1.000000000009*t37697;
  t39346 = 1. + t39245;
  t39453 = t39421 + t30538;
  t39418 = 9.e-12*t37697;
  t38424 = 0.2000000000018*t37697;
  t38840 = t38617 + t38779;
  t38869 = 0.1*t38840;
  t38942 = -9.e-7*t38931;
  t39072 = t37674 + t38424 + t38869 + t38942;
  t39081 = 3.e-7*var1[8];
  t39085 = -1.62e-17*t37697;
  t39197 = 0.2*t39159;
  t39201 = 0.1*t38931;
  t39206 = t39081 + t39085 + t39197 + t39201;
  t39627 = -1.*t22693*t24256*t29566;
  t39629 = 3.e-6*t24554*t29566*t28464;
  t39630 = t1825*t29608;
  t39631 = t39627 + t39629 + t39630;
  t39419 = t39418 + t38779;
  t39636 = -3.e-6*t22693*t24554*t29566;
  t39645 = t28201*t29566*t28464;
  t39649 = -3.e-6*t1825*t29608;
  t39653 = t39636 + t39645 + t39649;
  t39438 = -1.8e-11*t37697;
  t39450 = 1. + t39438;
  t39659 = t1825*t31437;
  t39660 = t22693*t29566*t29608;
  t39661 = 3.e-6*t29566*t28464*t29608;
  t39662 = t39659 + t39660 + t39661;
  t39523 = 0.1000000000009*t37697;
  t39524 = -9.e-7*t39159;
  t39553 = t38617 + t30505;
  t39558 = 0.2*t39553;
  t39563 = t37674 + t39523 + t39524 + t39558;
  t39616 = t39418 + t30505;
  t39731 = -3.e-6*t24256*t29566;
  t39732 = 3.e-6*t1825*t22693*t29608;
  t39733 = 9.e-12*t1825*t28464*t29608;
  t39734 = t39731 + t39732 + t39733;
  t39728 = t24256*t29566;
  t39729 = t39728 + t31468 + t31470;
  t39739 = -1.*t1825*t22693*t24256;
  t39740 = -3.e-6*t1825*t24256*t28464;
  t39741 = -1.000000000009*t29566*t29608;
  t39746 = t39739 + t39740 + t39741;
  t39771 = Cos(var1[3]);
  t39769 = Sin(var1[3]);
  t30797 = 0.2*t30747;
  t31267 = 0.1*t31247;
  t31333 = -1.62e-17*t30505;
  t31356 = 3.e-7 + t30797 + t31267 + t31333;
  t39770 = t22693*t39769*t29566;
  t39772 = t39771*t28464;
  t39773 = t39770 + t39772;
  t39775 = t39771*t22693;
  t39776 = -1.*t39769*t29566*t28464;
  t39777 = t39775 + t39776;
  t31555 = -9.e-7*t30747;
  t31575 = t29985 + t31573;
  t31581 = 0.2*t31575;
  t31585 = 0.1000000000009*t30505;
  t31625 = 9.e-13 + t31555 + t31581 + t31585;
  t32908 = -9.e-7*t31247;
  t33181 = t33102 + t31573;
  t33275 = 0.1*t33181;
  t33360 = 0.2000000000018*t30505;
  t33516 = 9.e-13 + t32908 + t33275 + t33360;
  t39782 = -1.*t1825*t31437*t39769;
  t39784 = -1.*t39773*t29608;
  t39785 = 3.e-6*t39777*t29608;
  t39786 = t39782 + t39784 + t39785;
  t34484 = t33102 + t34480;
  t39774 = 3.e-6*t24554*t39773;
  t39778 = t28201*t39777;
  t39779 = 3.e-6*t1825*t39769*t29608;
  t39780 = t39774 + t39778 + t39779;
  t39788 = t24256*t39773;
  t39789 = 3.e-6*t24554*t39777;
  t39790 = -1.*t1825*t39769*t29608;
  t39792 = t39788 + t39789 + t39790;
  t36532 = t29985 + t34480;
  t39844 = -1.*t22693*t39769*t29566;
  t39845 = -1.*t39771*t28464;
  t39846 = t39844 + t39845;
  t39853 = 3.e-6*t24554*t39846;
  t39862 = t24256*t39777;
  t39865 = t39853 + t39862;
  t39870 = t28201*t39846;
  t39874 = t39870 + t39789;
  t39877 = 3.e-6*t39846*t29608;
  t39878 = -1.*t39777*t29608;
  t39879 = t39877 + t39878;
  t39913 = t39771*t22693*t29566;
  t39914 = -1.*t39769*t28464;
  t39915 = t39913 + t39914;
  t39917 = -1.*t22693*t39769;
  t39918 = -1.*t39771*t29566*t28464;
  t39919 = t39917 + t39918;
  t39923 = t24256*t39915;
  t39924 = 3.e-6*t24554*t39919;
  t39925 = -1.*t39771*t1825*t29608;
  t39926 = t39923 + t39924 + t39925;
  t39928 = 3.e-6*t24554*t39915;
  t39933 = t28201*t39919;
  t39936 = 3.e-6*t39771*t1825*t29608;
  t39940 = t39928 + t39933 + t39936;
  t39943 = -1.*t39771*t1825*t31437;
  t39944 = -1.*t39915*t29608;
  t39945 = 3.e-6*t39919*t29608;
  t39946 = t39943 + t39944 + t39945;
  t39973 = t1825*t22693*t24256*t39769;
  t39974 = -3.e-6*t1825*t24554*t39769*t28464;
  t39975 = t39769*t29566*t29608;
  t39976 = t39973 + t39974 + t39975;
  t39978 = 3.e-6*t1825*t22693*t24554*t39769;
  t39979 = -1.*t1825*t28201*t39769*t28464;
  t39980 = -3.e-6*t39769*t29566*t29608;
  t39981 = t39978 + t39979 + t39980;
  t39984 = t31437*t39769*t29566;
  t39985 = -1.*t1825*t22693*t39769*t29608;
  t39986 = -3.e-6*t1825*t39769*t28464*t29608;
  t39987 = t39984 + t39985 + t39986;
  t40013 = 3.e-6*t1825*t24256*t39769;
  t40014 = 3.e-6*t39773*t29608;
  t40015 = -9.e-12*t39777*t29608;
  t40016 = t40013 + t40014 + t40015;
  t40009 = -1.*t1825*t24256*t39769;
  t40010 = t40009 + t39784 + t39785;
  t40020 = -1.*t24256*t39773;
  t40024 = 3.e-6*t24256*t39777;
  t40025 = 1.000000000009*t1825*t39769*t29608;
  t40026 = t40020 + t40024 + t40025;
  t40055 = -1.*t39771*t22693*t29566;
  t40056 = t39769*t28464;
  t40057 = t40055 + t40056;
  t40059 = t22693*t39769;
  t40060 = t39771*t29566*t28464;
  t40061 = t40059 + t40060;
  t40071 = t24256*t40057;
  t40072 = 3.e-6*t24554*t40061;
  t40073 = t39771*t1825*t29608;
  t40074 = t40071 + t40072 + t40073;
  t40066 = t39771*t1825*t31437;
  t40067 = -1.*t40057*t29608;
  t40068 = 3.e-6*t40061*t29608;
  t40069 = t40066 + t40067 + t40068;
  t40058 = 3.e-6*t24554*t40057;
  t40062 = t28201*t40061;
  t40063 = -3.e-6*t39771*t1825*t29608;
  t40064 = t40058 + t40062 + t40063;
  t40097 = t24256*t40061;
  t40098 = t39928 + t40097;
  t40100 = t28201*t39915;
  t40101 = t40100 + t40072;
  t40104 = 3.e-6*t39915*t29608;
  t40105 = -1.*t40061*t29608;
  t40106 = t40104 + t40105;
  t40185 = -1.*t39771*t1825*t22693*t24256;
  t40187 = 3.e-6*t39771*t1825*t24554*t28464;
  t40188 = -1.*t39771*t29566*t29608;
  t40189 = t40185 + t40187 + t40188;
  t40191 = -3.e-6*t39771*t1825*t22693*t24554;
  t40192 = t39771*t1825*t28201*t28464;
  t40193 = 3.e-6*t39771*t29566*t29608;
  t40194 = t40191 + t40192 + t40193;
  t40198 = -1.*t39771*t31437*t29566;
  t40199 = t39771*t1825*t22693*t29608;
  t40200 = 3.e-6*t39771*t1825*t28464*t29608;
  t40201 = t40198 + t40199 + t40200;
  t40277 = -3.e-6*t39771*t1825*t24256;
  t40278 = 3.e-6*t40057*t29608;
  t40279 = -9.e-12*t40061*t29608;
  t40280 = t40277 + t40278 + t40279;
  t40256 = t39771*t1825*t24256;
  t40275 = t40256 + t40067 + t40068;
  t40285 = -1.*t24256*t40057;
  t40287 = 3.e-6*t24256*t40061;
  t40288 = -1.000000000009*t39771*t1825*t29608;
  t40289 = t40285 + t40287 + t40288;
  p_output1[0]=var2[0] + (-0.2000000000018*t22693*t24554*t29566 - 6.000000000054e-7*t24554*t28464*t29566 - 0.2000000000018*t1825*t29608 + t39072*t39631 + t39206*t39653 + t39563*t39662 - 0.3*(t39616*t39631 + t39453*t39653 + t39346*t39662) + 0.2*(t39346*t39631 + t39422*t39653 + t39419*t39662) + 0.100001*(t39453*t39631 + t39450*t39653 + t39422*t39662))*var2[4] + (6.000000000054e-7*t1825*t22693*t24554 - 0.2000000000018*t1825*t24554*t28464 + t37672*t39072 + t39080*t39206 + 0.2*(t37672*t39346 + t39407*t39419 + t39080*t39422) + 0.100001*(t39407*t39422 + t39080*t39450 + t37672*t39453) + t39407*t39563 - 0.3*(t39346*t39407 + t39080*t39453 + t37672*t39616))*var2[5] + (-0.2000000000018*t24256*t29566 + 0.2000000000018*t1825*t22693*t29608 + 6.000000000054e-7*t1825*t28464*t29608 + t39072*t39729 + t39206*t39734 + t39563*t39746 - 0.3*(t39616*t39729 + t39453*t39734 + t39346*t39746) + 0.2*(t39346*t39729 + t39422*t39734 + t39419*t39746) + 0.100001*(t39453*t39729 + t39450*t39734 + t39422*t39746))*var2[6] + (t29845*t31356 + t31548*t31625 + t32831*t33516 + 0.100001*(-1.8e-11*t29845*t30505 + t32831*t34369 + t31548*t34454) + 0.2*(-1.000000000009*t30505*t32831 + t29845*t34454 + t31548*t34484) - 0.3*(-1.000000000009*t30505*t31548 + t29845*t34369 + t32831*t36532))*var2[8];
  p_output1[1]=var2[1] + (0.2000000000018*t1825*t29608*t39771 + 0.2000000000018*t24554*t39915 - 6.000000000054e-7*t24554*t39919 + t39072*t39926 + t39206*t39940 + t39563*t39946 - 0.3*(t39616*t39926 + t39453*t39940 + t39346*t39946) + 0.2*(t39346*t39926 + t39422*t39940 + t39419*t39946) + 0.100001*(t39453*t39926 + t39450*t39940 + t39422*t39946))*var2[3] + (0.2000000000018*t1825*t22693*t24554*t39769 + 6.000000000054e-7*t1825*t24554*t28464*t39769 - 0.2000000000018*t29566*t29608*t39769 + t39072*t39976 + t39206*t39981 + t39563*t39987 - 0.3*(t39616*t39976 + t39453*t39981 + t39346*t39987) + 0.2*(t39346*t39976 + t39422*t39981 + t39419*t39987) + 0.100001*(t39453*t39976 + t39450*t39981 + t39422*t39987))*var2[4] + (0.2000000000018*t24554*t39777 - 6.000000000054e-7*t24554*t39846 + t39072*t39865 + t39206*t39874 + t39563*t39879 - 0.3*(t39616*t39865 + t39453*t39874 + t39346*t39879) + 0.2*(t39346*t39865 + t39422*t39874 + t39419*t39879) + 0.100001*(t39453*t39865 + t39450*t39874 + t39422*t39879))*var2[5] + (0.2000000000018*t1825*t24256*t39769 + 0.2000000000018*t29608*t39773 - 6.000000000054e-7*t29608*t39777 + t39072*t40010 + t39206*t40016 + t39563*t40026 - 0.3*(t39616*t40010 + t39453*t40016 + t39346*t40026) + 0.2*(t39346*t40010 + t39422*t40016 + t39419*t40026) + 0.100001*(t39453*t40010 + t39450*t40016 + t39422*t40026))*var2[6] + (t31356*t39780 + t31625*t39786 + t33516*t39792 + 0.2*(t34454*t39780 + t34484*t39786 - 1.000000000009*t30505*t39792) + 0.100001*(-1.8e-11*t30505*t39780 + t34454*t39786 + t34369*t39792) - 0.3*(t34369*t39780 - 1.000000000009*t30505*t39786 + t36532*t39792))*var2[8];
  p_output1[2]=var2[2] + (0.2000000000018*t1825*t29608*t39769 + 0.2000000000018*t24554*t39773 - 6.000000000054e-7*t24554*t39777 + t39206*t39780 + t39563*t39786 + t39072*t39792 + 0.2*(t39422*t39780 + t39419*t39786 + t39346*t39792) + 0.100001*(t39450*t39780 + t39422*t39786 + t39453*t39792) - 0.3*(t39453*t39780 + t39346*t39786 + t39616*t39792))*var2[3] + (-0.2000000000018*t1825*t22693*t24554*t39771 - 6.000000000054e-7*t1825*t24554*t28464*t39771 + 0.2000000000018*t29566*t29608*t39771 + t39072*t40189 + t39206*t40194 + t39563*t40201 - 0.3*(t39616*t40189 + t39453*t40194 + t39346*t40201) + 0.2*(t39346*t40189 + t39422*t40194 + t39419*t40201) + 0.100001*(t39453*t40189 + t39450*t40194 + t39422*t40201))*var2[4] + (-6.000000000054e-7*t24554*t39915 + 0.2000000000018*t24554*t40061 + t39072*t40098 + t39206*t40101 + t39563*t40106 - 0.3*(t39616*t40098 + t39453*t40101 + t39346*t40106) + 0.2*(t39346*t40098 + t39422*t40101 + t39419*t40106) + 0.100001*(t39453*t40098 + t39450*t40101 + t39422*t40106))*var2[5] + (-0.2000000000018*t1825*t24256*t39771 + 0.2000000000018*t29608*t40057 - 6.000000000054e-7*t29608*t40061 + t39072*t40275 + t39206*t40280 + t39563*t40289 - 0.3*(t39616*t40275 + t39453*t40280 + t39346*t40289) + 0.2*(t39346*t40275 + t39422*t40280 + t39419*t40289) + 0.100001*(t39453*t40275 + t39450*t40280 + t39422*t40289))*var2[6] + (t31356*t40064 + t31625*t40069 + t33516*t40074 + 0.2*(t34454*t40064 + t34484*t40069 - 1.000000000009*t30505*t40074) + 0.100001*(-1.8e-11*t30505*t40064 + t34454*t40069 + t34369*t40074) - 0.3*(t34369*t40064 - 1.000000000009*t30505*t40069 + t36532*t40074))*var2[8];
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
