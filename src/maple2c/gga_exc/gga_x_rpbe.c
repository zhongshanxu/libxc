/* 
  This file was generated automatically with ./scripts/maple2c_new.pl.
  Do not edit this file directly as it can be overwritten!!

  This Source Code Form is subject to the terms of the Mozilla Public
  License, v. 2.0. If a copy of the MPL was not distributed with this
  file, You can obtain one at http://mozilla.org/MPL/2.0/.

  Maple version     : Maple 2016 (X86 64 LINUX)
  Maple source      : ./maple/gga_exc/gga_x_rpbe.mpl
  Type of functional: gga_exc
*/

#define maple2c_order 3

static inline void
func_unpol(const xc_func_type *p, int order, const double *rho, const double *sigma, double *zk, double *vrho, double *vsigma, double *v2rho2, double *v2rhosigma, double *v2sigma2, double *v3rho3, double *v3rho2sigma, double *v3rhosigma2, double *v3sigma3)
{
  double t1, t3, t4, t5, t6, t7, t8, t9;
  double t10, t12, t13, t14, t15, t16, t17, t19;
  double t20, t21, t24, t29, t32, t34, t39, t40;
  double t45, t55, t63, t64, t66, t71, t72, t75;
  double t76, t77, t78, t80, t81, t82, t85, t93;
  double t97, t106, t120, t127, t132, t133, t135, t136;
  double t139, t140, t142;

  gga_x_rpbe_params *params;

  assert(p->params != NULL);
  params = (gga_x_rpbe_params * )(p->params);

  t1 = M_CBRT3;
  t3 = POW_1_3(0.1e1 / M_PI);
  t4 = t1 * t3;
  t5 = M_CBRT4;
  t6 = t5 * t5;
  t7 = t4 * t6;
  t8 = M_CBRT2;
  t9 = t8 * t8;
  t10 = POW_1_3(rho[0]);
  t12 = M_CBRT6;
  t13 = params->rpbe_mu * t12;
  t14 = M_PI * M_PI;
  t15 = POW_1_3(t14);
  t16 = t15 * t15;
  t17 = 0.1e1 / t16;
  t19 = sigma[0] * t9;
  t20 = rho[0] * rho[0];
  t21 = t10 * t10;
  t24 = 0.1e1 / params->rpbe_kappa;
  t29 = exp(-t13 * t17 * t19 / t21 / t20 * t24 / 0.24e2);
  t32 = 0.1e1 + params->rpbe_kappa * (0.1e1 - t29);
  t34 = t7 * t9 * t10 * t32;
  if(zk != NULL && (p->info->flags & XC_FLAGS_HAVE_EXC))
    *zk = -0.3e1 / 0.16e2 * t34;

#ifndef XC_DONT_COMPILE_VXC

  if(order < 1) return;


  t39 = 0.1e1 / t10 / t20 * t1;
  t40 = t3 * t6;
  t45 = t13 * t17 * sigma[0] * t29;
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vrho[0] = -t34 / 0.4e1 + t39 * t40 * t8 * t45 / 0.24e2;

  t55 = t8 * params->rpbe_mu * t12 * t17 * t29;
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vsigma[0] = -0.1e1 / t10 / rho[0] * t1 * t40 * t55 / 0.64e2;

#ifndef XC_DONT_COMPILE_FXC

  if(order < 2) return;


  t63 = t6 * t8;
  t64 = t20 * rho[0];
  t66 = 0.1e1 / t10 / t64;
  t71 = t20 * t20;
  t72 = t71 * t20;
  t75 = params->rpbe_mu * params->rpbe_mu;
  t76 = t40 * t75;
  t77 = 0.1e1 / t72 * t1 * t76;
  t78 = t12 * t12;
  t80 = 0.1e1 / t15 / t14;
  t81 = t78 * t80;
  t82 = sigma[0] * sigma[0];
  t85 = t81 * t82 * t24 * t29;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[0] = -t7 * t9 / t21 * t32 / 0.12e2 - t4 * t63 * t66 * t45 / 0.24e2 + t77 * t85 / 0.108e3;

  t93 = 0.1e1 / t71 / rho[0] * t1;
  t97 = t81 * sigma[0] * t24 * t29;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rhosigma[0] = t39 * t40 * t55 / 0.48e2 - t93 * t76 * t97 / 0.288e3;

  t106 = t75 * t78 * t80 * t24 * t29;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigma2[0] = 0.1e1 / t71 * t1 * t40 * t106 / 0.768e3;

#ifndef XC_DONT_COMPILE_KXC

  if(order < 3) return;


  t120 = t71 * t64;
  t127 = t71 * t71;
  t132 = t75 * params->rpbe_mu;
  t133 = t40 * t132;
  t135 = t14 * t14;
  t136 = 0.1e1 / t135;
  t139 = params->rpbe_kappa * params->rpbe_kappa;
  t140 = 0.1e1 / t139;
  t142 = t140 * t9 * t29;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[0] = t7 * t9 / t21 / rho[0] * t32 / 0.18e2 + 0.17e2 / 0.108e3 * t4 * t63 / t10 / t71 * t45 - 0.7e1 / 0.108e3 * t4 * t6 / t120 * t75 * t85 + 0.1e1 / t21 / t127 / rho[0] * t1 * t133 * t136 * t82 * sigma[0] * t142 / 0.162e3;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho2sigma[0] = -0.7e1 / 0.144e3 * t66 * t1 * t40 * t55 + 0.19e2 / 0.864e3 * t77 * t97 - 0.1e1 / t21 / t127 * t1 * t133 * t136 * t82 * t142 / 0.432e3;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rhosigma2[0] = -t93 * t40 * t106 / 0.192e3 + 0.1e1 / t21 / t120 * t1 * t133 * t136 * t140 * t19 * t29 / 0.1152e4;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3sigma3[0] = -0.1e1 / t21 / t72 * t1 * t40 * t132 * t136 * t142 / 0.3072e4;

#ifndef XC_DONT_COMPILE_LXC

  if(order < 4) return;


#endif

#endif

#endif

#endif


}


