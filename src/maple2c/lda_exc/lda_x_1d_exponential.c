/* 
  This file was generated automatically with ./scripts/maple2c_new.pl.
  Do not edit this file directly as it can be overwritten!!

  This Source Code Form is subject to the terms of the Mozilla Public
  License, v. 2.0. If a copy of the MPL was not distributed with this
  file, You can obtain one at http://mozilla.org/MPL/2.0/.

  Maple version     : Maple 2016 (X86 64 LINUX)
  Maple source      : ./maple/lda_x_1d_exponential.mpl
  Type of functional: lda_exc
*/

#define maple2c_order 3

static inline void
func_unpol(const xc_func_type *p, int order, const double *rho, double *zk, double *vrho, double *v2rho2, double *v3rho3)
{
  double t2, t3, t4, t5, t7, t8, t15, t20;
  double t22, t23, t24, t26, t30;

  lda_x_1d_exponential_params *params;

  assert(p->params != NULL);
  params = (lda_x_1d_exponential_params * )(p->params);

  t2 = M_PI * params->beta * rho[0];
  t3 = xc_integrate(func1, NULL, 0.0, t2);
  t4 = xc_integrate(func2, NULL, 0.0, t2);
  t5 = 0.1e1 / M_PI;
  t7 = 0.1e1 / params->beta;
  t8 = 0.1e1 / rho[0];
  if(zk != NULL && (p->info->flags & XC_FLAGS_HAVE_EXC))
    *zk = -0.15915494309189533577e0 * (-t4 * t5 * t7 * t8 + t3) * t7;

#ifndef XC_DONT_COMPILE_VXC

  if(order < 1) return;


  t15 = params->beta * params->beta;
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vrho[0] = (-0.15915494309189533577e0 * (-t4 * t5 * t7 * t8 + t3) * t7) - 0.15915494309189533577e0 * t8 * t4 * t5 / t15;

#ifndef XC_DONT_COMPILE_FXC

  if(order < 2) return;


  t20 = M_PI * M_PI;
  t22 = rho[0] * rho[0];
  t23 = t20 * t15 * t22;
  t24 = expint_e1( t23);
  t26 = exp(t23);
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[0] = -0.50000000000000000001e0 * t24 * t26;

#ifndef XC_DONT_COMPILE_KXC

  if(order < 3) return;


  t30 = exp(-t23);
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[0] = 0.10000000000000000000e1 * t8 * t30 * t26 - 0.10000000000000000000e1 * t20 * t24 * t15 * rho[0] * t26;

#ifndef XC_DONT_COMPILE_LXC

  if(order < 4) return;


#endif

#endif

#endif

#endif


}


static inline void
func_ferr(const xc_func_type *p, int order, const double *rho, double *zk, double *vrho, double *v2rho2, double *v3rho3)
{
  double t3, t4, t6, t7, t9, t10, t17, t22;
  double t24, t26, t27, t29, t33;

  lda_x_1d_exponential_params *params;

  assert(p->params != NULL);
  params = (lda_x_1d_exponential_params * )(p->params);

  t3 = 0.2e1 * M_PI * params->beta * rho[0];
  t4 = xc_integrate(func1, NULL, 0.0, t3);
  t6 = xc_integrate(func2, NULL, 0.0, t3);
  t7 = 0.1e1 / M_PI;
  t9 = 0.1e1 / params->beta;
  t10 = 0.1e1 / rho[0];
  if(zk != NULL && (p->info->flags & XC_FLAGS_HAVE_EXC))
    *zk = -0.79577471545947667883e-1 * (-t6 * t7 * t9 * t10 + 0.2e1 * t4) * t9;

#ifndef XC_DONT_COMPILE_VXC

  if(order < 1) return;


  t17 = params->beta * params->beta;
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vrho[0] = (-0.79577471545947667883e-1 * (-t6 * t7 * t9 * t10 + 0.2e1 * t4) * t9) - 0.79577471545947667883e-1 * t10 * t6 * t7 / t17;

#ifndef XC_DONT_COMPILE_FXC

  if(order < 2) return;


  t22 = M_PI * M_PI;
  t24 = rho[0] * rho[0];
  t26 = 0.4e1 * t22 * t17 * t24;
  t27 = expint_e1( t26);
  t29 = exp(t26);
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[0] = -0.99999999999999999999e0 * t27 * t29;

#ifndef XC_DONT_COMPILE_KXC

  if(order < 3) return;


  t33 = exp(-t26);
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[0] = 0.20000000000000000000e1 * t10 * t33 * t29 - 0.79999999999999999998e1 * t22 * t27 * t17 * rho[0] * t29;

#ifndef XC_DONT_COMPILE_LXC

  if(order < 4) return;


#endif

#endif

#endif

#endif


}


