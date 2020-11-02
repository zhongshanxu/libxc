/* 
  This file was generated automatically with ./scripts/maple2c.pl.
  Do not edit this file directly as it can be overwritten!!

  This Source Code Form is subject to the terms of the Mozilla Public
  License, v. 2.0. If a copy of the MPL was not distributed with this
  file, You can obtain one at http://mozilla.org/MPL/2.0/.

  Maple version     : Maple 2016 (X86 64 LINUX)
  Maple source      : ./maple/gga_exc/gga_x_ssb_sw.mpl
  Type of functional: gga_exc
*/

#define maple2c_order 2
#define MAPLE2C_FLAGS (XC_FLAGS_I_HAVE_EXC | XC_FLAGS_I_HAVE_VXC | XC_FLAGS_I_HAVE_FXC)


static inline void
func_unpol(const xc_func_type *p, int order, const double *rho, const double *sigma , double *zk GGA_OUT_PARAMS_NO_EXC(XC_COMMA double *, ))
{

#ifndef XC_DONT_COMPILE_EXC
  double t3, t4, t5, t7, t8, t9, t11, t12;
  double t13, t14, t15, t16, t17, t18, t19, t20;
  double t22, t28, t29, t35, t36, t39, t41, t43;
  double t44, t46, t50, t51, t56, t60;

#ifndef XC_DONT_COMPILE_VXC
  double t61, t65, t67, t72, t74, t75, t77, t79;
  double t80, t81, t89, t90, t91, t92, t93, t94;
  double t96, t97, t98, t103, t108, t111, t118, t125;
  double t130, t134;

#ifndef XC_DONT_COMPILE_FXC
  double t146, t151, t158, t161, t163, t165, t177, t186;
  double t190, t198, t204, t224, t240, t266;
#endif

#endif

#endif


  gga_x_ssb_sw_params *params;

  assert(p->params != NULL);
  params = (gga_x_ssb_sw_params * )(p->params);

  t3 = rho[0] / 0.2e1 <= 0.101e1 * p->threshold_dens;
  t4 = M_CBRT3;
  t5 = M_CBRTPI;
  t7 = t4 / t5;
  t8 = POW_1_3(rho[0]);
  t9 = M_CBRT6;
  t11 = M_PI * M_PI;
  t12 = POW_1_3(t11);
  t13 = t12 * t12;
  t14 = 0.1e1 / t13;
  t15 = params->B * t9 * t14;
  t16 = M_CBRT2;
  t17 = t16 * t16;
  t18 = sigma[0] * t17;
  t19 = rho[0] * rho[0];
  t20 = t8 * t8;
  t22 = 0.1e1 / t20 / t19;
  t28 = 0.1e1 + params->C * t9 * t14 * t18 * t22 / 0.24e2;
  t29 = 0.1e1 / t28;
  t35 = params->D * t9 * t14;
  t36 = t9 * t9;
  t39 = 0.1e1 / t12 / t11;
  t41 = sigma[0] * sigma[0];
  t43 = t19 * t19;
  t44 = t43 * rho[0];
  t46 = 0.1e1 / t8 / t44;
  t50 = 0.1e1 + params->E * t36 * t39 * t41 * t16 * t46 / 0.288e3;
  t51 = 0.1e1 / t50;
  t56 = params->A + t15 * t18 * t22 * t29 / 0.24e2 - t35 * t18 * t22 * t51 / 0.24e2;
  t60 = my_piecewise3(t3, 0, -0.3e1 / 0.8e1 * t7 * t8 * t56);
  if(zk != NULL && (p->info->flags & XC_FLAGS_HAVE_EXC))
    zk[0] = 0.2e1 * t60;

#ifndef XC_DONT_COMPILE_VXC

  if(order < 1) return;


  t61 = 0.1e1 / t20;
  t65 = t19 * rho[0];
  t67 = 0.1e1 / t20 / t65;
  t72 = params->B * t36;
  t74 = t72 * t39 * t41;
  t75 = t43 * t19;
  t77 = 0.1e1 / t8 / t75;
  t79 = t28 * t28;
  t80 = 0.1e1 / t79;
  t81 = t80 * params->C;
  t89 = t11 * t11;
  t90 = 0.1e1 / t89;
  t91 = params->D * t90;
  t92 = t41 * sigma[0];
  t93 = t91 * t92;
  t94 = t43 * t43;
  t96 = 0.1e1 / t94 / rho[0];
  t97 = t50 * t50;
  t98 = 0.1e1 / t97;
  t103 = -t15 * t18 * t67 * t29 / 0.9e1 + t74 * t16 * t77 * t81 / 0.108e3 + t35 * t18 * t67 * t51 / 0.9e1 - t93 * t96 * t98 * params->E / 0.108e3;
  t108 = my_piecewise3(t3, 0, -t7 * t61 * t56 / 0.8e1 - 0.3e1 / 0.8e1 * t7 * t8 * t103);
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vrho[0] = 0.2e1 * rho[0] * t108 + 0.2e1 * t60;

  t111 = t17 * t22;
  t118 = t16 * t46 * t81;
  t125 = 0.1e1 / t94;
  t130 = t15 * t111 * t29 / 0.24e2 - t72 * t39 * sigma[0] * t118 / 0.288e3 - t35 * t111 * t51 / 0.24e2 + t91 * t41 * t125 * t98 * params->E / 0.288e3;
  t134 = my_piecewise3(t3, 0, -0.3e1 / 0.8e1 * t7 * t8 * t130);
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vsigma[0] = 0.2e1 * rho[0] * t134;

#ifndef XC_DONT_COMPILE_FXC

  if(order < 2) return;


  t146 = 0.1e1 / t20 / t43;
  t151 = t43 * t65;
  t158 = params->B * t90;
  t161 = 0.1e1 / t94 / t19;
  t163 = 0.1e1 / t79 / t28;
  t165 = params->C * params->C;
  t177 = t41 * t41;
  t186 = params->E * params->E;
  t190 = 0.1e1 / t97 / t50 * t186 * t36 * t39 * t16;
  t198 = my_piecewise3(t3, 0, t7 / t20 / rho[0] * t56 / 0.12e2 - t7 * t61 * t103 / 0.4e1 - 0.3e1 / 0.8e1 * t7 * t8 * (0.11e2 / 0.27e2 * t15 * t18 * t146 * t29 - t74 * t16 / t8 / t151 * t81 / 0.12e2 + 0.2e1 / 0.81e2 * t158 * t92 * t161 * t163 * t165 - 0.11e2 / 0.27e2 * t35 * t18 * t146 * t51 + 0.35e2 / 0.324e3 * t93 * t161 * t98 * params->E - t91 * t177 * sigma[0] / t8 / t94 / t151 * t190 / 0.2916e4));
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[0] = 0.2e1 * rho[0] * t198 + 0.4e1 * t108;

  t204 = t17 * t67;
  t224 = t98 * params->E;
  t240 = my_piecewise3(t3, 0, -t7 * t61 * t130 / 0.8e1 - 0.3e1 / 0.8e1 * t7 * t8 * (-t15 * t204 * t29 / 0.9e1 + t72 * t39 * t16 * t77 * t80 * params->C * sigma[0] / 0.36e2 - t158 * t41 * t96 * t163 * t165 / 0.108e3 + t35 * t204 * t51 / 0.9e1 - t91 * t96 * t224 * t41 / 0.27e2 + t91 * t177 / t8 / t94 / t75 * t190 / 0.7776e4));
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rhosigma[0] = 0.2e1 * rho[0] * t240 + 0.2e1 * t134;

  t266 = my_piecewise3(t3, 0, -0.3e1 / 0.8e1 * t7 * t8 * (-t72 * t39 * t118 / 0.144e3 + t158 * sigma[0] * t125 * t163 * t165 / 0.288e3 + t91 * t125 * t224 * sigma[0] / 0.96e2 - t91 * t92 / t8 / t94 / t44 * t190 / 0.20736e5));
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigma2[0] = 0.2e1 * rho[0] * t266;

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
  double t18, t19, t20, t21, t22, t23, t24, t25;
  double t26, t28, t29, t30, t35, t36, t40, t41;
  double t42, t43, t45, t46, t48, t49, t51, t55;
  double t56, t60, t61, t65, t66, t67, t68, t69;
  double t70, t71, t72, t74, t75, t80, t81, t85;
  double t87, t88, t90, t94, t95, t99, t100, t104;

#ifndef XC_DONT_COMPILE_VXC
  double t105, t110, t111, t114, t116, t117, t118, t119;
  double t120, t121, t123, t124, t125, t128, t130, t131;
  double t136, t137, t139, t141, t142, t143, t150, t151;
  double t152, t153, t154, t155, t157, t158, t159, t164;
  double t165, t170, t171, t174, t176, t177, t178, t179;
  double t180, t185, t188, t189, t194, t195, t200, t201;
  double t203, t204, t205, t208, t210, t211, t215, t217;
  double t219, t220, t221, t228, t229, t230, t232, t233;
  double t234, t239, t240, t245, t248, t260, t265, t266;
  double t270, t271, t283, t288, t289, t293;

#ifndef XC_DONT_COMPILE_FXC
  double t298, t304, t307, t310, t313, t315, t317, t326;
  double t327, t337, t341, t348, t351, t353, t355, t366;
  double t375, t377, t378, t387, t391, t393, t396, t398;
  double t400, t403, t409, t420, t433, t436, t446, t454;
  double t462, t469, t481, t489, t506, t510, t519, t521;
  double t533, t543, t552, t560, t565, t583, t600, t604;
  double t610, t617, t626, t644, t661, t688, t714;
#endif

#endif

#endif


  gga_x_ssb_sw_params *params;

  assert(p->params != NULL);
  params = (gga_x_ssb_sw_params * )(p->params);

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
  t18 = params->B * t17;
  t19 = M_PI * M_PI;
  t20 = POW_1_3(t19);
  t21 = t20 * t20;
  t22 = 0.1e1 / t21;
  t23 = t18 * t22;
  t24 = rho[0] * rho[0];
  t25 = POW_1_3(rho[0]);
  t26 = t25 * t25;
  t28 = 0.1e1 / t26 / t24;
  t29 = sigma[0] * t28;
  t30 = params->C * t17;
  t35 = 0.1e1 + t30 * t22 * sigma[0] * t28 / 0.24e2;
  t36 = 0.1e1 / t35;
  t40 = params->D * t17;
  t41 = t40 * t22;
  t42 = t17 * t17;
  t43 = params->E * t42;
  t45 = 0.1e1 / t20 / t19;
  t46 = sigma[0] * sigma[0];
  t48 = t24 * t24;
  t49 = t48 * rho[0];
  t51 = 0.1e1 / t25 / t49;
  t55 = 0.1e1 + t43 * t45 * t46 * t51 / 0.576e3;
  t56 = 0.1e1 / t55;
  t60 = params->A + t23 * t29 * t36 / 0.24e2 - t41 * t29 * t56 / 0.24e2;
  t61 = t16 * t60;
  t65 = my_piecewise3(t2, 0, -0.3e1 / 0.4e1 * t8 * t13 * t61);
  t66 = rho[1] <= t1;
  t67 = rho[1] * t12;
  t68 = rho[1] * t14;
  t69 = POW_1_3(t68);
  t70 = rho[1] * rho[1];
  t71 = POW_1_3(rho[1]);
  t72 = t71 * t71;
  t74 = 0.1e1 / t72 / t70;
  t75 = sigma[2] * t74;
  t80 = 0.1e1 + t30 * t22 * sigma[2] * t74 / 0.24e2;
  t81 = 0.1e1 / t80;
  t85 = sigma[2] * sigma[2];
  t87 = t70 * t70;
  t88 = t87 * rho[1];
  t90 = 0.1e1 / t71 / t88;
  t94 = 0.1e1 + t43 * t45 * t85 * t90 / 0.576e3;
  t95 = 0.1e1 / t94;
  t99 = params->A + t23 * t75 * t81 / 0.24e2 - t41 * t75 * t95 / 0.24e2;
  t100 = t69 * t99;
  t104 = my_piecewise3(t66, 0, -0.3e1 / 0.4e1 * t8 * t67 * t100);
  if(zk != NULL && (p->info->flags & XC_FLAGS_HAVE_EXC))
    zk[0] = t65 + t104;

#ifndef XC_DONT_COMPILE_VXC

  if(order < 1) return;


  t105 = t12 * t16;
  t110 = 0.1e1 / t11 / t9;
  t111 = rho[0] * t110;
  t114 = t8 * t111 * t61 / 0.2e1;
  t116 = t6 * t7 * rho[0];
  t117 = t16 * t16;
  t118 = 0.1e1 / t117;
  t119 = t12 * t118;
  t120 = t9 * t9;
  t121 = 0.1e1 / t120;
  t123 = -rho[0] * t121 + t14;
  t124 = t60 * t123;
  t125 = t119 * t124;
  t128 = t24 * rho[0];
  t130 = 0.1e1 / t26 / t128;
  t131 = sigma[0] * t130;
  t136 = params->B * t42 * t45;
  t137 = t48 * t24;
  t139 = 0.1e1 / t25 / t137;
  t141 = t35 * t35;
  t142 = 0.1e1 / t141;
  t143 = t142 * params->C;
  t150 = t19 * t19;
  t151 = 0.1e1 / t150;
  t152 = params->D * t151;
  t153 = t46 * sigma[0];
  t154 = t152 * t153;
  t155 = t48 * t48;
  t157 = 0.1e1 / t155 / rho[0];
  t158 = t55 * t55;
  t159 = 0.1e1 / t158;
  t164 = -t23 * t131 * t36 / 0.9e1 + t136 * t46 * t139 * t143 / 0.216e3 + t41 * t131 * t56 / 0.9e1 - t154 * t157 * t159 * params->E / 0.432e3;
  t165 = t16 * t164;
  t170 = my_piecewise3(t2, 0, -0.3e1 / 0.4e1 * t8 * t105 * t60 + t114 - t116 * t125 / 0.4e1 - 0.3e1 / 0.4e1 * t8 * t13 * t165);
  t171 = rho[1] * t110;
  t174 = t8 * t171 * t100 / 0.2e1;
  t176 = 0.1e1 / t11 / t120;
  t177 = t70 * t176;
  t178 = t69 * t69;
  t179 = 0.1e1 / t178;
  t180 = t179 * t99;
  t185 = my_piecewise3(t66, 0, t174 + t8 * t177 * t180 / 0.4e1);
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vrho[0] = t65 + t104 + t9 * (t170 + t185);

  t188 = t24 * t176;
  t189 = t118 * t60;
  t194 = my_piecewise3(t2, 0, t114 + t8 * t188 * t189 / 0.4e1);
  t195 = t12 * t69;
  t200 = t6 * t7 * rho[1];
  t201 = t12 * t179;
  t203 = -rho[1] * t121 + t14;
  t204 = t99 * t203;
  t205 = t201 * t204;
  t208 = t70 * rho[1];
  t210 = 0.1e1 / t72 / t208;
  t211 = sigma[2] * t210;
  t215 = t87 * t70;
  t217 = 0.1e1 / t71 / t215;
  t219 = t80 * t80;
  t220 = 0.1e1 / t219;
  t221 = t220 * params->C;
  t228 = t85 * sigma[2];
  t229 = t152 * t228;
  t230 = t87 * t87;
  t232 = 0.1e1 / t230 / rho[1];
  t233 = t94 * t94;
  t234 = 0.1e1 / t233;
  t239 = -t23 * t211 * t81 / 0.9e1 + t136 * t85 * t217 * t221 / 0.216e3 + t41 * t211 * t95 / 0.9e1 - t229 * t232 * t234 * params->E / 0.432e3;
  t240 = t69 * t239;
  t245 = my_piecewise3(t66, 0, -0.3e1 / 0.4e1 * t8 * t195 * t99 + t174 - t200 * t205 / 0.4e1 - 0.3e1 / 0.4e1 * t8 * t67 * t240);
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vrho[1] = t65 + t104 + t9 * (t194 + t245);

  t248 = t22 * t28;
  t260 = 0.1e1 / t155;
  t265 = t18 * t248 * t36 / 0.24e2 - t136 * sigma[0] * t51 * t143 / 0.576e3 - t40 * t248 * t56 / 0.24e2 + t152 * t46 * t260 * t159 * params->E / 0.1152e4;
  t266 = t16 * t265;
  t270 = my_piecewise3(t2, 0, -0.3e1 / 0.4e1 * t8 * t13 * t266);
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vsigma[0] = t9 * t270;

  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vsigma[1] = 0.0e0;

  t271 = t22 * t74;
  t283 = 0.1e1 / t230;
  t288 = t18 * t271 * t81 / 0.24e2 - t136 * sigma[2] * t90 * t221 / 0.576e3 - t40 * t271 * t95 / 0.24e2 + t152 * t85 * t283 * t234 * params->E / 0.1152e4;
  t289 = t69 * t288;
  t293 = my_piecewise3(t66, 0, -0.3e1 / 0.4e1 * t8 * t67 * t289);
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vsigma[2] = t9 * t293;

#ifndef XC_DONT_COMPILE_FXC

  if(order < 2) return;


  t298 = t8 * t110 * t16 * t60;
  t304 = rho[0] * t176;
  t307 = 0.5e1 / 0.6e1 * t8 * t304 * t61;
  t310 = t116 * t110 * t118 * t124;
  t313 = t8 * t111 * t165;
  t315 = 0.1e1 / t117 / t15;
  t317 = t123 * t123;
  t326 = t120 * t9;
  t327 = 0.1e1 / t326;
  t337 = sigma[0] / t26 / t48;
  t341 = t48 * t128;
  t348 = params->B * t151;
  t351 = 0.1e1 / t155 / t24;
  t353 = 0.1e1 / t141 / t35;
  t355 = params->C * params->C;
  t366 = t46 * t46;
  t375 = params->E * params->E;
  t377 = t42 * t45;
  t378 = 0.1e1 / t158 / t55 * t375 * t377;
  t387 = my_piecewise3(t2, 0, t298 - t8 * t125 / 0.2e1 - 0.3e1 / 0.2e1 * t8 * t105 * t164 - t307 + t310 / 0.3e1 + t313 + t116 * t12 * t315 * t60 * t317 / 0.6e1 - t116 * t119 * t164 * t123 / 0.2e1 - t116 * t119 * t60 * (0.2e1 * rho[0] * t327 - 0.2e1 * t121) / 0.4e1 - 0.3e1 / 0.4e1 * t8 * t13 * t16 * (0.11e2 / 0.27e2 * t23 * t337 * t36 - t136 * t46 / t25 / t341 * t143 / 0.24e2 + t348 * t153 * t351 * t353 * t355 / 0.162e3 - 0.11e2 / 0.27e2 * t41 * t337 * t56 + 0.35e2 / 0.1296e4 * t154 * t351 * t159 * params->E - t152 * t366 * sigma[0] / t25 / t155 / t341 * t378 / 0.23328e5));
  t391 = 0.5e1 / 0.6e1 * t8 * rho[1] * t176 * t100;
  t393 = 0.1e1 / t11 / t326;
  t396 = t8 * t70 * t393 * t180;
  t398 = t120 * t120;
  t400 = 0.1e1 / t11 / t398;
  t403 = 0.1e1 / t178 / t68;
  t409 = my_piecewise3(t66, 0, -t391 - 0.5e1 / 0.6e1 * t396 + t8 * t208 * t400 * t403 * t99 / 0.6e1);
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[0] = 0.2e1 * t170 + 0.2e1 * t185 + t9 * (t387 + t409);

  t420 = t8 * t24 * t393 * t189;
  t433 = my_piecewise3(t2, 0, t298 / 0.2e1 - t307 + t310 / 0.6e1 + t313 / 0.2e1 + t8 * t304 * t189 / 0.2e1 - 0.2e1 / 0.3e1 * t420 - t6 * t7 * t24 * t176 * t315 * t124 / 0.6e1 + t8 * t188 * t118 * t164 / 0.4e1);
  t436 = t8 * t110 * t69 * t99;
  t446 = t200 * t110 * t179 * t204;
  t454 = rho[1] * t327;
  t462 = t8 * t171 * t240;
  t469 = my_piecewise3(t66, 0, t436 / 0.2e1 + t8 * t176 * t179 * t99 * rho[1] / 0.4e1 - t391 - t396 / 0.6e1 + t446 / 0.6e1 - t6 * t7 * t70 * t176 * t403 * t204 / 0.6e1 - t200 * t201 * t99 * (-t121 + 0.2e1 * t454) / 0.4e1 + t462 / 0.2e1 + t8 * t177 * t179 * t239 / 0.4e1);
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[1] = t170 + t185 + t194 + t245 + t9 * (t433 + t469);

  t481 = my_piecewise3(t2, 0, -t307 - 0.5e1 / 0.6e1 * t420 + t8 * t128 * t400 * t315 * t60 / 0.6e1);
  t489 = t203 * t203;
  t506 = sigma[2] / t72 / t87;
  t510 = t87 * t208;
  t519 = 0.1e1 / t230 / t70;
  t521 = 0.1e1 / t219 / t80;
  t533 = t85 * t85;
  t543 = 0.1e1 / t233 / t94 * t375 * t377;
  t552 = my_piecewise3(t66, 0, t436 - t8 * t205 / 0.2e1 - 0.3e1 / 0.2e1 * t8 * t195 * t239 - t391 + t446 / 0.3e1 + t462 + t200 * t12 * t403 * t99 * t489 / 0.6e1 - t200 * t201 * t239 * t203 / 0.2e1 - t200 * t201 * t99 * (-0.2e1 * t121 + 0.2e1 * t454) / 0.4e1 - 0.3e1 / 0.4e1 * t8 * t67 * t69 * (0.11e2 / 0.27e2 * t23 * t506 * t81 - t136 * t85 / t71 / t510 * t221 / 0.24e2 + t348 * t228 * t519 * t521 * t355 / 0.162e3 - 0.11e2 / 0.27e2 * t41 * t506 * t95 + 0.35e2 / 0.1296e4 * t229 * t519 * t234 * params->E - t152 * t533 * sigma[2] / t71 / t230 / t510 * t543 / 0.23328e5));
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[2] = 0.2e1 * t194 + 0.2e1 * t245 + t9 * (t481 + t552);

  t560 = t8 * t111 * t266 / 0.2e1;
  t565 = t22 * t130;
  t583 = t159 * params->E;
  t600 = my_piecewise3(t2, 0, -0.3e1 / 0.4e1 * t8 * t105 * t265 + t560 - t116 * t119 * t265 * t123 / 0.4e1 - 0.3e1 / 0.4e1 * t8 * t13 * t16 * (-t18 * t565 * t36 / 0.9e1 + t136 * t139 * t142 * params->C * sigma[0] / 0.72e2 - t348 * t46 * t157 * t353 * t355 / 0.432e3 + t40 * t565 * t56 / 0.9e1 - t152 * t157 * t583 * t46 / 0.108e3 + t152 * t366 / t25 / t155 / t137 * t378 / 0.62208e5));
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rhosigma[0] = t9 * t600 + t270;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rhosigma[1] = 0.0e0;

  t604 = t8 * t171 * t289 / 0.2e1;
  t610 = my_piecewise3(t66, 0, t604 + t8 * t177 * t179 * t288 / 0.4e1);
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rhosigma[2] = t9 * t610 + t293;

  t617 = my_piecewise3(t2, 0, t560 + t8 * t188 * t118 * t265 / 0.4e1);
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rhosigma[3] = t9 * t617 + t270;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rhosigma[4] = 0.0e0;

  t626 = t22 * t210;
  t644 = t234 * params->E;
  t661 = my_piecewise3(t66, 0, -0.3e1 / 0.4e1 * t8 * t195 * t288 + t604 - t200 * t201 * t288 * t203 / 0.4e1 - 0.3e1 / 0.4e1 * t8 * t67 * t69 * (-t18 * t626 * t81 / 0.9e1 + t136 * t217 * t220 * params->C * sigma[2] / 0.72e2 - t348 * t85 * t232 * t521 * t355 / 0.432e3 + t40 * t626 * t95 / 0.9e1 - t152 * t232 * t644 * t85 / 0.108e3 + t152 * t533 / t71 / t230 / t215 * t543 / 0.62208e5));
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rhosigma[5] = t9 * t661 + t293;

  t688 = my_piecewise3(t2, 0, -0.3e1 / 0.4e1 * t8 * t13 * t16 * (-t136 * t51 * t142 * params->C / 0.288e3 + t348 * sigma[0] * t260 * t353 * t355 / 0.1152e4 + t152 * t260 * t583 * sigma[0] / 0.384e3 - t152 * t153 / t25 / t155 / t49 * t378 / 0.165888e6));
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigma2[0] = t9 * t688;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigma2[1] = 0.0e0;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigma2[2] = 0.0e0;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigma2[3] = 0.0e0;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigma2[4] = 0.0e0;

  t714 = my_piecewise3(t66, 0, -0.3e1 / 0.4e1 * t8 * t67 * t69 * (-t136 * t90 * t220 * params->C / 0.288e3 + t348 * sigma[2] * t283 * t521 * t355 / 0.1152e4 + t152 * t283 * t644 * sigma[2] / 0.384e3 - t152 * t228 / t71 / t230 / t88 * t543 / 0.165888e6));
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigma2[5] = t9 * t714;

#ifndef XC_DONT_COMPILE_KXC

  if(order < 3) return;


#endif

#endif

#endif


}

