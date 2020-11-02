/* 
  This file was generated automatically with ./scripts/maple2c.pl.
  Do not edit this file directly as it can be overwritten!!

  This Source Code Form is subject to the terms of the Mozilla Public
  License, v. 2.0. If a copy of the MPL was not distributed with this
  file, You can obtain one at http://mozilla.org/MPL/2.0/.

  Maple version     : Maple 2016 (X86 64 LINUX)
  Maple source      : ./maple/mgga_exc/mgga_x_th.mpl
  Type of functional: mgga_exc
*/

#define maple2c_order 2
#define MAPLE2C_FLAGS (XC_FLAGS_I_HAVE_EXC | XC_FLAGS_I_HAVE_VXC | XC_FLAGS_I_HAVE_FXC)


static inline void
func_unpol(const xc_func_type *p, int order, const double *rho, const double *sigma, const double *lapl, const double *tau , double *zk MGGA_OUT_PARAMS_NO_EXC(XC_COMMA double *, ))
{

#ifndef XC_DONT_COMPILE_EXC
  double t4, t5, t6, t7, t8, t9, t11, t12;
  double t16, t19, t20, t21, t22, t23, t26;

#ifndef XC_DONT_COMPILE_VXC
  double t27, t31, t32, t33, t40, t43, t45, t48;
  double t54, t55, t57, t61;

#ifndef XC_DONT_COMPILE_FXC
  double t75, t80, t85, t90, t95, t101;
#endif

#endif

#endif



  t4 = rho[0] / 0.2e1 <= 0.101e1 * p->threshold_dens;
  t5 = M_CBRTPI;
  t6 = t5 * t5;
  t7 = rho[0] * rho[0];
  t8 = t6 * t7;
  t9 = 0.1e1 / tau[0];
  t11 = M_CBRT2;
  t12 = 0.1e1 / rho[0];
  t16 = 0.1e1 + 0.7e1 / 0.216e3 * sigma[0] * t12 * t9;
  t19 = POW_1_3(0.1e1 / M_PI);
  t20 = 0.1e1 / t19;
  t21 = M_CBRT4;
  t22 = t20 * t21;
  t23 = t11 * t16 * t22;
  t26 = my_piecewise3(t4, 0, -0.27e2 / 0.160e3 * t8 * t9 * t23);
  if(zk != NULL && (p->info->flags & XC_FLAGS_HAVE_EXC))
    zk[0] = 0.2e1 * t26;

#ifndef XC_DONT_COMPILE_VXC

  if(order < 1) return;


  t27 = t6 * rho[0];
  t31 = tau[0] * tau[0];
  t32 = 0.1e1 / t31;
  t33 = t6 * t32;
  t40 = my_piecewise3(t4, 0, -0.27e2 / 0.80e2 * t27 * t9 * t23 + 0.7e1 / 0.1280e4 * t33 * t11 * sigma[0] * t20 * t21);
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vrho[0] = 0.2e1 * rho[0] * t40 + 0.2e1 * t26;

  t43 = t27 * t32;
  t45 = t11 * t20 * t21;
  t48 = my_piecewise3(t4, 0, -0.7e1 / 0.1280e4 * t43 * t45);
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vsigma[0] = 0.2e1 * rho[0] * t48;

  if(vrho != NULL && (p->info->flags & XC_FLAGS_NEEDS_LAPLACIAN) && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vlapl[0] = 0.0e0;

  t54 = 0.1e1 / t31 / tau[0];
  t55 = t27 * t54;
  t57 = t11 * sigma[0] * t22;
  t61 = my_piecewise3(t4, 0, 0.27e2 / 0.160e3 * t8 * t32 * t23 + 0.7e1 / 0.1280e4 * t55 * t57);
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vtau[0] = 0.2e1 * rho[0] * t61;

#ifndef XC_DONT_COMPILE_FXC

  if(order < 2) return;


  t75 = my_piecewise3(t4, 0, -0.27e2 / 0.80e2 * t6 * t9 * t11 * t16 * t20 * t21 + 0.7e1 / 0.640e3 * t6 * t12 * t32 * t57);
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[0] = 0.2e1 * rho[0] * t75 + 0.4e1 * t40;

  t80 = my_piecewise3(t4, 0, -0.7e1 / 0.1280e4 * t33 * t45);
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rhosigma[0] = 0.2e1 * rho[0] * t80 + 0.2e1 * t48;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_NEEDS_LAPLACIAN) && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rholapl[0] = 0.0e0;

  t85 = my_piecewise3(t4, 0, 0.27e2 / 0.80e2 * t43 * t23);
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rhotau[0] = 0.2e1 * rho[0] * t85 + 0.2e1 * t61;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigma2[0] = 0.0e0;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_NEEDS_LAPLACIAN) && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigmalapl[0] = 0.0e0;

  t90 = my_piecewise3(t4, 0, 0.7e1 / 0.640e3 * t55 * t45);
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigmatau[0] = 0.2e1 * rho[0] * t90;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_NEEDS_LAPLACIAN) && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2lapl2[0] = 0.0e0;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_NEEDS_LAPLACIAN) && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2lapltau[0] = 0.0e0;

  t95 = t31 * t31;
  t101 = my_piecewise3(t4, 0, -0.27e2 / 0.80e2 * t8 * t54 * t23 - 0.7e1 / 0.320e3 * t27 / t95 * t57);
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2tau2[0] = 0.2e1 * rho[0] * t101;

