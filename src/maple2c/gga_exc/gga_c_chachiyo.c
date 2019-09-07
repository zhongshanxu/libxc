/* 
  This file was generated automatically with ./maple2c_new.pl.
  Do not edit this file directly as it can be overwritten!!

  This Source Code Form is subject to the terms of the Mozilla Public
  License, v. 2.0. If a copy of the MPL was not distributed with this
  file, You can obtain one at http://mozilla.org/MPL/2.0/.

  Maple version     : Maple 2018 (X86 64 LINUX)
  Maple source      : ../maple/gga_exc/gga_c_chachiyo.mpl
  Type of functional: gga_exc
*/

#define maple2c_order 3

static inline void
func_unpol(const xc_func_type *p, int order, const double *rho, const double *sigma, double *zk, double *vrho, double *vsigma, double *v2rho2, double *v2rhosigma, double *v2sigma2, double *v3rho3, double *v3rho2sigma, double *v3rhosigma2, double *v3sigma3)
{
  double t1, t2, t3, t5, t7, t8, t9, t13;
  double t14, t16, t17, t18, t22, t23, t24, t33;
  double t34, t49, t52, t53, t54, t63;

  gga_c_chachiyo_params *params;

  assert(p->params != NULL);
  params = (gga_c_chachiyo_params * )(p->params);

  t1 = M_CBRT3;
  t2 = t1 * t1;
  t3 = params->bp * t2;
  t5 = POW_1_3(0.1e1 / M_PI);
  t7 = M_CBRT4;
  t8 = 0.1e1 / t5 * t7;
  t9 = POW_1_3(rho[0]);
  t13 = params->bp * t1;
  t14 = t5 * t5;
  t16 = t7 * t7;
  t17 = 0.1e1 / t14 * t16;
  t18 = t9 * t9;
  t22 = 0.1e1 + t3 * t8 * t9 / 0.3e1 + t13 * t17 * t18 / 0.3e1;
  t23 = log(t22);
  if(zk != NULL && (p->info->flags & XC_FLAGS_HAVE_EXC))
    *zk = params->ap * t23;

#ifndef XC_DONT_COMPILE_VXC

  if(order < 1) return;


  t24 = rho[0] * params->ap;
  t33 = t3 * t8 / t18 / 0.9e1 + 0.2e1 / 0.9e1 * t13 * t17 / t9;
  t34 = 0.1e1 / t22;
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vrho[0] = t24 * t33 * t34 + (params->ap * t23);

  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vsigma[0] = 0.0e0;

#ifndef XC_DONT_COMPILE_FXC

  if(order < 2) return;


  t49 = -0.2e1 / 0.27e2 * t3 * t8 / t18 / rho[0] - 0.2e1 / 0.27e2 * t13 * t17 / t9 / rho[0];
  t52 = t33 * t33;
  t53 = t22 * t22;
  t54 = 0.1e1 / t53;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[0] = t24 * t49 * t34 - t24 * t52 * t54 + 0.2e1 * params->ap * t33 * t34;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rhosigma[0] = 0.0e0;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigma2[0] = 0.0e0;

#ifndef XC_DONT_COMPILE_KXC

  if(order < 3) return;


  t63 = rho[0] * rho[0];
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[0] = 0.3e1 * params->ap * t49 * t34 - 0.3e1 * params->ap * t52 * t54 + t24 * (0.10e2 / 0.81e2 * t3 * t8 / t18 / t63 + 0.8e1 / 0.81e2 * t13 * t17 / t9 / t63) * t34 - 0.3e1 * t24 * t49 * t54 * t33 + 0.2e1 * t24 * t52 * t33 / t53 / t22;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho2sigma[0] = 0.0e0;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rhosigma2[0] = 0.0e0;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3sigma3[0] = 0.0e0;

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
  double t1, t2, t3, t5, t7, t8, t9, t13;
  double t14, t16, t17, t18, t22, t23, t24, t25;
  double t26, t29, t30, t31, t32, t35, t36, t37;
  double t41, t45, t46, t50, t51, t53, t54, t55;
  double t57, t59, t60, t62, t65, t67, t70, t73;
  double t74, t77, t81, t85, t89, t93, t94, t95;
  double t99, t100, t103, t109, t111, t114, t115, t118;
  double t120, t122, t124, t127, t131, t132, t135, t138;
  double t141, t142, t143, t148, t160, t161, t167, t169;
  double t196, t207, t217, t268, t294;

  gga_c_chachiyo_params *params;

  assert(p->params != NULL);
  params = (gga_c_chachiyo_params * )(p->params);

  t1 = M_CBRT3;
  t2 = t1 * t1;
  t3 = params->bf * t2;
  t5 = POW_1_3(0.1e1 / M_PI);
  t7 = M_CBRT4;
  t8 = 0.1e1 / t5 * t7;
  t9 = POW_1_3(rho[0]);
  t13 = params->bf * t1;
  t14 = t5 * t5;
  t16 = t7 * t7;
  t17 = 0.1e1 / t14 * t16;
  t18 = t9 * t9;
  t22 = 0.1e1 + t3 * t8 * t9 / 0.3e1 + t13 * t17 * t18 / 0.3e1;
  t23 = log(t22);
  t24 = params->af * t23;
  t25 = M_CBRTPI;
  t26 = t2 * t25;
  t29 = 0.1e1 + t26 * t9 / 0.48e2;
  t30 = params->h * rho[0];
  t31 = 0.1e1 / params->af;
  t32 = 0.1e1 / t23;
  t35 = pow(t29, t30 * t31 * t32);
  if(zk != NULL && (p->info->flags & XC_FLAGS_HAVE_EXC))
    *zk = t24 * t35;

#ifndef XC_DONT_COMPILE_VXC

  if(order < 1) return;


  t36 = rho[0] * params->af;
  t37 = 0.1e1 / t18;
  t41 = 0.1e1 / t9;
  t45 = t3 * t8 * t37 / 0.9e1 + 0.2e1 / 0.9e1 * t13 * t17 * t41;
  t46 = 0.1e1 / t22;
  t50 = t23 * t35;
  t51 = params->h * t31;
  t53 = t30 * t31;
  t54 = t23 * t23;
  t55 = 0.1e1 / t54;
  t57 = t55 * t45 * t46;
  t59 = t51 * t32 - t53 * t57;
  t60 = log(t29);
  t62 = params->h * t9;
  t65 = 0.1e1 / t29;
  t67 = t32 * t2 * t25 * t65;
  t70 = t59 * t60 + t62 * t31 * t67 / 0.144e3;
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vrho[0] = t36 * t45 * t46 * t35 + t36 * t50 * t70 + (t24 * t35);

  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vsigma[0] = 0.0e0;

#ifndef XC_DONT_COMPILE_FXC

  if(order < 2) return;


  t73 = params->af * t45;
  t74 = t46 * t35;
  t77 = t35 * t70;
  t81 = 0.1e1 / t18 / rho[0];
  t85 = 0.1e1 / t9 / rho[0];
  t89 = -0.2e1 / 0.27e2 * t13 * t17 * t85 - 0.2e1 / 0.27e2 * t3 * t8 * t81;
  t93 = t45 * t45;
  t94 = t22 * t22;
  t95 = 0.1e1 / t94;
  t99 = t36 * t45;
  t100 = t74 * t70;
  t103 = t70 * t70;
  t109 = 0.1e1 / t54 / t23;
  t111 = t109 * t93 * t95;
  t114 = t55 * t89;
  t115 = t114 * t46;
  t118 = t55 * t93 * t95;
  t120 = 0.2e1 * t53 * t111 - t53 * t115 + t53 * t118 - 0.2e1 * t51 * t57;
  t122 = t59 * t2;
  t124 = t25 * t37 * t65;
  t127 = params->h * t37;
  t131 = t31 * t55;
  t132 = t62 * t131;
  t135 = t26 * t65 * t45 * t46;
  t138 = params->h * t41;
  t141 = t25 * t25;
  t142 = t29 * t29;
  t143 = 0.1e1 / t142;
  t148 = t120 * t60 + t122 * t124 / 0.144e3 + t127 * t31 * t67 / 0.432e3 - t132 * t135 / 0.144e3 - t138 * t31 * t32 * t1 * t141 * t143 / 0.6912e4;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[0] = t36 * t89 * t46 * t35 - t36 * t93 * t95 * t35 + t36 * t50 * t103 + t36 * t50 * t148 + 0.2e1 * t99 * t100 + 0.2e1 * t24 * t77 + 0.2e1 * t73 * t74;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rhosigma[0] = 0.0e0;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigma2[0] = 0.0e0;

#ifndef XC_DONT_COMPILE_KXC

  if(order < 3) return;


  t160 = t36 * t89;
  t161 = t95 * t35;
  t167 = t93 * t45;
  t169 = 0.1e1 / t94 / t22;
  t196 = rho[0] * rho[0];
  t207 = 0.10e2 / 0.81e2 * t3 * t8 / t18 / t196 + 0.8e1 / 0.81e2 * t13 * t17 / t9 / t196;
  t217 = t54 * t54;
  t268 = t26 * t65 * t93 * t95;
  t294 = (0.6e1 * t51 * t111 - 0.3e1 * t51 * t115 + 0.3e1 * t51 * t118 - 0.6e1 * t53 / t217 * t167 * t169 + 0.6e1 * t53 * t109 * t45 * t95 * t89 - 0.6e1 * t53 * t109 * t167 * t169 - t53 * t55 * t207 * t46 + 0.3e1 * t53 * t114 * t95 * t45 - 0.2e1 * t53 * t55 * t167 * t169) * t60 + t120 * t2 * t124 / 0.72e2 - t122 * t25 * t81 * t65 / 0.216e3 - t59 * t1 * t141 * t85 * t143 / 0.6912e4 - params->h * t81 * t31 * t67 / 0.648e3 - t127 * t131 * t135 / 0.216e3 + t62 * t31 * t109 * t268 / 0.72e2 + t138 * t131 * t1 * t141 * t143 * t45 * t46 / 0.3456e4 - t132 * t26 * t65 * t89 * t46 / 0.144e3 + t132 * t268 / 0.144e3 + params->h / rho[0] * t31 * t32 * M_PI / t142 / t29 / 0.165888e6;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[0] = t36 * t50 * t103 * t70 + 0.3e1 * t36 * t23 * t77 * t148 - 0.3e1 * t36 * t93 * t161 * t70 + 0.2e1 * t36 * t167 * t169 * t35 + t36 * t207 * t46 * t35 + 0.3e1 * t24 * t35 * t103 + 0.3e1 * t99 * t74 * t103 + 0.3e1 * t24 * t35 * t148 + 0.3e1 * t99 * t74 * t148 - 0.3e1 * t160 * t161 * t45 - 0.3e1 * params->af * t93 * t161 + t36 * t50 * t294 + 0.3e1 * params->af * t89 * t74 + 0.3e1 * t160 * t100 + 0.6e1 * t73 * t100;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho2sigma[0] = 0.0e0;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rhosigma2[0] = 0.0e0;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3sigma3[0] = 0.0e0;

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
  double t1, t2, t3, t5, t7, t8, t9, t10;
  double t11, t14, t15, t17, t18, t19, t20, t23;
  double t24, t25, t26, t29, t32, t33, t35, t36;
  double t37, t38, t39, t40, t41, t42, t43, t44;
  double t46, t47, t50, t52, t53, t54, t56, t57;
  double t61, t62, t63, t64, t65, t67, t71, t74;
  double t76, t77, t82, t84, t86, t87, t88, t89;
  double t90, t91, t92, t93, t95, t96, t99, t102;
  double t103, t105, t106, t107, t108, t111, t112, t115;
  double t118, t121, t122, t124, t127, t128, t130, t132;
  double t135, t138, t139, t143, t145, t149, t150, t152;
  double t154, t155, t157, t161, t165, t166, t167, t169;
  double t170, t171, t176, t178, t180, t181, t183, t184;
  double t185, t186, t188, t189, t193, t194, t197, t198;
  double t199, t201, t205, t206, t209, t212, t215, t216;
  double t220, t221, t223, t224, t227, t228, t234, t238;
  double t240, t241, t244, t247, t250, t252, t253, t257;
  double t259, t260, t263, t264, t266, t268, t270, t273;
  double t276, t279, t282, t285, t288, t289, t292, t294;
  double t296, t297, t303, t307, t308, t309, t311, t315;
  double t316, t318, t319, t324, t327, t331, t334, t337;
  double t340, t343, t344, t348, t349, t352, t358, t360;
  double t362, t364, t368, t372, t373, t375, t377, t379;
  double t381, t383, t388, t393, t396, t402, t420, t421;
  double t422, t424, t425, t427, t435, t437, t444, t445;
  double t446, t448, t451, t453, t466, t481, t482, t484;
  double t486, t487, t509, t512, t515, t531, t533, t534;
  double t535, t536, t548, t552, t560, t565, t567, t569;
  double t584, t587, t589, t628, t640, t642, t643, t645;
  double t659, t660, t675, t680, t684, t686, t688, t699;
  double t702, t710, t725, t742, t746, t754, t761, t765;
  double t774, t791, t803, t804, t811, t814, t815, t825;
  double t848, t862, t923;

  gga_c_chachiyo_params *params;

  assert(p->params != NULL);
  params = (gga_c_chachiyo_params * )(p->params);

  t1 = M_CBRT3;
  t2 = t1 * t1;
  t3 = params->bp * t2;
  t5 = POW_1_3(0.1e1 / M_PI);
  t7 = M_CBRT4;
  t8 = 0.1e1 / t5 * t7;
  t9 = rho[0] + rho[1];
  t10 = POW_1_3(t9);
  t11 = t8 * t10;
  t14 = params->bp * t1;
  t15 = t5 * t5;
  t17 = t7 * t7;
  t18 = 0.1e1 / t15 * t17;
  t19 = t10 * t10;
  t20 = t18 * t19;
  t23 = 0.1e1 + t3 * t11 / 0.3e1 + t14 * t20 / 0.3e1;
  t24 = log(t23);
  t25 = params->ap * t24;
  t26 = params->bf * t2;
  t29 = params->bf * t1;
  t32 = 0.1e1 + t26 * t11 / 0.3e1 + t29 * t20 / 0.3e1;
  t33 = log(t32);
  t35 = params->af * t33 - t25;
  t36 = rho[0] - rho[1];
  t37 = 0.1e1 / t9;
  t38 = t36 * t37;
  t39 = 0.1e1 + t38;
  t40 = POW_1_3(t39);
  t41 = t40 * t40;
  t42 = 0.1e1 - t38;
  t43 = POW_1_3(t42);
  t44 = t43 * t43;
  t46 = t41 / 0.2e1 + t44 / 0.2e1;
  t47 = t46 * t46;
  t50 = -0.2e1 * t47 * t46 + 0.2e1;
  t52 = t35 * t50 + t25;
  t53 = M_CBRTPI;
  t54 = t2 * t53;
  t56 = 0.1e1 / t19 / t9;
  t57 = t36 * t36;
  t61 = 0.1e1 + t54 * t56 * t57 / 0.48e2;
  t62 = params->h * t9;
  t63 = 0.1e1 / t52;
  t64 = t62 * t63;
  t65 = pow(t61, t64);
  if(zk != NULL && (p->info->flags & XC_FLAGS_HAVE_EXC))
    *zk = t52 * t65;

#ifndef XC_DONT_COMPILE_VXC

  if(order < 1) return;


  t67 = t8 / t19;
  t71 = t18 / t10;
  t74 = t3 * t67 / 0.9e1 + 0.2e1 / 0.9e1 * t14 * t71;
  t76 = 0.1e1 / t23;
  t77 = params->ap * t74 * t76;
  t82 = t26 * t67 / 0.9e1 + 0.2e1 / 0.9e1 * t29 * t71;
  t84 = 0.1e1 / t32;
  t86 = params->af * t82 * t84 - t77;
  t87 = t86 * t50;
  t88 = t35 * t47;
  t89 = 0.1e1 / t40;
  t90 = t9 * t9;
  t91 = 0.1e1 / t90;
  t92 = t36 * t91;
  t93 = t37 - t92;
  t95 = 0.1e1 / t43;
  t96 = -t93;
  t99 = t89 * t93 / 0.3e1 + t95 * t96 / 0.3e1;
  t102 = -0.6e1 * t88 * t99 + t77 + t87;
  t103 = t9 * t102;
  t105 = t9 * t52;
  t106 = params->h * t63;
  t107 = t52 * t52;
  t108 = 0.1e1 / t107;
  t111 = -t62 * t108 * t102 + t106;
  t112 = log(t61);
  t115 = 0.1e1 / t19 / t90;
  t118 = 0.5e1 / 0.144e3 * t54 * t115 * t57;
  t121 = t54 * t56 * t36 / 0.24e2;
  t122 = -t118 + t121;
  t124 = 0.1e1 / t61;
  t127 = t62 * t63 * t122 * t124 + t111 * t112;
  t128 = t65 * t127;
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vrho[0] = t103 * t65 + t105 * t128 + (t52 * t65);

  t130 = -t37 - t92;
  t132 = -t130;
  t135 = t89 * t130 / 0.3e1 + t95 * t132 / 0.3e1;
  t138 = -0.6e1 * t88 * t135 + t77 + t87;
  t139 = t9 * t138;
  t143 = -t62 * t108 * t138 + t106;
  t145 = -t118 - t121;
  t149 = t62 * t63 * t145 * t124 + t143 * t112;
  t150 = t65 * t149;
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vrho[1] = t105 * t150 + t139 * t65 + (t52 * t65);

  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vsigma[0] = 0.0e0;

  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vsigma[1] = 0.0e0;

  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vsigma[2] = 0.0e0;

#ifndef XC_DONT_COMPILE_FXC

  if(order < 2) return;


  t152 = t102 * t65;
  t154 = t52 * t65;
  t155 = t154 * t127;
  t157 = t8 * t56;
  t161 = t18 / t10 / t9;
  t165 = params->ap * (-0.2e1 / 0.27e2 * t14 * t161 - 0.2e1 / 0.27e2 * t3 * t157);
  t166 = t165 * t76;
  t167 = t74 * t74;
  t169 = t23 * t23;
  t170 = 0.1e1 / t169;
  t171 = params->ap * t167 * t170;
  t176 = params->af * (-0.2e1 / 0.27e2 * t26 * t157 - 0.2e1 / 0.27e2 * t29 * t161);
  t178 = t82 * t82;
  t180 = t32 * t32;
  t181 = 0.1e1 / t180;
  t183 = -params->af * t178 * t181 + t176 * t84 - t166 + t171;
  t184 = t183 * t50;
  t185 = t86 * t47;
  t186 = t185 * t99;
  t188 = t35 * t46;
  t189 = t99 * t99;
  t193 = 0.1e1 / t40 / t39;
  t194 = t93 * t93;
  t197 = t90 * t9;
  t198 = 0.1e1 / t197;
  t199 = t36 * t198;
  t201 = -0.2e1 * t91 + 0.2e1 * t199;
  t205 = 0.1e1 / t43 / t42;
  t206 = t96 * t96;
  t209 = -t201;
  t212 = -t193 * t194 / 0.9e1 + t89 * t201 / 0.3e1 - t205 * t206 / 0.9e1 + t95 * t209 / 0.3e1;
  t215 = -0.12e2 * t188 * t189 - 0.6e1 * t88 * t212 + t166 - t171 + t184 - 0.12e2 * t186;
  t216 = t9 * t215;
  t220 = t127 * t127;
  t221 = t65 * t220;
  t223 = params->h * t108;
  t224 = t223 * t102;
  t227 = 0.1e1 / t107 / t52;
  t228 = t102 * t102;
  t234 = -t62 * t108 * t215 + 0.2e1 * t62 * t227 * t228 - 0.2e1 * t224;
  t238 = t122 * t124;
  t240 = t62 * t108;
  t241 = t238 * t102;
  t244 = 0.1e1 / t19 / t197;
  t247 = 0.5e1 / 0.54e2 * t54 * t244 * t57;
  t250 = 0.5e1 / 0.36e2 * t54 * t115 * t36;
  t252 = t54 * t56 / 0.24e2;
  t253 = t247 - t250 + t252;
  t257 = t122 * t122;
  t259 = t61 * t61;
  t260 = 0.1e1 / t259;
  t263 = t62 * t63 * t253 * t124 - t62 * t63 * t257 * t260 + t111 * t122 * t124 + t106 * t238 + t234 * t112 - t240 * t241;
  t264 = t65 * t263;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[0] = 0.2e1 * t103 * t128 + t105 * t221 + t105 * t264 + t216 * t65 + 0.2e1 * t152 + 0.2e1 * t155;

  t266 = t138 * t65;
  t268 = t185 * t135;
  t270 = t135 * t99;
  t273 = t193 * t130;
  t276 = t89 * t36;
  t279 = t205 * t132;
  t282 = t95 * t36;
  t285 = -t273 * t93 / 0.9e1 + 0.2e1 / 0.3e1 * t276 * t198 - t279 * t96 / 0.9e1 - 0.2e1 / 0.3e1 * t282 * t198;
  t288 = -0.12e2 * t188 * t270 - 0.6e1 * t88 * t285 + t166 - t171 + t184 - 0.6e1 * t186 - 0.6e1 * t268;
  t289 = t9 * t288;
  t292 = t154 * t149;
  t294 = t128 * t149;
  t296 = t223 * t138;
  t297 = t227 * t138;
  t303 = 0.2e1 * t62 * t297 * t102 - t62 * t108 * t288 - t224 - t296;
  t307 = t145 * t124;
  t308 = t106 * t307;
  t309 = t307 * t102;
  t311 = t247 - t252;
  t315 = t145 * t260;
  t316 = t315 * t122;
  t318 = t62 * t63 * t311 * t124 + t143 * t122 * t124 + t303 * t112 - t240 * t309 - t64 * t316 + t308;
  t319 = t65 * t318;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[1] = t103 * t150 + t105 * t294 + t105 * t319 + t139 * t128 + t289 * t65 + t152 + t155 + t266 + t292;

  t324 = t135 * t135;
  t327 = t130 * t130;
  t331 = 0.2e1 * t91 + 0.2e1 * t199;
  t334 = t132 * t132;
  t337 = -t331;
  t340 = -t193 * t327 / 0.9e1 + t89 * t331 / 0.3e1 - t205 * t334 / 0.9e1 + t95 * t337 / 0.3e1;
  t343 = -0.12e2 * t188 * t324 - 0.6e1 * t88 * t340 + t166 - t171 + t184 - 0.12e2 * t268;
  t344 = t9 * t343;
  t348 = t149 * t149;
  t349 = t65 * t348;
  t352 = t138 * t138;
  t358 = -t62 * t108 * t343 + 0.2e1 * t62 * t227 * t352 - 0.2e1 * t296;
  t360 = t143 * t145;
  t362 = t307 * t138;
  t364 = t247 + t250 + t252;
  t368 = t145 * t145;
  t372 = t62 * t63 * t364 * t124 - t62 * t63 * t368 * t260 + t358 * t112 + t360 * t124 - t240 * t362 + t308;
  t373 = t65 * t372;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[2] = t105 * t349 + t105 * t373 + 0.2e1 * t139 * t150 + t344 * t65 + 0.2e1 * t266 + 0.2e1 * t292;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rhosigma[0] = 0.0e0;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rhosigma[1] = 0.0e0;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rhosigma[2] = 0.0e0;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rhosigma[3] = 0.0e0;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rhosigma[4] = 0.0e0;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rhosigma[5] = 0.0e0;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigma2[0] = 0.0e0;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigma2[1] = 0.0e0;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigma2[2] = 0.0e0;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigma2[3] = 0.0e0;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigma2[4] = 0.0e0;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigma2[5] = 0.0e0;

#ifndef XC_DONT_COMPILE_KXC

  if(order < 3) return;


  t375 = t215 * t65;
  t377 = t152 * t127;
  t379 = t154 * t220;
  t381 = t154 * t263;
  t383 = t8 * t115;
  t388 = t18 / t10 / t90;
  t393 = params->ap * (0.10e2 / 0.81e2 * t3 * t383 + 0.8e1 / 0.81e2 * t14 * t388) * t76;
  t396 = 0.3e1 * t165 * t170 * t74;
  t402 = 0.2e1 * params->ap * t167 * t74 / t169 / t23;
  t420 = (params->af * (0.10e2 / 0.81e2 * t26 * t383 + 0.8e1 / 0.81e2 * t29 * t388) * t84 - 0.3e1 * t176 * t181 * t82 + 0.2e1 * params->af * t178 * t82 / t180 / t32 - t393 + t396 - t402) * t50;
  t421 = t183 * t47;
  t422 = t421 * t99;
  t424 = t86 * t46;
  t425 = t424 * t189;
  t427 = t185 * t212;
  t435 = t39 * t39;
  t437 = 0.1e1 / t40 / t435;
  t444 = t90 * t90;
  t445 = 0.1e1 / t444;
  t446 = t36 * t445;
  t448 = 0.6e1 * t198 - 0.6e1 * t446;
  t451 = t42 * t42;
  t453 = 0.1e1 / t43 / t451;
  t466 = t393 - t396 + t402 + t420 - 0.18e2 * t422 - 0.36e2 * t425 - 0.18e2 * t427 - 0.12e2 * t35 * t189 * t99 - 0.36e2 * t188 * t99 * t212 - 0.6e1 * t88 * (0.4e1 / 0.27e2 * t437 * t194 * t93 - t193 * t93 * t201 / 0.3e1 + t89 * t448 / 0.3e1 + 0.4e1 / 0.27e2 * t453 * t206 * t96 - t205 * t96 * t209 / 0.3e1 - t95 * t448 / 0.3e1);
  t481 = params->h * t227;
  t482 = t481 * t228;
  t484 = t223 * t215;
  t486 = t107 * t107;
  t487 = 0.1e1 / t486;
  t509 = t253 * t124;
  t512 = t257 * t260;
  t515 = t62 * t227;
  t531 = 0.55e2 / 0.162e3 * t54 / t19 / t444 * t57;
  t533 = t54 * t244 * t36;
  t534 = 0.5e1 / 0.9e1 * t533;
  t535 = t54 * t115;
  t536 = 0.5e1 / 0.24e2 * t535;
  t548 = 0.1e1 / t259 / t61;
  t552 = (0.6e1 * t62 * t227 * t102 * t215 - 0.6e1 * t62 * t487 * t228 * t102 - t62 * t108 * t466 + 0.6e1 * t482 - 0.3e1 * t484) * t112 + 0.2e1 * t234 * t122 * t124 + t111 * t253 * t124 - t111 * t257 * t260 - 0.2e1 * t223 * t241 + 0.2e1 * t106 * t509 - 0.2e1 * t106 * t512 + 0.2e1 * t515 * t238 * t228 - 0.2e1 * t240 * t509 * t102 + 0.2e1 * t240 * t512 * t102 - t240 * t238 * t215 + t62 * t63 * (-t531 + t534 - t536) * t124 - 0.3e1 * t64 * t253 * t260 * t122 + 0.2e1 * t62 * t63 * t257 * t122 * t548;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[0] = t105 * t65 * t220 * t127 + 0.3e1 * t105 * t128 * t263 + t105 * t65 * t552 + t9 * t466 * t65 + 0.3e1 * t103 * t221 + 0.3e1 * t103 * t264 + 0.3e1 * t216 * t128 + 0.3e1 * t375 + 0.6e1 * t377 + 0.3e1 * t379 + 0.3e1 * t381;

  t560 = 0.2e1 * (t52 * t65) * t127 * t149;
  t565 = t138 * t102;
  t567 = 0.4e1 * t481 * t565;
  t569 = 0.2e1 * t223 * t288;
  t584 = t421 * t135;
  t587 = 0.24e2 * t424 * t270;
  t589 = 0.12e2 * t185 * t285;
  t628 = t393 - t396 + t402 + t420 - 0.12e2 * t422 - 0.12e2 * t425 - 0.6e1 * t427 - 0.6e1 * t584 - t587 - t589 - 0.12e2 * t35 * t189 * t135 - 0.24e2 * t188 * t285 * t99 - 0.12e2 * t188 * t135 * t212 - 0.6e1 * t88 * (0.4e1 / 0.27e2 * t437 * t130 * t194 - 0.4e1 / 0.9e1 * t193 * t36 * t198 * t93 - t273 * t201 / 0.9e1 + 0.2e1 / 0.3e1 * t89 * t198 - 0.2e1 * t276 * t445 + 0.4e1 / 0.27e2 * t453 * t132 * t206 + 0.4e1 / 0.9e1 * t205 * t36 * t198 * t96 - t279 * t209 / 0.9e1 - 0.2e1 / 0.3e1 * t95 * t198 + 0.2e1 * t282 * t445);
  t640 = t223 * t309;
  t642 = t311 * t124;
  t643 = t106 * t642;
  t645 = t106 * t316;
  t659 = 0.5e1 / 0.27e2 * t533;
  t660 = 0.5e1 / 0.72e2 * t535;
  t675 = (0.4e1 * t62 * t227 * t288 * t102 - 0.6e1 * t62 * t487 * t138 * t228 - t62 * t108 * t628 + 0.2e1 * t62 * t297 * t215 + 0.2e1 * t482 - t484 + t567 - t569) * t112 + 0.2e1 * t303 * t122 * t124 + t143 * t253 * t124 - t143 * t257 * t260 - 0.2e1 * t640 + 0.2e1 * t643 - 0.2e1 * t645 + 0.2e1 * t515 * t307 * t228 - 0.2e1 * t240 * t642 * t102 + 0.2e1 * t240 * t315 * t102 * t122 - t240 * t307 * t215 + t62 * t63 * (-t531 + t659 + t660) * t124 - 0.2e1 * t64 * t311 * t260 * t122 + 0.2e1 * t64 * t145 * t548 * t257 - t64 * t315 * t253;
  t680 = 0.2e1 * t266 * t127;
  t684 = 0.2e1 * t152 * t149;
  t686 = 0.2e1 * t154 * t318;
  t688 = 0.2e1 * t288 * t65;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[1] = 0.2e1 * t105 * t128 * t318 + t105 * t221 * t149 + t105 * t264 * t149 + t105 * t65 * t675 + t9 * t628 * t65 + 0.2e1 * t103 * t294 + 0.2e1 * t103 * t319 + 0.2e1 * t289 * t128 + t139 * t221 + t139 * t264 + t216 * t150 + t375 + 0.2e1 * t377 + t379 + t381 + t560 + t680 + t684 + t686 + t688;

  t699 = t343 * t65;
  t702 = t424 * t324;
  t710 = t185 * t340;
  t725 = -0.2e1 * t198 - 0.6e1 * t446;
  t742 = t393 - t396 + t402 + t420 - 0.6e1 * t422 - 0.12e2 * t584 - t587 - t589 - 0.12e2 * t702 - 0.12e2 * t35 * t99 * t324 - 0.24e2 * t188 * t135 * t285 - 0.6e1 * t710 - 0.12e2 * t188 * t340 * t99 - 0.6e1 * t88 * (0.4e1 / 0.27e2 * t437 * t327 * t93 - 0.4e1 / 0.9e1 * t273 * t199 - t193 * t331 * t93 / 0.9e1 + t89 * t725 / 0.3e1 + 0.4e1 / 0.27e2 * t453 * t334 * t96 + 0.4e1 / 0.9e1 * t279 * t199 - t205 * t337 * t96 / 0.9e1 - t95 * t725 / 0.3e1);
  t746 = t266 * t149;
  t754 = t154 * t348;
  t761 = t154 * t372;
  t765 = t481 * t352;
  t774 = t223 * t343;
  t791 = t223 * t362;
  t803 = t364 * t124;
  t804 = t106 * t803;
  t811 = t364 * t260;
  t814 = t368 * t260;
  t815 = t106 * t814;
  t825 = -t240 * t642 * t138 + t240 * t315 * t138 * t122 - t240 * t307 * t288 + t804 - t240 * t803 * t102 + t62 * t63 * (-t531 - t659 + t660) * t124 - t64 * t811 * t122 - t815 + t240 * t814 * t102 - 0.2e1 * t64 * t315 * t311 + 0.2e1 * t64 * t368 * t548 * t122;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[2] = t688 + t680 + t684 + t560 + t686 + t699 + t9 * t742 * t65 + t344 * t128 + 0.2e1 * t746 + 0.2e1 * t289 * t150 + 0.2e1 * t139 * t294 + 0.2e1 * t139 * t319 + t754 + t103 * t349 + t105 * t128 * t348 + 0.2e1 * t105 * t150 * t318 + t761 + t103 * t373 + t105 * t128 * t372 + t105 * t65 * ((0.2e1 * t62 * t227 * t343 * t102 - 0.6e1 * t62 * t487 * t352 * t102 - t62 * t108 * t742 + 0.4e1 * t62 * t297 * t288 + t567 - t569 + 0.2e1 * t765 - t774) * t112 + t358 * t122 * t124 + t303 * t145 * t124 + t143 * t311 * t124 - t360 * t260 * t122 - t640 + t643 - t645 - t791 + 0.2e1 * t515 * t307 * t565 + t825);

  t848 = -0.6e1 * t198 - 0.6e1 * t446;
  t862 = t393 - t396 + t402 + t420 - 0.18e2 * t584 - 0.36e2 * t702 - 0.18e2 * t710 - 0.12e2 * t35 * t324 * t135 - 0.36e2 * t188 * t135 * t340 - 0.6e1 * t88 * (0.4e1 / 0.27e2 * t437 * t327 * t130 - t273 * t331 / 0.3e1 + t89 * t848 / 0.3e1 + 0.4e1 / 0.27e2 * t453 * t334 * t132 - t279 * t337 / 0.3e1 - t95 * t848 / 0.3e1);
  t923 = (-0.6e1 * t62 * t487 * t352 * t138 - t62 * t108 * t862 + 0.6e1 * t62 * t297 * t343 + 0.6e1 * t765 - 0.3e1 * t774) * t112 + 0.2e1 * t358 * t145 * t124 + t143 * t364 * t124 - t143 * t368 * t260 - 0.2e1 * t791 + 0.2e1 * t804 - 0.2e1 * t815 + 0.2e1 * t515 * t307 * t352 - 0.2e1 * t240 * t803 * t138 + 0.2e1 * t240 * t814 * t138 - t240 * t307 * t343 + t62 * t63 * (-t531 - t534 - t536) * t124 - 0.3e1 * t64 * t811 * t145 + 0.2e1 * t62 * t63 * t368 * t145 * t548;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[3] = t105 * t65 * t348 * t149 + 0.3e1 * t105 * t150 * t372 + t105 * t65 * t923 + t9 * t862 * t65 + 0.3e1 * t139 * t349 + 0.3e1 * t139 * t373 + 0.3e1 * t344 * t150 + 0.3e1 * t699 + 0.6e1 * t746 + 0.3e1 * t754 + 0.3e1 * t761;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho2sigma[0] = 0.0e0;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho2sigma[1] = 0.0e0;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho2sigma[2] = 0.0e0;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho2sigma[3] = 0.0e0;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho2sigma[4] = 0.0e0;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho2sigma[5] = 0.0e0;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho2sigma[6] = 0.0e0;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho2sigma[7] = 0.0e0;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho2sigma[8] = 0.0e0;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rhosigma2[0] = 0.0e0;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rhosigma2[1] = 0.0e0;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rhosigma2[2] = 0.0e0;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rhosigma2[3] = 0.0e0;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rhosigma2[4] = 0.0e0;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rhosigma2[5] = 0.0e0;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rhosigma2[6] = 0.0e0;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rhosigma2[7] = 0.0e0;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rhosigma2[8] = 0.0e0;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rhosigma2[9] = 0.0e0;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rhosigma2[10] = 0.0e0;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rhosigma2[11] = 0.0e0;

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3sigma3[0] = 0.0e0;

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
    v3sigma3[9] = 0.0e0;

#ifndef XC_DONT_COMPILE_LXC

  if(order < 4) return;


#endif

#endif

#endif

#endif


}

