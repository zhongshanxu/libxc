/* 
  This file was generated automatically with ./scripts/maple2c.pl.
  Do not edit this file directly as it can be overwritten!!

  This Source Code Form is subject to the terms of the Mozilla Public
  License, v. 2.0. If a copy of the MPL was not distributed with this
  file, You can obtain one at http://mozilla.org/MPL/2.0/.

  Maple version     : Maple 2016 (X86 64 LINUX)
  Maple source      : ./maple/mgga_exc/mgga_x_2d_prhg07.mpl
  Type of functional: mgga_exc
*/

#define maple2c_order 2
#define MAPLE2C_FLAGS (XC_FLAGS_I_HAVE_EXC | XC_FLAGS_I_HAVE_VXC | XC_FLAGS_I_HAVE_FXC)


static inline void
func_unpol(const xc_func_type *p, int order, const double *rho, const double *sigma, const double *lapl, const double *tau , double *zk MGGA_OUT_PARAMS_NO_EXC(XC_COMMA double *, ))
{

#ifndef XC_DONT_COMPILE_EXC
  double t4, t5, t6, t7, t8, t9, t15, t19;
  double t20, t21, t22, t23, t25, t26, t27, t28;
  double t32;

#ifndef XC_DONT_COMPILE_VXC
  double t33, t36, t38, t42, t43, t48, t50, t52;
  double t53, t57, t60, t62, t63, t64, t67, t69;
  double t71, t72, t73, t76, t79, t80, t81, t84;

#ifndef XC_DONT_COMPILE_FXC
  double t93, t100, t101, t102, t103, t104, t105, t106;
  double t107, t108, t122, t127, t133, t137, t142, t147;
  double t154, t161, t165, t166, t170, t175, t180, t184;
  double t193, t201, t206, t211, t220, t228, t231, t232;
  double t236, t240, t241, t252, t261, t265, t270, t286;
  double t288, t289, t293, t304, t322, t324, t325, t329;
  double t340;
#endif

#endif

#endif



  t4 = rho[0] / 0.2e1 <= 0.101e1 * p->threshold_dens;
  t5 = M_SQRT2;
  t6 = M_PI * t5;
  t7 = sqrt(rho[0]);
  t8 = rho[0] * rho[0];
  t9 = 0.1e1 / t8;
  t15 = 0.1e1 / t8 / rho[0];
  t19 = 0.1e1 / M_PI;
  t20 = (lapl[0] * t9 / 0.2e1 - 0.2e1 * tau[0] * t9 + sigma[0] * t15 / 0.4e1) * t19;
  t21 = -0.9999999999e0 < t20;
  t22 = my_piecewise3(t21, t20, -0.9999999999e0);
  t23 = exp(-0.1e1);
  t25 = LambertW(t22 * t23);
  t26 = t25 + 0.1e1;
  t27 = t26 / 0.2e1;
  t28 = xc_bessel_I0(t27);
  t32 = my_piecewise3(t4, 0, -t6 * t7 * t28 / 0.8e1);
  if(zk != NULL && (p->info->flags & XC_FLAGS_HAVE_EXC))
    zk[0] = 0.2e1 * t32;

#ifndef XC_DONT_COMPILE_VXC

  if(order < 1) return;


  t33 = 0.1e1 / t7;
  t36 = xc_bessel_I1(t27);
  t38 = t6 * t7 * t36;
  t42 = t8 * t8;
  t43 = 0.1e1 / t42;
  t48 = my_piecewise3(t21, (-lapl[0] * t15 + 0.4e1 * tau[0] * t15 - 0.3e1 / 0.4e1 * sigma[0] * t43) * t19, 0);
  t50 = 0.1e1 / t26;
  t52 = t50 / t22;
  t53 = t48 * t25 * t52;
  t57 = my_piecewise3(t4, 0, -t6 * t33 * t28 / 0.16e2 - t38 * t53 / 0.16e2);
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vrho[0] = 0.2e1 * rho[0] * t57 + 0.2e1 * t32;

  t60 = t15 * t19;
  t62 = my_piecewise3(t21, t60 / 0.4e1, 0);
  t63 = t62 * t25;
  t64 = t63 * t52;
  t67 = my_piecewise3(t4, 0, -t38 * t64 / 0.16e2);
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vsigma[0] = 0.2e1 * rho[0] * t67;

  t69 = t9 * t19;
  t71 = my_piecewise3(t21, t69 / 0.2e1, 0);
  t72 = t71 * t25;
  t73 = t72 * t52;
  t76 = my_piecewise3(t4, 0, -t38 * t73 / 0.16e2);
  if(vrho != NULL && (p->info->flags & XC_FLAGS_NEEDS_LAPLACIAN) && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vlapl[0] = 0.2e1 * rho[0] * t76;

  t79 = my_piecewise3(t21, -0.2e1 * t69, 0);
  t80 = t79 * t25;
  t81 = t80 * t52;
  t84 = my_piecewise3(t4, 0, -t38 * t81 / 0.16e2);
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vtau[0] = 0.2e1 * rho[0] * t84;

#ifndef XC_DONT_COMPILE_FXC

  if(order < 2) return;


  t93 = t6 * t33 * t36;
  t100 = t6 * t7 * (t28 - 0.1e1 / t27 * t36);
  t101 = t48 * t48;
  t102 = t25 * t25;
  t103 = t101 * t102;
  t104 = t26 * t26;
  t105 = 0.1e1 / t104;
  t106 = t22 * t22;
  t107 = 0.1e1 / t106;
  t108 = t105 * t107;
  t122 = my_piecewise3(t21, (0.3e1 * lapl[0] * t43 - 0.12e2 * tau[0] * t43 + 0.3e1 * sigma[0] / t42 / rho[0]) * t19, 0);
  t127 = t101 * t25;
  t133 = 0.1e1 / t104 / t26 * t107;
  t137 = t50 * t107;
  t142 = my_piecewise3(t4, 0, t6 / t7 / rho[0] * t28 / 0.32e2 - t93 * t53 / 0.16e2 - t100 * t103 * t108 / 0.32e2 - t38 * t122 * t25 * t52 / 0.16e2 - t38 * t127 * t108 / 0.16e2 + t38 * t103 * t133 / 0.16e2 + t38 * t127 * t137 / 0.16e2);
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[0] = 0.2e1 * rho[0] * t142 + 0.4e1 * t57;

  t147 = t48 * t102;
  t154 = my_piecewise3(t21, -0.3e1 / 0.4e1 * t43 * t19, 0);
  t161 = t25 * t105 * t107;
  t165 = t62 * t102;
  t166 = t133 * t48;
  t170 = t137 * t48;
  t175 = my_piecewise3(t4, 0, -t93 * t64 / 0.32e2 - t100 * t147 * t108 * t62 / 0.32e2 - t38 * t154 * t25 * t52 / 0.16e2 - t38 * t62 * t48 * t161 / 0.16e2 + t38 * t165 * t166 / 0.16e2 + t38 * t63 * t170 / 0.16e2);
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rhosigma[0] = 0.2e1 * rho[0] * t175 + 0.2e1 * t67;

  t180 = t108 * t71;
  t184 = my_piecewise3(t21, -t60, 0);
  t193 = t71 * t102;
  t201 = my_piecewise3(t4, 0, -t93 * t73 / 0.32e2 - t100 * t147 * t180 / 0.32e2 - t38 * t184 * t25 * t52 / 0.16e2 - t38 * t71 * t48 * t161 / 0.16e2 + t38 * t193 * t166 / 0.16e2 + t38 * t72 * t170 / 0.16e2);
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_NEEDS_LAPLACIAN) && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rholapl[0] = 0.2e1 * rho[0] * t201 + 0.2e1 * t76;

  t206 = t108 * t79;
  t211 = my_piecewise3(t21, 0.4e1 * t60, 0);
  t220 = t79 * t102;
  t228 = my_piecewise3(t4, 0, -t93 * t81 / 0.32e2 - t100 * t147 * t206 / 0.32e2 - t38 * t211 * t25 * t52 / 0.16e2 - t38 * t79 * t48 * t161 / 0.16e2 + t38 * t220 * t166 / 0.16e2 + t38 * t80 * t170 / 0.16e2);
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rhotau[0] = 0.2e1 * rho[0] * t228 + 0.2e1 * t84;

  t231 = t62 * t62;
  t232 = t231 * t102;
  t236 = my_piecewise3(t21, 0, 0);
  t240 = t38 * t236 * t25 * t52 / 0.16e2;
  t241 = t231 * t25;
  t252 = my_piecewise3(t4, 0, -t100 * t232 * t108 / 0.32e2 - t240 - t38 * t241 * t108 / 0.16e2 + t38 * t232 * t133 / 0.16e2 + t38 * t241 * t137 / 0.16e2);
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigma2[0] = 0.2e1 * rho[0] * t252;

  t261 = t133 * t62;
  t265 = t137 * t62;
  t270 = my_piecewise3(t4, 0, -t100 * t165 * t180 / 0.32e2 - t240 - t38 * t71 * t62 * t161 / 0.16e2 + t38 * t193 * t261 / 0.16e2 + t38 * t72 * t265 / 0.16e2);
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_NEEDS_LAPLACIAN) && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigmalapl[0] = 0.2e1 * rho[0] * t270;

  t286 = my_piecewise3(t4, 0, -t100 * t165 * t206 / 0.32e2 - t240 - t38 * t79 * t62 * t161 / 0.16e2 + t38 * t220 * t261 / 0.16e2 + t38 * t80 * t265 / 0.16e2);
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigmatau[0] = 0.2e1 * rho[0] * t286;

  t288 = t71 * t71;
  t289 = t288 * t102;
  t293 = t288 * t25;
  t304 = my_piecewise3(t4, 0, -t100 * t289 * t108 / 0.32e2 - t240 - t38 * t293 * t108 / 0.16e2 + t38 * t289 * t133 / 0.16e2 + t38 * t293 * t137 / 0.16e2);
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_NEEDS_LAPLACIAN) && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2lapl2[0] = 0.2e1 * rho[0] * t304;

  t322 = my_piecewise3(t4, 0, -t100 * t193 * t206 / 0.32e2 - t240 - t38 * t79 * t71 * t161 / 0.16e2 + t38 * t220 * t133 * t71 / 0.16e2 + t38 * t80 * t137 * t71 / 0.16e2);
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_NEEDS_LAPLACIAN) && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2lapltau[0] = 0.2e1 * rho[0] * t322;

  t324 = t79 * t79;
  t325 = t324 * t102;
  t329 = t324 * t25;
  t340 = my_piecewise3(t4, 0, -t100 * t325 * t108 / 0.32e2 - t240 - t38 * t329 * t108 / 0.16e2 + t38 * t325 * t133 / 0.16e2 + t38 * t329 * t137 / 0.16e2);
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2tau2[0] = 0.2e1 * rho[0] * t340;

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
  double t10, t11, t12, t13, t17, t18, t22, t23;
  double t24, t25, t26, t28, t29, t30, t31, t35;
  double t36, t37, t38, t39, t40, t41, t42, t46;
  double t47, t51, t52, t53, t55, t56, t57, t58;
  double t62;