static inline void
func_pol(const xc_func_type *p, int order, const double *rho, double *zk, double *vrho, double *v2rho2, double *v3rho3)
{
  double t1, t2, t3, t4, t5, t6, t7, t8;
  double t9, t11, t12, t13, t14, t15, t19, t20;
  double t21, t22, t23, t25, t26, t30, t31, t32;
  double t33, t34, t36, t37, t39, t40, t41, t43;
  double t45, t46, t49, t52, t53, t54, t57, t58;
  double t64, t65, t67, t69, t71, t72, t73, t74;
  double t75, t76, t77, t78, t79, t80, t81, t82;
  double t84, t85, t86, t87, t88, t90, t92, t93;
  double t94, t96, t98, t99, t100, t101, t102, t103;
  double t104, t105, t106, t108, t109, t110, t111, t113;
  double t115, t116, t121, t124, t128, t131, t138, t140;
  double t142, t143, t145, t148, t149, t150, t152, t154;
  double t155, t157, t160, t161, t166, t167, t168, t170;
  double t177, t179, t182, t185, t186, t188, t189, t190;
  double t193, t195, t196, t198, t201, t204, t207, t209;
  double t211, t212, t214, t216, t217, t218, t219, t220;
  double t221, t223, t224, t234, t236, t239, t242, t244;
  double t245, t246, t251, t254, t257, t260, t263, t264;
  double t266, t268, t269, t270, t271, t272, t274, t275;
  double t280, t281, t294, t309, t316, t325, t326, t327;
  double t341, t343, t353, t354, t368, t370, t378, t386;
  double t392, t410, t421, t427, t445;

  lda_x_1d_exponential_params *params;

  assert(p->params != NULL);
  params = (lda_x_1d_exponential_params * )(p->params);

  t1 = rho[0] - rho[1];
  t2 = rho[0] + rho[1];
  t3 = 0.1e1 / t2;
  t4 = t1 * t3;
  t5 = 0.1e1 + t4;
  t6 = t5 * M_PI;
  t7 = params->beta * t2;
  t8 = t6 * t7;
  t9 = xc_integrate(func1, NULL, 0.0, t8);
  t11 = xc_integrate(func2, NULL, 0.0, t8);
  t12 = 0.1e1 / M_PI;
  t13 = t11 * t12;
  t14 = 0.1e1 / params->beta;
  t15 = t14 * t3;
  t19 = 0.79577471545947667883e-1 * (-t13 * t15 + t5 * t9) * t14;
  t20 = 0.1e1 - t4;
  t21 = t20 * M_PI;
  t22 = t21 * t7;
  t23 = xc_integrate(func1, NULL, 0.0, t22);
  t25 = xc_integrate(func2, NULL, 0.0, t22);
  t26 = t25 * t12;
  t30 = 0.79577471545947667883e-1 * (-t26 * t15 + t20 * t23) * t14;
  if(zk != NULL && (p->info->flags & XC_FLAGS_HAVE_EXC))
    *zk = -t19 - t30;

#ifndef XC_DONT_COMPILE_VXC

  if(order < 1) return;


  t31 = t2 * t2;
  t32 = 0.1e1 / t31;
  t33 = t1 * t32;
  t34 = t3 - t33;
  t36 = t14 * t32;
  t37 = t13 * t36;
  t39 = (t34 * t9 + t37) * t14;
  t40 = 0.79577471545947667883e-1 * t39;
  t41 = -t34;
  t43 = t26 * t36;
  t45 = (t41 * t23 + t43) * t14;
  t46 = 0.79577471545947667883e-1 * t45;
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vrho[0] = -t19 - t30 + t2 * (-t40 - t46);

  t49 = -t3 - t33;
  t52 = (t49 * t9 + t37) * t14;
  t53 = 0.79577471545947667883e-1 * t52;
  t54 = -t49;
  t57 = (t54 * t23 + t43) * t14;
  t58 = 0.79577471545947667883e-1 * t57;
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vrho[1] = -t19 - t30 + t2 * (-t53 - t58);

#ifndef XC_DONT_COMPILE_FXC

  if(order < 2) return;


  t64 = 0.1e1 / t31 / t2;
  t65 = t1 * t64;
  t67 = -0.2e1 * t32 + 0.2e1 * t65;
  t69 = t34 * M_PI;
  t71 = t6 * params->beta;
  t72 = t69 * t7 + t71;
  t73 = t34 * t72;
  t74 = t5 * t5;
  t75 = M_PI * M_PI;
  t76 = t74 * t75;
  t77 = params->beta * params->beta;
  t78 = t77 * t31;
  t79 = t76 * t78;
  t80 = expint_e1( t79);
  t81 = exp(t79);
  t82 = t80 * t81;
  t84 = t72 * t80;
  t85 = t81 * t5;
  t86 = t85 * t3;
  t87 = t84 * t86;
  t88 = t14 * t64;
  t90 = 0.2e1 * t13 * t88;
  t92 = (t67 * t9 + t73 * t82 + t87 - t90) * t14;
  t93 = 0.79577471545947667883e-1 * t92;
  t94 = -t67;
  t96 = t41 * M_PI;
  t98 = t21 * params->beta;
  t99 = t96 * t7 + t98;
  t100 = t41 * t99;
  t101 = t20 * t20;
  t102 = t101 * t75;
  t103 = t102 * t78;
  t104 = expint_e1( t103);
  t105 = exp(t103);
  t106 = t104 * t105;
  t108 = t99 * t104;
  t109 = t105 * t20;
  t110 = t109 * t3;
  t111 = t108 * t110;
  t113 = 0.2e1 * t26 * t88;
  t115 = (t100 * t106 + t94 * t23 + t111 - t113) * t14;
  t116 = 0.79577471545947667883e-1 * t115;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[0] = -0.15915494309189533577e0 * t39 - 0.15915494309189533577e0 * t45 + t2 * (-t93 - t116);

  t121 = t49 * t72;
  t124 = (t121 * t82 + 0.2e1 * t65 * t9 + t87 - t90) * t14;
  t128 = t54 * t99;
  t131 = (t128 * t106 - 0.2e1 * t65 * t23 + t111 - t113) * t14;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[1] = -t40 - t46 - t53 - t58 + t2 * (-0.79577471545947667883e-1 * t124 - 0.79577471545947667883e-1 * t131);

  t138 = 0.2e1 * t32 + 0.2e1 * t65;
  t140 = t49 * M_PI;
  t142 = t140 * t7 + t71;
  t143 = t49 * t142;
  t145 = t142 * t80;
  t148 = (t138 * t9 + t143 * t82 + t145 * t86 - t90) * t14;
  t149 = 0.79577471545947667883e-1 * t148;
  t150 = -t138;
  t152 = t54 * M_PI;
  t154 = t152 * t7 + t98;
  t155 = t54 * t154;
  t157 = t154 * t104;
  t160 = (t155 * t106 + t157 * t110 + t150 * t23 - t113) * t14;
  t161 = 0.79577471545947667883e-1 * t160;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[2] = -0.15915494309189533577e0 * t52 - 0.15915494309189533577e0 * t57 + t2 * (-t149 - t161);

#ifndef XC_DONT_COMPILE_KXC

  if(order < 3) return;


  t166 = t31 * t31;
  t167 = 0.1e1 / t166;
  t168 = t1 * t167;
  t170 = 0.6e1 * t64 - 0.6e1 * t168;
  t177 = t69 * params->beta;
  t179 = t67 * M_PI * t7 + 0.2e1 * t177;
  t182 = t5 * t75;
  t185 = t77 * t2;
  t186 = t76 * t185;
  t188 = 0.2e1 * t182 * t78 * t34 + 0.2e1 * t186;
  t189 = exp(-t79);
  t190 = t188 * t189;
  t193 = 0.1e1 / t75;
  t195 = 0.1e1 / t77;
  t196 = t195 * t32;
  t198 = 0.1e1 / t74 * t193 * t196 * t81;
  t201 = t80 * t188 * t81;
  t204 = t179 * t80 * t86;
  t207 = t189 / t5;
  t209 = t193 * t195;
  t211 = t209 * t64 * t81;
  t212 = t72 * t188 * t207 * t211;
  t214 = t84 * t188 * t86;
  t216 = t81 * t34 * t3;
  t217 = t84 * t216;
  t218 = t85 * t32;
  t219 = t84 * t218;
  t220 = 0.3e1 * t219;
  t221 = t14 * t167;
  t223 = 0.6e1 * t13 * t221;
  t224 = t34 * t179 * t82 - t73 * t190 * t198 + 0.2e1 * t67 * t72 * t82 + t170 * t9 + t73 * t201 + t204 - t212 + t214 + t217 - t220 + t223;
  t234 = t96 * params->beta;
  t236 = t94 * M_PI * t7 + 0.2e1 * t234;
  t239 = t20 * t75;
  t242 = t102 * t185;
  t244 = 0.2e1 * t239 * t78 * t41 + 0.2e1 * t242;
  t245 = exp(-t103);
  t246 = t244 * t245;
  t251 = 0.1e1 / t101 * t193 * t196 * t105;
  t254 = t104 * t244 * t105;
  t257 = t236 * t104 * t110;
  t260 = t245 / t20;
  t263 = t209 * t64 * t105;
  t264 = t99 * t244 * t260 * t263;
  t266 = t108 * t244 * t110;
  t268 = t105 * t41 * t3;
  t269 = t108 * t268;
  t270 = t109 * t32;
  t271 = t108 * t270;
  t272 = 0.3e1 * t271;
  t274 = 0.6e1 * t26 * t221;
  t275 = -t100 * t246 * t251 + t41 * t236 * t106 + 0.2e1 * t94 * t99 * t106 + t100 * t254 - t170 * t23 + t257 - t264 + t266 + t269 - t272 + t274;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[0] = -0.23873241463784300365e0 * t92 - 0.23873241463784300365e0 * t115 + t2 * (-0.79577471545947667883e-1 * t224 * t14 - 0.79577471545947667883e-1 * t275 * t14);

  t280 = 0.15915494309189533577e0 * t124;
  t281 = 0.15915494309189533577e0 * t131;
  t294 = -t121 * t190 * t198 + t49 * t179 * t82 + 0.4e1 * t65 * t84 * t81 + t121 * t201 - 0.6e1 * t168 * t9 + 0.2e1 * t64 * t9 + t204 - t212 + t214 + t217 - t220 + t223;
  t309 = -0.4e1 * t65 * t108 * t105 + t54 * t236 * t106 - t128 * t246 * t251 + t128 * t254 + 0.6e1 * t168 * t23 - 0.2e1 * t64 * t23 + t257 - t264 + t266 + t269 - t272 + t274;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[1] = -t93 - t116 - t280 - t281 + t2 * (-0.79577471545947667883e-1 * t294 * t14 - 0.79577471545947667883e-1 * t309 * t14);

  t316 = -0.2e1 * t64 - 0.6e1 * t168;
  t325 = 0.2e1 * t33 * M_PI * params->beta;
  t326 = t140 * params->beta;
  t327 = t325 + t326 + t177;
  t341 = t145 * t218;
  t343 = -t142 * t188 * t207 * t211 + t138 * t72 * t82 - t143 * t190 * t198 + t145 * t188 * t86 + 0.2e1 * t65 * t145 * t81 + t49 * t327 * t82 + t327 * t80 * t86 + t143 * t201 + t145 * t216 + t316 * t9 - 0.2e1 * t219 + t223 - t341;
  t353 = t152 * params->beta;
  t354 = -t325 + t353 + t234;
  t368 = t157 * t270;
  t370 = -t154 * t244 * t260 * t263 + t354 * t104 * t110 - 0.2e1 * t65 * t157 * t105 + t150 * t99 * t106 + t54 * t354 * t106 + t157 * t244 * t110 - t155 * t246 * t251 + t155 * t254 + t157 * t268 - t316 * t23 - 0.2e1 * t271 + t274 - t368;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[2] = -t280 - t281 - t149 - t161 + t2 * (-0.79577471545947667883e-1 * t343 * t14 - 0.79577471545947667883e-1 * t370 * t14);

  t378 = -0.6e1 * t64 - 0.6e1 * t168;
  t386 = t138 * M_PI * t7 + 0.2e1 * t326;
  t392 = 0.2e1 * t182 * t78 * t49 + 0.2e1 * t186;
  t410 = -t142 * t392 * t207 * t211 - t143 * t392 * t189 * t198 + t143 * t80 * t392 * t81 + t145 * t81 * t49 * t3 + 0.2e1 * t138 * t142 * t82 + t145 * t392 * t86 + t49 * t386 * t82 + t386 * t80 * t86 + t378 * t9 + t223 - 0.3e1 * t341;
  t421 = t150 * M_PI * t7 + 0.2e1 * t353;
  t427 = 0.2e1 * t239 * t78 * t54 + 0.2e1 * t242;
  t445 = t155 * t104 * t427 * t105 + t157 * t105 * t54 * t3 - t154 * t427 * t260 * t263 - t155 * t427 * t245 * t251 + t421 * t104 * t110 + 0.2e1 * t150 * t154 * t106 + t54 * t421 * t106 + t157 * t427 * t110 - t378 * t23 + t274 - 0.3e1 * t368;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[3] = -0.23873241463784300365e0 * t148 - 0.23873241463784300365e0 * t160 + t2 * (-0.79577471545947667883e-1 * t410 * t14 - 0.79577471545947667883e-1 * t445 * t14);

#ifndef XC_DONT_COMPILE_LXC

  if(order < 4) return;


#endif

#endif

#endif

#endif


}

