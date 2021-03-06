/* 
  This file was generated automatically with ./scripts/maple2c.pl.
  Do not edit this file directly as it can be overwritten!!

  This Source Code Form is subject to the terms of the Mozilla Public
  License, v. 2.0. If a copy of the MPL was not distributed with this
  file, You can obtain one at http://mozilla.org/MPL/2.0/.

  Maple version     : Maple 2020 (X86 64 LINUX)
  Maple source      : ./maple/lda_exc/lda_k_tf.mpl
  Type of functional: lda_exc
*/

#define maple2c_order 4
#define MAPLE2C_FLAGS (XC_FLAGS_I_HAVE_EXC | XC_FLAGS_I_HAVE_VXC | XC_FLAGS_I_HAVE_FXC | XC_FLAGS_I_HAVE_KXC | XC_FLAGS_I_HAVE_LXC)


static inline void
func_unpol(const xc_func_type *p, int order, const double *rho , double *zk LDA_OUT_PARAMS_NO_EXC(XC_COMMA double *, ))
{

#ifndef XC_DONT_COMPILE_EXC
  double t2, t4, t5, t7, t8, t10, t11, t12;
  double t13, t14, t16;

#ifndef XC_DONT_COMPILE_LXC
  double t25;
#endif

#endif


  lda_k_tf_params *params;

  assert(p->params != NULL);
  params = (lda_k_tf_params * )(p->params);

  t2 = my_piecewise3(0.1e1 <= p->zeta_threshold, 0, 1);
  t4 = M_CBRT3;
  t5 = params->ax * t2 * t4;
  t7 = POW_1_3(0.1e1 / M_PI);
  t8 = t7 * t7;
  t10 = M_CBRT4;
  t11 = t10 * t10;
  t12 = 0.1e1 / t8 * t11;
  t13 = POW_1_3(rho[0]);
  t14 = t13 * t13;
  t16 = t5 * t12 * t14;
  if(zk != NULL && (p->info->flags & XC_FLAGS_HAVE_EXC))
    zk[0] = t16 / 0.3e1;

#ifndef XC_DONT_COMPILE_VXC

  if(order < 1) return;


  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vrho[0] = 0.5e1 / 0.9e1 * t16;

#ifndef XC_DONT_COMPILE_FXC

  if(order < 2) return;


  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[0] = 0.10e2 / 0.27e2 * t5 * t12 / t13;

#ifndef XC_DONT_COMPILE_KXC

  if(order < 3) return;


  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[0] = -0.10e2 / 0.81e2 * t5 * t12 / t13 / rho[0];

#ifndef XC_DONT_COMPILE_LXC

  if(order < 4) return;


  t25 = rho[0] * rho[0];
  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rho4[0] = 0.40e2 / 0.243e3 * t5 * t12 / t13 / t25;

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
  double t1, t2, t3, t4, t5, t6, t7, t8;
  double t10, t11, t12, t13, t14, t16, t20, t21;
  double t23, t24, t25, t26, t27, t28, t29, t30;
  double t31, t32;

#ifndef XC_DONT_COMPILE_VXC
  double t33, t35, t36, t37, t38, t39, t42, t43;
  double t46, t48, t51, t54, t57, t58, t61, t63;

#ifndef XC_DONT_COMPILE_FXC
  double t68, t69, t71, t72, t74, t75, t76, t80;
  double t81, t83, t87, t88, t89, t92, t96, t98;
  double t103, t105, t107, t110, t114, t115, t118, t122;
  double t124, t129, t133, t137, t138, t141, t145, t147;

#ifndef XC_DONT_COMPILE_KXC
  double t152, t153, t155, t158, t159, t161, t163, t164;
  double t167, t170, t171, t172, t174, t178, t180, t181;
  double t184, t187, t191, t193, t199, t201, t205, t206;
  double t209, t220, t221, t224, t235, t237, t244, t246;
  double t251, t256, t260, t261, t266, t269, t273, t275;
  double t281, t287, t291, t292, t297, t301, t303;

#ifndef XC_DONT_COMPILE_LXC
  double t309, t311, t313, t319, t320, t322, t323, t329;
  double t335, t336, t338, t342, t343, t345, t346, t352;
  double t361, t372, t375, t376, t378, t404, t406, t431;
  double t433, t445, t448, t459, t462, t478, t504, t515;
  double t535, t539, t560, t569, t574, t580, t584, t585;
  double t590, t599;
#endif

#endif

#endif

#endif

#endif


  lda_k_tf_params *params;

  assert(p->params != NULL);
  params = (lda_k_tf_params * )(p->params);

  t1 = rho[0] - rho[1];
  t2 = rho[0] + rho[1];
  t3 = 0.1e1 / t2;
  t4 = t1 * t3;
  t5 = 0.1e1 + t4;
  t6 = t5 <= p->zeta_threshold;
  t7 = POW_1_3(t5);
  t8 = t7 * t7;
  t10 = my_piecewise3(t6, 0, t8 * t5);
  t11 = 0.1e1 - t4;
  t12 = t11 <= p->zeta_threshold;
  t13 = POW_1_3(t11);
  t14 = t13 * t13;
  t16 = my_piecewise3(t12, 0, t14 * t11);
  t20 = M_CBRT3;
  t21 = params->ax * (t10 / 0.2e1 + t16 / 0.2e1) * t20;
  t23 = POW_1_3(0.1e1 / M_PI);
  t24 = t23 * t23;
  t25 = 0.1e1 / t24;
  t26 = M_CBRT4;
  t27 = t26 * t26;
  t28 = t25 * t27;
  t29 = POW_1_3(t2);
  t30 = t29 * t29;
  t31 = t28 * t30;
  t32 = t21 * t31;
  if(zk != NULL && (p->info->flags & XC_FLAGS_HAVE_EXC))
    zk[0] = t32 / 0.3e1;

#ifndef XC_DONT_COMPILE_VXC

  if(order < 1) return;


  t33 = 0.5e1 / 0.9e1 * t32;
  t35 = t30 * t2 * params->ax;
  t36 = t2 * t2;
  t37 = 0.1e1 / t36;
  t38 = t1 * t37;
  t39 = t3 - t38;
  t42 = my_piecewise3(t6, 0, 0.5e1 / 0.3e1 * t8 * t39);
  t43 = -t39;
  t46 = my_piecewise3(t12, 0, 0.5e1 / 0.3e1 * t14 * t43);
  t48 = t42 / 0.2e1 + t46 / 0.2e1;
  t51 = t20 * t25 * t27;
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vrho[0] = t33 + t35 * t48 * t51 / 0.3e1;

  t54 = -t3 - t38;
  t57 = my_piecewise3(t6, 0, 0.5e1 / 0.3e1 * t8 * t54);
  t58 = -t54;
  t61 = my_piecewise3(t12, 0, 0.5e1 / 0.3e1 * t14 * t58);
  t63 = t57 / 0.2e1 + t61 / 0.2e1;
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vrho[1] = t33 + t35 * t63 * t51 / 0.3e1;

#ifndef XC_DONT_COMPILE_FXC

  if(order < 2) return;


  t68 = params->ax * t48 * t20;
  t69 = t68 * t31;
  t71 = 0.1e1 / t29;
  t72 = t28 * t71;
  t74 = 0.10e2 / 0.27e2 * t21 * t72;
  t75 = 0.1e1 / t7;
  t76 = t39 * t39;
  t80 = 0.1e1 / t36 / t2;
  t81 = t1 * t80;
  t83 = -0.2e1 * t37 + 0.2e1 * t81;
  t87 = my_piecewise3(t6, 0, 0.10e2 / 0.9e1 * t75 * t76 + 0.5e1 / 0.3e1 * t8 * t83);
  t88 = 0.1e1 / t13;
  t89 = t43 * t43;
  t92 = -t83;
  t96 = my_piecewise3(t12, 0, 0.10e2 / 0.9e1 * t88 * t89 + 0.5e1 / 0.3e1 * t14 * t92);
  t98 = t87 / 0.2e1 + t96 / 0.2e1;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[0] = 0.10e2 / 0.9e1 * t69 + t74 + t35 * t98 * t51 / 0.3e1;

  t103 = t30 * params->ax;
  t105 = t103 * t63 * t51;
  t107 = t75 * t54;
  t110 = t8 * t1;
  t114 = my_piecewise3(t6, 0, 0.10e2 / 0.9e1 * t107 * t39 + 0.10e2 / 0.3e1 * t110 * t80);
  t115 = t88 * t58;
  t118 = t14 * t1;
  t122 = my_piecewise3(t12, 0, 0.10e2 / 0.9e1 * t115 * t43 - 0.10e2 / 0.3e1 * t118 * t80);
  t124 = t114 / 0.2e1 + t122 / 0.2e1;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[1] = 0.5e1 / 0.9e1 * t69 + t74 + 0.5e1 / 0.9e1 * t105 + t35 * t124 * t51 / 0.3e1;

  t129 = t54 * t54;
  t133 = 0.2e1 * t37 + 0.2e1 * t81;
  t137 = my_piecewise3(t6, 0, 0.10e2 / 0.9e1 * t75 * t129 + 0.5e1 / 0.3e1 * t8 * t133);
  t138 = t58 * t58;
  t141 = -t133;
  t145 = my_piecewise3(t12, 0, 0.10e2 / 0.9e1 * t88 * t138 + 0.5e1 / 0.3e1 * t14 * t141);
  t147 = t137 / 0.2e1 + t145 / 0.2e1;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[2] = 0.10e2 / 0.9e1 * t105 + t74 + t35 * t147 * t51 / 0.3e1;

#ifndef XC_DONT_COMPILE_KXC

  if(order < 3) return;


  t152 = params->ax * t98 * t20;
  t153 = t152 * t31;
  t155 = t68 * t72;
  t158 = 0.1e1 / t29 / t2;
  t159 = t28 * t158;
  t161 = 0.10e2 / 0.81e2 * t21 * t159;
  t163 = 0.1e1 / t7 / t5;
  t164 = t76 * t39;
  t167 = t75 * t39;
  t170 = t36 * t36;
  t171 = 0.1e1 / t170;
  t172 = t1 * t171;
  t174 = 0.6e1 * t80 - 0.6e1 * t172;
  t178 = my_piecewise3(t6, 0, -0.10e2 / 0.27e2 * t163 * t164 + 0.10e2 / 0.3e1 * t167 * t83 + 0.5e1 / 0.3e1 * t8 * t174);
  t180 = 0.1e1 / t13 / t11;
  t181 = t89 * t43;
  t184 = t88 * t43;
  t187 = -t174;
  t191 = my_piecewise3(t12, 0, -0.10e2 / 0.27e2 * t180 * t181 + 0.10e2 / 0.3e1 * t184 * t92 + 0.5e1 / 0.3e1 * t14 * t187);
  t193 = t178 / 0.2e1 + t191 / 0.2e1;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[0] = 0.5e1 / 0.3e1 * t153 + 0.10e2 / 0.9e1 * t155 - t161 + t35 * t193 * t51 / 0.3e1;

  t199 = t71 * params->ax;
  t201 = t199 * t63 * t51;
  t205 = 0.10e2 / 0.9e1 * t103 * t124 * t51;
  t206 = t163 * t54;
  t209 = t75 * t1;
  t220 = my_piecewise3(t6, 0, -0.10e2 / 0.27e2 * t206 * t76 + 0.40e2 / 0.9e1 * t209 * t80 * t39 + 0.10e2 / 0.9e1 * t107 * t83 + 0.10e2 / 0.3e1 * t8 * t80 - 0.10e2 * t110 * t171);
  t221 = t180 * t58;
  t224 = t88 * t1;
  t235 = my_piecewise3(t12, 0, -0.10e2 / 0.27e2 * t221 * t89 - 0.40e2 / 0.9e1 * t224 * t80 * t43 + 0.10e2 / 0.9e1 * t115 * t92 - 0.10e2 / 0.3e1 * t14 * t80 + 0.10e2 * t118 * t171);
  t237 = t220 / 0.2e1 + t235 / 0.2e1;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[1] = 0.5e1 / 0.9e1 * t153 + 0.20e2 / 0.27e2 * t155 - t161 + 0.10e2 / 0.27e2 * t201 + t205 + t35 * t237 * t51 / 0.3e1;

  t244 = t103 * t147 * t51;
  t246 = t163 * t129;
  t251 = t75 * t133;
  t256 = -0.2e1 * t80 - 0.6e1 * t172;
  t260 = my_piecewise3(t6, 0, -0.10e2 / 0.27e2 * t246 * t39 + 0.40e2 / 0.9e1 * t107 * t81 + 0.10e2 / 0.9e1 * t251 * t39 + 0.5e1 / 0.3e1 * t8 * t256);
  t261 = t180 * t138;
  t266 = t88 * t141;
  t269 = -t256;
  t273 = my_piecewise3(t12, 0, -0.10e2 / 0.27e2 * t261 * t43 - 0.40e2 / 0.9e1 * t115 * t81 + 0.10e2 / 0.9e1 * t266 * t43 + 0.5e1 / 0.3e1 * t14 * t269);
  t275 = t260 / 0.2e1 + t273 / 0.2e1;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[2] = 0.20e2 / 0.27e2 * t201 + t205 + 0.10e2 / 0.27e2 * t155 - t161 + 0.5e1 / 0.9e1 * t244 + t35 * t275 * t51 / 0.3e1;

  t281 = t129 * t54;
  t287 = -0.6e1 * t80 - 0.6e1 * t172;
  t291 = my_piecewise3(t6, 0, -0.10e2 / 0.27e2 * t163 * t281 + 0.10e2 / 0.3e1 * t107 * t133 + 0.5e1 / 0.3e1 * t8 * t287);
  t292 = t138 * t58;
  t297 = -t287;
  t301 = my_piecewise3(t12, 0, -0.10e2 / 0.27e2 * t180 * t292 + 0.10e2 / 0.3e1 * t115 * t141 + 0.5e1 / 0.3e1 * t14 * t297);
  t303 = t291 / 0.2e1 + t301 / 0.2e1;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[3] = 0.10e2 / 0.9e1 * t201 + 0.5e1 / 0.3e1 * t244 - t161 + t35 * t303 * t51 / 0.3e1;

#ifndef XC_DONT_COMPILE_LXC

  if(order < 4) return;


  t309 = params->ax * t193 * t20 * t31;
  t311 = t152 * t72;
  t313 = t68 * t159;
  t319 = 0.40e2 / 0.243e3 * t21 * t28 / t29 / t36;
  t320 = t5 * t5;
  t322 = 0.1e1 / t7 / t320;
  t323 = t76 * t76;
  t329 = t83 * t83;
  t335 = 0.1e1 / t170 / t2;
  t336 = t1 * t335;
  t338 = -0.24e2 * t171 + 0.24e2 * t336;
  t342 = my_piecewise3(t6, 0, 0.40e2 / 0.81e2 * t322 * t323 - 0.20e2 / 0.9e1 * t163 * t76 * t83 + 0.10e2 / 0.3e1 * t75 * t329 + 0.40e2 / 0.9e1 * t167 * t174 + 0.5e1 / 0.3e1 * t8 * t338);
  t343 = t11 * t11;
  t345 = 0.1e1 / t13 / t343;
  t346 = t89 * t89;
  t352 = t92 * t92;
  t361 = my_piecewise3(t12, 0, 0.40e2 / 0.81e2 * t345 * t346 - 0.20e2 / 0.9e1 * t180 * t89 * t92 + 0.10e2 / 0.3e1 * t88 * t352 + 0.40e2 / 0.9e1 * t184 * t187 - 0.5e1 / 0.3e1 * t14 * t338);
  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rho4[0] = 0.20e2 / 0.9e1 * t309 + 0.20e2 / 0.9e1 * t311 - 0.40e2 / 0.81e2 * t313 + t319 + t35 * (t342 / 0.2e1 + t361 / 0.2e1) * t51 / 0.3e1;

  t372 = t158 * params->ax * t63 * t51;
  t375 = t199 * t124 * t51;
  t376 = 0.10e2 / 0.9e1 * t375;
  t378 = t103 * t237 * t51;
  t404 = 0.40e2 * t110 * t335;
  t406 = my_piecewise3(t6, 0, 0.40e2 / 0.81e2 * t322 * t54 * t164 - 0.20e2 / 0.9e1 * t163 * t1 * t80 * t76 - 0.10e2 / 0.9e1 * t206 * t39 * t83 + 0.20e2 / 0.3e1 * t75 * t80 * t39 - 0.20e2 * t209 * t171 * t39 + 0.20e2 / 0.3e1 * t209 * t80 * t83 + 0.10e2 / 0.9e1 * t107 * t174 - 0.20e2 * t8 * t171 + t404);
  t431 = 0.40e2 * t118 * t335;
  t433 = my_piecewise3(t12, 0, 0.40e2 / 0.81e2 * t345 * t58 * t181 + 0.20e2 / 0.9e1 * t180 * t1 * t80 * t89 - 0.10e2 / 0.9e1 * t221 * t43 * t92 - 0.20e2 / 0.3e1 * t88 * t80 * t43 + 0.20e2 * t224 * t171 * t43 - 0.20e2 / 0.3e1 * t224 * t80 * t92 + 0.10e2 / 0.9e1 * t115 * t187 + 0.20e2 * t14 * t171 - t431);
  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rho4[1] = 0.5e1 / 0.9e1 * t309 + 0.10e2 / 0.9e1 * t311 - 0.10e2 / 0.27e2 * t313 + t319 - 0.10e2 / 0.81e2 * t372 + t376 + 0.5e1 / 0.3e1 * t378 + t35 * (t406 / 0.2e1 + t433 / 0.2e1) * t51 / 0.3e1;

  t445 = t199 * t147 * t51;
  t448 = t103 * t275 * t51;
  t459 = t1 * t1;
  t462 = 0.1e1 / t170 / t36;
  t478 = my_piecewise3(t6, 0, 0.40e2 / 0.81e2 * t322 * t129 * t76 - 0.80e2 / 0.27e2 * t206 * t39 * t1 * t80 - 0.10e2 / 0.27e2 * t246 * t83 + 0.80e2 / 0.9e1 * t75 * t459 * t462 + 0.40e2 / 0.9e1 * t107 * t80 - 0.40e2 / 0.3e1 * t107 * t172 - 0.10e2 / 0.27e2 * t163 * t133 * t76 + 0.20e2 / 0.9e1 * t75 * t256 * t39 + 0.10e2 / 0.9e1 * t251 * t83 + t404);
  t504 = my_piecewise3(t12, 0, 0.40e2 / 0.81e2 * t345 * t138 * t89 + 0.80e2 / 0.27e2 * t221 * t43 * t1 * t80 - 0.10e2 / 0.27e2 * t261 * t92 + 0.80e2 / 0.9e1 * t88 * t459 * t462 - 0.40e2 / 0.9e1 * t115 * t80 + 0.40e2 / 0.3e1 * t115 * t172 - 0.10e2 / 0.27e2 * t180 * t141 * t89 + 0.20e2 / 0.9e1 * t88 * t269 * t43 + 0.10e2 / 0.9e1 * t266 * t92 - t431);
  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rho4[2] = -0.20e2 / 0.81e2 * t372 + 0.40e2 / 0.27e2 * t375 + 0.10e2 / 0.9e1 * t378 + 0.10e2 / 0.27e2 * t311 - 0.20e2 / 0.81e2 * t313 + t319 + 0.10e2 / 0.27e2 * t445 + 0.10e2 / 0.9e1 * t448 + t35 * (t478 / 0.2e1 + t504 / 0.2e1) * t51 / 0.3e1;

  t515 = t103 * t303 * t51;
  t535 = 0.12e2 * t171 + 0.24e2 * t336;
  t539 = my_piecewise3(t6, 0, 0.40e2 / 0.81e2 * t322 * t281 * t39 - 0.20e2 / 0.9e1 * t246 * t81 - 0.10e2 / 0.9e1 * t206 * t133 * t39 + 0.20e2 / 0.3e1 * t209 * t80 * t133 + 0.10e2 / 0.3e1 * t107 * t256 + 0.10e2 / 0.9e1 * t75 * t287 * t39 + 0.5e1 / 0.3e1 * t8 * t535);
  t560 = my_piecewise3(t12, 0, 0.40e2 / 0.81e2 * t345 * t292 * t43 + 0.20e2 / 0.9e1 * t261 * t81 - 0.10e2 / 0.9e1 * t221 * t141 * t43 - 0.20e2 / 0.3e1 * t224 * t80 * t141 + 0.10e2 / 0.3e1 * t115 * t269 + 0.10e2 / 0.9e1 * t88 * t297 * t43 - 0.5e1 / 0.3e1 * t14 * t535);
  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rho4[3] = -0.10e2 / 0.27e2 * t372 + t376 + 0.10e2 / 0.9e1 * t445 + 0.5e1 / 0.3e1 * t448 - 0.10e2 / 0.81e2 * t313 + t319 + 0.5e1 / 0.9e1 * t515 + t35 * (t539 / 0.2e1 + t560 / 0.2e1) * t51 / 0.3e1;

  t569 = t129 * t129;
  t574 = t133 * t133;
  t580 = 0.24e2 * t171 + 0.24e2 * t336;
  t584 = my_piecewise3(t6, 0, 0.40e2 / 0.81e2 * t322 * t569 - 0.20e2 / 0.9e1 * t246 * t133 + 0.10e2 / 0.3e1 * t75 * t574 + 0.40e2 / 0.9e1 * t107 * t287 + 0.5e1 / 0.3e1 * t8 * t580);
  t585 = t138 * t138;
  t590 = t141 * t141;
  t599 = my_piecewise3(t12, 0, 0.40e2 / 0.81e2 * t345 * t585 - 0.20e2 / 0.9e1 * t261 * t141 + 0.10e2 / 0.3e1 * t88 * t590 + 0.40e2 / 0.9e1 * t115 * t297 - 0.5e1 / 0.3e1 * t14 * t580);
  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rho4[4] = -0.40e2 / 0.81e2 * t372 + 0.20e2 / 0.9e1 * t445 + 0.20e2 / 0.9e1 * t515 + t319 + t35 * (t584 / 0.2e1 + t599 / 0.2e1) * t51 / 0.3e1;

#ifndef XC_DONT_COMPILE_MXC

  if(order < 5) return;


#endif

#endif

#endif

#endif

#endif


}