#ifndef XC_DONT_COMPILE_VXC
  double t63, t64, t68, t69, t71, t73, t74, t75;
  double t76, t77, t79, t80, t83, t84, t89, t90;
  double t95, t97, t98, t99, t100, t101, t105, t106;
  double t108, t109, t111, t112, t113, t118, t121, t122;
  double t123, t127, t128, t132, t133, t135, t136, t139;
  double t140, t145, t146, t151, t153, t154, t155, t156;
  double t157, t161, t164, t166, t168, t171, t172, t174;
  double t176, t179, t180, t182, t184, t187, t188, t190;
  double t192, t195, t196, t198, t201, t202, t204, t207;

#ifndef XC_DONT_COMPILE_FXC
  double t210, t211, t216, t217, t218, t225, t227, t229;
  double t230, t233, t234, t235, t241, t242, t246, t247;
  double t256, t257, t259, t260, t261, t263, t264, t265;
  double t279, t284, t286, t291, t293, t297, t301, t302;
  double t306, t308, t311, t314, t316, t318, t324, t334;
  double t340, t344, t345, t353, t356, t360, t366, t367;
  double t369, t373, t385, t390, t391, t392, t398, t404;
  double t405, t416, t417, t419, t420, t421, t423, t424;
  double t425, t439, t444, t446, t451, t453, t457, t461;
  double t462, t465, t469, t475, t476, t477, t484, t490;
  double t495, t496, t497, t501, t502, t507, t509, t513;
  double t518, t520, t529, t530, t531, t538, t544, t549;
  double t550, t551, t555, t556, t561, t563, t567, t572;
  double t577, t586, t594, t596, t600, t605, t607, t615;
  double t620, t629, t637, t639, t643, t648, t653, t662;
  double t670, t672, t676, t681, t683, t691, t696, t705;
  double t713, t715, t720, t724, t725, t736, t737, t742;
  double t746, t747, t758, t766, t770, t775, t783, t787;
  double t792, t807, t822, t823, t828, t839, t840, t845;
  double t856, t873, t890, t891, t896, t907, t908, t913;
  double t924;
