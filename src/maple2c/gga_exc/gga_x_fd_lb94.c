/* 
  This file was generated automatically with ./scripts/maple2c.pl.
  Do not edit this file directly as it can be overwritten!!

  This Source Code Form is subject to the terms of the Mozilla Public
  License, v. 2.0. If a copy of the MPL was not distributed with this
  file, You can obtain one at http://mozilla.org/MPL/2.0/.

  Maple version     : Maple 2016 (X86 64 LINUX)
  Maple source      : ./maple/gga_exc/gga_x_fd_lb94.mpl
  Type of functional: gga_exc
*/

#define maple2c_order 2
#define MAPLE2C_FLAGS (XC_FLAGS_I_HAVE_EXC | XC_FLAGS_I_HAVE_VXC | XC_FLAGS_I_HAVE_FXC)


static inline void
func_unpol(const xc_func_type *p, int order, const double *rho, const double *sigma , double *zk GGA_OUT_PARAMS_NO_EXC(XC_COMMA double *, ))
{

#ifndef XC_DONT_COMPILE_EXC
  double t3, t4, t5, t7, t8, t9, t10, t11;
  double t12, t13, t14, t15, t16, t17, t19, t20;
  double t24, t25, t26, t28, t29, t30, t33, t37;

#ifndef XC_DONT_COMPILE_VXC
  double t38, t39, t43, t46, t47, t49, t52, t57;
  double t61, t66, t70;

#ifndef XC_DONT_COMPILE_FXC
  double t81, t84, t91, t92, t93, t95, t99, t102;
  double t110, t115, t118, t124, t133, t154, t172;
#endif

#endif

#endif


  gga_x_fd_lb94_params *params;

  assert(p->params != NULL);
  params = (gga_x_fd_lb94_params * )(p->params);

  t3 = rho[0] / 0.2e1 <= 0.101e1 * p->threshold_dens;
  t4 = M_CBRT3;
  t5 = M_CBRTPI;
  t7 = t4 / t5;
  t8 = POW_1_3(rho[0]);
  t9 = M_CBRT6;
  t10 = t9 * t9;
  t11 = M_PI * M_PI;
  t12 = POW_1_3(t11);
  t13 = 0.1e1 / t12;
  t14 = t10 * t13;
  t15 = sqrt(sigma[0]);
  t16 = t14 * t15;
  t17 = M_CBRT2;
  t19 = 0.1e1 / t8 / rho[0];
  t20 = t17 * t19;
  t24 = t14 * t15 * t17 * t19 / 0.12e2;
  t25 = xc_integrate(func0, NULL, 0.0, t24);
  t26 = log(t24);
  t28 = xc_integrate(func1, NULL, 0.0, t24);
  t29 = t25 * t26 - t28;
  t30 = t20 * t29;
  t33 = 0.1e1 - t16 * t30 / 0.12e2;
  t37 = my_piecewise3(t3, 0, -0.3e1 / 0.8e1 * t7 * t8 * t33);
  if(zk != NULL && (p->info->flags & XC_FLAGS_HAVE_EXC))
    zk[0] = 0.2e1 * t37;

#ifndef XC_DONT_COMPILE_VXC

  if(order < 1) return;


  t38 = t8 * t8;
  t39 = 0.1e1 / t38;
  t43 = rho[0] * rho[0];
  t46 = t17 / t8 / t43;
  t47 = t46 * t29;
  t49 = t46 * t25;
  t52 = t16 * t47 / 0.9e1 + t16 * t49 / 0.9e1;
  t57 = my_piecewise3(t3, 0, -t7 * t39 * t33 / 0.8e1 - 0.3e1 / 0.8e1 * t7 * t8 * t52);
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vrho[0] = 0.2e1 * rho[0] * t57 + 0.2e1 * t37;

  t61 = t14 / t15;
  t66 = -t61 * t20 * t25 / 0.24e2 - t61 * t30 / 0.24e2;
  t70 = my_piecewise3(t3, 0, -0.3e1 / 0.8e1 * t7 * t8 * t66);
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vsigma[0] = 0.2e1 * rho[0] * t70;

#ifndef XC_DONT_COMPILE_FXC

  if(order < 2) return;


  t81 = t43 * rho[0];
  t84 = t17 / t8 / t81;
  t91 = t12 * t12;
  t92 = 0.1e1 / t91;
  t93 = t9 * t92;
  t95 = t43 * t43;
  t99 = t17 * t17;
  t102 = t13 * t15;
  t110 = 0.1e1 / t38 / t43;
  t115 = sqrt(0.3e1 * t17 * t9 * t92 * sigma[0] * t110 + 0.36e2);
  t118 = log(t99 * t10 * t102 * t19 / 0.12e2 + t115 / 0.6e1);
  t124 = 0.1e1 / (0.1e1 + params->beta * t99 * t10 * t102 * t19 * t118 / 0.4e1);
  t133 = my_piecewise3(t3, 0, t7 / t38 / rho[0] * t33 / 0.12e2 - t7 * t39 * t52 / 0.4e1 - 0.3e1 / 0.8e1 * t7 * t8 * (-0.7e1 / 0.27e2 * t16 * t84 * t29 - 0.11e2 / 0.27e2 * t16 * t84 * t25 + t93 * sigma[0] / t38 / t95 * params->beta * t124 / 0.9e1));
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[0] = 0.2e1 * rho[0] * t133 + 0.4e1 * t57;

  t154 = my_piecewise3(t3, 0, -t7 * t39 * t66 / 0.8e1 - 0.3e1 / 0.8e1 * t7 * t8 * (t61 * t47 / 0.18e2 + t61 * t49 / 0.9e1 - t93 / t38 / t81 * params->beta * t124 / 0.24e2));
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rhosigma[0] = 0.2e1 * rho[0] * t154 + 0.2e1 * t70;

  t172 = my_piecewise3(t3, 0, -0.3e1 / 0.8e1 * t7 * t8 * (t14 / t15 / sigma[0] * t30 / 0.48e2 + t93 / sigma[0] * t110 * params->beta * t124 / 0.64e2));
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigma2[0] = 0.2e1 * rho[0] * t172;

#ifndef XC_DONT_COMPILE_KXC

  if(order < 3) return;


#endif

#endif

#endif


}


