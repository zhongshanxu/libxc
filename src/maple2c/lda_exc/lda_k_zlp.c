/* 
  This file was generated automatically with ./scripts/maple2c.pl.
  Do not edit this file directly as it can be overwritten!!

  This Source Code Form is subject to the terms of the Mozilla Public
  License, v. 2.0. If a copy of the MPL was not distributed with this
  file, You can obtain one at http://mozilla.org/MPL/2.0/.

  Maple version     : Maple 2020 (X86 64 LINUX)
  Maple source      : ./maple/lda_exc/lda_k_zlp.mpl
  Type of functional: lda_exc
*/

#define maple2c_order 4
#define MAPLE2C_FLAGS (XC_FLAGS_I_HAVE_EXC | XC_FLAGS_I_HAVE_VXC | XC_FLAGS_I_HAVE_FXC | XC_FLAGS_I_HAVE_KXC | XC_FLAGS_I_HAVE_LXC)


static inline void
func_unpol(const xc_func_type *p, int order, const double *rho , double *zk LDA_OUT_PARAMS_NO_EXC(XC_COMMA double *, ))
{

#ifndef XC_DONT_COMPILE_EXC
  double t1, t2, t4, t5, t7, t8, t10, t11;
  double t12, t13, t14, t16, t17, t20, t22;

#ifndef XC_DONT_COMPILE_VXC
  double t24, t26, t27, t32, t35;

#ifndef XC_DONT_COMPILE_FXC
  double t39, t49, t54, t55, t56, t59;

#ifndef XC_DONT_COMPILE_KXC
  double t65, t79, t88, t90, t93;

#ifndef XC_DONT_COMPILE_LXC
  double t112, t126;
#endif

#endif

#endif

#endif

#endif



  t1 = M_CBRT3;
  t2 = t1 * t1;
  t4 = POW_1_3(0.1e1 / M_PI);
  t5 = 0.1e1 / t4;
  t7 = M_CBRT4;
  t8 = t2 * t5 * t7;
  t10 = my_piecewise3(0.1e1 <= p->zeta_threshold, 0, 1);
  t11 = POW_1_3(rho[0]);
  t12 = t11 * t11;
  t13 = t10 * t12;
  t14 = 0.1e1 / t11;
  t16 = 0.1e1 + 0.51020408163265306120e3 * t14;
  t17 = log(t16);
  t20 = 0.1e1 - 0.19600000000000000000e-2 * t11 * t17;
  t22 = t8 * t13 * t20;
  if(zk != NULL && (p->info->flags & XC_FLAGS_HAVE_EXC))
    zk[0] = 0.10790666666666666667e1 * t22;

#ifndef XC_DONT_COMPILE_VXC

  if(order < 1) return;


  t24 = t12 * rho[0];
  t26 = t24 * t2 * t5;
  t27 = t7 * t10;
  t32 = 0.1e1 / t16;
  t35 = -0.65333333333333333333e-3 / t12 * t17 + 0.33333333333333333331e0 / rho[0] * t32;
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vrho[0] = 0.17984444444444444445e1 * t22 + 0.10790666666666666667e1 * t26 * t27 * t35;

#ifndef XC_DONT_COMPILE_FXC

  if(order < 2) return;


  t39 = t10 * t14;
  t49 = rho[0] * rho[0];
  t54 = 0.1e1 / t11 / t49;
  t55 = t16 * t16;
  t56 = 0.1e1 / t55;
  t59 = 0.43555555555555555555e-3 / t24 * t17 - 0.22222222222222222221e0 / t49 * t32 + 0.56689342403628117906e2 * t54 * t56;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[0] = 0.11989629629629629630e1 * t8 * t39 * t20 + 0.35968888888888888890e1 * t8 * t13 * t35 + 0.10790666666666666667e1 * t26 * t27 * t59;

#ifndef XC_DONT_COMPILE_KXC

  if(order < 3) return;


  t65 = t10 / t11 / rho[0];
  t79 = t49 * rho[0];
  t88 = 0.1e1 / t12 / t79;
  t90 = 0.1e1 / t55 / t16;
  t93 = -0.72592592592592592592e-3 / t12 / t49 * t17 + 0.37037037037037037035e0 / t79 * t32 - 0.17006802721088435372e3 / t11 / t79 * t56 + 0.19282089252934733980e5 * t88 * t90;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[0] = -0.39965432098765432100e0 * t8 * t65 * t20 + 0.35968888888888888890e1 * t8 * t39 * t35 + 0.53953333333333333335e1 * t8 * t13 * t59 + 0.10790666666666666667e1 * t26 * t27 * t93;

#ifndef XC_DONT_COMPILE_LXC

  if(order < 4) return;


  t112 = t49 * t49;
  t126 = t55 * t55;
  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rho4[0] = 0.53287242798353909467e0 * t8 * t10 * t54 * t20 - 0.15986172839506172840e1 * t8 * t65 * t35 + 0.71937777777777777780e1 * t8 * t39 * t59 + 0.71937777777777777780e1 * t8 * t13 * t93 + 0.10790666666666666667e1 * t26 * t27 * (0.19358024691358024691e-2 * t88 * t17 - 0.98765432098765432089e0 / t112 * t32 + 0.62988158226253464341e3 / t11 / t112 * t56 - 0.12854726168623155987e6 / t12 / t112 * t90 + 0.98378006392524152953e7 / t112 / rho[0] / t126);

#ifndef XC_DONT_COMPILE_MXC

  if(order < 5) return;


#endif

#endif

#endif

#endif

#endif


}