static inline void
func_ferr(const xc_func_type *p, int order, const double *rho, const double *sigma, double *zk, double *vrho, double *vsigma, double *v2rho2, double *v2rhosigma, double *v2sigma2, double *v3rho3, double *v3rho2sigma, double *v3rhosigma2, double *v3sigma3)
{
  double t1, t3, t4, t5, t6, t7, t9, t10;
  double t11, t12, t13, t14, t16, t17, t21, t25;
  double t28, t30, t36, t37, t40, t48, t56, t60;
  double t63, t64, t67, t68, t69, t70, t72, t73;
  double t74, t77, t84, t88, t97, t111, t118, t125;
  double t127, t129, t130;

  gga_x_rpbe_params *params;

  assert(p->params != NULL);
  params = (gga_x_rpbe_params * )(p->params);

  t1 = M_CBRT3;
  t3 = POW_1_3(0.1e1 / M_PI);
  t4 = t1 * t3;
  t5 = M_CBRT4;
  t6 = t5 * t5;
  t7 = POW_1_3(rho[0]);
  t9 = M_CBRT6;
  t10 = params->rpbe_mu * t9;
  t11 = M_PI * M_PI;
  t12 = POW_1_3(t11);
  t13 = t12 * t12;
  t14 = 0.1e1 / t13;
  t16 = rho[0] * rho[0];
  t17 = t7 * t7;
  t21 = 0.1e1 / params->rpbe_kappa;
  t25 = exp(-t10 * t14 * sigma[0] / t17 / t16 * t21 / 0.24e2);
  t28 = 0.1e1 + params->rpbe_kappa * (0.1e1 - t25);
  t30 = t4 * t6 * t7 * t28;
  if(zk != NULL && (p->info->flags & XC_FLAGS_HAVE_EXC))
    *zk = -0.3e1 / 0.8e1 * t30;

#ifndef XC_DONT_COMPILE_VXC

  if(order < 1) return;


  t36 = t3 * t6;
  t37 = 0.1e1 / t7 / t16 * t1 * t36;
  t40 = t10 * t14 * sigma[0] * t25;
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vrho[0] = -t30 / 0.2e1 + t37 * t40 / 0.24e2;

  t48 = t10 * t14 * t25;
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vsigma[0] = -0.1e1 / t7 / rho[0] * t1 * t36 * t48 / 0.64e2;

#ifndef XC_DONT_COMPILE_FXC

  if(order < 2) return;


  t56 = t16 * rho[0];
  t60 = t4 * t6 / t7 / t56;
  t63 = t16 * t16;
  t64 = t63 * t16;
  t67 = params->rpbe_mu * params->rpbe_mu;
  t68 = t36 * t67;
  t69 = 0.1e1 / t64 * t1 * t68;
  t70 = t9 * t9;
  t72 = 0.1e1 / t12 / t11;
  t73 = t70 * t72;
  t74 = sigma[0] * sigma[0];
  t77 = t73 * t74 * t21 * t25;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[0] = -t4 * t6 / t17 * t28 / 0.6e1 - t60 * t40 / 0.24e2 + t69 * t77 / 0.216e3;

  t84 = 0.1e1 / t63 / rho[0] * t1;
  t88 = t73 * sigma[0] * t21 * t25;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rhosigma[0] = t37 * t48 / 0.48e2 - t84 * t68 * t88 / 0.576e3;

  t97 = t67 * t70 * t72 * t21 * t25;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigma2[0] = 0.1e1 / t63 * t1 * t36 * t97 / 0.1536e4;

#ifndef XC_DONT_COMPILE_KXC

  if(order < 3) return;


  t111 = t63 * t56;
  t118 = t63 * t63;
  t125 = t11 * t11;
  t127 = t67 * params->rpbe_mu / t125;
  t129 = params->rpbe_kappa * params->rpbe_kappa;
  t130 = 0.1e1 / t129;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[0] = t4 * t6 / t17 / rho[0] * t28 / 0.9e1 + 0.17e2 / 0.108e3 * t4 * t6 / t7 / t63 * t40 - 0.7e1 / 0.216e3 * t4 * t6 / t111 * t67 * t77 + 0.1e1 / t17 / t118 / rho[0] * t1 * t36 * t127 * t74 * sigma[0] * t130 * t25 / 0.324e3;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho2sigma[0] = -0.7e1 / 0.144e3 * t60 * t48 + 0.19e2 / 0.1728e4 * t69 * t88 - 0.1e1 / t17 / t118 * t1 * t36 * t127 * t74 * t130 * t25 / 0.864e3;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rhosigma2[0] = -t84 * t36 * t97 / 0.384e3 + 0.1e1 / t17 / t111 * t1 * t36 * t127 * t130 * sigma[0] * t25 / 0.2304e4;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3sigma3[0] = -0.1e1 / t17 / t64 * t1 * t36 * t127 * t130 * t25 / 0.6144e4;

#ifndef XC_DONT_COMPILE_LXC

  if(order < 4) return;


#endif

#endif

#endif

#endif


}