static inline void
func_pol(const xc_func_type *p, int order, const double *rho, const double *sigma , double *zk GGA_OUT_PARAMS_NO_EXC(XC_COMMA double *, ))
{

#ifndef XC_DONT_COMPILE_EXC
  double t1, t2, t3, t4, t6, t7, t8, t9;
  double t10, t11, t12, t13, t14, t15, t16, t17;
  double t18, t19, t20, t21, t22, t23, t24, t26;
  double t27, t29, t30, t31, t33, t34, t38, t39;
  double t43, t44, t45, t46, t47, t48, t49, t51;
  double t52, t54, t55, t56, t58, t59, t63, t64;
  double t68;

#ifndef XC_DONT_COMPILE_VXC
  double t69, t74, t75, t78, t80, t81, t82, t83;
  double t84, t85, t87, t88, t89, t92, t94, t95;
  double t101, t102, t107, t108, t111, t112, t114, t115;
  double t116, t117, t118, t123, t126, t127, t132, t133;
  double t138, t139, t141, t142, t143, t147, t148, t154;
  double t155, t160, t163, t164, t170, t171, t175, t176;
  double t177, t183, t184, t188;

#ifndef XC_DONT_COMPILE_FXC
  double t193, t199, t202, t205, t208, t210, t212, t221;
  double t222, t230, t233, t240, t241, t242, t244, t245;
  double t249, t250, t251, t252, t255, t256, t259, t264;
  double t267, t273, t274, t284, t288, t290, t293, t295;
  double t296, t298, t301, t307, t318, t331, t334, t344;
  double t352, t360, t367, t379, t387, t404, t412, t413;
  double t417, t422, t427, t430, t436, t437, t447, t455;
  double t460, t479, t483, t489, t496, t505, t524, t543;
  double t561;
#endif

#endif

#endif


  gga_x_fd_lb94_params *params;

  assert(p->params != NULL);
  params = (gga_x_fd_lb94_params * )(p->params);

  t1 = 0.101e1 * p->threshold_dens;
  t2 = rho[0] <= t1;
  t3 = M_CBRT3;
  t4 = M_CBRTPI;
  t6 = t3 / t4;
  t7 = M_CBRT2;
  t8 = t6 * t7;
  t9 = rho[0] + rho[1];
  t10 = POW_1_3(t9);
  t11 = t10 * t10;
  t12 = 0.1e1 / t11;
  t13 = rho[0] * t12;
  t14 = 0.1e1 / t9;
  t15 = rho[0] * t14;
  t16 = POW_1_3(t15);
  t17 = M_CBRT6;
  t18 = t17 * t17;
  t19 = M_PI * M_PI;
  t20 = POW_1_3(t19);
  t21 = 0.1e1 / t20;
  t22 = t18 * t21;
  t23 = sqrt(sigma[0]);
  t24 = POW_1_3(rho[0]);
  t26 = 0.1e1 / t24 / rho[0];
  t27 = t23 * t26;
  t29 = t22 * t27 / 0.12e2;
  t30 = xc_integrate(func0, NULL, 0.0, t29);
  t31 = log(t29);
  t33 = xc_integrate(func1, NULL, 0.0, t29);
  t34 = t30 * t31 - t33;
  t38 = 0.1e1 - t22 * t27 * t34 / 0.12e2;
  t39 = t16 * t38;
  t43 = my_piecewise3(t2, 0, -0.3e1 / 0.4e1 * t8 * t13 * t39);
  t44 = rho[1] <= t1;
  t45 = rho[1] * t12;
  t46 = rho[1] * t14;
  t47 = POW_1_3(t46);
  t48 = sqrt(sigma[2]);
  t49 = POW_1_3(rho[1]);
  t51 = 0.1e1 / t49 / rho[1];
  t52 = t48 * t51;
  t54 = t22 * t52 / 0.12e2;
  t55 = xc_integrate(func0, NULL, 0.0, t54);
  t56 = log(t54);
  t58 = xc_integrate(func1, NULL, 0.0, t54);
  t59 = t55 * t56 - t58;
  t63 = 0.1e1 - t22 * t52 * t59 / 0.12e2;
  t64 = t47 * t63;
  t68 = my_piecewise3(t44, 0, -0.3e1 / 0.4e1 * t8 * t45 * t64);
  if(zk != NULL && (p->info->flags & XC_FLAGS_HAVE_EXC))
    zk[0] = t43 + t68;

#ifndef XC_DONT_COMPILE_VXC

  if(order < 1) return;


  t69 = t12 * t16;
  t74 = 0.1e1 / t11 / t9;
  t75 = rho[0] * t74;
  t78 = t8 * t75 * t39 / 0.2e1;
  t80 = t6 * t7 * rho[0];
  t81 = t16 * t16;
  t82 = 0.1e1 / t81;
  t83 = t12 * t82;
  t84 = t9 * t9;
  t85 = 0.1e1 / t84;
  t87 = -rho[0] * t85 + t14;
  t88 = t38 * t87;
  t89 = t83 * t88;
  t92 = rho[0] * rho[0];
  t94 = 0.1e1 / t24 / t92;
  t95 = t23 * t94;
  t101 = t22 * t95 * t30 / 0.9e1 + t22 * t95 * t34 / 0.9e1;
  t102 = t16 * t101;
  t107 = my_piecewise3(t2, 0, -0.3e1 / 0.4e1 * t8 * t69 * t38 + t78 - t80 * t89 / 0.4e1 - 0.3e1 / 0.4e1 * t8 * t13 * t102);
  t108 = rho[1] * t74;
  t111 = t8 * t108 * t64 / 0.2e1;
  t112 = rho[1] * rho[1];
  t114 = 0.1e1 / t11 / t84;
  t115 = t112 * t114;
  t116 = t47 * t47;
  t117 = 0.1e1 / t116;
  t118 = t117 * t63;
  t123 = my_piecewise3(t44, 0, t111 + t8 * t115 * t118 / 0.4e1);
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vrho[0] = t43 + t68 + t9 * (t107 + t123);

  t126 = t92 * t114;
  t127 = t82 * t38;
  t132 = my_piecewise3(t2, 0, t78 + t8 * t126 * t127 / 0.4e1);
  t133 = t12 * t47;
  t138 = t6 * t7 * rho[1];
  t139 = t12 * t117;
  t141 = -rho[1] * t85 + t14;
  t142 = t63 * t141;
  t143 = t139 * t142;
  t147 = 0.1e1 / t49 / t112;
  t148 = t48 * t147;
  t154 = t22 * t148 * t55 / 0.9e1 + t22 * t148 * t59 / 0.9e1;
  t155 = t47 * t154;
  t160 = my_piecewise3(t44, 0, -0.3e1 / 0.4e1 * t8 * t133 * t63 + t111 - t138 * t143 / 0.4e1 - 0.3e1 / 0.4e1 * t8 * t45 * t155);
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vrho[1] = t43 + t68 + t9 * (t132 + t160);

  t163 = 0.1e1 / t23;
  t164 = t163 * t26;
  t170 = -t22 * t164 * t30 / 0.24e2 - t22 * t164 * t34 / 0.24e2;
  t171 = t16 * t170;
  t175 = my_piecewise3(t2, 0, -0.3e1 / 0.4e1 * t8 * t13 * t171);
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vsigma[0] = t9 * t175;

  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vsigma[1] = 0.0e0;

  t176 = 0.1e1 / t48;
  t177 = t176 * t51;
  t183 = -t22 * t177 * t55 / 0.24e2 - t22 * t177 * t59 / 0.24e2;
  t184 = t47 * t183;
  t188 = my_piecewise3(t44, 0, -0.3e1 / 0.4e1 * t8 * t45 * t184);
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vsigma[2] = t9 * t188;

#ifndef XC_DONT_COMPILE_FXC

  if(order < 2) return;


  t193 = t8 * t74 * t16 * t38;
  t199 = rho[0] * t114;
  t202 = 0.5e1 / 0.6e1 * t8 * t199 * t39;
  t205 = t80 * t74 * t82 * t88;
  t208 = t8 * t75 * t102;
  t210 = 0.1e1 / t81 / t15;
  t212 = t87 * t87;
  t221 = t84 * t9;
  t222 = 0.1e1 / t221;
  t230 = t92 * rho[0];
  t233 = t23 / t24 / t230;
  t240 = t20 * t20;
  t241 = 0.1e1 / t240;
  t242 = t17 * t241;
  t244 = t92 * t92;
  t245 = t24 * t24;
  t249 = params->beta * t7;
  t250 = t249 * t18;
  t251 = t21 * t23;
  t252 = t7 * t18;
  t255 = t7 * t7;
  t256 = t255 * t17;
  t259 = 0.1e1 / t245 / t92;
  t264 = sqrt(0.6e1 * t256 * t241 * sigma[0] * t259 + 0.144e3);
  t267 = log(t252 * t251 * t26 / 0.12e2 + t264 / 0.12e2);
  t273 = 0.1e1 / (0.1e1 + t250 * t251 * t26 * t267 / 0.4e1);
  t274 = t7 * t273;
  t284 = my_piecewise3(t2, 0, t193 - t8 * t89 / 0.2e1 - 0.3e1 / 0.2e1 * t8 * t69 * t101 - t202 + t205 / 0.3e1 + t208 + t80 * t12 * t210 * t38 * t212 / 0.6e1 - t80 * t83 * t101 * t87 / 0.2e1 - t80 * t83 * t38 * (0.2e1 * rho[0] * t222 - 0.2e1 * t85) / 0.4e1 - 0.3e1 / 0.4e1 * t8 * t13 * t16 * (-0.7e1 / 0.27e2 * t22 * t233 * t34 - 0.11e2 / 0.27e2 * t22 * t233 * t30 + t242 * sigma[0] / t245 / t244 * params->beta * t274 / 0.18e2));
  t288 = 0.5e1 / 0.6e1 * t8 * rho[1] * t114 * t64;
  t290 = 0.1e1 / t11 / t221;
  t293 = t8 * t112 * t290 * t118;
  t295 = t112 * rho[1];
  t296 = t84 * t84;
  t298 = 0.1e1 / t11 / t296;
  t301 = 0.1e1 / t116 / t46;
  t307 = my_piecewise3(t44, 0, -t288 - 0.5e1 / 0.6e1 * t293 + t8 * t295 * t298 * t301 * t63 / 0.6e1);
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[0] = 0.2e1 * t107 + 0.2e1 * t123 + t9 * (t284 + t307);

  t318 = t8 * t92 * t290 * t127;
  t331 = my_piecewise3(t2, 0, t193 / 0.2e1 - t202 + t205 / 0.6e1 + t208 / 0.2e1 + t8 * t199 * t127 / 0.2e1 - 0.2e1 / 0.3e1 * t318 - t6 * t7 * t92 * t114 * t210 * t88 / 0.6e1 + t8 * t126 * t82 * t101 / 0.4e1);
  t334 = t8 * t74 * t47 * t63;
  t344 = t138 * t74 * t117 * t142;
  t352 = rho[1] * t222;
  t360 = t8 * t108 * t155;
  t367 = my_piecewise3(t44, 0, t334 / 0.2e1 + t8 * t114 * t117 * t63 * rho[1] / 0.4e1 - t288 - t293 / 0.6e1 + t344 / 0.6e1 - t6 * t7 * t112 * t114 * t301 * t142 / 0.6e1 - t138 * t139 * t63 * (-t85 + 0.2e1 * t352) / 0.4e1 + t360 / 0.2e1 + t8 * t115 * t117 * t154 / 0.4e1);
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[1] = t107 + t123 + t132 + t160 + t9 * (t331 + t367);

  t379 = my_piecewise3(t2, 0, -t202 - 0.5e1 / 0.6e1 * t318 + t8 * t230 * t298 * t210 * t38 / 0.6e1);
  t387 = t141 * t141;
  t404 = t48 / t49 / t295;
  t412 = t112 * t112;
  t413 = t49 * t49;
  t417 = t21 * t48;
  t422 = 0.1e1 / t413 / t112;
  t427 = sqrt(0.6e1 * t256 * t241 * sigma[2] * t422 + 0.144e3);
  t430 = log(t252 * t417 * t51 / 0.12e2 + t427 / 0.12e2);
  t436 = 0.1e1 / (0.1e1 + t250 * t417 * t51 * t430 / 0.4e1);
  t437 = t7 * t436;
  t447 = my_piecewise3(t44, 0, t334 - t8 * t143 / 0.2e1 - 0.3e1 / 0.2e1 * t8 * t133 * t154 - t288 + t344 / 0.3e1 + t360 + t138 * t12 * t301 * t63 * t387 / 0.6e1 - t138 * t139 * t154 * t141 / 0.2e1 - t138 * t139 * t63 * (-0.2e1 * t85 + 0.2e1 * t352) / 0.4e1 - 0.3e1 / 0.4e1 * t8 * t45 * t47 * (-0.7e1 / 0.27e2 * t22 * t404 * t59 - 0.11e2 / 0.27e2 * t22 * t404 * t55 + t242 * sigma[2] / t413 / t412 * params->beta * t437 / 0.18e2));
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[2] = 0.2e1 * t132 + 0.2e1 * t160 + t9 * (t379 + t447);

  t455 = t8 * t75 * t171 / 0.2e1;
  t460 = t163 * t94;
  t479 = my_piecewise3(t2, 0, -0.3e1 / 0.4e1 * t8 * t69 * t170 + t455 - t80 * t83 * t170 * t87 / 0.4e1 - 0.3e1 / 0.4e1 * t8 * t13 * t16 * (t22 * t460 * t34 / 0.18e2 + t22 * t460 * t30 / 0.9e1 - t242 / t245 / t230 * t249 * t273 / 0.48e2));
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rhosigma[0] = t9 * t479 + t175;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rhosigma[1] = 0.0e0;

  t483 = t8 * t108 * t184 / 0.2e1;
  t489 = my_piecewise3(t44, 0, t483 + t8 * t115 * t117 * t183 / 0.4e1);
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rhosigma[2] = t9 * t489 + t188;

  t496 = my_piecewise3(t2, 0, t455 + t8 * t126 * t82 * t170 / 0.4e1);
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rhosigma[3] = t9 * t496 + t175;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rhosigma[4] = 0.0e0;

  t505 = t176 * t147;
  t524 = my_piecewise3(t44, 0, -0.3e1 / 0.4e1 * t8 * t133 * t183 + t483 - t138 * t139 * t183 * t141 / 0.4e1 - 0.3e1 / 0.4e1 * t8 * t45 * t47 * (t22 * t505 * t59 / 0.18e2 + t22 * t505 * t55 / 0.9e1 - t242 / t413 / t295 * t249 * t436 / 0.48e2));
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rhosigma[5] = t9 * t524 + t188;

  t543 = my_piecewise3(t2, 0, -0.3e1 / 0.4e1 * t8 * t13 * t16 * (t22 / t23 / sigma[0] * t26 * t34 / 0.48e2 + t242 / sigma[0] * t259 * params->beta * t274 / 0.128e3));
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigma2[0] = t9 * t543;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigma2[1] = 0.0e0;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigma2[2] = 0.0e0;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigma2[3] = 0.0e0;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigma2[4] = 0.0e0;

  t561 = my_piecewise3(t44, 0, -0.3e1 / 0.4e1 * t8 * t45 * t47 * (t22 / t48 / sigma[2] * t51 * t59 / 0.48e2 + t242 / sigma[2] * t422 * params->beta * t437 / 0.128e3));
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigma2[5] = t9 * t561;

#ifndef XC_DONT_COMPILE_KXC

  if(order < 3) return;


#endif

#endif

#endif


}