#endif

#endif

#endif



  t2 = 0.101e1 * p->threshold_dens;
  t3 = rho[0] <= t2;
  t4 = M_PI * rho[0];
  t5 = rho[0] + rho[1];
  t6 = sqrt(t5);
  t7 = 0.1e1 / t6;
  t8 = 0.1e1 / t5;
  t9 = rho[0] * t8;
  t10 = sqrt(t9);
  t11 = t7 * t10;
  t12 = rho[0] * rho[0];
  t13 = 0.1e1 / t12;
  t17 = t12 * rho[0];
  t18 = 0.1e1 / t17;
  t22 = 0.1e1 / M_PI;
  t23 = (lapl[0] * t13 / 0.4e1 - tau[0] * t13 + sigma[0] * t18 / 0.8e1) * t22;
  t24 = -0.9999999999e0 < t23;
  t25 = my_piecewise3(t24, t23, -0.9999999999e0);
  t26 = exp(-0.1e1);
  t28 = LambertW(t25 * t26);
  t29 = 0.1e1 + t28;
  t30 = t29 / 0.2e1;
  t31 = xc_bessel_I0(t30);
  t35 = my_piecewise3(t3, 0, -t4 * t11 * t31 / 0.2e1);
  t36 = rho[1] <= t2;
  t37 = M_PI * rho[1];
  t38 = rho[1] * t8;
  t39 = sqrt(t38);
  t40 = t7 * t39;
  t41 = rho[1] * rho[1];
  t42 = 0.1e1 / t41;
  t46 = t41 * rho[1];
  t47 = 0.1e1 / t46;
  t51 = (lapl[1] * t42 / 0.4e1 - tau[1] * t42 + sigma[2] * t47 / 0.8e1) * t22;
  t52 = -0.9999999999e0 < t51;
  t53 = my_piecewise3(t52, t51, -0.9999999999e0);
  t55 = LambertW(t53 * t26);
  t56 = t55 + 0.1e1;
  t57 = t56 / 0.2e1;
  t58 = xc_bessel_I0(t57);
  t62 = my_piecewise3(t36, 0, -t37 * t40 * t58 / 0.2e1);
  if(zk != NULL && (p->info->flags & XC_FLAGS_HAVE_EXC))
    zk[0] = t35 + t62;