static inline void
func_pol(const xc_func_type *p, int order, const double *rho, const double *sigma, double *zk, double *vrho, double *vsigma, double *v2rho2, double *v2rhosigma, double *v2sigma2, double *v3rho3, double *v3rho2sigma, double *v3rhosigma2, double *v3sigma3)
{
  double t1, t3, t4, t5, t6, t7, t8, t9;
  double t10, t11, t13, t14, t15, t16, t17, t18;
  double t19, t20, t21, t22, t23, t24, t25, t26;
  double t27, t29, t31, t35, t38, t40, t42, t43;
  double t44, t45, t46, t47, t48, t50, t55, t58;
  double t60, t62, t63, t64, t65, t66, t67, t69;
  double t70, t72, t73, t74, t75, t76, t78, t79;
  double t80, t82, t83, t85, t88, t89, t90, t91;
  double t92, t93, t95, t96, t97, t99, t100, t104;
  double t105, t107, t108, t109, t110, t112, t113, t114;
  double t116, t117, t119, t122, t123, t124, t128, t129;
  double t131, t134, t138, t141, t144, t146, t147, t148;
  double t149, t150, t151, t153, t154, t155, t157, t158;
  double t160, t161, t162, t163, t164, t165, t166, t167;
  double t168, t169, t170, t171, t172, t174, t175, t177;
  double t180, t181, t183, t184, t185, t186, t188, t191;
  double t192, t193, t194, t196, t197, t199, t200, t201;
  double t202, t205, t206, t208, t209, t210, t211, t212;
  double t213, t214, t215, t217, t218, t219, t221, t222;
  double t223, t224, t226, t227, t230, t231, t232, t234;
  double t235, t236, t237, t239, t242, t244, t245, t246;
  double t249, t250, t251, t253, t257, t258, t259, t260;
  double t262, t265, t267, t268, t270, t274, t275, t276;
  double t277, t278, t279, t282, t283, t285, t288, t289;
  double t291, t292, t293, t294, t295, t297, t298, t299;
  double t300, t302, t303, t304, t305, t306, t307, t308;
  double t309, t310, t312, t313, t314, t315, t317, t320;
  double t321, t322, t324, t325, t326, t329, t330, t332;
  double t333, t334, t335, t337, t339, t340, t341, t343;
  double t348, t351, t353, t356, t357, t358, t359, t360;
  double t363, t364, t365, t366, t368, t372, t377, t382;
  double t386, t389, t390, t391, t392, t393, t397, t398;
  double t400, t403, t405, t407, t410, t416, t418, t423;
  double t425, t427, t429, t435, t451, t452, t458, t460;
  double t462, t464, t467, t468, t474, t476, t478, t480;
  double t482, t486, t490, t492, t498, t499, t507, t509;
  double t517, t522, t533, t536, t538, t543, t544, t551;
  double t552, t557, t563, t564, t565, t566, t567, t571;
  double t579, t580, t586, t594, t603, t613, t616, t619;
  double t623, t625, t627, t638, t654, t660, t662, t667;
  double t673, t678, t681, t683, t693, t704, t707, t710;
  double t713, t715, t730, t735, t739, t767, t774, t775;
  double t780, t783, t800, t819, t829, t868, t873, t876;
  double t878, t879, t882, t883, t885, t888, t897, t923;
  double t925, t926, t929, t931, t943, t959, t966, t980;
  double t985, t988, t1037, t1039, t1040, t1058, t1059, t1060;

  gga_x_rpbe_params *params;

  assert(p->params != NULL);
  params = (gga_x_rpbe_params * )(p->params);

  t1 = M_CBRT3;
  t3 = POW_1_3(0.1e1 / M_PI);
  t4 = t1 * t3;
  t5 = M_CBRT4;
  t6 = t5 * t5;
  t7 = t4 * t6;
  t8 = rho[0] - rho[1];
  t9 = rho[0] + rho[1];
  t10 = 0.1e1 / t9;
  t11 = t8 * t10;
  t13 = 0.1e1 / 0.2e1 + t11 / 0.2e1;
  t14 = POW_1_3(t13);
  t15 = t14 * t13;
  t16 = POW_1_3(t9);
  t17 = t15 * t16;
  t18 = M_CBRT6;
  t19 = params->rpbe_mu * t18;
  t20 = M_PI * M_PI;
  t21 = POW_1_3(t20);
  t22 = t21 * t21;
  t23 = 0.1e1 / t22;
  t24 = t19 * t23;
  t25 = rho[0] * rho[0];
  t26 = POW_1_3(rho[0]);
  t27 = t26 * t26;
  t29 = 0.1e1 / t27 / t25;
  t31 = 0.1e1 / params->rpbe_kappa;
  t35 = exp(-t24 * sigma[0] * t29 * t31 / 0.24e2);
  t38 = 0.1e1 + params->rpbe_kappa * (0.1e1 - t35);
  t40 = t7 * t17 * t38;
  t42 = 0.1e1 / 0.2e1 - t11 / 0.2e1;
  t43 = POW_1_3(t42);
  t44 = t43 * t42;
  t45 = t44 * t16;
  t46 = rho[1] * rho[1];
  t47 = POW_1_3(rho[1]);
  t48 = t47 * t47;
  t50 = 0.1e1 / t48 / t46;
  t55 = exp(-t24 * sigma[2] * t50 * t31 / 0.24e2);
  t58 = 0.1e1 + params->rpbe_kappa * (0.1e1 - t55);
  t60 = t7 * t45 * t58;
  if(zk != NULL && (p->info->flags & XC_FLAGS_HAVE_EXC))
    *zk = -0.3e1 / 0.8e1 * t40 - 0.3e1 / 0.8e1 * t60;

#ifndef XC_DONT_COMPILE_VXC

  if(order < 1) return;


  t62 = 0.3e1 / 0.8e1 * t40;
  t63 = 0.3e1 / 0.8e1 * t60;
  t64 = t14 * t16;
  t65 = t9 * t9;
  t66 = 0.1e1 / t65;
  t67 = t8 * t66;
  t69 = t10 / 0.2e1 - t67 / 0.2e1;
  t70 = t38 * t69;
  t72 = t7 * t64 * t70;
  t73 = t72 / 0.2e1;
  t74 = t16 * t16;
  t75 = 0.1e1 / t74;
  t76 = t15 * t75;
  t78 = t7 * t76 * t38;
  t79 = t78 / 0.8e1;
  t80 = t6 * t15;
  t82 = t4 * t80 * t16;
  t83 = t25 * rho[0];
  t85 = 0.1e1 / t27 / t83;
  t88 = t24 * sigma[0] * t85 * t35;
  t89 = t82 * t88;
  t90 = t89 / 0.24e2;
  t91 = t43 * t16;
  t92 = -t69;
  t93 = t58 * t92;
  t95 = t7 * t91 * t93;
  t96 = t95 / 0.2e1;
  t97 = t44 * t75;
  t99 = t7 * t97 * t58;
  t100 = t99 / 0.8e1;
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vrho[0] = -t62 - t63 + t9 * (-t73 - t79 + t90 - t96 - t100);

  t104 = -t10 / 0.2e1 - t67 / 0.2e1;
  t105 = t38 * t104;
  t107 = t7 * t64 * t105;
  t108 = t107 / 0.2e1;
  t109 = -t104;
  t110 = t58 * t109;
  t112 = t7 * t91 * t110;
  t113 = t112 / 0.2e1;
  t114 = t6 * t44;
  t116 = t4 * t114 * t16;
  t117 = t46 * rho[1];
  t119 = 0.1e1 / t48 / t117;
  t122 = t24 * sigma[2] * t119 * t55;
  t123 = t116 * t122;
  t124 = t123 / 0.24e2;
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vrho[1] = -t62 - t63 + t9 * (-t108 - t79 - t113 - t100 + t124);

  t128 = t16 * t9 * t1;
  t129 = t3 * t6;
  t131 = t128 * t129 * t15;
  t134 = t19 * t23 * t29 * t35;
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vsigma[0] = -t131 * t134 / 0.64e2;

  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vsigma[1] = 0.0e0;

  t138 = t128 * t129 * t44;
  t141 = t19 * t23 * t50 * t55;
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vsigma[2] = -t138 * t141 / 0.64e2;

#ifndef XC_DONT_COMPILE_FXC

  if(order < 2) return;


  t144 = t78 / 0.4e1;
  t146 = t99 / 0.4e1;
  t147 = t14 * t14;
  t148 = 0.1e1 / t147;
  t149 = t148 * t16;
  t150 = t69 * t69;
  t151 = t38 * t150;
  t153 = t7 * t149 * t151;
  t154 = t153 / 0.6e1;
  t155 = t14 * t75;
  t157 = t7 * t155 * t70;
  t158 = t157 / 0.3e1;
  t160 = t7 * t64 * params->rpbe_mu;
  t161 = t18 * t23;
  t162 = t161 * sigma[0];
  t163 = t85 * t35;
  t164 = t163 * t69;
  t165 = t162 * t164;
  t166 = t160 * t165;
  t167 = t166 / 0.9e1;
  t168 = t65 * t9;
  t169 = 0.1e1 / t168;
  t170 = t8 * t169;
  t171 = -t66 + t170;
  t172 = t38 * t171;
  t174 = t7 * t64 * t172;
  t175 = t174 / 0.2e1;
  t177 = 0.1e1 / t74 / t9;
  t180 = t7 * t15 * t177 * t38;
  t181 = t180 / 0.12e2;
  t183 = t4 * t80 * t75;
  t184 = t183 * t88;
  t185 = t184 / 0.36e2;
  t186 = t25 * t25;
  t188 = 0.1e1 / t27 / t186;
  t191 = t24 * sigma[0] * t188 * t35;
  t192 = t82 * t191;
  t193 = 0.11e2 / 0.72e2 * t192;
  t194 = params->rpbe_mu * params->rpbe_mu;
  t196 = t7 * t17 * t194;
  t197 = t18 * t18;
  t199 = 0.1e1 / t21 / t20;
  t200 = t197 * t199;
  t201 = sigma[0] * sigma[0];
  t202 = t200 * t201;
  t205 = 0.1e1 / t26 / t186 / t83;
  t206 = t205 * t31;
  t208 = t202 * t206 * t35;
  t209 = t196 * t208;
  t210 = t209 / 0.216e3;
  t211 = t43 * t43;
  t212 = 0.1e1 / t211;
  t213 = t212 * t16;
  t214 = t92 * t92;
  t215 = t58 * t214;
  t217 = t7 * t213 * t215;
  t218 = t217 / 0.6e1;
  t219 = t43 * t75;
  t221 = t7 * t219 * t93;
  t222 = t221 / 0.3e1;
  t223 = -t171;
  t224 = t58 * t223;
  t226 = t7 * t91 * t224;
  t227 = t226 / 0.2e1;
  t230 = t7 * t44 * t177 * t58;
  t231 = t230 / 0.12e2;
  t232 = -t154 - t158 + t167 - t175 + t181 + t185 - t193 + t210 - t218 - t222 - t227 + t231;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[0] = -t72 - t144 + t89 / 0.12e2 - t95 - t146 + t9 * t232;

  t234 = t6 * t148;
  t235 = t4 * t234;
  t236 = t16 * t38;
  t237 = t104 * t69;
  t239 = t235 * t236 * t237;
  t242 = t7 * t155 * t105;
  t244 = t163 * t104;
  t245 = t162 * t244;
  t246 = t160 * t245;
  t249 = 0.1e1 / t74 / t65;
  t250 = t14 * t249;
  t251 = t38 * t8;
  t253 = t7 * t250 * t251;
  t257 = t6 * t212;
  t258 = t4 * t257;
  t259 = t16 * t58;
  t260 = t109 * t92;
  t262 = t258 * t259 * t260;
  t265 = t7 * t219 * t110;
  t267 = t43 * t249;
  t268 = t58 * t8;
  t270 = t7 * t267 * t268;
  t274 = t7 * t91 * params->rpbe_mu;
  t275 = t161 * sigma[2];
  t276 = t119 * t55;
  t277 = t276 * t92;
  t278 = t275 * t277;
  t279 = t274 * t278;
  t282 = t4 * t114 * t75;
  t283 = t282 * t122;
  t285 = -t239 / 0.6e1 - t242 / 0.6e1 + t246 / 0.18e2 - t253 / 0.2e1 - t157 / 0.6e1 + t181 + t184 / 0.72e2 - t262 / 0.6e1 - t265 / 0.6e1 + t270 / 0.2e1 - t221 / 0.6e1 + t231 + t279 / 0.18e2 + t283 / 0.72e2;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[1] = t9 * t285 - t108 - t113 + t124 - t144 - t146 - t73 + t90 - t96;

  t288 = t104 * t104;
  t289 = t38 * t288;
  t291 = t7 * t149 * t289;
  t292 = t291 / 0.6e1;
  t293 = t242 / 0.3e1;
  t294 = t66 + t170;
  t295 = t38 * t294;
  t297 = t7 * t64 * t295;
  t298 = t297 / 0.2e1;
  t299 = t109 * t109;
  t300 = t58 * t299;
  t302 = t7 * t213 * t300;
  t303 = t302 / 0.6e1;
  t304 = t265 / 0.3e1;
  t305 = t276 * t109;
  t306 = t275 * t305;
  t307 = t274 * t306;
  t308 = t307 / 0.9e1;
  t309 = -t294;
  t310 = t58 * t309;
  t312 = t7 * t91 * t310;
  t313 = t312 / 0.2e1;
  t314 = t283 / 0.36e2;
  t315 = t46 * t46;
  t317 = 0.1e1 / t48 / t315;
  t320 = t24 * sigma[2] * t317 * t55;
  t321 = t116 * t320;
  t322 = 0.11e2 / 0.72e2 * t321;
  t324 = t7 * t45 * t194;
  t325 = sigma[2] * sigma[2];
  t326 = t200 * t325;
  t329 = 0.1e1 / t47 / t315 / t117;
  t330 = t329 * t31;
  t332 = t326 * t330 * t55;
  t333 = t324 * t332;
  t334 = t333 / 0.216e3;
  t335 = -t292 - t293 - t298 + t181 - t303 - t304 + t308 - t313 + t231 + t314 - t322 + t334;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[2] = -t107 - t144 - t112 - t146 + t123 / 0.12e2 + t9 * t335;

  t337 = t82 * t134;
  t339 = t129 * t14;
  t340 = t128 * t339;
  t341 = t29 * t35;
  t343 = t24 * t341 * t69;
  t348 = t19 * t23 * t85 * t35;
  t351 = t128 * t3;
  t353 = t351 * t80 * t194;
  t356 = 0.1e1 / t26 / t186 / t25;
  t357 = t200 * t356;
  t358 = sigma[0] * t31;
  t359 = t358 * t35;
  t360 = t357 * t359;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rhosigma[0] = -t337 / 0.48e2 - t340 * t343 / 0.48e2 + t131 * t348 / 0.24e2 - t353 * t360 / 0.576e3;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rhosigma[1] = 0.0e0;

  t363 = t116 * t141;
  t364 = t129 * t43;
  t365 = t128 * t364;
  t366 = t50 * t55;
  t368 = t24 * t366 * t92;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rhosigma[2] = -t365 * t368 / 0.48e2 - t363 / 0.48e2;

  t372 = t24 * t341 * t104;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rhosigma[3] = -t340 * t372 / 0.48e2 - t337 / 0.48e2;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rhosigma[4] = 0.0e0;

  t377 = t24 * t366 * t109;
  t382 = t19 * t23 * t119 * t55;
  t386 = t351 * t114 * t194;
  t389 = 0.1e1 / t47 / t315 / t46;
  t390 = t200 * t389;
  t391 = sigma[2] * t31;
  t392 = t391 * t55;
  t393 = t390 * t392;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rhosigma[5] = -t363 / 0.48e2 - t365 * t377 / 0.48e2 + t138 * t382 / 0.24e2 - t386 * t393 / 0.576e3;

  t397 = t194 * t197 * t199;
  t398 = t186 * rho[0];
  t400 = 0.1e1 / t26 / t398;
  t403 = t397 * t400 * t31 * t35;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigma2[0] = t131 * t403 / 0.1536e4;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigma2[1] = 0.0e0;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigma2[2] = 0.0e0;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigma2[3] = 0.0e0;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigma2[4] = 0.0e0;

  t405 = t315 * rho[1];
  t407 = 0.1e1 / t47 / t405;
  t410 = t397 * t407 * t31 * t55;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigma2[5] = t138 * t410 / 0.1536e4;

#ifndef XC_DONT_COMPILE_KXC

  if(order < 3) return;


  t416 = t180 / 0.4e1;
  t418 = t230 / 0.4e1;
  t423 = t7 * t155 * t172;
  t425 = t65 * t65;
  t427 = t8 / t425;
  t429 = 0.3e1 * t169 - 0.3e1 * t427;
  t435 = t7 * t219 * t224;
  t451 = 0.1e1 / t147 / t13;
  t452 = t451 * t16;
  t458 = t148 * t75;
  t460 = t7 * t458 * t151;
  t462 = t14 * t177;
  t464 = t7 * t462 * t70;
  t467 = 0.1e1 / t211 / t42;
  t468 = t467 * t16;
  t474 = t212 * t75;
  t476 = t7 * t474 * t215;
  t478 = t43 * t177;
  t480 = t7 * t478 * t93;
  t482 = -t423 / 0.2e1 - t7 * t64 * t38 * t429 / 0.2e1 - t435 / 0.2e1 + t7 * t91 * t58 * t429 / 0.2e1 - t235 * t236 * t69 * t171 / 0.2e1 - t258 * t259 * t92 * t223 / 0.2e1 + t7 * t452 * t38 * t150 * t69 / 0.9e1 - t460 / 0.6e1 + t464 / 0.3e1 + t7 * t468 * t58 * t214 * t92 / 0.9e1 - t476 / 0.6e1 + t480 / 0.3e1;
  t486 = 0.5e1 / 0.36e2 * t7 * t15 * t249 * t38;
  t490 = 0.5e1 / 0.36e2 * t7 * t44 * t249 * t58;
  t492 = t7 * t149 * params->rpbe_mu;
  t498 = t7 * t155 * params->rpbe_mu;
  t499 = t498 * t165;
  t507 = t7 * t76 * t194 * t208;
  t509 = t186 * t186;
  t517 = t188 * t35;
  t522 = t183 * t191;
  t533 = t4 * t80 * t177 * t88;
  t536 = t20 * t20;
  t538 = t194 * params->rpbe_mu / t536;
  t543 = params->rpbe_kappa * params->rpbe_kappa;
  t544 = 0.1e1 / t543;
  t551 = t7 * t64 * t194;
  t552 = t35 * t69;
  t557 = -t486 - t490 + t492 * t162 * t163 * t150 / 0.18e2 + t499 / 0.9e1 + t160 * t162 * t163 * t171 / 0.6e1 + t507 / 0.216e3 - 0.11e2 / 0.216e3 * t196 * t202 / t26 / t509 * t31 * t35 - 0.11e2 / 0.18e2 * t160 * t162 * t517 * t69 - 0.11e2 / 0.72e2 * t522 + 0.77e2 / 0.108e3 * t82 * t24 * sigma[0] / t27 / t398 * t35 - t533 / 0.36e2 + t82 * t538 * t201 * sigma[0] / t509 / t83 * t544 * t35 / 0.324e3 + t551 * t202 * t206 * t552 / 0.54e2;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[0] = t184 / 0.12e2 - t153 / 0.2e1 - t157 - t217 / 0.2e1 - t221 - 0.3e1 / 0.2e1 * t174 + t416 - 0.3e1 / 0.2e1 * t226 + t418 + t166 / 0.3e1 - 0.11e2 / 0.24e2 * t192 + t209 / 0.72e2 + t9 * (t482 + t557);

  t563 = t239 / 0.3e1;
  t564 = t184 / 0.18e2 - t154 - 0.2e1 / 0.3e1 * t157 - t218 - 0.2e1 / 0.3e1 * t221 - t563 - t293 - t175 + t416 - t227 + t418;
  t565 = t246 / 0.9e1;
  t566 = t279 / 0.9e1;
  t567 = t262 / 0.3e1;
  t571 = t4 * t6 * t451;
  t579 = t235 * t75 * t38 * t237 / 0.9e1;
  t580 = t249 * t38;
  t586 = t4 * t6 * t467;
  t594 = t258 * t75 * t58 * t260 / 0.9e1;
  t603 = t249 * t58;
  t613 = 0.1e1 / t74 / t168;
  t616 = t7 * t43 * t613 * t268;
  t619 = t7 * t462 * t105;
  t623 = t7 * t14 * t613 * t251;
  t625 = -t423 / 0.6e1 - t435 / 0.6e1 + t571 * t236 * t104 * t150 / 0.9e1 - t579 - t235 * t580 * t8 * t69 / 0.3e1 + t586 * t259 * t109 * t214 / 0.9e1 - t594 - t235 * t236 * t104 * t171 / 0.6e1 - t258 * t259 * t109 * t223 / 0.6e1 + t258 * t603 * t8 * t92 / 0.3e1 - t460 / 0.18e2 + 0.2e1 / 0.9e1 * t464 - t476 / 0.18e2 + 0.2e1 / 0.9e1 * t480 - 0.7e1 / 0.6e1 * t616 + t619 / 0.9e1 + 0.7e1 / 0.6e1 * t623;
  t627 = t7 * t478 * t110;
  t638 = t498 * t245 / 0.27e2;
  t654 = t7 * t213 * params->rpbe_mu;
  t660 = t7 * t219 * params->rpbe_mu;
  t662 = t660 * t278 / 0.27e2;
  t667 = t4 * t114 * t177 * t122;
  t673 = t35 * t104;
  t678 = t627 / 0.9e1 - t486 - t490 - t7 * t250 * t38 / 0.2e1 + t7 * t267 * t58 / 0.2e1 + t499 / 0.27e2 + t507 / 0.648e3 + t638 + t274 * t275 * t276 * t223 / 0.18e2 - 0.11e2 / 0.54e2 * t160 * t162 * t517 * t104 + t7 * t250 * params->rpbe_mu * t162 * t163 * t8 / 0.9e1 + t654 * t275 * t276 * t214 / 0.54e2 + t662 - 0.11e2 / 0.216e3 * t522 - t533 / 0.54e2 - t667 / 0.108e3 + t492 * t162 * t163 * t237 / 0.27e2 + t551 * t202 * t206 * t673 / 0.162e3;
  t681 = t270 + t167 - t193 + t210 + t565 + t566 + t314 - t253 - t567 - t304 + t9 * (t625 + t678);
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[1] = t564 + t681;

  t683 = t185 - t158 - t222 - t563 - 0.2e1 / 0.3e1 * t242 + t416 + t418 + t270 - t298 - t313 + t565;
  t693 = -t169 - 0.3e1 * t427;
  t704 = t7 * t458 * t289;
  t707 = t7 * t155 * t295;
  t710 = t7 * t474 * t300;
  t713 = t7 * t219 * t310;
  t715 = -t579 - t594 + t464 / 0.9e1 + t480 / 0.9e1 + t616 / 0.3e1 + 0.2e1 / 0.9e1 * t619 - t623 / 0.3e1 + 0.2e1 / 0.9e1 * t627 - t7 * t64 * t38 * t693 / 0.2e1 + t7 * t91 * t58 * t693 / 0.2e1 - t704 / 0.18e2 - t707 / 0.6e1 - t710 / 0.18e2 - t713 / 0.6e1 - t486 - t490 + t638;
  t730 = t317 * t55;
  t735 = t660 * t306;
  t739 = t7 * t97 * t194 * t332;
  t767 = t282 * t320;
  t774 = t7 * t91 * t194;
  t775 = t55 * t92;
  t780 = t662 + t492 * t162 * t163 * t288 / 0.54e2 + t160 * t162 * t163 * t294 / 0.18e2 - t7 * t267 * params->rpbe_mu * t275 * t276 * t8 / 0.9e1 - 0.11e2 / 0.54e2 * t274 * t275 * t730 * t92 + t735 / 0.27e2 + t739 / 0.648e3 - t235 * t580 * t104 * t8 / 0.3e1 + t571 * t236 * t288 * t69 / 0.9e1 - t235 * t236 * t294 * t69 / 0.6e1 + t586 * t259 * t299 * t92 / 0.9e1 + t258 * t603 * t109 * t8 / 0.3e1 - t258 * t259 * t309 * t92 / 0.6e1 - t533 / 0.108e3 - t667 / 0.54e2 - 0.11e2 / 0.216e3 * t767 + t654 * t275 * t276 * t260 / 0.27e2 + t774 * t326 * t330 * t775 / 0.162e3;
  t783 = t566 + t283 / 0.18e2 + t308 - t322 + t334 - t253 - t567 - 0.2e1 / 0.3e1 * t265 - t292 - t303 + t9 * (t715 + t780);
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[2] = t683 + t783;

  t800 = t315 * t315;
  t819 = -0.3e1 * t169 - 0.3e1 * t427;
  t829 = t654 * t275 * t276 * t299 / 0.18e2 + t274 * t275 * t276 * t309 / 0.6e1 - 0.11e2 / 0.216e3 * t324 * t326 / t47 / t800 * t31 * t55 - 0.11e2 / 0.18e2 * t274 * t275 * t730 * t109 + t619 / 0.3e1 + t627 / 0.3e1 - t704 / 0.6e1 - t707 / 0.2e1 - t710 / 0.6e1 - t713 / 0.2e1 - t7 * t64 * t38 * t819 / 0.2e1 + t7 * t91 * t58 * t819 / 0.2e1;
  t868 = t55 * t109;
  t873 = t7 * t452 * t38 * t288 * t104 / 0.9e1 + t7 * t468 * t58 * t299 * t109 / 0.9e1 - t486 - t490 + t735 / 0.9e1 + t739 / 0.216e3 - t235 * t236 * t104 * t294 / 0.2e1 - t258 * t259 * t109 * t309 / 0.2e1 - t667 / 0.36e2 - 0.11e2 / 0.72e2 * t767 + 0.77e2 / 0.108e3 * t116 * t24 * sigma[2] / t48 / t405 * t55 + t116 * t538 * t325 * sigma[2] / t800 / t117 * t544 * t55 / 0.324e3 + t774 * t326 * t330 * t868 / 0.54e2;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[3] = -t242 + t416 + t418 - 0.3e1 / 0.2e1 * t297 - 0.3e1 / 0.2e1 * t312 + t283 / 0.12e2 + t307 / 0.3e1 - 0.11e2 / 0.24e2 * t321 + t333 / 0.72e2 - t265 - t291 / 0.2e1 - t302 / 0.2e1 + t9 * (t829 + t873);

  t876 = t6 * t14;
  t878 = t4 * t876 * t16;
  t879 = t878 * t343;
  t882 = t183 * t134 / 0.144e3;
  t883 = t82 * t348;
  t885 = t196 * t360;
  t888 = t128 * t129 * t148;
  t897 = t351 * t876 * t194;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho2sigma[0] = -t879 / 0.18e2 - t882 + t883 / 0.9e1 - t885 / 0.216e3 - t888 * t24 * t341 * t150 / 0.144e3 + t340 * t24 * t164 / 0.9e1 - t897 * t357 * t358 * t552 / 0.216e3 - t340 * t24 * t341 * t171 / 0.48e2 - 0.11e2 / 0.72e2 * t131 * t19 * t23 * t188 * t35 + t353 * t200 * t205 * t359 / 0.64e2 - t131 * t538 / t509 / t25 * t201 * t544 * t35 / 0.864e3;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho2sigma[1] = 0.0e0;

  t923 = t6 * t43;
  t925 = t4 * t923 * t16;
  t926 = t925 * t368;
  t929 = t282 * t141 / 0.144e3;
  t931 = t128 * t129 * t212;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho2sigma[2] = -t926 / 0.18e2 - t929 - t931 * t24 * t366 * t214 / 0.144e3 - t365 * t24 * t366 * t223 / 0.48e2;

  t943 = t878 * t372;
  t959 = t177 * t1;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho2sigma[3] = -t879 / 0.36e2 - t882 + t883 / 0.18e2 - t885 / 0.432e3 - t943 / 0.36e2 - t351 * t234 * params->rpbe_mu * t161 * t29 * t673 * t69 / 0.144e3 + t340 * t24 * t244 / 0.18e2 - t897 * t357 * t358 * t673 / 0.432e3 - t959 * t339 * t24 * t341 * t8 / 0.48e2;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho2sigma[4] = 0.0e0;

  t966 = t925 * t377;
  t980 = t116 * t382;
  t985 = t324 * t393;
  t988 = t351 * t923 * t194;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho2sigma[5] = -t926 / 0.36e2 - t929 - t966 / 0.36e2 - t351 * t257 * params->rpbe_mu * t161 * t50 * t868 * t92 / 0.144e3 + t959 * t364 * t24 * t366 * t8 / 0.48e2 + t980 / 0.18e2 + t365 * t24 * t277 / 0.18e2 - t985 / 0.432e3 - t988 * t390 * t391 * t775 / 0.432e3;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho2sigma[6] = -t943 / 0.18e2 - t882 - t888 * t24 * t341 * t288 / 0.144e3 - t340 * t24 * t341 * t294 / 0.48e2;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho2sigma[7] = 0.0e0;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho2sigma[8] = -t966 / 0.18e2 - t929 + t980 / 0.9e1 - t985 / 0.216e3 - t931 * t24 * t366 * t299 / 0.144e3 + t365 * t24 * t305 / 0.9e1 - t988 * t390 * t391 * t868 / 0.216e3 - t365 * t24 * t366 * t309 / 0.48e2 - 0.11e2 / 0.72e2 * t138 * t19 * t23 * t317 * t55 + t386 * t200 * t329 * t392 / 0.64e2 - t138 * t538 / t800 / t46 * t325 * t544 * t55 / 0.864e3;

  t1037 = t82 * t403;
  t1039 = t200 * t400;
  t1040 = t31 * t35;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rhosigma2[0] = t1037 / 0.1152e4 + t897 * t1039 * t1040 * t69 / 0.1152e4 - t131 * t397 * t356 * t31 * t35 / 0.288e3 + t131 * t538 / t509 / rho[0] * t544 * sigma[0] * t35 / 0.2304e4;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rhosigma2[1] = 0.0e0;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rhosigma2[2] = 0.0e0;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rhosigma2[3] = 0.0e0;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rhosigma2[4] = 0.0e0;

  t1058 = t116 * t410;
  t1059 = t200 * t407;
  t1060 = t31 * t55;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rhosigma2[5] = t988 * t1059 * t1060 * t92 / 0.1152e4 + t1058 / 0.1152e4;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rhosigma2[6] = t897 * t1039 * t1040 * t104 / 0.1152e4 + t1037 / 0.1152e4;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rhosigma2[7] = 0.0e0;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rhosigma2[8] = 0.0e0;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rhosigma2[9] = 0.0e0;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rhosigma2[10] = 0.0e0;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rhosigma2[11] = t1058 / 0.1152e4 + t988 * t1059 * t1060 * t109 / 0.1152e4 - t138 * t397 * t389 * t31 * t55 / 0.288e3 + t138 * t538 / t800 / rho[1] * t544 * sigma[2] * t55 / 0.2304e4;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3sigma3[0] = -t131 * t538 / t509 * t544 * t35 / 0.6144e4;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3sigma3[1] = 0.0e0;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3sigma3[2] = 0.0e0;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3sigma3[3] = 0.0e0;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3sigma3[4] = 0.0e0;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3sigma3[5] = 0.0e0;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3sigma3[6] = 0.0e0;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3sigma3[7] = 0.0e0;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3sigma3[8] = 0.0e0;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3sigma3[9] = -t138 * t538 / t800 * t544 * t55 / 0.6144e4;

#ifndef XC_DONT_COMPILE_LXC

  if(order < 4) return;


#endif

#endif

#endif

#endif


}