#ifndef XC_DONT_COMPILE_KXC

  if(order < 3) return;


#endif

#endif

#endif


}


static inline void
func_pol(const xc_func_type *p, int order, const double *rho, const double *sigma, const double *lapl, const double *tau , double *zk MGGA_OUT_PARAMS_NO_EXC(XC_COMMA double *, ))
{

#ifndef XC_DONT_COMPILE_EXC
  double t2, t3, t4, t5, t6, t7, t8, t9;
  double t10, t11, t12, t13, t14, t15, t16, t17;
  double t18, t19, t20, t21, t27, t29, t30, t32;
  double t33, t34, t37, t38, t39, t40, t41, t42;
  double t43, t44, t45, t46, t47, t53, t55, t56;
  double t59;

#ifndef XC_DONT_COMPILE_VXC
  double t60, t61, t62, t66, t67, t68, t70, t71;
  double t72, t74, t75, t76, t77, t78, t80, t81;
  double t82, t85, t86, t87, t88, t89, t91, t92;
  double t96, t97, t98, t100, t102, t104, t105, t106;
  double t107, t108, t110, t114, t118, t119, t120, t122;
  double t126, t127, t128, t129, t133, t134, t136, t137;
  double t138, t141, t142, t143, t144, t145, t147, t148;
  double t152, t155, t158, t159, t162, t163, t167, t168;
  double t169, t173, t174, t178, t179, t180, t184;

#ifndef XC_DONT_COMPILE_FXC
  double t190, t191, t194, t203, t205, t208, t212, t215;
  double t218, t229, t230, t239, t241, t243, t245, t248;
  double t250, t252, t254, t258, t264, t274, t282, t287;
  double t289, t290, t297, t303, t312, t316, t321, t327;
  double t336, t341, t353, t371, t377, t382, t385, t390;
  double t396, t404, t409, t417, t423, t426, t431, t437;
  double t447, t462, t467, t471, t475, t482, t486, t493;
#endif

#endif

#endif



  t2 = 0.101e1 * p->threshold_dens;
  t3 = rho[0] <= t2;
  t4 = M_CBRTPI;
  t5 = t4 * t4;
  t6 = M_CBRT2;
  t7 = t5 * t6;
  t8 = rho[0] * rho[0];
  t9 = POW_1_3(rho[0]);
  t10 = t9 * t9;
  t11 = t10 * t8;
  t12 = rho[0] + rho[1];
  t13 = POW_1_3(t12);
  t14 = t13 * t13;
  t15 = 0.1e1 / t14;
  t16 = t11 * t15;
  t17 = t7 * t16;
  t18 = 0.1e1 / t12;
  t19 = rho[0] * t18;
  t20 = POW_1_3(t19);
  t21 = 0.1e1 / tau[0];
  t27 = 0.1e1 + 0.7e1 / 0.216e3 * sigma[0] / rho[0] * t21;
  t29 = POW_1_3(0.1e1 / M_PI);
  t30 = 0.1e1 / t29;
  t32 = M_CBRT4;
  t33 = t27 * t30 * t32;
  t34 = t20 * t21 * t33;
  t37 = my_piecewise3(t3, 0, -0.27e2 / 0.40e2 * t17 * t34);
  t38 = rho[1] <= t2;
  t39 = rho[1] * rho[1];
  t40 = POW_1_3(rho[1]);
  t41 = t40 * t40;
  t42 = t41 * t39;
  t43 = t42 * t15;
  t44 = t7 * t43;
  t45 = rho[1] * t18;
  t46 = POW_1_3(t45);
  t47 = 0.1e1 / tau[1];
  t53 = 0.1e1 + 0.7e1 / 0.216e3 * sigma[2] / rho[1] * t47;
  t55 = t53 * t30 * t32;
  t56 = t46 * t47 * t55;
  t59 = my_piecewise3(t38, 0, -0.27e2 / 0.40e2 * t44 * t56);
  if(zk != NULL && (p->info->flags & XC_FLAGS_HAVE_EXC))
    zk[0] = t37 + t59;

#ifndef XC_DONT_COMPILE_VXC

  if(order < 1) return;


  t60 = t10 * rho[0];
  t61 = t60 * t15;
  t62 = t7 * t61;
  t66 = 0.1e1 / t14 / t12;
  t67 = t11 * t66;
  t68 = t7 * t67;
  t70 = 0.9e1 / 0.20e2 * t68 * t34;
  t71 = t20 * t20;
  t72 = 0.1e1 / t71;
  t74 = t7 * t16 * t72;
  t75 = t21 * t27;
  t76 = t30 * t32;
  t77 = t12 * t12;
  t78 = 0.1e1 / t77;
  t80 = -rho[0] * t78 + t18;
  t81 = t76 * t80;
  t82 = t75 * t81;
  t85 = t10 * t15;
  t86 = t7 * t85;
  t87 = tau[0] * tau[0];
  t88 = 0.1e1 / t87;
  t89 = t20 * t88;
  t91 = sigma[0] * t30 * t32;
  t92 = t89 * t91;
  t96 = my_piecewise3(t3, 0, -0.9e1 / 0.5e1 * t62 * t34 + t70 - 0.9e1 / 0.40e2 * t74 * t82 + 0.7e1 / 0.320e3 * t86 * t92);
  t97 = t42 * t66;
  t98 = t7 * t97;
  t100 = 0.9e1 / 0.20e2 * t98 * t56;
  t102 = t41 * t39 * rho[1];
  t104 = 0.1e1 / t14 / t77;
  t105 = t102 * t104;
  t106 = t7 * t105;
  t107 = t46 * t46;
  t108 = 0.1e1 / t107;
  t110 = t108 * t47 * t55;
  t114 = my_piecewise3(t38, 0, t100 + 0.9e1 / 0.40e2 * t106 * t110);
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vrho[0] = t37 + t59 + t12 * (t96 + t114);

  t118 = t10 * t8 * rho[0];
  t119 = t118 * t104;
  t120 = t7 * t119;
  t122 = t72 * t21 * t33;
  t126 = my_piecewise3(t3, 0, t70 + 0.9e1 / 0.40e2 * t120 * t122);
  t127 = t41 * rho[1];
  t128 = t127 * t15;
  t129 = t7 * t128;
  t133 = t7 * t43 * t108;
  t134 = t47 * t53;
  t136 = -rho[1] * t78 + t18;
  t137 = t76 * t136;
  t138 = t134 * t137;
  t141 = t41 * t15;
  t142 = t7 * t141;
  t143 = tau[1] * tau[1];
  t144 = 0.1e1 / t143;
  t145 = t46 * t144;
  t147 = sigma[2] * t30 * t32;
  t148 = t145 * t147;
  t152 = my_piecewise3(t38, 0, -0.9e1 / 0.5e1 * t129 * t56 + t100 - 0.9e1 / 0.40e2 * t133 * t138 + 0.7e1 / 0.320e3 * t142 * t148);
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vrho[1] = t37 + t59 + t12 * (t126 + t152);

  t155 = t89 * t76;
  t158 = my_piecewise3(t3, 0, -0.7e1 / 0.320e3 * t62 * t155);
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vsigma[0] = t12 * t158;

  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vsigma[1] = 0.0e0;

  t159 = t145 * t76;
  t162 = my_piecewise3(t38, 0, -0.7e1 / 0.320e3 * t129 * t159);
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vsigma[2] = t12 * t162;

  if(vrho != NULL && (p->info->flags & XC_FLAGS_NEEDS_LAPLACIAN) && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vlapl[0] = 0.0e0;

  if(vrho != NULL && (p->info->flags & XC_FLAGS_NEEDS_LAPLACIAN) && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vlapl[1] = 0.0e0;

  t163 = t89 * t33;
  t167 = 0.1e1 / t87 / tau[0];
  t168 = t20 * t167;
  t169 = t168 * t91;
  t173 = my_piecewise3(t3, 0, 0.27e2 / 0.40e2 * t17 * t163 + 0.7e1 / 0.320e3 * t62 * t169);
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vtau[0] = t12 * t173;

  t174 = t145 * t55;
  t178 = 0.1e1 / t143 / tau[1];
  t179 = t46 * t178;
  t180 = t179 * t147;
  t184 = my_piecewise3(t38, 0, 0.27e2 / 0.40e2 * t44 * t174 + 0.7e1 / 0.320e3 * t129 * t180);
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vtau[1] = t12 * t184;

#ifndef XC_DONT_COMPILE_FXC

  if(order < 2) return;


  t190 = t7 * t60 * t66;
  t191 = t190 * t34;
  t194 = t7 * t61 * t72;
  t203 = t7 * t11 * t104;
  t205 = 0.3e1 / 0.4e1 * t203 * t34;
  t208 = t7 * t67 * t72 * t82;
  t212 = t7 * t10 * t66 * t92;
  t215 = 0.1e1 / t71 / t19;
  t218 = t80 * t80;
  t229 = t77 * t12;
  t230 = 0.1e1 / t229;
  t239 = my_piecewise3(t3, 0, -0.3e1 * t86 * t34 + 0.12e2 / 0.5e1 * t191 - 0.6e1 / 0.5e1 * t194 * t82 + 0.7e1 / 0.96e2 * t7 / t9 * t15 * t92 - t205 + 0.3e1 / 0.10e2 * t208 - 0.7e1 / 0.240e3 * t212 + 0.3e1 / 0.20e2 * t7 * t16 * t215 * t75 * t76 * t218 + 0.7e1 / 0.480e3 * t7 * t85 * t72 * t88 * sigma[0] * t81 - 0.9e1 / 0.40e2 * t74 * t75 * t76 * (0.2e1 * rho[0] * t230 - 0.2e1 * t78));
  t241 = t7 * t42 * t104;
  t243 = 0.3e1 / 0.4e1 * t241 * t56;
  t245 = 0.1e1 / t14 / t229;
  t248 = t7 * t102 * t245 * t110;
  t250 = t39 * t39;
  t252 = t77 * t77;
  t254 = 0.1e1 / t14 / t252;
  t258 = 0.1e1 / t107 / t45;
  t264 = my_piecewise3(t38, 0, -t243 - 0.3e1 / 0.4e1 * t248 + 0.3e1 / 0.20e2 * t7 * t41 * t250 * t254 * t258 * t47 * t55);
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[0] = 0.2e1 * t96 + 0.2e1 * t114 + t12 * (t239 + t264);

  t274 = t7 * t118 * t245 * t122;
  t282 = t72 * t88;
  t287 = my_piecewise3(t3, 0, 0.6e1 / 0.5e1 * t191 - t205 + 0.3e1 / 0.20e2 * t208 - 0.7e1 / 0.480e3 * t212 + 0.33e2 / 0.40e2 * t203 * t122 - 0.3e1 / 0.5e1 * t274 - 0.3e1 / 0.20e2 * t7 * t119 * t215 * t82 - 0.7e1 / 0.960e3 * t7 * t60 * t104 * t282 * t91);
  t289 = t7 * t127 * t66;
  t290 = t289 * t56;
  t297 = t7 * t97 * t108 * t138;
  t303 = rho[1] * t230;
  t312 = t7 * t41 * t66 * t148;
  t316 = t108 * t144;
  t321 = my_piecewise3(t38, 0, 0.6e1 / 0.5e1 * t290 + 0.3e1 / 0.5e1 * t241 * t110 - t243 - 0.3e1 / 0.20e2 * t248 + 0.3e1 / 0.20e2 * t297 - 0.3e1 / 0.20e2 * t7 * t105 * t258 * t138 - 0.9e1 / 0.40e2 * t133 * t134 * t76 * (-t78 + 0.2e1 * t303) - 0.7e1 / 0.480e3 * t312 - 0.7e1 / 0.960e3 * t7 * t127 * t104 * t316 * t147);
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[1] = t96 + t114 + t126 + t152 + t12 * (t287 + t321);

  t327 = t8 * t8;
  t336 = my_piecewise3(t3, 0, -t205 - 0.3e1 / 0.4e1 * t274 + 0.3e1 / 0.20e2 * t7 * t10 * t327 * t254 * t215 * t21 * t33);
  t341 = t7 * t128 * t108;
  t353 = t136 * t136;
  t371 = my_piecewise3(t38, 0, -0.3e1 * t142 * t56 + 0.12e2 / 0.5e1 * t290 - 0.6e1 / 0.5e1 * t341 * t138 + 0.7e1 / 0.96e2 * t7 / t40 * t15 * t148 - t243 + 0.3e1 / 0.10e2 * t297 - 0.7e1 / 0.240e3 * t312 + 0.3e1 / 0.20e2 * t7 * t43 * t258 * t134 * t76 * t353 + 0.7e1 / 0.480e3 * t7 * t141 * t108 * t144 * sigma[2] * t137 - 0.9e1 / 0.40e2 * t133 * t134 * t76 * (-0.2e1 * t78 + 0.2e1 * t303));
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[2] = 0.2e1 * t126 + 0.2e1 * t152 + t12 * (t336 + t371);

  t377 = 0.7e1 / 0.480e3 * t190 * t155;
  t382 = my_piecewise3(t3, 0, -0.7e1 / 0.192e3 * t86 * t155 + t377 - 0.7e1 / 0.960e3 * t62 * t282 * t81);
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rhosigma[0] = t12 * t382 + t158;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rhosigma[1] = 0.0e0;

  t385 = 0.7e1 / 0.480e3 * t289 * t159;
  t390 = my_piecewise3(t38, 0, t385 + 0.7e1 / 0.960e3 * t241 * t316 * t76);
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rhosigma[2] = t12 * t390 + t162;

  t396 = my_piecewise3(t3, 0, t377 + 0.7e1 / 0.960e3 * t203 * t282 * t76);
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rhosigma[3] = t12 * t396 + t158;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rhosigma[4] = 0.0e0;

  t404 = my_piecewise3(t38, 0, -0.7e1 / 0.192e3 * t142 * t159 + t385 - 0.7e1 / 0.960e3 * t129 * t316 * t137);
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rhosigma[5] = t12 * t404 + t162;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_NEEDS_LAPLACIAN) && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rholapl[0] = 0.0e0;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_NEEDS_LAPLACIAN) && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rholapl[1] = 0.0e0;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_NEEDS_LAPLACIAN) && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rholapl[2] = 0.0e0;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_NEEDS_LAPLACIAN) && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rholapl[3] = 0.0e0;

  t409 = 0.9e1 / 0.20e2 * t68 * t163;
  t417 = 0.7e1 / 0.480e3 * t190 * t169;
  t423 = my_piecewise3(t3, 0, 0.9e1 / 0.5e1 * t62 * t163 - t409 + 0.9e1 / 0.40e2 * t74 * t88 * t27 * t81 + 0.7e1 / 0.480e3 * t86 * t169 - t417 + 0.7e1 / 0.960e3 * t194 * t167 * sigma[0] * t81);
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rhotau[0] = t12 * t423 + t173;

  t426 = 0.9e1 / 0.20e2 * t98 * t174;
  t431 = 0.7e1 / 0.480e3 * t289 * t180;
  t437 = my_piecewise3(t38, 0, -t426 - 0.9e1 / 0.40e2 * t106 * t316 * t55 - t431 - 0.7e1 / 0.960e3 * t241 * t108 * t178 * t147);
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rhotau[1] = t12 * t437 + t184;

  t447 = my_piecewise3(t3, 0, -t409 - 0.9e1 / 0.40e2 * t120 * t282 * t33 - t417 - 0.7e1 / 0.960e3 * t203 * t72 * t167 * t91);
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rhotau[2] = t12 * t447 + t173;

  t462 = my_piecewise3(t38, 0, 0.9e1 / 0.5e1 * t129 * t174 - t426 + 0.9e1 / 0.40e2 * t133 * t144 * t53 * t137 + 0.7e1 / 0.480e3 * t142 * t180 - t431 + 0.7e1 / 0.960e3 * t341 * t178 * sigma[2] * t137);
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rhotau[3] = t12 * t462 + t184;

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

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_NEEDS_LAPLACIAN) && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigmalapl[0] = 0.0e0;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_NEEDS_LAPLACIAN) && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigmalapl[1] = 0.0e0;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_NEEDS_LAPLACIAN) && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigmalapl[2] = 0.0e0;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_NEEDS_LAPLACIAN) && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigmalapl[3] = 0.0e0;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_NEEDS_LAPLACIAN) && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigmalapl[4] = 0.0e0;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_NEEDS_LAPLACIAN) && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigmalapl[5] = 0.0e0;

  t467 = my_piecewise3(t3, 0, 0.7e1 / 0.160e3 * t62 * t168 * t76);
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigmatau[0] = t12 * t467;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigmatau[1] = 0.0e0;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigmatau[2] = 0.0e0;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigmatau[3] = 0.0e0;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigmatau[4] = 0.0e0;

  t471 = my_piecewise3(t38, 0, 0.7e1 / 0.160e3 * t129 * t179 * t76);
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigmatau[5] = t12 * t471;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_NEEDS_LAPLACIAN) && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2lapl2[0] = 0.0e0;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_NEEDS_LAPLACIAN) && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2lapl2[1] = 0.0e0;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_NEEDS_LAPLACIAN) && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2lapl2[2] = 0.0e0;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_NEEDS_LAPLACIAN) && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2lapltau[0] = 0.0e0;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_NEEDS_LAPLACIAN) && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2lapltau[1] = 0.0e0;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_NEEDS_LAPLACIAN) && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2lapltau[2] = 0.0e0;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_NEEDS_LAPLACIAN) && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2lapltau[3] = 0.0e0;

  t475 = t87 * t87;
  t482 = my_piecewise3(t3, 0, -0.27e2 / 0.20e2 * t17 * t168 * t33 - 0.7e1 / 0.80e2 * t62 * t20 / t475 * t91);
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2tau2[0] = t12 * t482;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2tau2[1] = 0.0e0;

  t486 = t143 * t143;
  t493 = my_piecewise3(t38, 0, -0.27e2 / 0.20e2 * t44 * t179 * t55 - 0.7e1 / 0.80e2 * t129 * t46 / t486 * t147);
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2tau2[2] = t12 * t493;

#ifndef XC_DONT_COMPILE_KXC

  if(order < 3) return;


#endif

#endif

#endif


}

