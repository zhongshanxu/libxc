/* 
  This file was generated automatically with ./scripts/maple2c.pl.
  Do not edit this file directly as it can be overwritten!!

  This Source Code Form is subject to the terms of the Mozilla Public
  License, v. 2.0. If a copy of the MPL was not distributed with this
  file, You can obtain one at http://mozilla.org/MPL/2.0/.

  Maple version     : Maple 2016 (X86 64 LINUX)
  Maple source      : ./maple/lda_exc/lda_x_1d_soft.mpl
  Type of functional: lda_exc
*/

#define maple2c_order 4
#define MAPLE2C_FLAGS (XC_FLAGS_I_HAVE_EXC | XC_FLAGS_I_HAVE_VXC | XC_FLAGS_I_HAVE_FXC | XC_FLAGS_I_HAVE_KXC | XC_FLAGS_I_HAVE_LXC)


static inline void
func_unpol(const xc_func_type *p, int order, const double *rho , double *zk LDA_OUT_PARAMS_NO_EXC(XC_COMMA double *, ))
{

#ifndef XC_DONT_COMPILE_EXC
  double t3, t4, t6, t7, t10, t11, t13, t14;
  double t15, t16, t17, t18, t23;

#ifndef XC_DONT_COMPILE_VXC
  double t24, t25, t26, t27, t31;

#ifndef XC_DONT_COMPILE_FXC
  double t35, t36, t37, t41, t46;

#ifndef XC_DONT_COMPILE_KXC
  double t51, t52, t53, t59, t65;

#ifndef XC_DONT_COMPILE_LXC
  double t69, t76, t92;
#endif

#endif

#endif

#endif

#endif


  lda_x_1d_exponential_params *params;

  assert(p->params != NULL);
  params = (lda_x_1d_exponential_params * )(p->params);

  t3 = 0.1e1 <= p->zeta_threshold;
  t4 = rho[0] / 0.2e1 <= p->dens_threshold || t3;
  t6 = my_piecewise3(t3, p->zeta_threshold - 0.1e1, 0);
  t7 = 0.1e1 + t6;
  t10 = t7 * M_PI * params->beta * rho[0];
  t11 = xc_integrate(func1, NULL, 0.0, t10);
  t13 = xc_integrate(func2, NULL, 0.0, t10);
  t14 = 0.1e1 / M_PI;
  t15 = t13 * t14;
  t16 = 0.1e1 / params->beta;
  t17 = 0.1e1 / rho[0];
  t18 = t16 * t17;
  t23 = my_piecewise3(t4, 0, -0.79577471545947667883e-1 * (t7 * t11 - t15 * t18) * t16);
  if(zk != NULL && (p->info->flags & XC_FLAGS_HAVE_EXC))
    zk[0] = 0.2e1 * t23;

#ifndef XC_DONT_COMPILE_VXC

  if(order < 1) return;


  t24 = params->beta * params->beta;
  t25 = 0.1e1 / t24;
  t26 = rho[0] * rho[0];
  t27 = 0.1e1 / t26;
  t31 = my_piecewise3(t4, 0, -0.79577471545947667883e-1 * t15 * t25 * t27);
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vrho[0] = 0.2e1 * rho[0] * t31 + 0.2e1 * t23;

#ifndef XC_DONT_COMPILE_FXC

  if(order < 2) return;


  t35 = t7 * t7;
  t36 = xc_bessel_K0( t10);
  t37 = t35 * t36;
  t41 = 0.1e1 / t26 / rho[0];
  t46 = my_piecewise3(t4, 0, -0.50000000000000000000e0 * t37 * t17 + 0.15915494309189533577e0 * t15 * t25 * t41);
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[0] = 0.2e1 * rho[0] * t46 + 0.4e1 * t31;

#ifndef XC_DONT_COMPILE_KXC

  if(order < 3) return;


  t51 = xc_bessel_K1( t10);
  t52 = t35 * t7 * t51;
  t53 = M_PI * params->beta;
  t59 = t26 * t26;
  t65 = my_piecewise3(t4, 0, 0.50000000000000000000e0 * t52 * t53 * t17 + 0.15000000000000000000e1 * t37 * t27 - 0.47746482927568600731e0 * t15 * t25 / t59);
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[0] = 0.2e1 * rho[0] * t65 + 0.6e1 * t46;

#ifndef XC_DONT_COMPILE_LXC

  if(order < 4) return;


  t69 = t35 * t35;
  t76 = M_PI * M_PI;
  t92 = my_piecewise3(t4, 0, 0.50000000000000000000e0 * t69 * (-t36 - 0.1e1 / t7 * t14 * t18 * t51) * t76 * t24 * t17 - 0.20000000000000000000e1 * t52 * t53 * t27 - 0.60000000000000000001e1 * t37 * t41 + 0.19098593171027440292e1 * t15 * t25 / t59 / rho[0]);
  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rho4[0] = 0.2e1 * rho[0] * t92 + 0.8e1 * t65;

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
  double t2, t3, t4, t5, t7, t8, t9, t10;
  double t11, t12, t13, t14, t15, t17, t18, t19;
  double t20, t21, t26, t29, t30, t31, t32, t33;
  double t34, t35, t37, t38, t43;

#ifndef XC_DONT_COMPILE_VXC
  double t44, t45, t46, t47, t48, t50, t51, t55;
  double t57, t59, t63, t66, t67, t72, t74, t79;

#ifndef XC_DONT_COMPILE_FXC
  double t85, t86, t88, t89, t91, t93, t94, t95;
  double t96, t99, t100, t102, t103, t105, t109, t111;
  double t113, t115, t116, t117, t118, t121, t122, t124;
  double t126, t130, t133, t134, t136, t142, t143, t145;
  double t151, t157, t158, t160, t162, t163, t166, t172;
  double t174, t176, t178, t179, t182, t188;

#ifndef XC_DONT_COMPILE_KXC
  double t193, t194, t195, t197, t198, t203, t205, t207;
  double t208, t211, t213, t216, t218, t219, t221, t222;
  double t224, t225, t226, t227, t228, t230, t234, t236;
  double t241, t243, t245, t246, t249, t251, t254, t256;
  double t257, t259, t260, t262, t263, t264, t265, t267;
  double t271, t274, t275, t276, t277, t278, t279, t284;
  double t293, t295, t300, t309, t312, t313, t318, t321;
  double t323, t324, t325, t328, t331, t334, t335, t336;
  double t341, t344, t347, t349, t354, t357, t359, t360;
  double t361, t364, t367, t370, t371, t372, t377, t380;
  double t383, t389, t390, t392, t395, t398, t399, t402;
  double t403, t406, t409, t412, t419, t421, t423, t426;
  double t429, t430, t433, t434, t437, t440, t443, t450;

#ifndef XC_DONT_COMPILE_LXC
  double t456, t457, t459, t460, t473, t475, t479, t480;
  double t481, t483, t484, t485, t486, t491, t494, t495;
  double t496, t497, t498, t499, t500, t501, t503, t511;
  double t513, t515, t516, t518, t519, t522, t524, t537;
  double t539, t543, t544, t545, t547, t548, t549, t550;
  double t555, t558, t559, t560, t561, t562, t563, t564;
  double t566, t574, t576, t578, t579, t581, t582, t585;
  double t607, t608, t609, t610, t612, t615, t634, t636;
  double t639, t664, t665, t669, t680, t690, t692, t693;
  double t695, t710, t716, t720, t739, t740, t744, t758;
  double t760, t761, t763, t779, t786, t791, t795, t814;
  double t815, t826, t828, t831, t835, t855, t867, t868;
  double t871, t875, t890, t891, t902, t904, t907, t909;
  double t932, t945, t947, t951, t964, t980, t1000, t1001;
  double t1003, t1006, t1015, t1031, t1051, t1053, t1056;
#endif

#endif

#endif

#endif

#endif


  lda_x_1d_exponential_params *params;

  assert(p->params != NULL);
  params = (lda_x_1d_exponential_params * )(p->params);

  t2 = rho[0] - rho[1];
  t3 = rho[0] + rho[1];
  t4 = 0.1e1 / t3;
  t5 = t2 * t4;
  t7 = 0.1e1 + t5 <= p->zeta_threshold;
  t8 = rho[0] <= p->dens_threshold || t7;
  t9 = p->zeta_threshold - 0.1e1;
  t10 = my_piecewise3(t7, t9, t5);
  t11 = 0.1e1 + t10;
  t12 = t11 * M_PI;
  t13 = params->beta * t3;
  t14 = t12 * t13;
  t15 = xc_integrate(func1, NULL, 0.0, t14);
  t17 = xc_integrate(func2, NULL, 0.0, t14);
  t18 = 0.1e1 / M_PI;
  t19 = t17 * t18;
  t20 = 0.1e1 / params->beta;
  t21 = t20 * t4;
  t26 = my_piecewise3(t8, 0, -0.79577471545947667883e-1 * (t11 * t15 - t19 * t21) * t20);
  t29 = 0.1e1 - t5 <= p->zeta_threshold;
  t30 = rho[1] <= p->dens_threshold || t29;
  t31 = my_piecewise3(t29, t9, -t5);
  t32 = 0.1e1 + t31;
  t33 = t32 * M_PI;
  t34 = t33 * t13;
  t35 = xc_integrate(func1, NULL, 0.0, t34);
  t37 = xc_integrate(func2, NULL, 0.0, t34);
  t38 = t37 * t18;
  t43 = my_piecewise3(t30, 0, -0.79577471545947667883e-1 * (-t38 * t21 + t32 * t35) * t20);
  if(zk != NULL && (p->info->flags & XC_FLAGS_HAVE_EXC))
    zk[0] = t26 + t43;

#ifndef XC_DONT_COMPILE_VXC

  if(order < 1) return;


  t44 = t3 * t3;
  t45 = 0.1e1 / t44;
  t46 = t2 * t45;
  t47 = t4 - t46;
  t48 = my_piecewise3(t7, 0, t47);
  t50 = t20 * t45;
  t51 = t19 * t50;
  t55 = my_piecewise3(t8, 0, -0.79577471545947667883e-1 * (t48 * t15 + t51) * t20);
  t57 = my_piecewise3(t29, 0, -t47);
  t59 = t38 * t50;
  t63 = my_piecewise3(t30, 0, -0.79577471545947667883e-1 * (t57 * t35 + t59) * t20);
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vrho[0] = t26 + t43 + t3 * (t55 + t63);

  t66 = -t4 - t46;
  t67 = my_piecewise3(t7, 0, t66);
  t72 = my_piecewise3(t8, 0, -0.79577471545947667883e-1 * (t67 * t15 + t51) * t20);
  t74 = my_piecewise3(t29, 0, -t66);
  t79 = my_piecewise3(t30, 0, -0.79577471545947667883e-1 * (t74 * t35 + t59) * t20);
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vrho[1] = t26 + t43 + t3 * (t72 + t79);

#ifndef XC_DONT_COMPILE_FXC

  if(order < 2) return;


  t85 = 0.1e1 / t44 / t3;
  t86 = t2 * t85;
  t88 = -0.2e1 * t45 + 0.2e1 * t86;
  t89 = my_piecewise3(t7, 0, t88);
  t91 = t48 * M_PI;
  t93 = t12 * params->beta;
  t94 = t91 * t13 + t93;
  t95 = t48 * t94;
  t96 = xc_bessel_K0( t14);
  t99 = t94 * t96;
  t100 = t11 * t4;
  t102 = 0.20000000000000000000e1 * t99 * t100;
  t103 = t20 * t85;
  t105 = 0.2e1 * t19 * t103;
  t109 = my_piecewise3(t8, 0, -0.79577471545947667883e-1 * (t89 * t15 + 0.20e1 * t95 * t96 + t102 - t105) * t20);
  t111 = my_piecewise3(t29, 0, -t88);
  t113 = t57 * M_PI;
  t115 = t33 * params->beta;
  t116 = t113 * t13 + t115;
  t117 = t57 * t116;
  t118 = xc_bessel_K0( t34);
  t121 = t116 * t118;
  t122 = t32 * t4;
  t124 = 0.20000000000000000000e1 * t121 * t122;
  t126 = 0.2e1 * t38 * t103;
  t130 = my_piecewise3(t30, 0, -0.79577471545947667883e-1 * (t111 * t35 + 0.20e1 * t117 * t118 + t124 - t126) * t20);
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[0] = 0.2e1 * t55 + 0.2e1 * t63 + t3 * (t109 + t130);

  t133 = 0.2e1 * t86;
  t134 = my_piecewise3(t7, 0, t133);
  t136 = t67 * t94;
  t142 = my_piecewise3(t8, 0, -0.79577471545947667883e-1 * (t134 * t15 + 0.20e1 * t136 * t96 + t102 - t105) * t20);
  t143 = my_piecewise3(t29, 0, -t133);
  t145 = t74 * t116;
  t151 = my_piecewise3(t30, 0, -0.79577471545947667883e-1 * (t143 * t35 + 0.20e1 * t145 * t118 + t124 - t126) * t20);
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[1] = t55 + t63 + t72 + t79 + t3 * (t142 + t151);

  t157 = 0.2e1 * t45 + 0.2e1 * t86;
  t158 = my_piecewise3(t7, 0, t157);
  t160 = t67 * M_PI;
  t162 = t160 * t13 + t93;
  t163 = t67 * t162;
  t166 = t162 * t96;
  t172 = my_piecewise3(t8, 0, -0.79577471545947667883e-1 * (t158 * t15 + 0.20e1 * t163 * t96 + 0.20000000000000000000e1 * t166 * t100 - t105) * t20);
  t174 = my_piecewise3(t29, 0, -t157);
  t176 = t74 * M_PI;
  t178 = t176 * t13 + t115;
  t179 = t74 * t178;
  t182 = t178 * t118;
  t188 = my_piecewise3(t30, 0, -0.79577471545947667883e-1 * (t174 * t35 + 0.20e1 * t179 * t118 + 0.20000000000000000000e1 * t182 * t122 - t126) * t20);
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[2] = 0.2e1 * t72 + 0.2e1 * t79 + t3 * (t172 + t188);

#ifndef XC_DONT_COMPILE_KXC

  if(order < 3) return;


  t193 = t44 * t44;
  t194 = 0.1e1 / t193;
  t195 = t2 * t194;
  t197 = 0.6e1 * t85 - 0.6e1 * t195;
  t198 = my_piecewise3(t7, 0, t197);
  t203 = t89 * M_PI;
  t205 = t91 * params->beta;
  t207 = t203 * t13 + 0.2e1 * t205;
  t208 = t48 * t207;
  t211 = t94 * t94;
  t213 = xc_bessel_K1( t14);
  t216 = t207 * t96;
  t218 = 0.20000000000000000000e1 * t216 * t100;
  t219 = t211 * t213;
  t221 = 0.20000000000000000000e1 * t219 * t100;
  t222 = t48 * t4;
  t224 = 0.20000000000000000000e1 * t99 * t222;
  t225 = t11 * t45;
  t226 = t99 * t225;
  t227 = 0.60000000000000000000e1 * t226;
  t228 = t20 * t194;
  t230 = 0.6e1 * t19 * t228;
  t234 = my_piecewise3(t8, 0, -0.79577471545947667883e-1 * (t198 * t15 + 0.40e1 * t89 * t94 * t96 + 0.20e1 * t208 * t96 - 0.20e1 * t48 * t211 * t213 + t218 - t221 + t224 - t227 + t230) * t20);
  t236 = my_piecewise3(t29, 0, -t197);
  t241 = t111 * M_PI;
  t243 = t113 * params->beta;
  t245 = t241 * t13 + 0.2e1 * t243;
  t246 = t57 * t245;
  t249 = t116 * t116;
  t251 = xc_bessel_K1( t34);
  t254 = t245 * t118;
  t256 = 0.20000000000000000000e1 * t254 * t122;
  t257 = t249 * t251;
  t259 = 0.20000000000000000000e1 * t257 * t122;
  t260 = t57 * t4;
  t262 = 0.20000000000000000000e1 * t121 * t260;
  t263 = t32 * t45;
  t264 = t121 * t263;
  t265 = 0.60000000000000000000e1 * t264;
  t267 = 0.6e1 * t38 * t228;
  t271 = my_piecewise3(t30, 0, -0.79577471545947667883e-1 * (t236 * t35 + 0.40e1 * t111 * t116 * t118 + 0.20e1 * t246 * t118 - 0.20e1 * t57 * t249 * t251 + t256 - t259 + t262 - t265 + t267) * t20);
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[0] = 0.3e1 * t109 + 0.3e1 * t130 + t3 * (t234 + t271);

  t274 = 0.2e1 * t142;
  t275 = 0.2e1 * t151;
  t276 = 0.2e1 * t85;
  t277 = 0.6e1 * t195;
  t278 = t276 - t277;
  t279 = my_piecewise3(t7, 0, t278);
  t284 = t67 * t207;
  t293 = my_piecewise3(t8, 0, -0.79577471545947667883e-1 * (t279 * t15 + 0.40e1 * t134 * t94 * t96 + 0.20e1 * t284 * t96 - 0.20e1 * t67 * t211 * t213 + t218 - t221 + t224 - t227 + t230) * t20);
  t295 = my_piecewise3(t29, 0, -t278);
  t300 = t74 * t245;
  t309 = my_piecewise3(t30, 0, -0.79577471545947667883e-1 * (t295 * t35 + 0.40e1 * t143 * t116 * t118 + 0.20e1 * t300 * t118 - 0.20e1 * t74 * t249 * t251 + t256 - t259 + t262 - t265 + t267) * t20);
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[1] = t109 + t130 + t274 + t275 + t3 * (t293 + t309);

  t312 = -t276 - t277;
  t313 = my_piecewise3(t7, 0, t312);
  t318 = t134 * t162;
  t321 = t134 * M_PI;
  t323 = t160 * params->beta;
  t324 = t321 * t13 + t205 + t323;
  t325 = t67 * t324;
  t328 = t213 * t94;
  t331 = t324 * t96;
  t334 = t162 * t213;
  t335 = t94 * t11;
  t336 = t335 * t4;
  t341 = t166 * t225;
  t344 = t313 * t15 + 0.20e1 * t158 * t94 * t96 + 0.20e1 * t318 * t96 + 0.20e1 * t325 * t96 - 0.20e1 * t163 * t328 + 0.20000000000000000000e1 * t331 * t100 - 0.20000000000000000000e1 * t334 * t336 + 0.20000000000000000000e1 * t166 * t222 - 0.20000000000000000000e1 * t341 - 0.40000000000000000000e1 * t226 + t230;
  t347 = my_piecewise3(t8, 0, -0.79577471545947667883e-1 * t344 * t20);
  t349 = my_piecewise3(t29, 0, -t312);
  t354 = t143 * t178;
  t357 = t143 * M_PI;
  t359 = t176 * params->beta;
  t360 = t357 * t13 + t243 + t359;
  t361 = t74 * t360;
  t364 = t251 * t116;
  t367 = t360 * t118;
  t370 = t178 * t251;
  t371 = t116 * t32;
  t372 = t371 * t4;
  t377 = t182 * t263;
  t380 = t349 * t35 + 0.20e1 * t174 * t116 * t118 + 0.20e1 * t354 * t118 + 0.20e1 * t361 * t118 - 0.20e1 * t179 * t364 + 0.20000000000000000000e1 * t367 * t122 - 0.20000000000000000000e1 * t370 * t372 + 0.20000000000000000000e1 * t182 * t260 - 0.20000000000000000000e1 * t377 - 0.40000000000000000000e1 * t264 + t267;
  t383 = my_piecewise3(t30, 0, -0.79577471545947667883e-1 * t380 * t20);
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[2] = t274 + t275 + t172 + t188 + t3 * (t347 + t383);

  t389 = -0.6e1 * t85 - 0.6e1 * t195;
  t390 = my_piecewise3(t7, 0, t389);
  t392 = t158 * t162;
  t395 = t158 * M_PI;
  t398 = t395 * t13 + 0.2e1 * t323;
  t399 = t67 * t398;
  t402 = t162 * t162;
  t403 = t67 * t402;
  t406 = t398 * t96;
  t409 = t402 * t213;
  t412 = t67 * t4;
  t419 = my_piecewise3(t8, 0, -0.79577471545947667883e-1 * (t390 * t15 + 0.40e1 * t392 * t96 + 0.20e1 * t399 * t96 - 0.20e1 * t403 * t213 + 0.20000000000000000000e1 * t406 * t100 - 0.20000000000000000000e1 * t409 * t100 + 0.20000000000000000000e1 * t166 * t412 - 0.60000000000000000000e1 * t341 + t230) * t20);
  t421 = my_piecewise3(t29, 0, -t389);
  t423 = t174 * t178;
  t426 = t174 * M_PI;
  t429 = t426 * t13 + 0.2e1 * t359;
  t430 = t74 * t429;
  t433 = t178 * t178;
  t434 = t74 * t433;
  t437 = t429 * t118;
  t440 = t433 * t251;
  t443 = t74 * t4;
  t450 = my_piecewise3(t30, 0, -0.79577471545947667883e-1 * (t421 * t35 + 0.40e1 * t423 * t118 + 0.20e1 * t430 * t118 - 0.20e1 * t434 * t251 + 0.20000000000000000000e1 * t437 * t122 - 0.20000000000000000000e1 * t440 * t122 + 0.20000000000000000000e1 * t182 * t443 - 0.60000000000000000000e1 * t377 + t267) * t20);
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[3] = 0.3e1 * t172 + 0.3e1 * t188 + t3 * (t419 + t450);

#ifndef XC_DONT_COMPILE_LXC

  if(order < 4) return;


  t456 = 0.1e1 / t193 / t3;
  t457 = t2 * t456;
  t459 = -0.24e2 * t194 + 0.24e2 * t457;
  t460 = my_piecewise3(t7, 0, t459);
  t473 = t203 * params->beta;
  t475 = t198 * M_PI * t13 + 0.3e1 * t473;
  t479 = t216 * t225;
  t480 = 0.80000000000000000000e1 * t479;
  t481 = t207 * t213;
  t483 = 0.60000000000000000000e1 * t481 * t336;
  t484 = t219 * t225;
  t485 = 0.80000000000000000000e1 * t484;
  t486 = t211 * t94;
  t491 = -t96 - 0.1e1 / t11 * t18 * t21 * t213;
  t494 = 0.20000000000000000000e1 * t486 * t491 * t100;
  t495 = t48 * t45;
  t496 = t99 * t495;
  t497 = 0.80000000000000000000e1 * t496;
  t498 = t11 * t85;
  t499 = t99 * t498;
  t500 = 0.24000000000000000000e2 * t499;
  t501 = t20 * t456;
  t503 = 0.24e2 * t19 * t501;
  t511 = 0.20000000000000000000e1 * t475 * t96 * t100;
  t513 = 0.40000000000000000000e1 * t216 * t222;
  t515 = 0.40000000000000000000e1 * t219 * t222;
  t516 = t89 * t4;
  t518 = 0.20000000000000000000e1 * t99 * t516;
  t519 = t460 * t15 + 0.60e1 * t198 * t94 * t96 + 0.60e1 * t89 * t207 * t96 - 0.60e1 * t89 * t211 * t213 + 0.20e1 * t48 * t475 * t96 - t480 - t483 + t485 - t494 - t497 + t500 - t503 - 0.60e1 * t208 * t328 - 0.20e1 * t48 * t486 * t491 + t511 + t513 - t515 + t518;
  t522 = my_piecewise3(t8, 0, -0.79577471545947667883e-1 * t519 * t20);
  t524 = my_piecewise3(t29, 0, -t459);
  t537 = t241 * params->beta;
  t539 = t236 * M_PI * t13 + 0.3e1 * t537;
  t543 = t254 * t263;
  t544 = 0.80000000000000000000e1 * t543;
  t545 = t245 * t251;
  t547 = 0.60000000000000000000e1 * t545 * t372;
  t548 = t257 * t263;
  t549 = 0.80000000000000000000e1 * t548;
  t550 = t249 * t116;
  t555 = -t118 - 0.1e1 / t32 * t18 * t21 * t251;
  t558 = 0.20000000000000000000e1 * t550 * t555 * t122;
  t559 = t57 * t45;
  t560 = t121 * t559;
  t561 = 0.80000000000000000000e1 * t560;
  t562 = t32 * t85;
  t563 = t121 * t562;
  t564 = 0.24000000000000000000e2 * t563;
  t566 = 0.24e2 * t38 * t501;
  t574 = 0.20000000000000000000e1 * t539 * t118 * t122;
  t576 = 0.40000000000000000000e1 * t254 * t260;
  t578 = 0.40000000000000000000e1 * t257 * t260;
  t579 = t111 * t4;
  t581 = 0.20000000000000000000e1 * t121 * t579;
  t582 = t524 * t35 + 0.60e1 * t236 * t116 * t118 + 0.60e1 * t111 * t245 * t118 - 0.60e1 * t111 * t249 * t251 + 0.20e1 * t57 * t539 * t118 - t544 - t547 + t549 - t558 - t561 + t564 - t566 - 0.60e1 * t246 * t364 - 0.20e1 * t57 * t550 * t555 + t574 + t576 - t578 + t581;
  t585 = my_piecewise3(t30, 0, -0.79577471545947667883e-1 * t582 * t20);
  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rho4[0] = 0.4e1 * t234 + 0.4e1 * t271 + t3 * (t522 + t585);

  t607 = 0.12e2 * t194;
  t608 = 0.24e2 * t457;
  t609 = -t607 + t608;
  t610 = my_piecewise3(t7, 0, t609);
  t612 = 0.60e1 * t279 * t94 * t96 + 0.60e1 * t134 * t207 * t96 - 0.60e1 * t134 * t211 * t213 + 0.20e1 * t67 * t475 * t96 - t480 - t483 + t485 - t494 - t497 + t500 - t503 + t511 + t513 - t515 + t518 - 0.60e1 * t284 * t328 - 0.20e1 * t67 * t486 * t491 + t610 * t15;
  t615 = my_piecewise3(t8, 0, -0.79577471545947667883e-1 * t612 * t20);
  t634 = my_piecewise3(t29, 0, -t609);
  t636 = 0.60e1 * t295 * t116 * t118 + 0.60e1 * t143 * t245 * t118 - 0.60e1 * t143 * t249 * t251 + 0.20e1 * t74 * t539 * t118 - t544 - t547 + t549 - t558 - t561 + t564 - t566 + t574 + t576 - t578 + t581 - 0.60e1 * t300 * t364 - 0.20e1 * t74 * t550 * t555 + t634 * t35;
  t639 = my_piecewise3(t30, 0, -0.79577471545947667883e-1 * t636 * t20);
  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rho4[1] = t234 + t271 + 0.3e1 * t293 + 0.3e1 * t309 + t3 * (t615 + t639);

  t664 = 0.2e1 * t321 * params->beta;
  t665 = t279 * M_PI * t13 + t473 + t664;
  t669 = t324 * t213;
  t680 = t334 * t335 * t45;
  t690 = t331 * t225;
  t692 = 0.40e1 * t313 * t94 * t96 + 0.20e1 * t158 * t207 * t96 - 0.20e1 * t158 * t211 * t213 + 0.20e1 * t279 * t162 * t96 + 0.40e1 * t134 * t324 * t96 + 0.20e1 * t67 * t665 * t96 - 0.40000000000000000000e1 * t669 * t336 - 0.20000000000000000000e1 * t334 * t207 * t11 * t4 - 0.40000000000000000000e1 * t334 * t95 * t4 + 0.40000000000000000000e1 * t680 - 0.20000000000000000000e1 * t162 * t491 * t211 * t11 * t4 - 0.20e1 * t163 * t491 * t211 - 0.40000000000000000000e1 * t690;
  t693 = t166 * t495;
  t695 = t166 * t498;
  t710 = my_piecewise3(t7, 0, t608);
  t716 = -0.40000000000000000000e1 * t693 + 0.40000000000000000000e1 * t695 - 0.40e1 * t318 * t328 - 0.40e1 * t325 * t328 - 0.20e1 * t163 * t481 + 0.20000000000000000000e1 * t665 * t96 * t100 + 0.40000000000000000000e1 * t331 * t222 + 0.20000000000000000000e1 * t166 * t516 + t710 * t15 - 0.40000000000000000000e1 * t479 + 0.40000000000000000000e1 * t484 - 0.40000000000000000000e1 * t496 + 0.20000000000000000000e2 * t499 - t503;
  t720 = my_piecewise3(t8, 0, -0.79577471545947667883e-1 * (t692 + t716) * t20);
  t739 = 0.2e1 * t357 * params->beta;
  t740 = t295 * M_PI * t13 + t537 + t739;
  t744 = t360 * t251;
  t758 = t367 * t263;
  t760 = 0.40e1 * t349 * t116 * t118 + 0.20e1 * t174 * t245 * t118 - 0.20e1 * t174 * t249 * t251 + 0.20e1 * t295 * t178 * t118 + 0.40e1 * t143 * t360 * t118 + 0.20e1 * t74 * t740 * t118 - 0.40000000000000000000e1 * t744 * t372 - 0.20000000000000000000e1 * t370 * t245 * t32 * t4 - 0.40000000000000000000e1 * t370 * t117 * t4 + 0.20000000000000000000e2 * t563 - t566 - 0.20e1 * t179 * t555 * t249 - 0.40000000000000000000e1 * t758;
  t761 = t182 * t559;
  t763 = t182 * t562;
  t779 = t370 * t371 * t45;
  t786 = my_piecewise3(t29, 0, -t608);
  t791 = -0.40000000000000000000e1 * t761 + 0.40000000000000000000e1 * t763 - 0.40e1 * t354 * t364 - 0.40e1 * t361 * t364 - 0.20e1 * t179 * t545 + 0.20000000000000000000e1 * t740 * t118 * t122 + 0.40000000000000000000e1 * t367 * t260 + 0.20000000000000000000e1 * t182 * t579 + 0.40000000000000000000e1 * t779 - 0.20000000000000000000e1 * t178 * t555 * t249 * t32 * t4 + t786 * t35 - 0.40000000000000000000e1 * t543 + 0.40000000000000000000e1 * t548 - 0.40000000000000000000e1 * t560;
  t795 = my_piecewise3(t30, 0, -0.79577471545947667883e-1 * (t760 + t791) * t20);
  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rho4[2] = 0.2e1 * t293 + 0.2e1 * t309 + 0.2e1 * t347 + 0.2e1 * t383 + t3 * (t720 + t795);

  t814 = t395 * params->beta;
  t815 = t313 * M_PI * t13 + t664 + t814;
  t826 = t406 * t225;
  t828 = t409 * t225;
  t831 = t166 * t67 * t45;
  t835 = 0.20e1 * t390 * t94 * t96 + 0.40e1 * t313 * t162 * t96 + 0.40e1 * t158 * t324 * t96 + 0.20e1 * t134 * t398 * t96 + 0.20e1 * t67 * t815 * t96 - 0.20e1 * t134 * t402 * t213 + 0.60000000000000000000e1 * t680 - 0.60000000000000000000e1 * t690 - 0.60000000000000000000e1 * t693 + 0.12000000000000000000e2 * t695 - 0.20000000000000000000e1 * t826 + 0.20000000000000000000e1 * t828 - 0.20000000000000000000e1 * t831 - 0.40e1 * t392 * t328;
  t855 = t398 * t213;
  t867 = t607 + t608;
  t868 = my_piecewise3(t7, 0, t867);
  t871 = -0.20e1 * t399 * t328 - 0.40e1 * t163 * t669 - 0.20e1 * t403 * t491 * t94 + 0.20000000000000000000e1 * t815 * t96 * t100 + 0.20000000000000000000e1 * t406 * t222 - 0.20000000000000000000e1 * t409 * t222 + 0.20000000000000000000e1 * t331 * t412 + 0.20000000000000000000e1 * t166 * t134 * t4 - 0.20000000000000000000e1 * t855 * t336 - 0.40000000000000000000e1 * t334 * t100 * t324 - 0.20000000000000000000e1 * t402 * t491 * t336 - 0.20000000000000000000e1 * t334 * t136 * t4 + t868 * t15 + 0.12000000000000000000e2 * t499 - t503;
  t875 = my_piecewise3(t8, 0, -0.79577471545947667883e-1 * (t835 + t871) * t20);
  t890 = t426 * params->beta;
  t891 = t349 * M_PI * t13 + t739 + t890;
  t902 = t437 * t263;
  t904 = t440 * t263;
  t907 = t182 * t74 * t45;
  t909 = 0.20e1 * t421 * t116 * t118 + 0.40e1 * t349 * t178 * t118 + 0.40e1 * t174 * t360 * t118 + 0.20e1 * t143 * t429 * t118 + 0.20e1 * t74 * t891 * t118 - 0.20e1 * t143 * t433 * t251 + 0.12000000000000000000e2 * t563 - t566 - 0.60000000000000000000e1 * t758 - 0.60000000000000000000e1 * t761 + 0.12000000000000000000e2 * t763 - 0.20000000000000000000e1 * t902 + 0.20000000000000000000e1 * t904 - 0.20000000000000000000e1 * t907;
  t932 = t429 * t251;
  t945 = my_piecewise3(t29, 0, -t867);
  t947 = -0.40e1 * t423 * t364 - 0.20e1 * t430 * t364 - 0.40e1 * t179 * t744 - 0.20e1 * t434 * t555 * t116 + 0.20000000000000000000e1 * t891 * t118 * t122 + 0.20000000000000000000e1 * t437 * t260 - 0.20000000000000000000e1 * t440 * t260 + 0.20000000000000000000e1 * t367 * t443 + 0.20000000000000000000e1 * t182 * t143 * t4 + 0.60000000000000000000e1 * t779 - 0.20000000000000000000e1 * t932 * t372 - 0.40000000000000000000e1 * t370 * t122 * t360 - 0.20000000000000000000e1 * t433 * t555 * t372 - 0.20000000000000000000e1 * t370 * t145 * t4 + t945 * t35;
  t951 = my_piecewise3(t30, 0, -0.79577471545947667883e-1 * (t909 + t947) * t20);
  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rho4[3] = 0.3e1 * t347 + 0.3e1 * t383 + t419 + t450 + t3 * (t875 + t951);

  t964 = t402 * t162;
  t980 = t390 * M_PI * t13 + 0.3e1 * t814;
  t1000 = 0.24e2 * t194 + 0.24e2 * t457;
  t1001 = my_piecewise3(t7, 0, t1000);
  t1003 = -t503 + 0.24000000000000000000e2 * t695 - 0.80000000000000000000e1 * t826 + 0.80000000000000000000e1 * t828 - 0.80000000000000000000e1 * t831 - 0.60000000000000000000e1 * t855 * t162 * t11 * t4 - 0.20000000000000000000e1 * t964 * t491 * t100 + 0.60e1 * t390 * t162 * t96 + 0.60e1 * t158 * t398 * t96 - 0.60e1 * t158 * t402 * t213 + 0.20e1 * t67 * t980 * t96 - 0.60e1 * t399 * t334 - 0.20e1 * t67 * t964 * t491 + 0.20000000000000000000e1 * t980 * t96 * t100 + 0.40000000000000000000e1 * t406 * t412 - 0.40000000000000000000e1 * t409 * t412 + 0.20000000000000000000e1 * t166 * t158 * t4 + t1001 * t15;
  t1006 = my_piecewise3(t8, 0, -0.79577471545947667883e-1 * t1003 * t20);
  t1015 = t433 * t178;
  t1031 = t421 * M_PI * t13 + 0.3e1 * t890;
  t1051 = my_piecewise3(t29, 0, -t1000);
  t1053 = -t566 + 0.24000000000000000000e2 * t763 - 0.80000000000000000000e1 * t902 + 0.80000000000000000000e1 * t904 - 0.80000000000000000000e1 * t907 - 0.60000000000000000000e1 * t932 * t178 * t32 * t4 - 0.20000000000000000000e1 * t1015 * t555 * t122 + 0.60e1 * t421 * t178 * t118 + 0.60e1 * t174 * t429 * t118 - 0.60e1 * t174 * t433 * t251 + 0.20e1 * t74 * t1031 * t118 - 0.60e1 * t430 * t370 - 0.20e1 * t74 * t1015 * t555 + 0.20000000000000000000e1 * t1031 * t118 * t122 + 0.40000000000000000000e1 * t437 * t443 - 0.40000000000000000000e1 * t440 * t443 + 0.20000000000000000000e1 * t182 * t174 * t4 + t1051 * t35;
  t1056 = my_piecewise3(t30, 0, -0.79577471545947667883e-1 * t1053 * t20);
  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rho4[4] = 0.4e1 * t419 + 0.4e1 * t450 + t3 * (t1006 + t1056);

#ifndef XC_DONT_COMPILE_MXC

  if(order < 5) return;


#endif

#endif

#endif

#endif

#endif


}

