/*
 * Automatically Generated from Mathematica.
 * Thu 30 May 2019 00:03:10 GMT-04:00
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
  double t878;
  double t2229;
  double t2384;
  double t22691;
  double t22692;
  double t23145;
  double t23152;
  double t3994;
  double t5568;
  double t23158;
  double t23386;
  double t23387;
  double t24532;
  double t1570;
  double t2407;
  double t30353;
  double t23193;
  double t23419;
  double t23451;
  double t24336;
  double t24763;
  double t28217;
  double t31787;
  double t31889;
  double t32004;
  double t32005;
  double t29834;
  double t32314;
  double t32316;
  double t32323;
  double t32372;
  double t32388;
  double t32399;
  double t34643;
  double t35396;
  double t36939;
  double t36468;
  double t37817;
  double t37815;
  double t37980;
  double t37919;
  double t37952;
  double t38129;
  double t38015;
  double t38016;
  double t38041;
  double t38045;
  double t38290;
  double t38152;
  double t38165;
  double t38226;
  double t38251;
  double t38262;
  double t38275;
  double t38334;
  double t38410;
  double t38088;
  double t38394;
  double t38403;
  double t38292;
  double t38187;
  double t38205;
  double t38209;
  double t38211;
  double t38223;
  double t38072;
  double t38093;
  double t38113;
  double t38138;
  double t38139;
  double t37911;
  double t37964;
  double t37983;
  double t38006;
  double t38007;
  double t52967;
  double t52996;
  double t38411;
  double t53000;
  double t53001;
  double t53011;
  double t53015;
  double t54798;
  double t62822;
  double t38832;
  double t38370;
  double t38380;
  double t52883;
  double t52907;
  double t52918;
  double t52922;
  double t70590;
  double t71632;
  double t71910;
  double t71915;
  double t72018;
  double t72019;
  double t72020;
  double t72022;
  double t72033;
  double t72035;
  double t72037;
  double t72038;
  double t72107;
  double t72114;
  double t72115;
  double t72116;
  double t72117;
  double t72119;
  double t72120;
  double t72122;
  double t72123;
  double t72126;
  double t72127;
  double t72128;
  double t72129;
  double t72168;
  double t72170;
  double t72171;
  double t72174;
  double t72176;
  double t72177;
  double t72178;
  double t72180;
  double t72181;
  double t72184;
  double t72185;
  double t72187;
  double t72190;
  double t72191;
  double t72192;
  double t72202;
  double t72205;
  double t72208;
  double t72209;
  double t72254;
  double t72256;
  double t72261;
  double t72265;
  double t72266;
  double t72269;
  double t72276;
  double t72278;
  double t72280;
  double t72283;
  double t72284;
  double t72287;
  double t72289;
  double t72290;
  double t72292;
  double t3455;
  double t6455;
  double t15038;
  double t21665;
  double t29304;
  double t30370;
  double t30862;
  double t31172;
  double t31782;
  double t73245;
  double t73246;
  double t73247;
  double t32249;
  double t32257;
  double t32261;
  double t32265;
  double t32273;
  double t73244;
  double t73248;
  double t73249;
  double t73250;
  double t73253;
  double t73254;
  double t73260;
  double t36903;
  double t73268;
  double t73269;
  double t73270;
  double t73273;
  double t37619;
  double t74038;
  double t74056;
  double t74057;
  double t74058;
  double t74066;
  double t74080;
  double t74081;
  double t74334;
  double t74492;
  double t74495;
  double t74609;
  double t74628;
  double t74635;
  double t74644;
  double t74648;
  double t74650;
  double t74654;
  double t74662;
  double t74664;
  double t74666;
  double t74672;
  double t74673;
  double t74895;
  double t74897;
  double t74898;
  double t74905;
  double t74906;
  double t74907;
  double t74911;
  double t74912;
  double t74916;
  double t74918;
  double t74919;
  double t75617;
  double t75619;
  double t75628;
  double t75616;
  double t75632;
  double t75633;
  double t75634;
  double t75637;
  double t75638;
  double t75641;
  double t75645;
  double t75646;
  double t75647;
  double t75648;
  double t75748;
  double t75811;
  double t75852;
  double t75853;
  double t75855;
  double t75858;
  double t75859;
  double t75863;
  double t75880;
  double t75881;
  t878 = Cos(var1[12]);
  t2229 = Sin(var1[12]);
  t2384 = -3.e-6*t2229;
  t22691 = Cos(var1[10]);
  t22692 = -1.*t22691;
  t23145 = 1. + t22692;
  t23152 = Cos(var1[4]);
  t3994 = 3.e-6*t878;
  t5568 = t3994 + t2384;
  t23158 = Cos(var1[5]);
  t23386 = Sin(var1[10]);
  t23387 = Sin(var1[4]);
  t24532 = Sin(var1[5]);
  t1570 = -3.e-6*t878;
  t2407 = t1570 + t2384;
  t30353 = -9.e-12*t2229;
  t23193 = 3.e-6*t23145*t23152*t23158;
  t23419 = -3.e-6*t23386*t23387;
  t23451 = -9.e-12*t23145;
  t24336 = 1. + t23451;
  t24763 = -1.*t24336*t23152*t24532;
  t28217 = t23193 + t23419 + t24763;
  t31787 = t22691*t23152*t23158;
  t31889 = t23386*t23387;
  t32004 = -3.e-6*t23145*t23152*t24532;
  t32005 = t31787 + t31889 + t32004;
  t29834 = -1.*t878;
  t32314 = -1.*t23152*t23158*t23386;
  t32316 = -1.000000000009*t23145;
  t32323 = 1. + t32316;
  t32372 = t32323*t23387;
  t32388 = -3.e-6*t23152*t23386*t24532;
  t32399 = t32314 + t32372 + t32388;
  t34643 = 3.e-6*t2229;
  t35396 = t3994 + t34643;
  t36939 = t1570 + t34643;
  t36468 = 9.e-12*t2229;
  t37817 = 1. + t29834;
  t37815 = 3.e-13*var1[12];
  t37980 = -9.e-12*t37817;
  t37919 = -3.e-6*t37817;
  t37952 = t37919 + t2384;
  t38129 = t37919 + t34643;
  t38015 = -1.*t22691*t23152*t23158;
  t38016 = -1.000000000009*t23386*t23387;
  t38041 = -3.e-6*t22691*t23152*t24532;
  t38045 = t38015 + t38016 + t38041;
  t38290 = 3.e-6*t37817;
  t38152 = t22691*t23387;
  t38165 = t32314 + t38152 + t32388;
  t38226 = 3.e-6*t23152*t23158*t23386;
  t38251 = -3.e-6*t22691*t23387;
  t38262 = 9.e-12*t23152*t23386*t24532;
  t38275 = t38226 + t38251 + t38262;
  t38334 = t38290 + t2384;
  t38410 = 9.e-12*t37817;
  t38088 = -1.*t2229;
  t38394 = -1.000000000009*t37817;
  t38403 = 1. + t38394;
  t38292 = t38290 + t34643;
  t38187 = 1.e-7*var1[12];
  t38205 = 5.4e-18*t37817;
  t38209 = -0.200000000003*t37952;
  t38211 = 0.100000000003*t38129;
  t38223 = t38187 + t38205 + t38209 + t38211;
  t38072 = -0.2000000000048*t37817;
  t38093 = t37980 + t38088;
  t38113 = 0.100000000003*t38093;
  t38138 = 3.e-7*t38129;
  t38139 = t37815 + t38072 + t38113 + t38138;
  t37911 = 0.1000000000039*t37817;
  t37964 = 3.e-7*t37952;
  t37983 = t37980 + t2229;
  t38006 = -0.200000000003*t37983;
  t38007 = t37815 + t37911 + t37964 + t38006;
  t52967 = -1.*t24336*t23152*t23158;
  t52996 = t52967 + t32004;
  t38411 = t38410 + t2229;
  t53000 = -3.e-6*t23145*t23152*t23158;
  t53001 = -1.*t22691*t23152*t24532;
  t53011 = t53000 + t53001;
  t53015 = -3.e-6*t23152*t23158*t23386;
  t54798 = t23152*t23386*t24532;
  t62822 = t53015 + t54798;
  t38832 = t38410 + t38088;
  t38370 = -1.8e-11*t37817;
  t38380 = 1. + t38370;
  t52883 = -1.8e-12*t23145;
  t52907 = -1. + t22691;
  t52918 = 0.2*t52907;
  t52922 = t52883 + t52918;
  t70590 = -3.e-6*t23152*t23386;
  t71632 = -3.e-6*t23145*t23158*t23387;
  t71910 = t24336*t23387*t24532;
  t71915 = t70590 + t71632 + t71910;
  t72018 = t23152*t23386;
  t72019 = -1.*t22691*t23158*t23387;
  t72020 = 3.e-6*t23145*t23387*t24532;
  t72022 = t72018 + t72019 + t72020;
  t72033 = t32323*t23152;
  t72035 = t23158*t23386*t23387;
  t72037 = 3.e-6*t23386*t23387*t24532;
  t72038 = t72033 + t72035 + t72037;
  t72107 = Sin(var1[3]);
  t72114 = 3.e-6*t23145*t23152*t23158*t72107;
  t72115 = -3.e-6*t23386*t72107*t23387;
  t72116 = -1.*t24336*t23152*t72107*t24532;
  t72117 = t72114 + t72115 + t72116;
  t72119 = t22691*t23152*t23158*t72107;
  t72120 = t23386*t72107*t23387;
  t72122 = -3.e-6*t23145*t23152*t72107*t24532;
  t72123 = t72119 + t72120 + t72122;
  t72126 = -1.*t23152*t23158*t23386*t72107;
  t72127 = t32323*t72107*t23387;
  t72128 = -3.e-6*t23152*t23386*t72107*t24532;
  t72129 = t72126 + t72127 + t72128;
  t72168 = Cos(var1[3]);
  t72170 = t72168*t23158*t23387;
  t72171 = -1.*t72107*t24532;
  t72174 = t72170 + t72171;
  t72176 = -1.*t23158*t72107;
  t72177 = -1.*t72168*t23387*t24532;
  t72178 = t72176 + t72177;
  t72180 = 3.e-6*t72168*t23152*t23386;
  t72181 = 3.e-6*t23145*t72174;
  t72184 = t24336*t72178;
  t72185 = t72180 + t72181 + t72184;
  t72187 = -1.*t72168*t23152*t23386;
  t72190 = t22691*t72174;
  t72191 = 3.e-6*t23145*t72178;
  t72192 = t72187 + t72190 + t72191;
  t72202 = -1.*t32323*t72168*t23152;
  t72205 = -1.*t23386*t72174;
  t72208 = 3.e-6*t23386*t72178;
  t72209 = t72202 + t72205 + t72208;
  t72254 = -1.*t23158*t72107*t23387;
  t72256 = -1.*t72168*t24532;
  t72261 = t72254 + t72256;
  t72265 = t72168*t23158;
  t72266 = -1.*t72107*t23387*t24532;
  t72269 = t72265 + t72266;
  t72276 = t24336*t72261;
  t72278 = 3.e-6*t23145*t72269;
  t72280 = t72276 + t72278;
  t72283 = 3.e-6*t23145*t72261;
  t72284 = t22691*t72269;
  t72287 = t72283 + t72284;
  t72289 = 3.e-6*t23386*t72261;
  t72290 = -1.*t23386*t72269;
  t72292 = t72289 + t72290;
  t3455 = -0.200000000003*t2407;
  t6455 = 0.100000000003*t5568;
  t15038 = 5.4e-18*t2229;
  t21665 = 1.e-7 + t3455 + t6455 + t15038;
  t29304 = 3.e-7*t5568;
  t30370 = t29834 + t30353;
  t30862 = 0.100000000003*t30370;
  t31172 = -0.2000000000048*t2229;
  t31782 = 3.e-13 + t29304 + t30862 + t31172;
  t73245 = t23158*t72107*t23387;
  t73246 = t72168*t24532;
  t73247 = t73245 + t73246;
  t32249 = 3.e-7*t2407;
  t32257 = t878 + t30353;
  t32261 = -0.200000000003*t32257;
  t32265 = 0.1000000000039*t2229;
  t32273 = 3.e-13 + t32249 + t32261 + t32265;
  t73244 = 3.e-6*t23152*t23386*t72107;
  t73248 = 3.e-6*t23145*t73247;
  t73249 = t24336*t72269;
  t73250 = t73244 + t73248 + t73249;
  t73253 = -1.*t23152*t23386*t72107;
  t73254 = t22691*t73247;
  t73260 = t73253 + t73254 + t72278;
  t36903 = t29834 + t36468;
  t73268 = -1.*t32323*t23152*t72107;
  t73269 = -1.*t23386*t73247;
  t73270 = 3.e-6*t23386*t72269;
  t73273 = t73268 + t73269 + t73270;
  t37619 = t878 + t36468;
  t74038 = 1.000000000009*t23152*t23386*t72107;
  t74056 = -1.*t22691*t73247;
  t74057 = 3.e-6*t22691*t72269;
  t74058 = t74038 + t74056 + t74057;
  t74066 = 3.e-6*t22691*t23152*t72107;
  t74080 = 3.e-6*t23386*t73247;
  t74081 = -9.e-12*t23386*t72269;
  t74334 = t74066 + t74080 + t74081;
  t74492 = -1.*t22691*t23152*t72107;
  t74495 = t74492 + t73269 + t73270;
  t74609 = -3.e-6*t23145*t72168*t23152*t23158;
  t74628 = 3.e-6*t72168*t23386*t23387;
  t74635 = t24336*t72168*t23152*t24532;
  t74644 = t74609 + t74628 + t74635;
  t74648 = -1.*t22691*t72168*t23152*t23158;
  t74650 = -1.*t72168*t23386*t23387;
  t74654 = 3.e-6*t23145*t72168*t23152*t24532;
  t74662 = t74648 + t74650 + t74654;
  t74664 = t72168*t23152*t23158*t23386;
  t74666 = -1.*t32323*t72168*t23387;
  t74672 = 3.e-6*t72168*t23152*t23386*t24532;
  t74673 = t74664 + t74666 + t74672;
  t74895 = t23158*t72107;
  t74897 = t72168*t23387*t24532;
  t74898 = t74895 + t74897;
  t74905 = t24336*t72174;
  t74906 = 3.e-6*t23145*t74898;
  t74907 = t74905 + t74906;
  t74911 = t22691*t74898;
  t74912 = t72181 + t74911;
  t74916 = 3.e-6*t23386*t72174;
  t74918 = -1.*t23386*t74898;
  t74919 = t74916 + t74918;
  t75617 = -1.*t72168*t23158*t23387;
  t75619 = t72107*t24532;
  t75628 = t75617 + t75619;
  t75616 = -3.e-6*t72168*t23152*t23386;
  t75632 = 3.e-6*t23145*t75628;
  t75633 = t24336*t74898;
  t75634 = t75616 + t75632 + t75633;
  t75637 = t72168*t23152*t23386;
  t75638 = t22691*t75628;
  t75641 = t75637 + t75638 + t74906;
  t75645 = t32323*t72168*t23152;
  t75646 = -1.*t23386*t75628;
  t75647 = 3.e-6*t23386*t74898;
  t75648 = t75645 + t75646 + t75647;
  t75748 = -1.000000000009*t72168*t23152*t23386;
  t75811 = -1.*t22691*t75628;
  t75852 = 3.e-6*t22691*t74898;
  t75853 = t75748 + t75811 + t75852;
  t75855 = -3.e-6*t22691*t72168*t23152;
  t75858 = 3.e-6*t23386*t75628;
  t75859 = -9.e-12*t23386*t74898;
  t75863 = t75855 + t75858 + t75859;
  t75880 = t22691*t72168*t23152;
  t75881 = t75880 + t75646 + t75647;
  p_output1[0]=var2[0] + (0.2000000000018*t23152*t23386 + 6.000000000054e-7*t23145*t23387*t24532 - 1.*t23158*t23387*t52922 + t38223*t71915 + t38139*t72022 + t38007*t72038 + 0.100001*(t38380*t71915 + t38334*t72022 + t38292*t72038) - 0.3*(t38334*t71915 + t38411*t72022 + t38403*t72038) + 0.2*(-1.*t38292*t71915 - 1.*t38403*t72022 - 1.*t38832*t72038))*var2[4] + (-6.000000000054e-7*t23145*t23152*t23158 - 1.*t23152*t24532*t52922 + t38223*t52996 + t38139*t53011 + t38007*t62822 + 0.100001*(t38380*t52996 + t38334*t53011 + t38292*t62822) - 0.3*(t38334*t52996 + t38411*t53011 + t38403*t62822) + 0.2*(-1.*t38292*t52996 - 1.*t38403*t53011 - 1.*t38832*t62822))*var2[5] + (-0.2000000000018*t23152*t23158*t23386 + 0.2000000000018*t22691*t23387 - 6.000000000054e-7*t23152*t23386*t24532 + t38007*t38045 + t38139*t38165 + t38223*t38275 + 0.100001*(t38045*t38292 + t38165*t38334 + t38275*t38380) - 0.3*(t38275*t38334 + t38045*t38403 + t38165*t38411) + 0.2*(-1.*t38275*t38292 - 1.*t38165*t38403 - 1.*t38045*t38832))*var2[10] + (t21665*t28217 + t31782*t32005 + t32273*t32399 + 0.2*(1.000000000009*t2229*t32005 - 1.*t28217*t35396 - 1.*t32399*t36903) + 0.100001*(-1.8e-11*t2229*t28217 + t32399*t35396 + t32005*t36939) - 0.3*(-1.000000000009*t2229*t32399 + t28217*t36939 + t32005*t37619))*var2[12];
  p_output1[1]=var2[1] + (-0.2000000000018*t23152*t23386*t72168 + t52922*t72174 + 6.000000000054e-7*t23145*t72178 + t38223*t72185 + t38139*t72192 + t38007*t72209 + 0.100001*(t38380*t72185 + t38334*t72192 + t38292*t72209) - 0.3*(t38334*t72185 + t38411*t72192 + t38403*t72209) + 0.2*(-1.*t38292*t72185 - 1.*t38403*t72192 - 1.*t38832*t72209))*var2[3] + (0.2000000000018*t23386*t23387*t72107 - 6.000000000054e-7*t23145*t23152*t24532*t72107 + t23152*t23158*t52922*t72107 + t38223*t72117 + t38139*t72123 + t38007*t72129 + 0.100001*(t38380*t72117 + t38334*t72123 + t38292*t72129) - 0.3*(t38334*t72117 + t38411*t72123 + t38403*t72129) + 0.2*(-1.*t38292*t72117 - 1.*t38403*t72123 - 1.*t38832*t72129))*var2[4] + (6.000000000054e-7*t23145*t72261 + t52922*t72269 + t38223*t72280 + t38139*t72287 + t38007*t72292 + 0.100001*(t38380*t72280 + t38334*t72287 + t38292*t72292) - 0.3*(t38334*t72280 + t38411*t72287 + t38403*t72292) + 0.2*(-1.*t38292*t72280 - 1.*t38403*t72287 - 1.*t38832*t72292))*var2[5] + (-0.2000000000018*t22691*t23152*t72107 + 6.000000000054e-7*t23386*t72269 - 0.2000000000018*t23386*t73247 + t38007*t74058 + t38223*t74334 + t38139*t74495 + 0.100001*(t38292*t74058 + t38380*t74334 + t38334*t74495) + 0.2*(-1.*t38832*t74058 - 1.*t38292*t74334 - 1.*t38403*t74495) - 0.3*(t38403*t74058 + t38334*t74334 + t38411*t74495))*var2[10] + (t21665*t73250 + t31782*t73260 + t32273*t73273 - 0.3*(t36939*t73250 + t37619*t73260 - 1.000000000009*t2229*t73273) + 0.100001*(-1.8e-11*t2229*t73250 + t36939*t73260 + t35396*t73273) + 0.2*(-1.*t35396*t73250 + 1.000000000009*t2229*t73260 - 1.*t36903*t73273))*var2[12];
  p_output1[2]=var2[2] + (-0.2000000000018*t23152*t23386*t72107 + 6.000000000054e-7*t23145*t72269 + t52922*t73247 + t38223*t73250 + t38139*t73260 + t38007*t73273 + 0.100001*(t38380*t73250 + t38334*t73260 + t38292*t73273) - 0.3*(t38334*t73250 + t38411*t73260 + t38403*t73273) + 0.2*(-1.*t38292*t73250 - 1.*t38403*t73260 - 1.*t38832*t73273))*var2[3] + (-0.2000000000018*t23386*t23387*t72168 + 6.000000000054e-7*t23145*t23152*t24532*t72168 - 1.*t23152*t23158*t52922*t72168 + t38223*t74644 + t38139*t74662 + t38007*t74673 + 0.100001*(t38380*t74644 + t38334*t74662 + t38292*t74673) - 0.3*(t38334*t74644 + t38411*t74662 + t38403*t74673) + 0.2*(-1.*t38292*t74644 - 1.*t38403*t74662 - 1.*t38832*t74673))*var2[4] + (6.000000000054e-7*t23145*t72174 + t52922*t74898 + t38223*t74907 + t38139*t74912 + t38007*t74919 + 0.100001*(t38380*t74907 + t38334*t74912 + t38292*t74919) - 0.3*(t38334*t74907 + t38411*t74912 + t38403*t74919) + 0.2*(-1.*t38292*t74907 - 1.*t38403*t74912 - 1.*t38832*t74919))*var2[5] + (0.2000000000018*t22691*t23152*t72168 + 6.000000000054e-7*t23386*t74898 - 0.2000000000018*t23386*t75628 + t38007*t75853 + t38223*t75863 + t38139*t75881 + 0.100001*(t38292*t75853 + t38380*t75863 + t38334*t75881) + 0.2*(-1.*t38832*t75853 - 1.*t38292*t75863 - 1.*t38403*t75881) - 0.3*(t38403*t75853 + t38334*t75863 + t38411*t75881))*var2[10] + (t21665*t75634 + t31782*t75641 + t32273*t75648 - 0.3*(t36939*t75634 + t37619*t75641 - 1.000000000009*t2229*t75648) + 0.100001*(-1.8e-11*t2229*t75634 + t36939*t75641 + t35396*t75648) + 0.2*(-1.*t35396*t75634 + 1.000000000009*t2229*t75641 - 1.*t36903*t75648))*var2[12];
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

#include "impact_velocity_LeftBackFoot.hh"

namespace Flight2
{

void impact_velocity_LeftBackFoot_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
