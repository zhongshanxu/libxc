/* 
  This file was generated automatically with ./scripts/maple2c_new.pl.
  Do not edit this file directly as it can be overwritten!!

  This Source Code Form is subject to the terms of the Mozilla Public
  License, v. 2.0. If a copy of the MPL was not distributed with this
  file, You can obtain one at http://mozilla.org/MPL/2.0/.

  Maple version     : Maple 2016 (X86 64 LINUX)
  Maple source      : ./maple/gga_c_op_xalpha.mpl
  Type of functional: gga_exc
*/

#define maple2c_order 3

static inline void
func_unpol(const xc_func_type *p, int order, const double *rho, const double *sigma, double *zk, double *vrho, double *vsigma, double *v2rho2, double *v2rhosigma, double *v2sigma2, double *v3rho3, double *v3rho2sigma, double *v3rhosigma2, double *v3sigma3)
{
  double t1, t2, t3, t4, t5, t6, t7, t8;
  double t9, t10, t11, t14, t15, t17, t18, t23;
  double t24, t25, t26, t27, t31, t32, t33, t37;
  double t38, t41, t42, t43, t44, t51, t52, t58;
  double t63, t67, t68, t69, t72, t80, t81, t104;


  t1 = M_CBRT3;
  t2 = 0.1e1 / M_PI;
  t3 = POW_1_3(t2);
  t4 = t1 * t3;
  t5 = M_CBRT4;
  t6 = t5 * t5;
  t7 = M_CBRT2;
  t8 = t7 * t7;
  t9 = t6 * t8;
  t10 = POW_1_3(rho[0]);
  t11 = t9 * t10;
  t14 = 0.73181241750000000000e0 * t4 * t11 + 0.5764e0;
  t15 = rho[0] * t14;
  t17 = t1 * t3 * t2;
  t18 = t10 * rho[0];
  t23 = t1 * t1;
  t24 = t3 * t3;
  t25 = t23 * t24;
  t26 = t5 * t7;
  t27 = t10 * t10;
  t31 = 0.10278427539831301505e2 * t17 * t9 * t18 + 0.76750907787993934120e1 * rho[0] + 0.58916827125787500000e0 * t25 * t26 * t27;
  t32 = 0.1e1 / t31;
  t33 = t15 * t32;
  if(zk != NULL && (p->info->flags & XC_FLAGS_HAVE_EXC))
    *zk = -0.25000000000000000000e0 * t33;

#ifndef XC_DONT_COMPILE_VXC

  if(order < 1) return;


  t37 = t18 * t1 * t3;
  t38 = t9 * t32;
  t41 = rho[0] * rho[0];
  t42 = t41 * t14;
  t43 = t31 * t31;
  t44 = 0.1e1 / t43;
  t51 = 0.13704570053108402007e2 * t17 * t11 + 0.76750907787993934120e1 + 0.39277884750525000000e0 * t25 * t26 / t10;
  t52 = t44 * t51;
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vrho[0] = -0.50000000000000000000e0 * t33 - 0.60984368125000000000e-1 * t37 * t38 + 0.25000000000000000000e0 * t42 * t52;

  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vsigma[0] = 0.0e0;

#ifndef XC_DONT_COMPILE_FXC

  if(order < 2) return;


  t58 = t10 * t1 * t3;
  t63 = t9 * t52;
  t67 = 0.1e1 / t43 / t31;
  t68 = t51 * t51;
  t69 = t67 * t68;
  t72 = 0.1e1 / t27;
  t80 = 0.45681900177028006690e1 * t17 * t9 * t72 - 0.13092628250175000000e0 * t25 * t26 / t18;
  t81 = t44 * t80;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[0] = -0.50000000000000000000e0 * t14 * t32 - 0.20328122708333333333e0 * t58 * t38 + 0.10000000000000000000e1 * t15 * t52 + 0.12196873625000000000e0 * t37 * t63 - 0.50000000000000000000e0 * t42 * t69 + 0.25000000000000000000e0 * t42 * t81;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rhosigma[0] = 0.0e0;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigma2[0] = 0.0e0;

#ifndef XC_DONT_COMPILE_KXC

  if(order < 3) return;


  t104 = t43 * t43;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[0] = -0.18972914527777777778e0 * t4 * t6 * t8 * t72 * t32 + 0.15000000000000000000e1 * t14 * t44 * t51 + 0.60984368125000000000e0 * t58 * t63 - 0.30000000000000000000e1 * t15 * t69 + 0.15000000000000000000e1 * t15 * t81 - 0.36590620875000000000e0 * t37 * t9 * t69 + 0.18295310437500000000e0 * t37 * t9 * t81 + 0.15000000000000000000e1 * t42 / t104 * t68 * t51 - 0.15000000000000000000e1 * t42 * t67 * t51 * t80 + 0.25000000000000000000e0 * t42 * t44 * (-0.30454600118018671127e1 * t17 * t9 / t27 / rho[0] + 0.17456837666900000000e0 * t25 * t26 / t10 / t41);

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


  if(zk != NULL && (p->info->flags & XC_FLAGS_HAVE_EXC))
    *zk = -0.0e0;

#ifndef XC_DONT_COMPILE_VXC

  if(order < 1) return;


  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vrho[0] = 0.0e0;

  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vsigma[0] = 0.0e0;

#ifndef XC_DONT_COMPILE_FXC

  if(order < 2) return;


  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[0] = 0.0e0;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rhosigma[0] = 0.0e0;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigma2[0] = 0.0e0;

#ifndef XC_DONT_COMPILE_KXC

  if(order < 3) return;


  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[0] = 0.0e0;

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
  double t1, t2, t3, t4, t5, t7, t8, t9;
  double t10, t12, t14, t15, t16, t17, t18, t19;
  double t20, t21, t22, t26, t27, t28, t33, t36;
  double t37, t38, t39, t41, t42, t44, t46, t47;
  double t48, t49, t51, t52, t53, t54, t55, t57;
  double t58, t61, t62, t65, t66, t68, t73, t76;
  double t80, t82, t85, t86, t87, t89, t90, t92;
  double t96, t97, t101, t102, t105, t107, t112, t116;
  double t118, t121, t123, t127, t128, t131, t132, t134;
  double t136, t137, t139, t141, t142, t143, t144, t145;
  double t147, t148, t149, t156, t158, t161, t165, t166;
  double t171, t173, t174, t175, t179, t183, t184, t190;
  double t194, t196, t199, t200, t201, t205, t206, t207;
  double t208, t212, t225, t226, t232, t233, t235, t236;
  double t243, t247, t248, t249, t259, t261, t264, t265;
  double t268, t272, t275, t276, t277, t280, t283, t287;
  double t293, t294, t300, t301, t308, t310, t313, t318;
  double t320, t324, t330, t334, t336, t339, t342, t343;
  double t346, t348, t350, t352, t358, t359, t362, t363;
  double t364, t373, t378, t380, t388, t397, t399, t401;
  double t402, t411, t426, t432, t456, t464, t466, t467;
  double t469, t472, t475, t477, t478, t479, t481, t482;
  double t486, t492, t494, t495, t497, t503, t507, t511;
  double t522, t530, t536, t561, t580, t589, t591, t593;
  double t602, t608, t610, t612, t622, t628, t635, t647;
  double t648, t649, t654, t657, t665, t672, t692, t701;
  double t703, t704, t708, t711, t723, t743, t768, t770;
  double t772, t774, t775, t777, t779, t794, t827, t847;
  double t849, t854, t860, t879, t890, t920, t940, t945;
  double t968, t1005;


  t1 = rho[0] - rho[1];
  t2 = t1 * t1;
  t3 = rho[0] + rho[1];
  t4 = t3 * t3;
  t5 = 0.1e1 / t4;
  t7 = -t2 * t5 + 0.1e1;
  t8 = t7 * t3;
  t9 = M_CBRT3;
  t10 = t9 * t9;
  t12 = POW_1_3(0.1e1 / M_PI);
  t14 = t10 / t12;
  t15 = M_CBRT4;
  t16 = M_CBRT2;
  t17 = t15 * t16;
  t18 = 0.1e1 / t3;
  t19 = t1 * t18;
  t20 = 0.1e1 + t19;
  t21 = t20 * t3;
  t22 = POW_1_3(t21);
  t26 = 0.1e1 - t19;
  t27 = t26 * t3;
  t28 = POW_1_3(t27);
  t33 = t14 * t17 / t22 / 0.9e1 + t14 * t17 / t28 / 0.9e1;
  t36 = 0.390299956e1 / t33 + 0.5764e0;
  t37 = t33 * t33;
  t38 = t37 * t37;
  t39 = 0.1e1 / t38;
  t41 = t37 * t33;
  t42 = 0.1e1 / t41;
  t44 = 0.1e1 / t37;
  t46 = 0.433132090567376656e2 * t39 + 0.190514637481962976e2 * t42 + 0.2094820520028e1 * t44;
  t47 = 0.1e1 / t46;
  t48 = t36 * t47;
  t49 = t8 * t48;
  if(zk != NULL && (p->info->flags & XC_FLAGS_HAVE_EXC))
    *zk = -0.25000000000000000000e0 * t49;

#ifndef XC_DONT_COMPILE_VXC

  if(order < 1) return;


  t51 = 0.50000000000000000000e0 * t49;
  t52 = t1 * t5;
  t53 = t4 * t3;
  t54 = 0.1e1 / t53;
  t55 = t2 * t54;
  t57 = -0.2e1 * t52 + 0.2e1 * t55;
  t58 = t4 * t57;
  t61 = t4 * t7;
  t62 = t14 * t15;
  t65 = t16 / t22 / t21;
  t66 = t18 - t52;
  t68 = t66 * t3 + t19 + 0.1e1;
  t73 = t16 / t28 / t27;
  t76 = -t66 * t3 - t19 + 0.1e1;
  t80 = -t62 * t65 * t68 / 0.27e2 - t62 * t73 * t76 / 0.27e2;
  t82 = t44 * t80 * t47;
  t85 = t46 * t46;
  t86 = 0.1e1 / t85;
  t87 = t36 * t86;
  t89 = 0.1e1 / t38 / t33;
  t90 = t89 * t80;
  t92 = t39 * t80;
  t96 = -0.1732528362269506624e3 * t90 - 0.571543912445888928e2 * t92 - 0.4189641040056e1 * t42 * t80;
  t97 = t87 * t96;
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vrho[0] = -t51 - 0.25000000000000000000e0 * t58 * t48 + 0.97574989000000000000e0 * t61 * t82 + 0.25000000000000000000e0 * t61 * t97;

  t101 = 0.2e1 * t52 + 0.2e1 * t55;
  t102 = t4 * t101;
  t105 = -t18 - t52;
  t107 = t105 * t3 + t19 + 0.1e1;
  t112 = -t105 * t3 - t19 + 0.1e1;
  t116 = -t62 * t65 * t107 / 0.27e2 - t62 * t73 * t112 / 0.27e2;
  t118 = t44 * t116 * t47;
  t121 = t89 * t116;
  t123 = t39 * t116;
  t127 = -0.1732528362269506624e3 * t121 - 0.571543912445888928e2 * t123 - 0.4189641040056e1 * t42 * t116;
  t128 = t87 * t127;
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vrho[1] = -t51 - 0.25000000000000000000e0 * t102 * t48 + 0.97574989000000000000e0 * t61 * t118 + 0.25000000000000000000e0 * t61 * t128;

  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vsigma[0] = 0.0e0;

  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vsigma[1] = 0.0e0;

  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vsigma[2] = 0.0e0;

#ifndef XC_DONT_COMPILE_FXC

  if(order < 2) return;


  t131 = t57 * t3;
  t132 = t131 * t48;
  t134 = t7 * t36;
  t136 = 0.50000000000000000000e0 * t134 * t47;
  t137 = t8 * t82;
  t139 = t8 * t97;
  t141 = 0.2e1 * t5;
  t142 = t1 * t54;
  t143 = 0.8e1 * t142;
  t144 = t4 * t4;
  t145 = 0.1e1 / t144;
  t147 = 0.6e1 * t2 * t145;
  t148 = -t141 + t143 - t147;
  t149 = t4 * t148;
  t156 = t80 * t80;
  t158 = t42 * t156 * t47;
  t161 = t20 * t20;
  t165 = t16 / t22 / t161 / t4;
  t166 = t68 * t68;
  t171 = -0.2e1 * t5 + 0.2e1 * t142;
  t173 = 0.2e1 * t18;
  t174 = 0.2e1 * t52;
  t175 = t171 * t3 + t173 - t174;
  t179 = t26 * t26;
  t183 = t16 / t28 / t179 / t4;
  t184 = t76 * t76;
  t190 = -t171 * t3 - t173 + t174;
  t194 = 0.4e1 / 0.81e2 * t62 * t165 * t166 - t62 * t65 * t175 / 0.27e2 + 0.4e1 / 0.81e2 * t62 * t183 * t184 - t62 * t73 * t190 / 0.27e2;
  t196 = t44 * t194 * t47;
  t199 = t61 * t44;
  t200 = t80 * t86;
  t201 = t200 * t96;
  t205 = 0.1e1 / t85 / t46;
  t206 = t36 * t205;
  t207 = t96 * t96;
  t208 = t206 * t207;
  t212 = 0.1e1 / t38 / t37;
  t225 = 0.8662641811347533120e3 * t212 * t156 - 0.1732528362269506624e3 * t89 * t194 + 0.2286175649783555712e3 * t89 * t156 - 0.571543912445888928e2 * t39 * t194 + 0.12568923120168e2 * t39 * t156 - 0.4189641040056e1 * t42 * t194;
  t226 = t87 * t225;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[0] = -0.10000000000000000000e1 * t132 - t136 + 0.39029995600000000000e1 * t137 + 0.10000000000000000000e1 * t139 - 0.25000000000000000000e0 * t149 * t48 + 0.19514997800000000000e1 * t58 * t82 + 0.50000000000000000000e0 * t58 * t97 - 0.19514997800000000000e1 * t61 * t158 + 0.97574989000000000000e0 * t61 * t196 - 0.19514997800000000000e1 * t199 * t201 - 0.50000000000000000000e0 * t61 * t208 + 0.25000000000000000000e0 * t61 * t226;

  t232 = t3 * t101;
  t233 = t232 * t48;
  t235 = t141 - t147;
  t236 = t4 * t235;
  t243 = t8 * t118;
  t247 = t61 * t42;
  t248 = t116 * t47;
  t249 = t248 * t80;
  t259 = 0.4e1 / 0.81e2 * t62 * t165 * t107 * t68 + 0.4e1 / 0.81e2 * t62 * t183 * t112 * t76;
  t261 = t44 * t259 * t47;
  t264 = t116 * t86;
  t265 = t264 * t96;
  t268 = t8 * t128;
  t272 = t200 * t127;
  t275 = t61 * t36;
  t276 = t205 * t127;
  t277 = t276 * t96;
  t280 = t212 * t116;
  t283 = t89 * t259;
  t287 = t39 * t259;
  t293 = 0.8662641811347533120e3 * t280 * t80 - 0.1732528362269506624e3 * t283 + 0.2286175649783555712e3 * t121 * t80 - 0.571543912445888928e2 * t287 + 0.12568923120168e2 * t123 * t80 - 0.4189641040056e1 * t42 * t259;
  t294 = t87 * t293;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[1] = -0.50000000000000000000e0 * t132 - t136 + 0.19514997800000000000e1 * t137 + 0.50000000000000000000e0 * t139 - 0.50000000000000000000e0 * t233 - 0.25000000000000000000e0 * t236 * t48 + 0.97574989000000000000e0 * t102 * t82 + 0.25000000000000000000e0 * t102 * t97 + 0.19514997800000000000e1 * t243 + 0.97574989000000000000e0 * t58 * t118 - 0.19514997800000000000e1 * t247 * t249 + 0.97574989000000000000e0 * t61 * t261 - 0.97574989000000000000e0 * t199 * t265 + 0.50000000000000000000e0 * t268 + 0.25000000000000000000e0 * t58 * t128 - 0.97574989000000000000e0 * t199 * t272 - 0.50000000000000000000e0 * t275 * t277 + 0.25000000000000000000e0 * t61 * t294;

  t300 = -t141 - t143 - t147;
  t301 = t4 * t300;
  t308 = t116 * t116;
  t310 = t42 * t308 * t47;
  t313 = t107 * t107;
  t318 = 0.2e1 * t5 + 0.2e1 * t142;
  t320 = t318 * t3 - t173 - t174;
  t324 = t112 * t112;
  t330 = -t318 * t3 + t173 + t174;
  t334 = 0.4e1 / 0.81e2 * t62 * t165 * t313 - t62 * t65 * t320 / 0.27e2 + 0.4e1 / 0.81e2 * t62 * t183 * t324 - t62 * t73 * t330 / 0.27e2;
  t336 = t44 * t334 * t47;
  t339 = t264 * t127;
  t342 = t127 * t127;
  t343 = t206 * t342;
  t346 = t212 * t308;
  t348 = t89 * t334;
  t350 = t89 * t308;
  t352 = t39 * t334;
  t358 = 0.8662641811347533120e3 * t346 - 0.1732528362269506624e3 * t348 + 0.2286175649783555712e3 * t350 - 0.571543912445888928e2 * t352 + 0.12568923120168e2 * t39 * t308 - 0.4189641040056e1 * t42 * t334;
  t359 = t87 * t358;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[2] = -0.10000000000000000000e1 * t233 - t136 + 0.39029995600000000000e1 * t243 + 0.10000000000000000000e1 * t268 - 0.25000000000000000000e0 * t301 * t48 + 0.19514997800000000000e1 * t102 * t118 + 0.50000000000000000000e0 * t102 * t128 - 0.19514997800000000000e1 * t61 * t310 + 0.97574989000000000000e0 * t61 * t336 - 0.19514997800000000000e1 * t199 * t339 - 0.50000000000000000000e0 * t61 * t343 + 0.25000000000000000000e0 * t61 * t359;

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


  t362 = t85 * t85;
  t363 = 0.1e1 / t362;
  t364 = t36 * t363;
  t373 = t156 * t80;
  t378 = t8 * t158;
  t380 = t8 * t208;
  t388 = t16 / t22 / t161 / t20 / t53;
  t397 = t1 * t145;
  t399 = 0.6e1 * t54 - 0.6e1 * t397;
  t401 = 0.6e1 * t5;
  t402 = 0.6e1 * t142;
  t411 = t16 / t28 / t179 / t26 / t53;
  t426 = -0.28e2 / 0.243e3 * t62 * t388 * t166 * t68 + 0.4e1 / 0.27e2 * t62 * t165 * t68 * t175 - t62 * t65 * (t399 * t3 - t401 + t402) / 0.27e2 - 0.28e2 / 0.243e3 * t62 * t411 * t184 * t76 + 0.4e1 / 0.27e2 * t62 * t183 * t76 * t190 - t62 * t73 * (-t399 * t3 + t401 - t402) / 0.27e2;
  t432 = 0.1e1 / t38 / t41;
  t456 = t8 * t226;
  t464 = t131 * t97;
  t466 = 0.15000000000000000000e1 * t61 * t364 * t207 * t96 - 0.58544993400000000000e1 * t58 * t158 - 0.15000000000000000000e1 * t58 * t208 + 0.58544993400000000000e1 * t61 * t39 * t373 * t47 - 0.11708998680000000000e2 * t378 - 0.30000000000000000000e1 * t380 + 0.75000000000000000000e0 * t58 * t226 + 0.97574989000000000000e0 * t61 * t44 * t426 * t47 + 0.25000000000000000000e0 * t61 * t87 * (-0.51975850868085198720e4 * t432 * t373 + 0.25987925434042599360e4 * t212 * t80 * t194 - 0.1732528362269506624e3 * t89 * t426 - 0.11430878248917778560e4 * t212 * t373 + 0.6858526949350667136e3 * t90 * t194 - 0.571543912445888928e2 * t39 * t426 - 0.50275692480672e2 * t89 * t373 + 0.37706769360504e2 * t92 * t194 - 0.4189641040056e1 * t42 * t426) + 0.15000000000000000000e1 * t456 + 0.75000000000000000000e0 * t149 * t97 + 0.29272496700000000000e1 * t149 * t82 + 0.29272496700000000000e1 * t58 * t196 + 0.30000000000000000000e1 * t464;
  t467 = t131 * t82;
  t469 = t8 * t196;
  t472 = t148 * t3 * t48;
  t475 = t134 * t86 * t96;
  t477 = t7 * t44;
  t478 = t80 * t47;
  t479 = t477 * t478;
  t481 = 0.12e2 * t54;
  t482 = 0.36e2 * t397;
  t486 = 0.24e2 * t2 / t144 / t3;
  t492 = t57 * t36 * t47;
  t494 = t8 * t44;
  t495 = t494 * t201;
  t497 = t58 * t44;
  t503 = t80 * t205;
  t507 = t156 * t86;
  t511 = t194 * t86;
  t522 = 0.11708998680000000000e2 * t467 + 0.58544993400000000000e1 * t469 - 0.15000000000000000000e1 * t472 + 0.15000000000000000000e1 * t475 + 0.58544993400000000000e1 * t479 - 0.25000000000000000000e0 * t4 * (t481 - t482 + t486) * t48 - 0.15000000000000000000e1 * t492 - 0.11708998680000000000e2 * t495 - 0.58544993400000000000e1 * t497 * t201 - 0.58544993400000000000e1 * t247 * t478 * t194 + 0.58544993400000000000e1 * t199 * t503 * t207 + 0.58544993400000000000e1 * t247 * t507 * t96 - 0.29272496700000000000e1 * t199 * t511 * t96 - 0.29272496700000000000e1 * t199 * t200 * t225 - 0.15000000000000000000e1 * t275 * t205 * t96 * t225;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[0] = t466 + t522;

  t530 = 0.39029995600000000000e1 * t494 * t265;
  t536 = 0.78059991200000000000e1 * t8 * t42 * t249;
  t561 = -0.28e2 / 0.243e3 * t62 * t388 * t107 * t166 + 0.4e1 / 0.81e2 * t62 * t165 * t107 * t175 - 0.28e2 / 0.243e3 * t62 * t411 * t112 * t184 + 0.4e1 / 0.81e2 * t62 * t183 * t112 * t190;
  t580 = -0.51975850868085198720e4 * t432 * t116 * t156 + 0.17325283622695066240e4 * t212 * t259 * t80 + 0.8662641811347533120e3 * t280 * t194 - 0.1732528362269506624e3 * t89 * t561 - 0.11430878248917778560e4 * t280 * t156 + 0.4572351299567111424e3 * t283 * t80 + 0.2286175649783555712e3 * t121 * t194 - 0.571543912445888928e2 * t39 * t561 - 0.50275692480672e2 * t121 * t156 + 0.25137846240336e2 * t287 * t80 + 0.12568923120168e2 * t123 * t194 - 0.4189641040056e1 * t42 * t561;
  t589 = 0.10000000000000000000e1 * t131 * t128;
  t591 = 0.10000000000000000000e1 * t8 * t294;
  t593 = 0.39029995600000000000e1 * t8 * t261;
  t602 = -0.19514997800000000000e1 * t497 * t265 - 0.39029995600000000000e1 * t247 * t259 * t47 * t80 - t530 - 0.39029995600000000000e1 * t58 * t42 * t249 - t536 + 0.25000000000000000000e0 * t61 * t87 * t580 + 0.25000000000000000000e0 * t149 * t128 + 0.50000000000000000000e0 * t58 * t294 + t589 + t591 + t593 + 0.97574989000000000000e0 * t149 * t118 + 0.19514997800000000000e1 * t58 * t261 + 0.97574989000000000000e0 * t61 * t44 * t561 * t47;
  t608 = 0.39029995600000000000e1 * t131 * t118;
  t610 = 0.10000000000000000000e1 * t232 * t97;
  t612 = 0.39029995600000000000e1 * t232 * t82;
  t622 = t101 * t36 * t47;
  t628 = 0.97574989000000000000e0 * t102 * t196 + 0.25000000000000000000e0 * t102 * t226 + t608 + t610 + t612 + 0.50000000000000000000e0 * t236 * t97 + 0.19514997800000000000e1 * t236 * t82 - 0.19514997800000000000e1 * t102 * t158 - 0.50000000000000000000e0 * t102 * t208 - 0.50000000000000000000e0 * t622 - 0.39029995600000000000e1 * t378 - 0.10000000000000000000e1 * t380 + 0.50000000000000000000e0 * t456 + 0.10000000000000000000e1 * t464;
  t635 = t116 * t205;
  t647 = 0.10000000000000000000e1 * t3 * t235 * t48;
  t648 = 0.4e1 * t54;
  t649 = 0.12e2 * t397;
  t654 = t477 * t248;
  t657 = t134 * t86 * t127;
  t665 = 0.39029995600000000000e1 * t467 + 0.19514997800000000000e1 * t469 - 0.10000000000000000000e1 * t58 * t36 * t277 + 0.19514997800000000000e1 * t199 * t635 * t207 + 0.19514997800000000000e1 * t247 * t507 * t127 - 0.50000000000000000000e0 * t472 + 0.10000000000000000000e1 * t475 + 0.39029995600000000000e1 * t479 - t647 - 0.25000000000000000000e0 * t4 * (-t648 - t649 + t486) * t48 + 0.19514997800000000000e1 * t654 + 0.50000000000000000000e0 * t657 + 0.15000000000000000000e1 * t275 * t363 * t127 * t207 - 0.19514997800000000000e1 * t497 * t272;
  t672 = t127 * t96;
  t692 = t259 * t86;
  t701 = 0.20000000000000000000e1 * t8 * t36 * t277;
  t703 = 0.39029995600000000000e1 * t494 * t272;
  t704 = t61 * t39;
  t708 = t102 * t44;
  t711 = -0.97574989000000000000e0 * t199 * t511 * t127 - 0.19514997800000000000e1 * t199 * t200 * t293 + 0.39029995600000000000e1 * t199 * t503 * t672 - 0.10000000000000000000e1 * t492 + 0.39029995600000000000e1 * t247 * t264 * t80 * t96 - 0.10000000000000000000e1 * t275 * t205 * t293 * t96 - 0.50000000000000000000e0 * t275 * t276 * t225 - 0.39029995600000000000e1 * t495 - 0.19514997800000000000e1 * t247 * t248 * t194 - 0.19514997800000000000e1 * t199 * t692 * t96 - 0.97574989000000000000e0 * t199 * t264 * t225 - t701 - t703 + 0.58544993400000000000e1 * t704 * t248 * t156 - 0.19514997800000000000e1 * t708 * t201;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[1] = t602 + t628 + t665 + t711;

  t723 = -0.2e1 * t54 - 0.6e1 * t397;
  t743 = -0.28e2 / 0.243e3 * t62 * t388 * t313 * t68 + 0.4e1 / 0.81e2 * t62 * t165 * t320 * t68 - t62 * t65 * (t723 * t3 + t141 + t402) / 0.27e2 - 0.28e2 / 0.243e3 * t62 * t411 * t324 * t76 + 0.4e1 / 0.81e2 * t62 * t183 * t330 * t76 - t62 * t73 * (-t723 * t3 - t141 - t402) / 0.27e2;
  t768 = t8 * t343;
  t770 = t8 * t336;
  t772 = t8 * t310;
  t774 = 0.97574989000000000000e0 * t61 * t44 * t743 * t47 - 0.50000000000000000000e0 * t58 * t343 + 0.25000000000000000000e0 * t58 * t359 + 0.50000000000000000000e0 * t102 * t294 - 0.19514997800000000000e1 * t58 * t310 + 0.97574989000000000000e0 * t58 * t336 + 0.25000000000000000000e0 * t301 * t97 + 0.97574989000000000000e0 * t301 * t82 + 0.19514997800000000000e1 * t236 * t118 + 0.19514997800000000000e1 * t102 * t261 + 0.50000000000000000000e0 * t236 * t128 - 0.10000000000000000000e1 * t768 + 0.19514997800000000000e1 * t770 - 0.39029995600000000000e1 * t772;
  t775 = t232 * t128;
  t777 = t232 * t118;
  t779 = t8 * t359;
  t794 = 0.10000000000000000000e1 * t775 + 0.39029995600000000000e1 * t777 + 0.50000000000000000000e0 * t779 + 0.39029995600000000000e1 * t199 * t635 * t672 + 0.39029995600000000000e1 * t247 * t264 * t127 * t80 - 0.10000000000000000000e1 * t275 * t276 * t293 + 0.19514997800000000000e1 * t199 * t503 * t342 - t530 - t536 + t589 + t591 + t593 + t608 + t610;
  t827 = -0.51975850868085198720e4 * t432 * t308 * t80 + 0.17325283622695066240e4 * t280 * t259 + 0.8662641811347533120e3 * t212 * t334 * t80 - 0.1732528362269506624e3 * t89 * t743 - 0.11430878248917778560e4 * t346 * t80 + 0.4572351299567111424e3 * t121 * t259 + 0.2286175649783555712e3 * t348 * t80 - 0.571543912445888928e2 * t39 * t743 - 0.50275692480672e2 * t350 * t80 + 0.25137846240336e2 * t123 * t259 + 0.12568923120168e2 * t352 * t80 - 0.4189641040056e1 * t42 * t743;
  t847 = t3 * t300 * t48;
  t849 = t612 - 0.10000000000000000000e1 * t622 + 0.15000000000000000000e1 * t275 * t363 * t342 * t96 + 0.25000000000000000000e0 * t61 * t87 * t827 - 0.19514997800000000000e1 * t708 * t265 - 0.10000000000000000000e1 * t102 * t36 * t277 - 0.19514997800000000000e1 * t708 * t272 + 0.50000000000000000000e0 * t475 + 0.19514997800000000000e1 * t479 - t647 + 0.39029995600000000000e1 * t654 + 0.10000000000000000000e1 * t657 - 0.25000000000000000000e0 * t4 * (-t648 + t649 + t486) * t48 - 0.50000000000000000000e0 * t847;
  t854 = t494 * t339;
  t860 = t334 * t86;
  t879 = t308 * t86;
  t890 = -0.50000000000000000000e0 * t275 * t205 * t358 * t96 - 0.39029995600000000000e1 * t854 - 0.19514997800000000000e1 * t247 * t334 * t47 * t80 - 0.97574989000000000000e0 * t199 * t860 * t96 - 0.19514997800000000000e1 * t497 * t339 - 0.19514997800000000000e1 * t199 * t692 * t127 - 0.19514997800000000000e1 * t199 * t264 * t293 + 0.58544993400000000000e1 * t704 * t308 * t47 * t80 - 0.39029995600000000000e1 * t247 * t248 * t259 + 0.19514997800000000000e1 * t247 * t879 * t96 - 0.97574989000000000000e0 * t199 * t200 * t358 - 0.39029995600000000000e1 * t102 * t42 * t249 - 0.50000000000000000000e0 * t492 - t701 - t703;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[2] = t774 + t794 + t849 + t890;

  t920 = -0.6e1 * t54 - 0.6e1 * t397;
  t940 = -0.28e2 / 0.243e3 * t62 * t388 * t313 * t107 + 0.4e1 / 0.27e2 * t62 * t165 * t107 * t320 - t62 * t65 * (t920 * t3 + t401 + t402) / 0.27e2 - 0.28e2 / 0.243e3 * t62 * t411 * t324 * t112 + 0.4e1 / 0.27e2 * t62 * t183 * t112 * t330 - t62 * t73 * (-t920 * t3 - t401 - t402) / 0.27e2;
  t945 = t308 * t116;
  t968 = -0.30000000000000000000e1 * t768 + 0.58544993400000000000e1 * t770 - 0.11708998680000000000e2 * t772 + 0.30000000000000000000e1 * t775 + 0.11708998680000000000e2 * t777 + 0.15000000000000000000e1 * t779 - 0.15000000000000000000e1 * t622 + 0.15000000000000000000e1 * t61 * t364 * t342 * t127 + 0.75000000000000000000e0 * t301 * t128 + 0.29272496700000000000e1 * t301 * t118 + 0.29272496700000000000e1 * t102 * t336 + 0.75000000000000000000e0 * t102 * t359 + 0.97574989000000000000e0 * t61 * t44 * t940 * t47 + 0.25000000000000000000e0 * t61 * t87 * (-0.51975850868085198720e4 * t432 * t945 + 0.25987925434042599360e4 * t280 * t334 - 0.1732528362269506624e3 * t89 * t940 - 0.11430878248917778560e4 * t212 * t945 + 0.6858526949350667136e3 * t121 * t334 - 0.571543912445888928e2 * t39 * t940 - 0.50275692480672e2 * t89 * t945 + 0.37706769360504e2 * t123 * t334 - 0.4189641040056e1 * t42 * t940);
  t1005 = -0.58544993400000000000e1 * t102 * t310 + 0.58544993400000000000e1 * t654 + 0.15000000000000000000e1 * t657 - 0.15000000000000000000e1 * t847 - 0.25000000000000000000e0 * t4 * (t481 + t482 + t486) * t48 - 0.11708998680000000000e2 * t854 - 0.58544993400000000000e1 * t708 * t339 + 0.58544993400000000000e1 * t199 * t635 * t342 - 0.58544993400000000000e1 * t247 * t248 * t334 + 0.58544993400000000000e1 * t247 * t879 * t127 - 0.29272496700000000000e1 * t199 * t860 * t127 - 0.29272496700000000000e1 * t199 * t264 * t358 - 0.15000000000000000000e1 * t275 * t276 * t358 - 0.15000000000000000000e1 * t102 * t343 + 0.58544993400000000000e1 * t61 * t39 * t945 * t47;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[3] = t968 + t1005;

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