static inline void
func_pol(const xc_func_type *p, int order, const double *rho , double *zk LDA_OUT_PARAMS_NO_EXC(XC_COMMA double *, ))
{

#ifndef XC_DONT_COMPILE_EXC
  double t1, t2, t4, t5, t7, t8, t9, t10;
  double t11, t12, t13, t14, t15, t16, t18, t19;
  double t20, t21, t22, t24, t26, t27, t28, t29;
  double t30, t32, t33, t36, t38;

#ifndef XC_DONT_COMPILE_VXC
  double t39, t40, t42, t43, t44, t45, t46, t49;
  double t50, t53, t55, t56, t60, t64, t67, t70;
  double t71, t74, t75, t78, t81, t82;

#ifndef XC_DONT_COMPILE_FXC
  double t85, t87, t89, t92, t95, t96, t97, t100;
  double t101, t102, t104, t108, t109, t110, t113, t117;
  double t119, t120, t125, t133, t134, t135, t138, t141;
  double t144, t145, t147, t150, t154, t155, t158, t162;
  double t165, t166, t169, t170, t174, t178, t182, t183;
  double t186, t190, t193, t194;

#ifndef XC_DONT_COMPILE_KXC
  double t198, t200, t202, t204, t207, t210, t211, t214;
  double t217, t220, t222, t223, t226, t229, t230, t231;
  double t233, t237, t239, t240, t243, t246, t250, t252;
  double t253, t258, t261, t274, t276, t279, t282, t287;
  double t288, t291, t292, t294, t297, t308, t309, t312;
  double t323, t326, t327, t330, t332, t333, t334, t342;
  double t344, t349, t354, t358, t359, t364, t367, t371;
  double t374, t375, t378, t379, t386, t392, t396, t397;
  double t402, t406, t409, t410;

#ifndef XC_DONT_COMPILE_LXC
  double t417, t421, t426, t429, t432, t435, t438, t442;
  double t445, t448, t449, t451, t452, t458, t464, t465;
  double t467, t471, t472, t474, t475, t481, t490, t498;
  double t501, t504, t518, t525, t530, t537, t540, t541;
  double t542, t544, t546, t547, t548, t574, t576, t601;
  double t603, t611, t614, t615, t617, t619, t628, t637;
  double t639, t641, t652, t655, t671, t697, t705, t708;
  double t710, t717, t743, t747, t768, t776, t778, t780;
  double t789, t794, t800, t804, t805, t810, t819;
#endif

#endif

#endif

#endif

#endif



  t1 = M_CBRT3;
  t2 = t1 * t1;
  t4 = POW_1_3(0.1e1 / M_PI);
  t5 = 0.1e1 / t4;
  t7 = M_CBRT4;
  t8 = t2 * t5 * t7;
  t9 = rho[0] - rho[1];
  t10 = rho[0] + rho[1];
  t11 = 0.1e1 / t10;
  t12 = t9 * t11;
  t13 = 0.1e1 + t12;
  t14 = t13 <= p->zeta_threshold;
  t15 = POW_1_3(t13);
  t16 = t15 * t15;
  t18 = my_piecewise3(t14, 0, t16 * t13);
  t19 = 0.1e1 - t12;
  t20 = t19 <= p->zeta_threshold;
  t21 = POW_1_3(t19);
  t22 = t21 * t21;
  t24 = my_piecewise3(t20, 0, t22 * t19);
  t26 = t18 / 0.2e1 + t24 / 0.2e1;
  t27 = POW_1_3(t10);
  t28 = t27 * t27;
  t29 = t26 * t28;
  t30 = 0.1e1 / t27;
  t32 = 0.1e1 + 0.51020408163265306120e3 * t30;
  t33 = log(t32);
  t36 = 0.1e1 - 0.19600000000000000000e-2 * t27 * t33;
  t38 = t8 * t29 * t36;
  if(zk != NULL && (p->info->flags & XC_FLAGS_HAVE_EXC))
    zk[0] = 0.10790666666666666667e1 * t38;

#ifndef XC_DONT_COMPILE_VXC

  if(order < 1) return;


  t39 = 0.17984444444444444445e1 * t38;
  t40 = t28 * t10;
  t42 = t40 * t2 * t5;
  t43 = t10 * t10;
  t44 = 0.1e1 / t43;
  t45 = t9 * t44;
  t46 = t11 - t45;
  t49 = my_piecewise3(t14, 0, 0.5e1 / 0.3e1 * t16 * t46);
  t50 = -t46;
  t53 = my_piecewise3(t20, 0, 0.5e1 / 0.3e1 * t22 * t50);
  t55 = t49 / 0.2e1 + t53 / 0.2e1;
  t56 = t7 * t55;
  t60 = t7 * t26;
  t64 = 0.1e1 / t32;
  t67 = -0.65333333333333333333e-3 / t28 * t33 + 0.33333333333333333331e0 * t11 * t64;
  t70 = 0.10790666666666666667e1 * t42 * t60 * t67;
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vrho[0] = t39 + 0.10790666666666666667e1 * t42 * t56 * t36 + t70;

  t71 = -t11 - t45;
  t74 = my_piecewise3(t14, 0, 0.5e1 / 0.3e1 * t16 * t71);
  t75 = -t71;
  t78 = my_piecewise3(t20, 0, 0.5e1 / 0.3e1 * t22 * t75);
  t81 = t7 * (t74 / 0.2e1 + t78 / 0.2e1);
  t82 = t81 * t36;
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vrho[1] = t39 + 0.10790666666666666667e1 * t42 * t82 + t70;

#ifndef XC_DONT_COMPILE_FXC

  if(order < 2) return;


  t85 = t55 * t28;
  t87 = t8 * t85 * t36;
  t89 = t26 * t30;
  t92 = 0.11989629629629629630e1 * t8 * t89 * t36;
  t95 = 0.35968888888888888890e1 * t8 * t29 * t67;
  t96 = 0.1e1 / t15;
  t97 = t46 * t46;
  t100 = t43 * t10;
  t101 = 0.1e1 / t100;
  t102 = t9 * t101;
  t104 = -0.2e1 * t44 + 0.2e1 * t102;
  t108 = my_piecewise3(t14, 0, 0.10e2 / 0.9e1 * t96 * t97 + 0.5e1 / 0.3e1 * t16 * t104);
  t109 = 0.1e1 / t21;
  t110 = t50 * t50;
  t113 = -t104;
  t117 = my_piecewise3(t20, 0, 0.10e2 / 0.9e1 * t109 * t110 + 0.5e1 / 0.3e1 * t22 * t113);
  t119 = t108 / 0.2e1 + t117 / 0.2e1;
  t120 = t7 * t119;
  t125 = t42 * t56 * t67;
  t133 = 0.1e1 / t27 / t43;
  t134 = t32 * t32;
  t135 = 0.1e1 / t134;
  t138 = 0.43555555555555555555e-3 / t40 * t33 - 0.22222222222222222221e0 * t44 * t64 + 0.56689342403628117906e2 * t133 * t135;
  t141 = 0.10790666666666666667e1 * t42 * t60 * t138;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[0] = 0.35968888888888888890e1 * t87 + t92 + t95 + 0.10790666666666666667e1 * t42 * t120 * t36 + 0.21581333333333333334e1 * t125 + t141;

  t144 = t28 * t2 * t5;
  t145 = t144 * t82;
  t147 = t96 * t71;
  t150 = t16 * t9;
  t154 = my_piecewise3(t14, 0, 0.10e2 / 0.9e1 * t147 * t46 + 0.10e2 / 0.3e1 * t150 * t101);
  t155 = t109 * t75;
  t158 = t22 * t9;
  t162 = my_piecewise3(t20, 0, 0.10e2 / 0.9e1 * t155 * t50 - 0.10e2 / 0.3e1 * t158 * t101);
  t165 = t7 * (t154 / 0.2e1 + t162 / 0.2e1);
  t166 = t165 * t36;
  t169 = t81 * t67;
  t170 = t42 * t169;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[1] = 0.17984444444444444445e1 * t87 + t92 + t95 + 0.17984444444444444445e1 * t145 + 0.10790666666666666667e1 * t42 * t166 + 0.10790666666666666667e1 * t170 + 0.10790666666666666667e1 * t125 + t141;

  t174 = t71 * t71;
  t178 = 0.2e1 * t44 + 0.2e1 * t102;
  t182 = my_piecewise3(t14, 0, 0.10e2 / 0.9e1 * t96 * t174 + 0.5e1 / 0.3e1 * t16 * t178);
  t183 = t75 * t75;
  t186 = -t178;
  t190 = my_piecewise3(t20, 0, 0.10e2 / 0.9e1 * t109 * t183 + 0.5e1 / 0.3e1 * t22 * t186);
  t193 = t7 * (t182 / 0.2e1 + t190 / 0.2e1);
  t194 = t193 * t36;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[2] = 0.35968888888888888890e1 * t145 + t92 + t95 + 0.10790666666666666667e1 * t42 * t194 + 0.21581333333333333334e1 * t170 + t141;

#ifndef XC_DONT_COMPILE_KXC

  if(order < 3) return;


  t198 = t119 * t28;
  t200 = t8 * t198 * t36;
  t202 = t55 * t30;
  t204 = t8 * t202 * t36;
  t207 = t8 * t85 * t67;
  t210 = 0.1e1 / t27 / t10;
  t211 = t26 * t210;
  t214 = 0.39965432098765432100e0 * t8 * t211 * t36;
  t217 = 0.35968888888888888890e1 * t8 * t89 * t67;
  t220 = 0.53953333333333333335e1 * t8 * t29 * t138;
  t222 = 0.1e1 / t15 / t13;
  t223 = t97 * t46;
  t226 = t96 * t46;
  t229 = t43 * t43;
  t230 = 0.1e1 / t229;
  t231 = t9 * t230;
  t233 = 0.6e1 * t101 - 0.6e1 * t231;
  t237 = my_piecewise3(t14, 0, -0.10e2 / 0.27e2 * t222 * t223 + 0.10e2 / 0.3e1 * t226 * t104 + 0.5e1 / 0.3e1 * t16 * t233);
  t239 = 0.1e1 / t21 / t19;
  t240 = t110 * t50;
  t243 = t109 * t50;
  t246 = -t233;
  t250 = my_piecewise3(t20, 0, -0.10e2 / 0.27e2 * t239 * t240 + 0.10e2 / 0.3e1 * t243 * t113 + 0.5e1 / 0.3e1 * t22 * t246);
  t252 = t237 / 0.2e1 + t250 / 0.2e1;
  t253 = t7 * t252;
  t258 = t42 * t120 * t67;
  t261 = t42 * t56 * t138;
  t274 = 0.1e1 / t28 / t100;
  t276 = 0.1e1 / t134 / t32;
  t279 = -0.72592592592592592592e-3 / t28 / t43 * t33 + 0.37037037037037037035e0 * t101 * t64 - 0.17006802721088435372e3 / t27 / t100 * t135 + 0.19282089252934733980e5 * t274 * t276;
  t282 = 0.10790666666666666667e1 * t42 * t60 * t279;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[0] = 0.53953333333333333335e1 * t200 + 0.35968888888888888890e1 * t204 + 0.10790666666666666667e2 * t207 - t214 + t217 + t220 + 0.10790666666666666667e1 * t42 * t253 * t36 + 0.32372000000000000001e1 * t258 + 0.32372000000000000001e1 * t261 + t282;

  t287 = t30 * t2 * t5;
  t288 = t287 * t82;
  t291 = 0.35968888888888888890e1 * t144 * t166;
  t292 = t144 * t169;
  t294 = t222 * t71;
  t297 = t96 * t9;
  t308 = my_piecewise3(t14, 0, -0.10e2 / 0.27e2 * t294 * t97 + 0.40e2 / 0.9e1 * t297 * t101 * t46 + 0.10e2 / 0.9e1 * t147 * t104 + 0.10e2 / 0.3e1 * t16 * t101 - 0.10e2 * t150 * t230);
  t309 = t239 * t75;
  t312 = t109 * t9;
  t323 = my_piecewise3(t20, 0, -0.10e2 / 0.27e2 * t309 * t110 - 0.40e2 / 0.9e1 * t312 * t101 * t50 + 0.10e2 / 0.9e1 * t155 * t113 - 0.10e2 / 0.3e1 * t22 * t101 + 0.10e2 * t158 * t230);
  t326 = t7 * (t308 / 0.2e1 + t323 / 0.2e1);
  t327 = t326 * t36;
  t330 = t165 * t67;
  t332 = 0.21581333333333333334e1 * t42 * t330;
  t333 = t81 * t138;
  t334 = t42 * t333;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[1] = 0.17984444444444444445e1 * t200 + 0.23979259259259259260e1 * t204 + 0.71937777777777777780e1 * t207 - t214 + t217 + t220 + 0.11989629629629629630e1 * t288 + t291 + 0.35968888888888888890e1 * t292 + 0.10790666666666666667e1 * t42 * t327 + t332 + 0.10790666666666666667e1 * t334 + 0.10790666666666666667e1 * t258 + 0.21581333333333333334e1 * t261 + t282;

  t342 = t144 * t194;
  t344 = t222 * t174;
  t349 = t96 * t178;
  t354 = -0.2e1 * t101 - 0.6e1 * t231;
  t358 = my_piecewise3(t14, 0, -0.10e2 / 0.27e2 * t344 * t46 + 0.40e2 / 0.9e1 * t147 * t102 + 0.10e2 / 0.9e1 * t349 * t46 + 0.5e1 / 0.3e1 * t16 * t354);
  t359 = t239 * t183;
  t364 = t109 * t186;
  t367 = -t354;
  t371 = my_piecewise3(t20, 0, -0.10e2 / 0.27e2 * t359 * t50 - 0.40e2 / 0.9e1 * t155 * t102 + 0.10e2 / 0.9e1 * t364 * t50 + 0.5e1 / 0.3e1 * t22 * t367);
  t374 = t7 * (t358 / 0.2e1 + t371 / 0.2e1);
  t375 = t374 * t36;
  t378 = t193 * t67;
  t379 = t42 * t378;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[2] = 0.23979259259259259260e1 * t288 + t291 + 0.71937777777777777780e1 * t292 + 0.11989629629629629630e1 * t204 - t214 + t217 + 0.35968888888888888890e1 * t207 + t220 + 0.17984444444444444445e1 * t342 + 0.10790666666666666667e1 * t42 * t375 + 0.10790666666666666667e1 * t379 + t332 + 0.21581333333333333334e1 * t334 + 0.10790666666666666667e1 * t261 + t282;

  t386 = t174 * t71;
  t392 = -0.6e1 * t101 - 0.6e1 * t231;
  t396 = my_piecewise3(t14, 0, -0.10e2 / 0.27e2 * t222 * t386 + 0.10e2 / 0.3e1 * t147 * t178 + 0.5e1 / 0.3e1 * t16 * t392);
  t397 = t183 * t75;
  t402 = -t392;
  t406 = my_piecewise3(t20, 0, -0.10e2 / 0.27e2 * t239 * t397 + 0.10e2 / 0.3e1 * t155 * t186 + 0.5e1 / 0.3e1 * t22 * t402);
  t409 = t7 * (t396 / 0.2e1 + t406 / 0.2e1);
  t410 = t409 * t36;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[3] = 0.35968888888888888890e1 * t288 + 0.53953333333333333335e1 * t342 + 0.10790666666666666667e2 * t292 - t214 + t217 + t220 + 0.10790666666666666667e1 * t42 * t410 + 0.32372000000000000001e1 * t379 + 0.32372000000000000001e1 * t334 + t282;

#ifndef XC_DONT_COMPILE_LXC

  if(order < 4) return;


  t417 = t8 * t119 * t30 * t36;
  t421 = t8 * t55 * t210 * t36;
  t426 = 0.53287242798353909467e0 * t8 * t26 * t133 * t36;
  t429 = t8 * t252 * t28 * t36;
  t432 = t8 * t198 * t67;
  t435 = t8 * t202 * t67;
  t438 = t8 * t85 * t138;
  t442 = 0.15986172839506172840e1 * t8 * t211 * t67;
  t445 = 0.71937777777777777780e1 * t8 * t89 * t138;
  t448 = 0.71937777777777777780e1 * t8 * t29 * t279;
  t449 = t13 * t13;
  t451 = 0.1e1 / t15 / t449;
  t452 = t97 * t97;
  t458 = t104 * t104;
  t464 = 0.1e1 / t229 / t10;
  t465 = t9 * t464;
  t467 = -0.24e2 * t230 + 0.24e2 * t465;
  t471 = my_piecewise3(t14, 0, 0.40e2 / 0.81e2 * t451 * t452 - 0.20e2 / 0.9e1 * t222 * t97 * t104 + 0.10e2 / 0.3e1 * t96 * t458 + 0.40e2 / 0.9e1 * t226 * t233 + 0.5e1 / 0.3e1 * t16 * t467);
  t472 = t19 * t19;
  t474 = 0.1e1 / t21 / t472;
  t475 = t110 * t110;
  t481 = t113 * t113;
  t490 = my_piecewise3(t20, 0, 0.40e2 / 0.81e2 * t474 * t475 - 0.20e2 / 0.9e1 * t239 * t110 * t113 + 0.10e2 / 0.3e1 * t109 * t481 + 0.40e2 / 0.9e1 * t243 * t246 - 0.5e1 / 0.3e1 * t22 * t467);
  t498 = t42 * t253 * t67;
  t501 = t42 * t120 * t138;
  t504 = t42 * t56 * t279;
  t518 = t134 * t134;
  t525 = 0.10790666666666666667e1 * t42 * t60 * (0.19358024691358024691e-2 * t274 * t33 - 0.98765432098765432089e0 * t230 * t64 + 0.62988158226253464341e3 / t27 / t229 * t135 - 0.12854726168623155987e6 / t28 / t229 * t276 + 0.98378006392524152953e7 * t464 / t518);
  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rho4[0] = 0.71937777777777777780e1 * t417 - 0.15986172839506172840e1 * t421 + t426 + 0.71937777777777777780e1 * t429 + 0.21581333333333333334e2 * t432 + 0.14387555555555555556e2 * t435 + 0.21581333333333333334e2 * t438 - t442 + t445 + t448 + 0.10790666666666666667e1 * t42 * t7 * (t471 / 0.2e1 + t490 / 0.2e1) * t36 + 0.43162666666666666668e1 * t498 + 0.64744000000000000002e1 * t501 + 0.43162666666666666668e1 * t504 + t525;

  t530 = t210 * t2 * t5 * t82;
  t537 = 0.35968888888888888890e1 * t417 - 0.11989629629629629630e1 * t421 + t426 - 0.39965432098765432100e0 * t530 + 0.17984444444444444445e1 * t429 + 0.10790666666666666667e2 * t432 + 0.10790666666666666667e2 * t435 + 0.16186000000000000001e2 * t438 - t442 + t445 + t448 + 0.10790666666666666667e1 * t498;
  t540 = t287 * t166;
  t541 = 0.35968888888888888890e1 * t540;
  t542 = t287 * t169;
  t544 = t144 * t327;
  t546 = t144 * t330;
  t547 = 0.10790666666666666667e2 * t546;
  t548 = t144 * t333;
  t574 = 0.40e2 * t150 * t464;
  t576 = my_piecewise3(t14, 0, 0.40e2 / 0.81e2 * t451 * t71 * t223 - 0.20e2 / 0.9e1 * t222 * t9 * t101 * t97 - 0.10e2 / 0.9e1 * t294 * t46 * t104 + 0.20e2 / 0.3e1 * t96 * t101 * t46 - 0.20e2 * t297 * t230 * t46 + 0.20e2 / 0.3e1 * t297 * t101 * t104 + 0.10e2 / 0.9e1 * t147 * t233 - 0.20e2 * t16 * t230 + t574);
  t601 = 0.40e2 * t158 * t464;
  t603 = my_piecewise3(t20, 0, 0.40e2 / 0.81e2 * t474 * t75 * t240 + 0.20e2 / 0.9e1 * t239 * t9 * t101 * t110 - 0.10e2 / 0.9e1 * t309 * t50 * t113 - 0.20e2 / 0.3e1 * t109 * t101 * t50 + 0.20e2 * t312 * t230 * t50 - 0.20e2 / 0.3e1 * t312 * t101 * t113 + 0.10e2 / 0.9e1 * t155 * t246 + 0.20e2 * t22 * t230 - t601);
  t611 = t42 * t326 * t67;
  t614 = t42 * t165 * t138;
  t615 = 0.32372000000000000001e1 * t614;
  t617 = t42 * t81 * t279;
  t619 = 0.32372000000000000001e1 * t501 + 0.32372000000000000001e1 * t504 + t525 + t541 + 0.35968888888888888890e1 * t542 + 0.53953333333333333335e1 * t544 + t547 + 0.53953333333333333335e1 * t548 + 0.10790666666666666667e1 * t42 * t7 * (t576 / 0.2e1 + t603 / 0.2e1) * t36 + 0.32372000000000000001e1 * t611 + t615 + 0.10790666666666666667e1 * t617;
  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rho4[1] = t537 + t619;

  t628 = 0.11989629629629629630e1 * t417 - 0.79930864197530864200e0 * t421 + t426 + 0.35968888888888888890e1 * t432 + 0.71937777777777777780e1 * t435 + 0.10790666666666666667e2 * t438 - t442 + t445 + t448 + 0.10790666666666666667e1 * t501 + 0.21581333333333333334e1 * t504 + t525 - 0.79930864197530864200e0 * t530;
  t637 = t287 * t194;
  t639 = t144 * t375;
  t641 = t144 * t378;
  t652 = t9 * t9;
  t655 = 0.1e1 / t229 / t43;
  t671 = my_piecewise3(t14, 0, 0.40e2 / 0.81e2 * t451 * t174 * t97 - 0.80e2 / 0.27e2 * t294 * t46 * t9 * t101 - 0.10e2 / 0.27e2 * t344 * t104 + 0.80e2 / 0.9e1 * t96 * t652 * t655 + 0.40e2 / 0.9e1 * t147 * t101 - 0.40e2 / 0.3e1 * t147 * t231 - 0.10e2 / 0.27e2 * t222 * t178 * t97 + 0.20e2 / 0.9e1 * t96 * t354 * t46 + 0.10e2 / 0.9e1 * t349 * t104 + t574);
  t697 = my_piecewise3(t20, 0, 0.40e2 / 0.81e2 * t474 * t183 * t110 + 0.80e2 / 0.27e2 * t309 * t50 * t9 * t101 - 0.10e2 / 0.27e2 * t359 * t113 + 0.80e2 / 0.9e1 * t109 * t652 * t655 - 0.40e2 / 0.9e1 * t155 * t101 + 0.40e2 / 0.3e1 * t155 * t231 - 0.10e2 / 0.27e2 * t239 * t186 * t110 + 0.20e2 / 0.9e1 * t109 * t367 * t50 + 0.10e2 / 0.9e1 * t364 * t113 - t601);
  t705 = t42 * t374 * t67;
  t708 = t42 * t193 * t138;
  t710 = 0.47958518518518518520e1 * t540 + 0.71937777777777777780e1 * t542 + 0.35968888888888888890e1 * t544 + 0.14387555555555555556e2 * t546 + 0.10790666666666666667e2 * t548 + 0.21581333333333333334e1 * t611 + 0.43162666666666666668e1 * t614 + 0.21581333333333333334e1 * t617 + 0.11989629629629629630e1 * t637 + 0.35968888888888888890e1 * t639 + 0.35968888888888888890e1 * t641 + 0.10790666666666666667e1 * t42 * t7 * (t671 / 0.2e1 + t697 / 0.2e1) * t36 + 0.21581333333333333334e1 * t705 + 0.10790666666666666667e1 * t708;
  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rho4[2] = t628 + t710;

  t717 = -0.39965432098765432100e0 * t421 + t426 - 0.11989629629629629630e1 * t530 + 0.35968888888888888890e1 * t637 + 0.35968888888888888890e1 * t435 + 0.53953333333333333335e1 * t438 - t442 + t445 + t448 + 0.10790666666666666667e1 * t504 + t525 + t541;
  t743 = 0.12e2 * t230 + 0.24e2 * t465;
  t747 = my_piecewise3(t14, 0, 0.40e2 / 0.81e2 * t451 * t386 * t46 - 0.20e2 / 0.9e1 * t344 * t102 - 0.10e2 / 0.9e1 * t294 * t178 * t46 + 0.20e2 / 0.3e1 * t297 * t101 * t178 + 0.10e2 / 0.3e1 * t147 * t354 + 0.10e2 / 0.9e1 * t96 * t392 * t46 + 0.5e1 / 0.3e1 * t16 * t743);
  t768 = my_piecewise3(t20, 0, 0.40e2 / 0.81e2 * t474 * t397 * t50 + 0.20e2 / 0.9e1 * t359 * t102 - 0.10e2 / 0.9e1 * t309 * t186 * t50 - 0.20e2 / 0.3e1 * t312 * t101 * t186 + 0.10e2 / 0.3e1 * t155 * t367 + 0.10e2 / 0.9e1 * t109 * t402 * t50 - 0.5e1 / 0.3e1 * t22 * t743);
  t776 = t42 * t409 * t67;
  t778 = t144 * t410;
  t780 = 0.10790666666666666667e2 * t542 + t547 + 0.16186000000000000000e2 * t548 + t615 + 0.32372000000000000001e1 * t617 + 0.53953333333333333335e1 * t639 + 0.10790666666666666667e2 * t641 + 0.32372000000000000001e1 * t705 + 0.32372000000000000001e1 * t708 + 0.10790666666666666667e1 * t42 * t7 * (t747 / 0.2e1 + t768 / 0.2e1) * t36 + 0.10790666666666666667e1 * t776 + 0.17984444444444444445e1 * t778;
  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rho4[3] = t717 + t780;

  t789 = t174 * t174;
  t794 = t178 * t178;
  t800 = 0.24e2 * t230 + 0.24e2 * t465;
  t804 = my_piecewise3(t14, 0, 0.40e2 / 0.81e2 * t451 * t789 - 0.20e2 / 0.9e1 * t344 * t178 + 0.10e2 / 0.3e1 * t96 * t794 + 0.40e2 / 0.9e1 * t147 * t392 + 0.5e1 / 0.3e1 * t16 * t800);
  t805 = t183 * t183;
  t810 = t186 * t186;
  t819 = my_piecewise3(t20, 0, 0.40e2 / 0.81e2 * t474 * t805 - 0.20e2 / 0.9e1 * t359 * t186 + 0.10e2 / 0.3e1 * t109 * t810 + 0.40e2 / 0.9e1 * t155 * t402 - 0.5e1 / 0.3e1 * t22 * t800);
  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rho4[4] = t426 - 0.15986172839506172840e1 * t530 + 0.71937777777777777780e1 * t637 - t442 + t445 + t448 + t525 + 0.14387555555555555556e2 * t542 + 0.21581333333333333334e2 * t548 + 0.43162666666666666668e1 * t617 + 0.21581333333333333334e2 * t641 + 0.64744000000000000002e1 * t708 + 0.43162666666666666668e1 * t776 + 0.10790666666666666667e1 * t42 * t7 * (t804 / 0.2e1 + t819 / 0.2e1) * t36 + 0.71937777777777777780e1 * t778;

#ifndef XC_DONT_COMPILE_MXC

  if(order < 5) return;


#endif

#endif

#endif

#endif

#endif


}