#ifndef XC_DONT_COMPILE_VXC

  if(order < 1) return;


  t63 = M_PI * t7;
  t64 = t10 * t31;
  t68 = 0.1e1 / t6 / t5;
  t69 = t68 * t10;
  t71 = t4 * t69 * t31;
  t73 = t4 * t7;
  t74 = 0.1e1 / t10;
  t75 = t74 * t31;
  t76 = t5 * t5;
  t77 = 0.1e1 / t76;
  t79 = -rho[0] * t77 + t8;
  t80 = t75 * t79;
  t83 = t4 * t11;
  t84 = xc_bessel_I1(t30);
  t89 = t12 * t12;
  t90 = 0.1e1 / t89;
  t95 = my_piecewise3(t24, (-lapl[0] * t18 / 0.2e1 + 0.2e1 * tau[0] * t18 - 0.3e1 / 0.8e1 * sigma[0] * t90) * t22, 0);
  t97 = 0.1e1 / t29;
  t98 = t28 * t97;
  t99 = 0.1e1 / t25;
  t100 = t98 * t99;
  t101 = t84 * t95 * t100;
  t105 = my_piecewise3(t3, 0, -t63 * t64 / 0.2e1 + t71 / 0.4e1 - t73 * t80 / 0.4e1 - t83 * t101 / 0.4e1);
  t106 = t68 * t39;
  t108 = t37 * t106 * t58;
  t109 = M_PI * t41;
  t111 = 0.1e1 / t6 / t76;
  t112 = 0.1e1 / t39;
  t113 = t111 * t112;
  t118 = my_piecewise3(t36, 0, t109 * t113 * t58 / 0.4e1 + t108 / 0.4e1);
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vrho[0] = t35 + t62 + t5 * (t105 + t118);

  t121 = M_PI * t12;
  t122 = t111 * t74;
  t123 = t122 * t31;
  t127 = my_piecewise3(t3, 0, t121 * t123 / 0.4e1 + t71 / 0.4e1);
  t128 = t39 * t58;
  t132 = t37 * t7;
  t133 = t112 * t58;
  t135 = -rho[1] * t77 + t8;
  t136 = t133 * t135;
  t139 = t37 * t40;
  t140 = xc_bessel_I1(t57);
  t145 = t41 * t41;
  t146 = 0.1e1 / t145;
  t151 = my_piecewise3(t52, (-lapl[1] * t47 / 0.2e1 + 0.2e1 * tau[1] * t47 - 0.3e1 / 0.8e1 * sigma[2] * t146) * t22, 0);
  t153 = 0.1e1 / t56;
  t154 = t55 * t153;
  t155 = 0.1e1 / t53;
  t156 = t154 * t155;
  t157 = t140 * t151 * t156;
  t161 = my_piecewise3(t36, 0, -t63 * t128 / 0.2e1 + t108 / 0.4e1 - t132 * t136 / 0.4e1 - t139 * t157 / 0.4e1);
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vrho[1] = t35 + t62 + t5 * (t127 + t161);

  t164 = t18 * t22;
  t166 = my_piecewise3(t24, t164 / 0.8e1, 0);
  t168 = t84 * t166 * t100;
  t171 = my_piecewise3(t3, 0, -t83 * t168 / 0.4e1);
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vsigma[0] = t5 * t171;

  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vsigma[1] = 0.0e0;

  t172 = t47 * t22;
  t174 = my_piecewise3(t52, t172 / 0.8e1, 0);
  t176 = t140 * t174 * t156;
  t179 = my_piecewise3(t36, 0, -t139 * t176 / 0.4e1);
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vsigma[2] = t5 * t179;

  t180 = t13 * t22;
  t182 = my_piecewise3(t24, t180 / 0.4e1, 0);
  t184 = t84 * t182 * t100;
  t187 = my_piecewise3(t3, 0, -t83 * t184 / 0.4e1);
  if(vrho != NULL && (p->info->flags & XC_FLAGS_NEEDS_LAPLACIAN) && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vlapl[0] = t5 * t187;

  t188 = t42 * t22;
  t190 = my_piecewise3(t52, t188 / 0.4e1, 0);
  t192 = t140 * t190 * t156;
  t195 = my_piecewise3(t36, 0, -t139 * t192 / 0.4e1);
  if(vrho != NULL && (p->info->flags & XC_FLAGS_NEEDS_LAPLACIAN) && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vlapl[1] = t5 * t195;

  t196 = my_piecewise3(t24, -t180, 0);
  t198 = t84 * t196 * t100;
  t201 = my_piecewise3(t3, 0, -t83 * t198 / 0.4e1);
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vtau[0] = t5 * t201;

  t202 = my_piecewise3(t52, -t188, 0);
  t204 = t140 * t202 * t156;
  t207 = my_piecewise3(t36, 0, -t139 * t204 / 0.4e1);
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vtau[1] = t5 * t207;

#ifndef XC_DONT_COMPILE_FXC

  if(order < 2) return;


  t210 = M_PI * t68;
  t211 = t210 * t64;
  t216 = t63 * t10 * t84;
  t217 = t95 * t28;
  t218 = t97 * t99;
  t225 = 0.3e1 / 0.8e1 * t4 * t111 * t10 * t31;
  t227 = t4 * t68 * t80;
  t229 = t4 * t69;
  t230 = t229 * t101;
  t233 = 0.1e1 / t10 / t9;
  t234 = t233 * t31;
  t235 = t79 * t79;
  t241 = t4 * t7 * t74 * t84;
  t242 = t218 * t79;
  t246 = t76 * t5;
  t247 = 0.1e1 / t246;
  t256 = t31 - 0.1e1 / t30 * t84;
  t257 = t95 * t95;
  t259 = t28 * t28;
  t260 = t29 * t29;
  t261 = 0.1e1 / t260;
  t263 = t25 * t25;
  t264 = 0.1e1 / t263;
  t265 = t259 * t261 * t264;
  t279 = my_piecewise3(t24, (0.3e1 / 0.2e1 * lapl[0] * t90 - 0.6e1 * tau[0] * t90 + 0.3e1 / 0.2e1 * sigma[0] / t89 / rho[0]) * t22, 0);
  t284 = t84 * t257;
  t286 = t28 * t261 * t264;
  t291 = 0.1e1 / t260 / t29;
  t293 = t259 * t291 * t264;
  t297 = t98 * t264;
  t301 = t211 / 0.2e1 - t63 * t80 / 0.2e1 - t216 * t217 * t218 / 0.2e1 - t225 + t227 / 0.4e1 + t230 / 0.4e1 + t73 * t234 * t235 / 0.8e1 - t241 * t217 * t242 / 0.4e1 - t73 * t75 * (0.2e1 * rho[0] * t247 - 0.2e1 * t77) / 0.4e1 - t83 * t256 * t257 * t265 / 0.8e1 - t83 * t84 * t279 * t100 / 0.4e1 - t83 * t284 * t286 / 0.4e1 + t83 * t284 * t293 / 0.4e1 + t83 * t284 * t297 / 0.4e1;
  t302 = my_piecewise3(t3, 0, t301);
  t306 = 0.3e1 / 0.8e1 * t37 * t111 * t39 * t58;
  t308 = 0.1e1 / t6 / t246;
  t311 = t109 * t308 * t112 * t58;
  t314 = t76 * t76;
  t316 = 0.1e1 / t6 / t314;
  t318 = 0.1e1 / t39 / t38;
  t324 = my_piecewise3(t36, 0, -t306 - 0.3e1 / 0.4e1 * t311 + M_PI * t46 * t316 * t318 * t58 / 0.8e1);
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[0] = 0.2e1 * t105 + 0.2e1 * t118 + t5 * (t302 + t324);

  t334 = t121 * t308 * t74 * t31;
  t340 = t121 * t122;
  t344 = my_piecewise3(t3, 0, t211 / 0.4e1 - t225 + t227 / 0.8e1 + t230 / 0.8e1 + t4 * t123 / 0.2e1 - 0.5e1 / 0.8e1 * t334 - t121 * t111 * t234 * t79 / 0.8e1 + t340 * t101 / 0.8e1);
  t345 = t210 * t128;
  t353 = t37 * t68 * t136;
  t356 = t318 * t58;
  t360 = rho[1] * t247;
  t366 = t37 * t106;
  t367 = t366 * t157;
  t369 = t109 * t113;
  t373 = my_piecewise3(t36, 0, t345 / 0.4e1 + M_PI * t111 * t133 * rho[1] / 0.4e1 - t306 - t311 / 0.8e1 + t353 / 0.8e1 - t109 * t111 * t356 * t135 / 0.8e1 - t132 * t133 * (-t77 + 0.2e1 * t360) / 0.4e1 + t367 / 0.8e1 + t369 * t157 / 0.8e1);
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[1] = t105 + t118 + t127 + t161 + t5 * (t344 + t373);

  t385 = my_piecewise3(t3, 0, -t225 - 0.3e1 / 0.4e1 * t334 + M_PI * t17 * t316 * t233 * t31 / 0.8e1);
  t390 = t63 * t39 * t140;
  t391 = t151 * t55;
  t392 = t153 * t155;
  t398 = t135 * t135;
  t404 = t37 * t7 * t112 * t140;
  t405 = t392 * t135;
  t416 = t58 - 0.1e1 / t57 * t140;
  t417 = t151 * t151;
  t419 = t55 * t55;
  t420 = t56 * t56;
  t421 = 0.1e1 / t420;
  t423 = t53 * t53;
  t424 = 0.1e1 / t423;
  t425 = t419 * t421 * t424;
  t439 = my_piecewise3(t52, (0.3e1 / 0.2e1 * lapl[1] * t146 - 0.6e1 * tau[1] * t146 + 0.3e1 / 0.2e1 * sigma[2] / t145 / rho[1]) * t22, 0);
  t444 = t140 * t417;
  t446 = t55 * t421 * t424;
  t451 = 0.1e1 / t420 / t56;
  t453 = t419 * t451 * t424;
  t457 = t154 * t424;
  t461 = t345 / 0.2e1 - t63 * t136 / 0.2e1 - t390 * t391 * t392 / 0.2e1 - t306 + t353 / 0.4e1 + t367 / 0.4e1 + t132 * t356 * t398 / 0.8e1 - t404 * t391 * t405 / 0.4e1 - t132 * t133 * (-0.2e1 * t77 + 0.2e1 * t360) / 0.4e1 - t139 * t416 * t417 * t425 / 0.8e1 - t139 * t140 * t439 * t156 / 0.4e1 - t139 * t444 * t446 / 0.4e1 + t139 * t444 * t453 / 0.4e1 + t139 * t444 * t457 / 0.4e1;
  t462 = my_piecewise3(t36, 0, t461);
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[2] = 0.2e1 * t127 + 0.2e1 * t161 + t5 * (t385 + t462);

  t465 = t166 * t28;
  t469 = t229 * t168;
  t475 = t4 * t11 * t256;
  t476 = t95 * t259;
  t477 = t261 * t264;
  t484 = my_piecewise3(t24, -0.3e1 / 0.8e1 * t90 * t22, 0);
  t490 = t4 * t11 * t84;
  t495 = t166 * t259;
  t496 = t291 * t264;
  t497 = t496 * t95;
  t501 = t97 * t264;
  t502 = t501 * t95;
  t507 = my_piecewise3(t3, 0, -t216 * t465 * t218 / 0.4e1 + t469 / 0.8e1 - t241 * t465 * t242 / 0.8e1 - t475 * t476 * t477 * t166 / 0.8e1 - t83 * t84 * t484 * t100 / 0.4e1 - t490 * t166 * t95 * t286 / 0.4e1 + t490 * t495 * t497 / 0.4e1 + t490 * t465 * t502 / 0.4e1);
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rhosigma[0] = t5 * t507 + t171;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rhosigma[1] = 0.0e0;

  t509 = t366 * t176;
  t513 = my_piecewise3(t36, 0, t369 * t176 / 0.8e1 + t509 / 0.8e1);
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rhosigma[2] = t5 * t513 + t179;

  t518 = my_piecewise3(t3, 0, t340 * t168 / 0.8e1 + t469 / 0.8e1);
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rhosigma[3] = t5 * t518 + t171;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rhosigma[4] = 0.0e0;

  t520 = t174 * t55;
  t529 = t37 * t40 * t416;
  t530 = t151 * t419;
  t531 = t421 * t424;
  t538 = my_piecewise3(t52, -0.3e1 / 0.8e1 * t146 * t22, 0);
  t544 = t37 * t40 * t140;
  t549 = t174 * t419;
  t550 = t451 * t424;
  t551 = t550 * t151;
  t555 = t153 * t424;
  t556 = t555 * t151;
  t561 = my_piecewise3(t36, 0, -t390 * t520 * t392 / 0.4e1 + t509 / 0.8e1 - t404 * t520 * t405 / 0.8e1 - t529 * t530 * t531 * t174 / 0.8e1 - t139 * t140 * t538 * t156 / 0.4e1 - t544 * t174 * t151 * t446 / 0.4e1 + t544 * t549 * t551 / 0.4e1 + t544 * t520 * t556 / 0.4e1);
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rhosigma[5] = t5 * t561 + t179;

  t563 = t182 * t28;
  t567 = t229 * t184;
  t572 = t477 * t182;
  t577 = my_piecewise3(t24, -t164 / 0.2e1, 0);
  t586 = t182 * t259;
  t594 = my_piecewise3(t3, 0, -t216 * t563 * t218 / 0.4e1 + t567 / 0.8e1 - t241 * t563 * t242 / 0.8e1 - t475 * t476 * t572 / 0.8e1 - t83 * t84 * t577 * t100 / 0.4e1 - t490 * t182 * t95 * t286 / 0.4e1 + t490 * t586 * t497 / 0.4e1 + t490 * t563 * t502 / 0.4e1);
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_NEEDS_LAPLACIAN) && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rholapl[0] = t5 * t594 + t187;

  t596 = t366 * t192;
  t600 = my_piecewise3(t36, 0, t369 * t192 / 0.8e1 + t596 / 0.8e1);
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_NEEDS_LAPLACIAN) && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rholapl[1] = t5 * t600 + t195;

  t605 = my_piecewise3(t3, 0, t340 * t184 / 0.8e1 + t567 / 0.8e1);
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_NEEDS_LAPLACIAN) && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rholapl[2] = t5 * t605 + t187;

  t607 = t190 * t55;
  t615 = t531 * t190;
  t620 = my_piecewise3(t52, -t172 / 0.2e1, 0);
  t629 = t190 * t419;
  t637 = my_piecewise3(t36, 0, -t390 * t607 * t392 / 0.4e1 + t596 / 0.8e1 - t404 * t607 * t405 / 0.8e1 - t529 * t530 * t615 / 0.8e1 - t139 * t140 * t620 * t156 / 0.4e1 - t544 * t190 * t151 * t446 / 0.4e1 + t544 * t629 * t551 / 0.4e1 + t544 * t607 * t556 / 0.4e1);
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_NEEDS_LAPLACIAN) && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rholapl[3] = t5 * t637 + t195;

  t639 = t196 * t28;
  t643 = t229 * t198;
  t648 = t477 * t196;
  t653 = my_piecewise3(t24, 0.2e1 * t164, 0);
  t662 = t196 * t259;
  t670 = my_piecewise3(t3, 0, -t216 * t639 * t218 / 0.4e1 + t643 / 0.8e1 - t241 * t639 * t242 / 0.8e1 - t475 * t476 * t648 / 0.8e1 - t83 * t84 * t653 * t100 / 0.4e1 - t490 * t196 * t95 * t286 / 0.4e1 + t490 * t662 * t497 / 0.4e1 + t490 * t639 * t502 / 0.4e1);
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rhotau[0] = t5 * t670 + t201;

  t672 = t366 * t204;
  t676 = my_piecewise3(t36, 0, t369 * t204 / 0.8e1 + t672 / 0.8e1);
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rhotau[1] = t5 * t676 + t207;

  t681 = my_piecewise3(t3, 0, t340 * t198 / 0.8e1 + t643 / 0.8e1);
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rhotau[2] = t5 * t681 + t201;

  t683 = t202 * t55;
  t691 = t531 * t202;
  t696 = my_piecewise3(t52, 0.2e1 * t172, 0);
  t705 = t202 * t419;
  t713 = my_piecewise3(t36, 0, -t390 * t683 * t392 / 0.4e1 + t672 / 0.8e1 - t404 * t683 * t405 / 0.8e1 - t529 * t530 * t691 / 0.8e1 - t139 * t140 * t696 * t156 / 0.4e1 - t544 * t202 * t151 * t446 / 0.4e1 + t544 * t705 * t551 / 0.4e1 + t544 * t683 * t556 / 0.4e1);
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rhotau[3] = t5 * t713 + t207;

  t715 = t166 * t166;
  t720 = my_piecewise3(t24, 0, 0);
  t724 = t83 * t84 * t720 * t100 / 0.4e1;
  t725 = t84 * t715;
  t736 = my_piecewise3(t3, 0, -t83 * t256 * t715 * t265 / 0.8e1 - t724 - t83 * t725 * t286 / 0.4e1 + t83 * t725 * t293 / 0.4e1 + t83 * t725 * t297 / 0.4e1);
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigma2[0] = t5 * t736;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigma2[1] = 0.0e0;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigma2[2] = 0.0e0;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigma2[3] = 0.0e0;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigma2[4] = 0.0e0;

  t737 = t174 * t174;
  t742 = my_piecewise3(t52, 0, 0);
  t746 = t139 * t140 * t742 * t156 / 0.4e1;
  t747 = t140 * t737;
  t758 = my_piecewise3(t36, 0, -t139 * t416 * t737 * t425 / 0.8e1 - t746 - t139 * t747 * t446 / 0.4e1 + t139 * t747 * t453 / 0.4e1 + t139 * t747 * t457 / 0.4e1);
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigma2[5] = t5 * t758;

  t766 = t496 * t166;
  t770 = t501 * t166;
  t775 = my_piecewise3(t3, 0, -t475 * t495 * t572 / 0.8e1 - t724 - t490 * t182 * t166 * t286 / 0.4e1 + t490 * t586 * t766 / 0.4e1 + t490 * t563 * t770 / 0.4e1);
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_NEEDS_LAPLACIAN) && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigmalapl[0] = t5 * t775;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_NEEDS_LAPLACIAN) && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigmalapl[1] = 0.0e0;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_NEEDS_LAPLACIAN) && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigmalapl[2] = 0.0e0;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_NEEDS_LAPLACIAN) && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigmalapl[3] = 0.0e0;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_NEEDS_LAPLACIAN) && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigmalapl[4] = 0.0e0;

  t783 = t550 * t174;
  t787 = t555 * t174;
  t792 = my_piecewise3(t36, 0, -t529 * t549 * t615 / 0.8e1 - t746 - t544 * t190 * t174 * t446 / 0.4e1 + t544 * t629 * t783 / 0.4e1 + t544 * t607 * t787 / 0.4e1);
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_NEEDS_LAPLACIAN) && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigmalapl[5] = t5 * t792;

  t807 = my_piecewise3(t3, 0, -t475 * t495 * t648 / 0.8e1 - t724 - t490 * t196 * t166 * t286 / 0.4e1 + t490 * t662 * t766 / 0.4e1 + t490 * t639 * t770 / 0.4e1);
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigmatau[0] = t5 * t807;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigmatau[1] = 0.0e0;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigmatau[2] = 0.0e0;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigmatau[3] = 0.0e0;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigmatau[4] = 0.0e0;

  t822 = my_piecewise3(t36, 0, -t529 * t549 * t691 / 0.8e1 - t746 - t544 * t202 * t174 * t446 / 0.4e1 + t544 * t705 * t783 / 0.4e1 + t544 * t683 * t787 / 0.4e1);
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigmatau[5] = t5 * t822;

  t823 = t182 * t182;
  t828 = t84 * t823;
  t839 = my_piecewise3(t3, 0, -t83 * t256 * t823 * t265 / 0.8e1 - t724 - t83 * t828 * t286 / 0.4e1 + t83 * t828 * t293 / 0.4e1 + t83 * t828 * t297 / 0.4e1);
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_NEEDS_LAPLACIAN) && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2lapl2[0] = t5 * t839;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_NEEDS_LAPLACIAN) && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2lapl2[1] = 0.0e0;

  t840 = t190 * t190;
  t845 = t140 * t840;
  t856 = my_piecewise3(t36, 0, -t139 * t416 * t840 * t425 / 0.8e1 - t746 - t139 * t845 * t446 / 0.4e1 + t139 * t845 * t453 / 0.4e1 + t139 * t845 * t457 / 0.4e1);
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_NEEDS_LAPLACIAN) && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2lapl2[2] = t5 * t856;

  t873 = my_piecewise3(t3, 0, -t475 * t586 * t648 / 0.8e1 - t724 - t490 * t196 * t182 * t286 / 0.4e1 + t490 * t662 * t496 * t182 / 0.4e1 + t490 * t639 * t501 * t182 / 0.4e1);
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_NEEDS_LAPLACIAN) && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2lapltau[0] = t5 * t873;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_NEEDS_LAPLACIAN) && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2lapltau[1] = 0.0e0;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_NEEDS_LAPLACIAN) && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2lapltau[2] = 0.0e0;

  t890 = my_piecewise3(t36, 0, -t529 * t629 * t691 / 0.8e1 - t746 - t544 * t202 * t190 * t446 / 0.4e1 + t544 * t705 * t550 * t190 / 0.4e1 + t544 * t683 * t555 * t190 / 0.4e1);
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_NEEDS_LAPLACIAN) && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2lapltau[3] = t5 * t890;

  t891 = t196 * t196;
  t896 = t84 * t891;
  t907 = my_piecewise3(t3, 0, -t83 * t256 * t891 * t265 / 0.8e1 - t724 - t83 * t896 * t286 / 0.4e1 + t83 * t896 * t293 / 0.4e1 + t83 * t896 * t297 / 0.4e1);
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2tau2[0] = t5 * t907;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2tau2[1] = 0.0e0;

  t908 = t202 * t202;
  t913 = t140 * t908;
  t924 = my_piecewise3(t36, 0, -t139 * t416 * t908 * t425 / 0.8e1 - t746 - t139 * t913 * t446 / 0.4e1 + t139 * t913 * t453 / 0.4e1 + t139 * t913 * t457 / 0.4e1);
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2tau2[2] = t5 * t924;

#ifndef XC_DONT_COMPILE_KXC

  if(order < 3) return;


#endif

#endif

#endif


}

