/* 
  This file was generated automatically with ./scripts/maple2c.pl.
  Do not edit this file directly as it can be overwritten!!

  This Source Code Form is subject to the terms of the Mozilla Public
  License, v. 2.0. If a copy of the MPL was not distributed with this
  file, You can obtain one at http://mozilla.org/MPL/2.0/.

  Maple version     : Maple 2020 (X86 64 LINUX)
  Maple source      : ./maple/lda_exc/lda_c_pz.mpl
  Type of functional: lda_exc
*/

#define maple2c_order 4
#define MAPLE2C_FLAGS (XC_FLAGS_I_HAVE_EXC | XC_FLAGS_I_HAVE_VXC | XC_FLAGS_I_HAVE_FXC | XC_FLAGS_I_HAVE_KXC | XC_FLAGS_I_HAVE_LXC)


static inline void
func_unpol(const xc_func_type *p, int order, const double *rho , double *zk LDA_OUT_PARAMS_NO_EXC(XC_COMMA double *, ))
{

#ifndef XC_DONT_COMPILE_EXC
  double t1, t2, t3, t5, t6, t7, t8, t9;
  double t10, t11, t12, t13, t14, t15, t19, t20;
  double t21, t24, t27, t28, t32, t33, t34, t38;
  double t42, t43, t44, t48, t51, t54, t58, t59;
  double t63, t67, t70, t72, t74, t77, t78;

#ifndef XC_DONT_COMPILE_VXC
  double t79, t81, t82, t84, t86, t87, t91, t93;
  double t97, t105, t106, t108, t110, t114, t125, t128;

#ifndef XC_DONT_COMPILE_FXC
  double t135, t136, t140, t142, t143, t144, t145, t146;
  double t147, t150, t154, t155, t160, t163, t167, t175;
  double t178, t179, t183, t190, t202, t205;

#ifndef XC_DONT_COMPILE_KXC
  double t210, t212, t225, t226, t227, t228, t229, t232;
  double t235, t239, t240, t245, t248, t252, t260, t261;
  double t263, t270, t279, t291, t294;

#ifndef XC_DONT_COMPILE_LXC
  double t302, t308, t317, t320, t324, t328, t333, t337;
  double t338, t349, t357, t361, t367, t397;
#endif

#endif

#endif

#endif

#endif


  lda_c_pz_params *params;

  assert(p->params != NULL);
  params = (lda_c_pz_params * )(p->params);

  t1 = M_CBRT3;
  t2 = 0.1e1 / M_PI;
  t3 = POW_1_3(t2);
  t5 = M_CBRT4;
  t6 = t5 * t5;
  t7 = POW_1_3(rho[0]);
  t8 = 0.1e1 / t7;
  t9 = t6 * t8;
  t10 = t1 * t3 * t9;
  t11 = t10 / 0.4e1;
  t12 = 0.1e1 <= t11;
  t13 = params->gamma[0];
  t14 = params->beta1[0];
  t15 = sqrt(t10);
  t19 = params->beta2[0] * t1;
  t20 = t3 * t6;
  t21 = t20 * t8;
  t24 = 0.1e1 + t14 * t15 / 0.2e1 + t19 * t21 / 0.4e1;
  t27 = params->a[0];
  t28 = log(t11);
  t32 = params->c[0] * t1;
  t33 = t32 * t3;
  t34 = t9 * t28;
  t38 = params->d[0] * t1;
  t42 = my_piecewise3(t12, t13 / t24, t27 * t28 + params->b[0] + t33 * t34 / 0.4e1 + t38 * t21 / 0.4e1);
  t43 = params->gamma[1];
  t44 = params->beta1[1];
  t48 = params->beta2[1] * t1;
  t51 = 0.1e1 + t44 * t15 / 0.2e1 + t48 * t21 / 0.4e1;
  t54 = params->a[1];
  t58 = params->c[1] * t1;
  t59 = t58 * t3;
  t63 = params->d[1] * t1;
  t67 = my_piecewise3(t12, t43 / t51, t54 * t28 + params->b[1] + t59 * t34 / 0.4e1 + t63 * t21 / 0.4e1);
  t70 = my_piecewise3(0.1e1 <= p->zeta_threshold, 0, 1);
  t72 = 0.2e1 * t70 - 0.2e1;
  t74 = M_CBRT2;
  t77 = 0.1e1 / (0.2e1 * t74 - 0.2e1);
  t78 = (t67 - t42) * t72 * t77;
  if(zk != NULL && (p->info->flags & XC_FLAGS_HAVE_EXC))
    zk[0] = t42 + t78;

#ifndef XC_DONT_COMPILE_VXC

  if(order < 1) return;


  t79 = t24 * t24;
  t81 = t13 / t79;
  t82 = 0.1e1 / t15;
  t84 = t14 * t82 * t1;
  t86 = 0.1e1 / t7 / rho[0];
  t87 = t20 * t86;
  t91 = -t19 * t87 / 0.12e2 - t84 * t87 / 0.12e2;
  t93 = 0.1e1 / rho[0];
  t97 = t6 * t86 * t28;
  t105 = my_piecewise3(t12, -t81 * t91, -t27 * t93 / 0.3e1 - t33 * t97 / 0.12e2 - t32 * t87 / 0.12e2 - t38 * t87 / 0.12e2);
  t106 = t51 * t51;
  t108 = t43 / t106;
  t110 = t44 * t82 * t1;
  t114 = -t110 * t87 / 0.12e2 - t48 * t87 / 0.12e2;
  t125 = my_piecewise3(t12, -t108 * t114, -t54 * t93 / 0.3e1 - t59 * t97 / 0.12e2 - t58 * t87 / 0.12e2 - t63 * t87 / 0.12e2);
  t128 = (t125 - t105) * t72 * t77;
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vrho[0] = t42 + t78 + rho[0] * (t105 + t128);

#ifndef XC_DONT_COMPILE_FXC

  if(order < 2) return;


  t135 = t13 / t79 / t24;
  t136 = t91 * t91;
  t140 = 0.1e1 / t15 / t10;
  t142 = t1 * t1;
  t143 = t14 * t140 * t142;
  t144 = t3 * t3;
  t145 = t144 * t5;
  t146 = rho[0] * rho[0];
  t147 = t7 * t7;
  t150 = t145 / t147 / t146;
  t154 = 0.1e1 / t7 / t146;
  t155 = t20 * t154;
  t160 = -t143 * t150 / 0.18e2 + t84 * t155 / 0.9e1 + t19 * t155 / 0.9e1;
  t163 = 0.1e1 / t146;
  t167 = t6 * t154 * t28;
  t175 = my_piecewise3(t12, 0.2e1 * t135 * t136 - t81 * t160, t27 * t163 / 0.3e1 + t33 * t167 / 0.9e1 + 0.5e1 / 0.36e2 * t32 * t155 + t38 * t155 / 0.9e1);
  t178 = t43 / t106 / t51;
  t179 = t114 * t114;
  t183 = t44 * t140 * t142;
  t190 = -t183 * t150 / 0.18e2 + t110 * t155 / 0.9e1 + t48 * t155 / 0.9e1;
  t202 = my_piecewise3(t12, -t108 * t190 + 0.2e1 * t178 * t179, t54 * t163 / 0.3e1 + t59 * t167 / 0.9e1 + 0.5e1 / 0.36e2 * t58 * t155 + t63 * t155 / 0.9e1);
  t205 = (t202 - t175) * t72 * t77;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[0] = 0.2e1 * t105 + 0.2e1 * t128 + rho[0] * (t175 + t205);

#ifndef XC_DONT_COMPILE_KXC

  if(order < 3) return;


  t210 = t79 * t79;
  t212 = t13 / t210;
  t225 = 0.1e1 / t15 / t142 / t144 / t5 * t147 / 0.4e1;
  t226 = t14 * t225;
  t227 = t146 * t146;
  t228 = 0.1e1 / t227;
  t229 = t2 * t228;
  t232 = t146 * rho[0];
  t235 = t145 / t147 / t232;
  t239 = 0.1e1 / t7 / t232;
  t240 = t20 * t239;
  t245 = -t226 * t229 / 0.3e1 + 0.2e1 / 0.9e1 * t143 * t235 - 0.7e1 / 0.27e2 * t84 * t240 - 0.7e1 / 0.27e2 * t19 * t240;
  t248 = 0.1e1 / t232;
  t252 = t6 * t239 * t28;
  t260 = my_piecewise3(t12, 0.6e1 * t135 * t91 * t160 - 0.6e1 * t212 * t136 * t91 - t81 * t245, -0.2e1 / 0.3e1 * t27 * t248 - 0.7e1 / 0.27e2 * t33 * t252 - 0.13e2 / 0.36e2 * t32 * t240 - 0.7e1 / 0.27e2 * t38 * t240);
  t261 = t106 * t106;
  t263 = t43 / t261;
  t270 = t44 * t225;
  t279 = -t270 * t229 / 0.3e1 + 0.2e1 / 0.9e1 * t183 * t235 - 0.7e1 / 0.27e2 * t110 * t240 - 0.7e1 / 0.27e2 * t48 * t240;
  t291 = my_piecewise3(t12, 0.6e1 * t178 * t114 * t190 - 0.6e1 * t263 * t179 * t114 - t108 * t279, -0.2e1 / 0.3e1 * t54 * t248 - 0.7e1 / 0.27e2 * t59 * t252 - 0.13e2 / 0.36e2 * t58 * t240 - 0.7e1 / 0.27e2 * t63 * t240);
  t294 = (t291 - t260) * t72 * t77;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[0] = 0.3e1 * t175 + 0.3e1 * t205 + rho[0] * (t260 + t294);

#ifndef XC_DONT_COMPILE_LXC

  if(order < 4) return;


  t302 = t136 * t136;
  t308 = t160 * t160;
  t317 = 0.1e1 / t15 / t2 / t93 / 0.48e2;
  t320 = t227 * rho[0];
  t324 = 0.1e1 / t7 / t320 * t1 * t20;
  t328 = t2 / t320;
  t333 = t145 / t147 / t227;
  t337 = 0.1e1 / t7 / t227;
  t338 = t20 * t337;
  t349 = t6 * t337 * t28;
  t357 = my_piecewise3(t12, 0.24e2 * t13 / t210 / t24 * t302 - 0.36e2 * t212 * t136 * t160 + 0.6e1 * t135 * t308 + 0.8e1 * t135 * t91 * t245 - t81 * (-0.5e1 / 0.18e2 * t14 * t317 * t2 * t324 + 0.8e1 / 0.3e1 * t226 * t328 - 0.80e2 / 0.81e2 * t143 * t333 + 0.70e2 / 0.81e2 * t84 * t338 + 0.70e2 / 0.81e2 * t19 * t338), 0.2e1 * t27 * t228 + 0.70e2 / 0.81e2 * t33 * t349 + 0.209e3 / 0.162e3 * t32 * t338 + 0.70e2 / 0.81e2 * t38 * t338);
  t361 = t179 * t179;
  t367 = t190 * t190;
  t397 = my_piecewise3(t12, 0.24e2 * t43 / t261 / t51 * t361 - 0.36e2 * t263 * t179 * t190 + 0.6e1 * t178 * t367 + 0.8e1 * t178 * t114 * t279 - t108 * (-0.5e1 / 0.18e2 * t44 * t317 * t2 * t324 + 0.8e1 / 0.3e1 * t270 * t328 - 0.80e2 / 0.81e2 * t183 * t333 + 0.70e2 / 0.81e2 * t110 * t338 + 0.70e2 / 0.81e2 * t48 * t338), 0.2e1 * t54 * t228 + 0.70e2 / 0.81e2 * t59 * t349 + 0.209e3 / 0.162e3 * t58 * t338 + 0.70e2 / 0.81e2 * t63 * t338);
  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rho4[0] = 0.4e1 * t260 + 0.4e1 * t294 + rho[0] * (t357 + (t397 - t357) * t72 * t77);

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
  double t1, t2, t3, t5, t6, t7, t8, t9;
  double t10, t11, t12, t13, t14, t15, t16, t20;
  double t21, t22, t25, t28, t29, t33, t34, t35;
  double t39, t43, t44, t45, t49, t52, t55, t59;
  double t60, t64, t68, t69, t70, t71, t72, t73;
  double t74, t75, t77, t78, t79, t80, t82, t83;
  double t85, t88, t89;

#ifndef XC_DONT_COMPILE_VXC
  double t90, t92, t93, t95, t97, t98, t102, t107;
  double t115, t116, t118, t120, t124, t135, t136, t138;
  double t139, t140, t141, t142, t145, t146, t149, t150;
  double t152, t155, t158, t159, t162, t163, t165;

#ifndef XC_DONT_COMPILE_FXC
  double t168, t169, t173, t174, t178, t180, t181, t182;
  double t183, t184, t187, t191, t192, t197, t203, t211;
  double t214, t215, t219, t226, t238, t239, t241, t243;
  double t244, t245, t246, t247, t250, t251, t252, t254;
  double t258, t259, t260, t261, t264, t268, t269, t271;
  double t275, t276, t279, t283, t284, t287, t291, t292;
  double t294, t298, t299, t303, t307, t308, t311, t315;
  double t316, t318;

#ifndef XC_DONT_COMPILE_KXC
  double t321, t322, t325, t327, t340, t341, t342, t343;
  double t344, t349, t353, t354, t359, t365, t373, t374;
  double t376, t383, t392, t404, t405, t407, t409, t410;
  double t412, t415, t416, t419, t422, t424, t428, t430;
  double t431, t434, t437, t441, t442, t444, t448, t451;
  double t453, t454, t455, t458, t469, t470, t473, t484;
  double t485, t487, t493, t494, t499, t504, t508, t509;
  double t514, t517, t521, t522, t524, t529, t531, t537;
  double t541, t542, t547, t551, t552, t554;

#ifndef XC_DONT_COMPILE_LXC
  double t557, t558, t565, t571, t580, t583, t587, t590;
  double t591, t596, t600, t601, t612, t620, t624, t630;
  double t660, t663, t665, t668, t671, t673, t675, t676;
  double t682, t687, t689, t693, t694, t696, t697, t703;
  double t712, t720, t725, t727, t728, t730, t756, t758;
  double t783, t785, t803, t805, t816, t819, t835, t861;
  double t874, t893, t897, t918, t930, t935, t941, t945;
  double t946, t951, t960;
#endif

#endif

#endif

#endif

#endif


  lda_c_pz_params *params;

  assert(p->params != NULL);
  params = (lda_c_pz_params * )(p->params);

  t1 = M_CBRT3;
  t2 = 0.1e1 / M_PI;
  t3 = POW_1_3(t2);
  t5 = M_CBRT4;
  t6 = t5 * t5;
  t7 = rho[0] + rho[1];
  t8 = POW_1_3(t7);
  t9 = 0.1e1 / t8;
  t10 = t6 * t9;
  t11 = t1 * t3 * t10;
  t12 = t11 / 0.4e1;
  t13 = 0.1e1 <= t12;
  t14 = params->gamma[0];
  t15 = params->beta1[0];
  t16 = sqrt(t11);
  t20 = params->beta2[0] * t1;
  t21 = t3 * t6;
  t22 = t21 * t9;
  t25 = 0.1e1 + t15 * t16 / 0.2e1 + t20 * t22 / 0.4e1;
  t28 = params->a[0];
  t29 = log(t12);
  t33 = params->c[0] * t1;
  t34 = t33 * t3;
  t35 = t10 * t29;
  t39 = params->d[0] * t1;
  t43 = my_piecewise3(t13, t14 / t25, t28 * t29 + params->b[0] + t34 * t35 / 0.4e1 + t39 * t22 / 0.4e1);
  t44 = params->gamma[1];
  t45 = params->beta1[1];
  t49 = params->beta2[1] * t1;
  t52 = 0.1e1 + t45 * t16 / 0.2e1 + t49 * t22 / 0.4e1;
  t55 = params->a[1];
  t59 = params->c[1] * t1;
  t60 = t59 * t3;
  t64 = params->d[1] * t1;
  t68 = my_piecewise3(t13, t44 / t52, t55 * t29 + params->b[1] + t60 * t35 / 0.4e1 + t64 * t22 / 0.4e1);
  t69 = t68 - t43;
  t70 = rho[0] - rho[1];
  t71 = 0.1e1 / t7;
  t72 = t70 * t71;
  t73 = 0.1e1 + t72;
  t74 = t73 <= p->zeta_threshold;
  t75 = POW_1_3(t73);
  t77 = my_piecewise3(t74, 0, t75 * t73);
  t78 = 0.1e1 - t72;
  t79 = t78 <= p->zeta_threshold;
  t80 = POW_1_3(t78);
  t82 = my_piecewise3(t79, 0, t80 * t78);
  t83 = t77 + t82 - 0.2e1;
  t85 = M_CBRT2;
  t88 = 0.1e1 / (0.2e1 * t85 - 0.2e1);
  t89 = t69 * t83 * t88;
  if(zk != NULL && (p->info->flags & XC_FLAGS_HAVE_EXC))
    zk[0] = t43 + t89;

#ifndef XC_DONT_COMPILE_VXC

  if(order < 1) return;


  t90 = t25 * t25;
  t92 = t14 / t90;
  t93 = 0.1e1 / t16;
  t95 = t15 * t93 * t1;
  t97 = 0.1e1 / t8 / t7;
  t98 = t21 * t97;
  t102 = -t20 * t98 / 0.12e2 - t95 * t98 / 0.12e2;
  t107 = t6 * t97 * t29;
  t115 = my_piecewise3(t13, -t92 * t102, -t28 * t71 / 0.3e1 - t34 * t107 / 0.12e2 - t33 * t98 / 0.12e2 - t39 * t98 / 0.12e2);
  t116 = t52 * t52;
  t118 = t44 / t116;
  t120 = t45 * t93 * t1;
  t124 = -t120 * t98 / 0.12e2 - t49 * t98 / 0.12e2;
  t135 = my_piecewise3(t13, -t118 * t124, -t55 * t71 / 0.3e1 - t60 * t107 / 0.12e2 - t59 * t98 / 0.12e2 - t64 * t98 / 0.12e2);
  t136 = t135 - t115;
  t138 = t136 * t83 * t88;
  t139 = t7 * t7;
  t140 = 0.1e1 / t139;
  t141 = t70 * t140;
  t142 = t71 - t141;
  t145 = my_piecewise3(t74, 0, 0.4e1 / 0.3e1 * t75 * t142);
  t146 = -t142;
  t149 = my_piecewise3(t79, 0, 0.4e1 / 0.3e1 * t80 * t146);
  t150 = t145 + t149;
  t152 = t69 * t150 * t88;
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vrho[0] = t43 + t89 + t7 * (t115 + t138 + t152);

  t155 = -t71 - t141;
  t158 = my_piecewise3(t74, 0, 0.4e1 / 0.3e1 * t75 * t155);
  t159 = -t155;
  t162 = my_piecewise3(t79, 0, 0.4e1 / 0.3e1 * t80 * t159);
  t163 = t158 + t162;
  t165 = t69 * t163 * t88;
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vrho[1] = t43 + t89 + t7 * (t115 + t138 + t165);

#ifndef XC_DONT_COMPILE_FXC

  if(order < 2) return;


  t168 = 0.2e1 * t115;
  t169 = 0.2e1 * t138;
  t173 = t14 / t90 / t25;
  t174 = t102 * t102;
  t178 = 0.1e1 / t16 / t11;
  t180 = t1 * t1;
  t181 = t15 * t178 * t180;
  t182 = t3 * t3;
  t183 = t182 * t5;
  t184 = t8 * t8;
  t187 = t183 / t184 / t139;
  t191 = 0.1e1 / t8 / t139;
  t192 = t21 * t191;
  t197 = -t181 * t187 / 0.18e2 + t95 * t192 / 0.9e1 + t20 * t192 / 0.9e1;
  t203 = t6 * t191 * t29;
  t211 = my_piecewise3(t13, 0.2e1 * t173 * t174 - t92 * t197, t28 * t140 / 0.3e1 + t34 * t203 / 0.9e1 + 0.5e1 / 0.36e2 * t33 * t192 + t39 * t192 / 0.9e1);
  t214 = t44 / t116 / t52;
  t215 = t124 * t124;
  t219 = t45 * t178 * t180;
  t226 = -t219 * t187 / 0.18e2 + t120 * t192 / 0.9e1 + t49 * t192 / 0.9e1;
  t238 = my_piecewise3(t13, -t118 * t226 + 0.2e1 * t214 * t215, t55 * t140 / 0.3e1 + t60 * t203 / 0.9e1 + 0.5e1 / 0.36e2 * t59 * t192 + t64 * t192 / 0.9e1);
  t239 = t238 - t211;
  t241 = t239 * t83 * t88;
  t243 = t136 * t150 * t88;
  t244 = 0.2e1 * t243;
  t245 = t75 * t75;
  t246 = 0.1e1 / t245;
  t247 = t142 * t142;
  t250 = t139 * t7;
  t251 = 0.1e1 / t250;
  t252 = t70 * t251;
  t254 = -0.2e1 * t140 + 0.2e1 * t252;
  t258 = my_piecewise3(t74, 0, 0.4e1 / 0.9e1 * t246 * t247 + 0.4e1 / 0.3e1 * t75 * t254);
  t259 = t80 * t80;
  t260 = 0.1e1 / t259;
  t261 = t146 * t146;
  t264 = -t254;
  t268 = my_piecewise3(t79, 0, 0.4e1 / 0.9e1 * t260 * t261 + 0.4e1 / 0.3e1 * t80 * t264);
  t269 = t258 + t268;
  t271 = t69 * t269 * t88;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[0] = t168 + t169 + 0.2e1 * t152 + t7 * (t211 + t241 + t244 + t271);

  t275 = t136 * t163 * t88;
  t276 = t246 * t155;
  t279 = t75 * t70;
  t283 = my_piecewise3(t74, 0, 0.4e1 / 0.9e1 * t276 * t142 + 0.8e1 / 0.3e1 * t279 * t251);
  t284 = t260 * t159;
  t287 = t80 * t70;
  t291 = my_piecewise3(t79, 0, 0.4e1 / 0.9e1 * t284 * t146 - 0.8e1 / 0.3e1 * t287 * t251);
  t292 = t283 + t291;
  t294 = t69 * t292 * t88;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[1] = t168 + t169 + t152 + t165 + t7 * (t211 + t241 + t243 + t275 + t294);

  t298 = 0.2e1 * t275;
  t299 = t155 * t155;
  t303 = 0.2e1 * t140 + 0.2e1 * t252;
  t307 = my_piecewise3(t74, 0, 0.4e1 / 0.9e1 * t246 * t299 + 0.4e1 / 0.3e1 * t75 * t303);
  t308 = t159 * t159;
  t311 = -t303;
  t315 = my_piecewise3(t79, 0, 0.4e1 / 0.9e1 * t260 * t308 + 0.4e1 / 0.3e1 * t80 * t311);
  t316 = t307 + t315;
  t318 = t69 * t316 * t88;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[2] = t168 + t169 + 0.2e1 * t165 + t7 * (t211 + t241 + t298 + t318);

#ifndef XC_DONT_COMPILE_KXC

  if(order < 3) return;


  t321 = 0.3e1 * t211;
  t322 = 0.3e1 * t241;
  t325 = t90 * t90;
  t327 = t14 / t325;
  t340 = 0.1e1 / t16 / t180 / t182 / t5 * t184 / 0.4e1;
  t341 = t15 * t340;
  t342 = t139 * t139;
  t343 = 0.1e1 / t342;
  t344 = t2 * t343;
  t349 = t183 / t184 / t250;
  t353 = 0.1e1 / t8 / t250;
  t354 = t21 * t353;
  t359 = -t341 * t344 / 0.3e1 + 0.2e1 / 0.9e1 * t181 * t349 - 0.7e1 / 0.27e2 * t95 * t354 - 0.7e1 / 0.27e2 * t20 * t354;
  t365 = t6 * t353 * t29;
  t373 = my_piecewise3(t13, 0.6e1 * t173 * t102 * t197 - 0.6e1 * t327 * t174 * t102 - t92 * t359, -0.2e1 / 0.3e1 * t28 * t251 - 0.7e1 / 0.27e2 * t34 * t365 - 0.13e2 / 0.36e2 * t33 * t354 - 0.7e1 / 0.27e2 * t39 * t354);
  t374 = t116 * t116;
  t376 = t44 / t374;
  t383 = t45 * t340;
  t392 = -t383 * t344 / 0.3e1 + 0.2e1 / 0.9e1 * t219 * t349 - 0.7e1 / 0.27e2 * t120 * t354 - 0.7e1 / 0.27e2 * t49 * t354;
  t404 = my_piecewise3(t13, 0.6e1 * t214 * t124 * t226 - 0.6e1 * t376 * t215 * t124 - t118 * t392, -0.2e1 / 0.3e1 * t55 * t251 - 0.7e1 / 0.27e2 * t60 * t365 - 0.13e2 / 0.36e2 * t59 * t354 - 0.7e1 / 0.27e2 * t64 * t354);
  t405 = t404 - t373;
  t407 = t405 * t83 * t88;
  t409 = t239 * t150 * t88;
  t410 = 0.3e1 * t409;
  t412 = t136 * t269 * t88;
  t415 = 0.1e1 / t245 / t73;
  t416 = t247 * t142;
  t419 = t246 * t142;
  t422 = t70 * t343;
  t424 = 0.6e1 * t251 - 0.6e1 * t422;
  t428 = my_piecewise3(t74, 0, -0.8e1 / 0.27e2 * t415 * t416 + 0.4e1 / 0.3e1 * t419 * t254 + 0.4e1 / 0.3e1 * t75 * t424);
  t430 = 0.1e1 / t259 / t78;
  t431 = t261 * t146;
  t434 = t260 * t146;
  t437 = -t424;
  t441 = my_piecewise3(t79, 0, -0.8e1 / 0.27e2 * t430 * t431 + 0.4e1 / 0.3e1 * t434 * t264 + 0.4e1 / 0.3e1 * t80 * t437);
  t442 = t428 + t441;
  t444 = t69 * t442 * t88;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[0] = t321 + t322 + 0.6e1 * t243 + 0.3e1 * t271 + t7 * (t373 + t407 + t410 + 0.3e1 * t412 + t444);

  t448 = 0.2e1 * t294;
  t451 = t239 * t163 * t88;
  t453 = t136 * t292 * t88;
  t454 = 0.2e1 * t453;
  t455 = t415 * t155;
  t458 = t246 * t70;
  t469 = my_piecewise3(t74, 0, -0.8e1 / 0.27e2 * t455 * t247 + 0.16e2 / 0.9e1 * t458 * t251 * t142 + 0.4e1 / 0.9e1 * t276 * t254 + 0.8e1 / 0.3e1 * t75 * t251 - 0.8e1 * t279 * t343);
  t470 = t430 * t159;
  t473 = t260 * t70;
  t484 = my_piecewise3(t79, 0, -0.8e1 / 0.27e2 * t470 * t261 - 0.16e2 / 0.9e1 * t473 * t251 * t146 + 0.4e1 / 0.9e1 * t284 * t264 - 0.8e1 / 0.3e1 * t80 * t251 + 0.8e1 * t287 * t343);
  t485 = t469 + t484;
  t487 = t69 * t485 * t88;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[1] = t321 + t322 + 0.4e1 * t243 + t271 + t298 + t448 + t7 * (t373 + t407 + 0.2e1 * t409 + t412 + t451 + t454 + t487);

  t493 = t136 * t316 * t88;
  t494 = t415 * t299;
  t499 = t246 * t303;
  t504 = -0.2e1 * t251 - 0.6e1 * t422;
  t508 = my_piecewise3(t74, 0, -0.8e1 / 0.27e2 * t494 * t142 + 0.16e2 / 0.9e1 * t276 * t252 + 0.4e1 / 0.9e1 * t499 * t142 + 0.4e1 / 0.3e1 * t75 * t504);
  t509 = t430 * t308;
  t514 = t260 * t311;
  t517 = -t504;
  t521 = my_piecewise3(t79, 0, -0.8e1 / 0.27e2 * t509 * t146 - 0.16e2 / 0.9e1 * t284 * t252 + 0.4e1 / 0.9e1 * t514 * t146 + 0.4e1 / 0.3e1 * t80 * t517);
  t522 = t508 + t521;
  t524 = t69 * t522 * t88;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[2] = t321 + t322 + t244 + 0.4e1 * t275 + t448 + t318 + t7 * (t373 + t407 + t409 + 0.2e1 * t451 + t454 + t493 + t524);

  t529 = 0.3e1 * t451;
  t531 = t299 * t155;
  t537 = -0.6e1 * t251 - 0.6e1 * t422;
  t541 = my_piecewise3(t74, 0, -0.8e1 / 0.27e2 * t415 * t531 + 0.4e1 / 0.3e1 * t276 * t303 + 0.4e1 / 0.3e1 * t75 * t537);
  t542 = t308 * t159;
  t547 = -t537;
  t551 = my_piecewise3(t79, 0, -0.8e1 / 0.27e2 * t430 * t542 + 0.4e1 / 0.3e1 * t284 * t311 + 0.4e1 / 0.3e1 * t80 * t547);
  t552 = t541 + t551;
  t554 = t69 * t552 * t88;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[3] = t321 + t322 + 0.6e1 * t275 + 0.3e1 * t318 + t7 * (t373 + t407 + t529 + 0.3e1 * t493 + t554);

#ifndef XC_DONT_COMPILE_LXC

  if(order < 4) return;


  t557 = 0.4e1 * t373;
  t558 = 0.4e1 * t407;
  t565 = t174 * t174;
  t571 = t197 * t197;
  t580 = 0.1e1 / t16 / t2 / t71 / 0.48e2;
  t583 = t342 * t7;
  t587 = 0.1e1 / t8 / t583 * t1 * t21;
  t590 = 0.1e1 / t583;
  t591 = t2 * t590;
  t596 = t183 / t184 / t342;
  t600 = 0.1e1 / t8 / t342;
  t601 = t21 * t600;
  t612 = t6 * t600 * t29;
  t620 = my_piecewise3(t13, 0.24e2 * t14 / t325 / t25 * t565 - 0.36e2 * t327 * t174 * t197 + 0.6e1 * t173 * t571 + 0.8e1 * t173 * t102 * t359 - t92 * (-0.5e1 / 0.18e2 * t15 * t580 * t2 * t587 + 0.8e1 / 0.3e1 * t341 * t591 - 0.80e2 / 0.81e2 * t181 * t596 + 0.70e2 / 0.81e2 * t95 * t601 + 0.70e2 / 0.81e2 * t20 * t601), 0.2e1 * t28 * t343 + 0.70e2 / 0.81e2 * t34 * t612 + 0.209e3 / 0.162e3 * t33 * t601 + 0.70e2 / 0.81e2 * t39 * t601);
  t624 = t215 * t215;
  t630 = t226 * t226;
  t660 = my_piecewise3(t13, 0.24e2 * t44 / t374 / t52 * t624 - 0.36e2 * t376 * t215 * t226 + 0.6e1 * t214 * t630 + 0.8e1 * t214 * t124 * t392 - t118 * (-0.5e1 / 0.18e2 * t45 * t580 * t2 * t587 + 0.8e1 / 0.3e1 * t383 * t591 - 0.80e2 / 0.81e2 * t219 * t596 + 0.70e2 / 0.81e2 * t120 * t601 + 0.70e2 / 0.81e2 * t49 * t601), 0.2e1 * t55 * t343 + 0.70e2 / 0.81e2 * t60 * t612 + 0.209e3 / 0.162e3 * t59 * t601 + 0.70e2 / 0.81e2 * t64 * t601);
  t663 = (t660 - t620) * t83 * t88;
  t665 = t405 * t150 * t88;
  t668 = t239 * t269 * t88;
  t671 = t136 * t442 * t88;
  t673 = t73 * t73;
  t675 = 0.1e1 / t245 / t673;
  t676 = t247 * t247;
  t682 = t254 * t254;
  t687 = t70 * t590;
  t689 = -0.24e2 * t343 + 0.24e2 * t687;
  t693 = my_piecewise3(t74, 0, 0.40e2 / 0.81e2 * t675 * t676 - 0.16e2 / 0.9e1 * t415 * t247 * t254 + 0.4e1 / 0.3e1 * t246 * t682 + 0.16e2 / 0.9e1 * t419 * t424 + 0.4e1 / 0.3e1 * t75 * t689);
  t694 = t78 * t78;
  t696 = 0.1e1 / t259 / t694;
  t697 = t261 * t261;
  t703 = t264 * t264;
  t712 = my_piecewise3(t79, 0, 0.40e2 / 0.81e2 * t696 * t697 - 0.16e2 / 0.9e1 * t430 * t261 * t264 + 0.4e1 / 0.3e1 * t260 * t703 + 0.16e2 / 0.9e1 * t434 * t437 - 0.4e1 / 0.3e1 * t80 * t689);
  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rho4[0] = t557 + t558 + 0.12e2 * t409 + 0.12e2 * t412 + 0.4e1 * t444 + t7 * (t620 + t663 + 0.4e1 * t665 + 0.6e1 * t668 + 0.4e1 * t671 + t69 * (t693 + t712) * t88);

  t720 = 0.6e1 * t453;
  t725 = t405 * t163 * t88;
  t727 = t239 * t292 * t88;
  t728 = 0.3e1 * t727;
  t730 = t136 * t485 * t88;
  t756 = 0.32e2 * t279 * t590;
  t758 = my_piecewise3(t74, 0, 0.40e2 / 0.81e2 * t675 * t155 * t416 - 0.16e2 / 0.9e1 * t415 * t70 * t251 * t247 - 0.8e1 / 0.9e1 * t455 * t142 * t254 + 0.8e1 / 0.3e1 * t246 * t251 * t142 - 0.8e1 * t458 * t343 * t142 + 0.8e1 / 0.3e1 * t458 * t251 * t254 + 0.4e1 / 0.9e1 * t276 * t424 - 0.16e2 * t75 * t343 + t756);
  t783 = 0.32e2 * t287 * t590;
  t785 = my_piecewise3(t79, 0, 0.40e2 / 0.81e2 * t696 * t159 * t431 + 0.16e2 / 0.9e1 * t430 * t70 * t251 * t261 - 0.8e1 / 0.9e1 * t470 * t146 * t264 - 0.8e1 / 0.3e1 * t260 * t251 * t146 + 0.8e1 * t473 * t343 * t146 - 0.8e1 / 0.3e1 * t473 * t251 * t264 + 0.4e1 / 0.9e1 * t284 * t437 + 0.16e2 * t80 * t343 - t783);
  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rho4[1] = t557 + t558 + 0.9e1 * t409 + 0.6e1 * t412 + t444 + t529 + t720 + 0.3e1 * t487 + t7 * (t620 + t663 + 0.3e1 * t665 + 0.3e1 * t668 + t671 + t725 + t728 + 0.3e1 * t730 + t69 * (t758 + t785) * t88);

  t803 = t239 * t316 * t88;
  t805 = t136 * t522 * t88;
  t816 = t70 * t70;
  t819 = 0.1e1 / t342 / t139;
  t835 = my_piecewise3(t74, 0, 0.40e2 / 0.81e2 * t675 * t299 * t247 - 0.64e2 / 0.27e2 * t455 * t142 * t70 * t251 - 0.8e1 / 0.27e2 * t494 * t254 + 0.32e2 / 0.9e1 * t246 * t816 * t819 + 0.16e2 / 0.9e1 * t276 * t251 - 0.16e2 / 0.3e1 * t276 * t422 - 0.8e1 / 0.27e2 * t415 * t303 * t247 + 0.8e1 / 0.9e1 * t246 * t504 * t142 + 0.4e1 / 0.9e1 * t499 * t254 + t756);
  t861 = my_piecewise3(t79, 0, 0.40e2 / 0.81e2 * t696 * t308 * t261 + 0.64e2 / 0.27e2 * t470 * t146 * t70 * t251 - 0.8e1 / 0.27e2 * t509 * t264 + 0.32e2 / 0.9e1 * t260 * t816 * t819 - 0.16e2 / 0.9e1 * t284 * t251 + 0.16e2 / 0.3e1 * t284 * t422 - 0.8e1 / 0.27e2 * t430 * t311 * t261 + 0.8e1 / 0.9e1 * t260 * t517 * t146 + 0.4e1 / 0.9e1 * t514 * t264 - t783);
  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rho4[2] = t557 + t558 + 0.6e1 * t409 + 0.2e1 * t412 + 0.6e1 * t451 + 0.8e1 * t453 + 0.2e1 * t487 + 0.2e1 * t493 + 0.2e1 * t524 + t7 * (t620 + t663 + 0.2e1 * t665 + t668 + 0.2e1 * t725 + 0.4e1 * t727 + 0.2e1 * t730 + t803 + 0.2e1 * t805 + t69 * (t835 + t861) * t88);

  t874 = t136 * t552 * t88;
  t893 = 0.12e2 * t343 + 0.24e2 * t687;
  t897 = my_piecewise3(t74, 0, 0.40e2 / 0.81e2 * t675 * t531 * t142 - 0.16e2 / 0.9e1 * t494 * t252 - 0.8e1 / 0.9e1 * t455 * t303 * t142 + 0.8e1 / 0.3e1 * t458 * t251 * t303 + 0.4e1 / 0.3e1 * t276 * t504 + 0.4e1 / 0.9e1 * t246 * t537 * t142 + 0.4e1 / 0.3e1 * t75 * t893);
  t918 = my_piecewise3(t79, 0, 0.40e2 / 0.81e2 * t696 * t542 * t146 + 0.16e2 / 0.9e1 * t509 * t252 - 0.8e1 / 0.9e1 * t470 * t311 * t146 - 0.8e1 / 0.3e1 * t473 * t251 * t311 + 0.4e1 / 0.3e1 * t284 * t517 + 0.4e1 / 0.9e1 * t260 * t547 * t146 - 0.4e1 / 0.3e1 * t80 * t893);
  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rho4[3] = t557 + t558 + t410 + 0.9e1 * t451 + t720 + 0.6e1 * t493 + 0.3e1 * t524 + t554 + t7 * (t620 + t663 + t665 + 0.3e1 * t725 + t728 + 0.3e1 * t803 + 0.3e1 * t805 + t874 + t69 * (t897 + t918) * t88);

  t930 = t299 * t299;
  t935 = t303 * t303;
  t941 = 0.24e2 * t343 + 0.24e2 * t687;
  t945 = my_piecewise3(t74, 0, 0.40e2 / 0.81e2 * t675 * t930 - 0.16e2 / 0.9e1 * t494 * t303 + 0.4e1 / 0.3e1 * t246 * t935 + 0.16e2 / 0.9e1 * t276 * t537 + 0.4e1 / 0.3e1 * t75 * t941);
  t946 = t308 * t308;
  t951 = t311 * t311;
  t960 = my_piecewise3(t79, 0, 0.40e2 / 0.81e2 * t696 * t946 - 0.16e2 / 0.9e1 * t509 * t311 + 0.4e1 / 0.3e1 * t260 * t951 + 0.16e2 / 0.9e1 * t284 * t547 - 0.4e1 / 0.3e1 * t80 * t941);
  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rho4[4] = t557 + t558 + 0.12e2 * t451 + 0.12e2 * t493 + 0.4e1 * t554 + t7 * (t620 + t663 + 0.4e1 * t725 + 0.6e1 * t803 + 0.4e1 * t874 + t69 * (t945 + t960) * t88);

#ifndef XC_DONT_COMPILE_MXC

  if(order < 5) return;


#endif

#endif

#endif

#endif

#endif


}

