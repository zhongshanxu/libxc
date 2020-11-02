/* 
  This file was generated automatically with ./scripts/maple2c.pl.
  Do not edit this file directly as it can be overwritten!!

  This Source Code Form is subject to the terms of the Mozilla Public
  License, v. 2.0. If a copy of the MPL was not distributed with this
  file, You can obtain one at http://mozilla.org/MPL/2.0/.

  Maple version     : Maple 2016 (X86 64 LINUX)
  Maple source      : ./maple/mgga_exc/mgga_x_2d_js17.mpl
  Type of functional: mgga_exc
*/

#define maple2c_order 2
#define MAPLE2C_FLAGS (XC_FLAGS_I_HAVE_EXC | XC_FLAGS_I_HAVE_VXC | XC_FLAGS_I_HAVE_FXC)


static inline void
func_unpol(const xc_func_type *p, int order, const double *rho, const double *sigma, const double *lapl, const double *tau , double *zk MGGA_OUT_PARAMS_NO_EXC(XC_COMMA double *, ))
{

#ifndef XC_DONT_COMPILE_EXC
  double t4, t5, t7, t8, t9, t10, t11, t12;
  double t13, t15, t16, t18, t21, t22, t32, t33;
  double t34, t37, t41;

#ifndef XC_DONT_COMPILE_VXC
  double t42, t47, t48, t49, t52, t55, t61, t65;
  double t66, t69, t74, t80, t87, t91, t94, t95;
  double t98;

#ifndef XC_DONT_COMPILE_FXC
  double t107, t109, t110, t115, t117, t121, t130, t135;
  double t145, t157, t162, t177, t189, t192, t207, t212;
#endif

#endif

#endif



  t4 = rho[0] / 0.2e1 <= 0.101e1 * p->threshold_dens;
  t5 = sqrt(M_PI);
  t7 = M_SQRT2;
  t8 = 0.1e1 / t5 * t7;
  t9 = sqrt(rho[0]);
  t10 = rho[0] * rho[0];
  t11 = t10 * rho[0];
  t12 = 0.1e1 / t11;
  t13 = sigma[0] * t12;
  t15 = sigma[0] * sigma[0];
  t16 = t10 * t10;
  t18 = 0.1e1 / t16 / t10;
  t21 = 0.1e1 + 0.82505922498838542062e0 * t13 + 0.25211952768090192343e-2 * t15 * t18;
  t22 = pow(t21, 0.1e1 / 0.15e2);
  t32 = 0.1e1 + 0.55877026877520282455e-1 * t13 + (-0.1544000000000000000e0 * tau[0] / t10 - 0.11596246802930644802e2) / M_PI / 0.4e1;
  t33 = pow(t21, 0.1e1 / 0.5e1);
  t34 = 0.1e1 / t33;
  t37 = 0.1e1 / t22 + 0.2e1 / 0.5e1 * t32 * t34;
  t41 = my_piecewise3(t4, 0, -0.2e1 / 0.3e1 * t8 * t9 * t37);
  if(zk != NULL && (p->info->flags & XC_FLAGS_HAVE_EXC))
    zk[0] = 0.2e1 * t41;

#ifndef XC_DONT_COMPILE_VXC

  if(order < 1) return;


  t42 = 0.1e1 / t9;
  t47 = 0.1e1 / t22 / t21;
  t48 = 0.1e1 / t16;
  t49 = sigma[0] * t48;
  t52 = 0.1e1 / t16 / t11;
  t55 = -0.24751776749651562619e1 * t49 - 0.15127171660854115406e-1 * t15 * t52;
  t61 = -0.16763108063256084736e0 * t49 + 0.24573523213388639842e-1 * tau[0] * t12;
  t65 = 0.1e1 / t33 / t21;
  t66 = t32 * t65;
  t69 = -t47 * t55 / 0.15e2 + 0.2e1 / 0.5e1 * t61 * t34 - 0.2e1 / 0.25e2 * t66 * t55;
  t74 = my_piecewise3(t4, 0, -t8 * t42 * t37 / 0.3e1 - 0.2e1 / 0.3e1 * t8 * t9 * t69);
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vrho[0] = 0.2e1 * rho[0] * t74 + 0.2e1 * t41;

  t80 = 0.82505922498838542062e0 * t12 + 0.50423905536180384686e-2 * sigma[0] * t18;
  t87 = -t47 * t80 / 0.15e2 + 0.22350810751008112982e-1 * t12 * t34 - 0.2e1 / 0.25e2 * t66 * t80;
  t91 = my_piecewise3(t4, 0, -0.2e1 / 0.3e1 * t8 * t9 * t87);
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vsigma[0] = 0.2e1 * rho[0] * t91;

  if(vrho != NULL && (p->info->flags & XC_FLAGS_NEEDS_LAPLACIAN) && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vlapl[0] = 0.0e0;

  t94 = 0.1e1 / t9 / rho[0];
  t95 = t7 * t94;
  t98 = my_piecewise3(t4, 0, 0.18485501104083811416e-2 * t95 * t34);
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vtau[0] = 0.2e1 * rho[0] * t98;

#ifndef XC_DONT_COMPILE_FXC

  if(order < 2) return;


  t107 = t21 * t21;
  t109 = 0.1e1 / t22 / t107;
  t110 = t55 * t55;
  t115 = sigma[0] / t16 / rho[0];
  t117 = t16 * t16;
  t121 = 0.99007106998606250476e1 * t115 + 0.10589020162597880784e0 * t15 / t117;
  t130 = t61 * t65;
  t135 = t32 / t33 / t107;
  t145 = my_piecewise3(t4, 0, t8 * t94 * t37 / 0.6e1 - 0.2e1 / 0.3e1 * t8 * t42 * t69 - 0.2e1 / 0.3e1 * t8 * t9 * (0.16e2 / 0.225e3 * t109 * t110 - t47 * t121 / 0.15e2 + 0.2e1 / 0.5e1 * (0.67052432253024338944e0 * t115 - 0.73720569640165919526e-1 * tau[0] * t48) * t34 - 0.4e1 / 0.25e2 * t130 * t55 + 0.12e2 / 0.125e3 * t135 * t110 - 0.2e1 / 0.25e2 * t66 * t121));
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[0] = 0.2e1 * rho[0] * t145 + 0.4e1 * t74;

  t157 = -0.24751776749651562619e1 * t48 - 0.30254343321708230812e-1 * sigma[0] * t52;
  t162 = t12 * t65;
  t177 = my_piecewise3(t4, 0, -t8 * t42 * t87 / 0.3e1 - 0.2e1 / 0.3e1 * t8 * t9 * (0.16e2 / 0.225e3 * t109 * t80 * t55 - t47 * t157 / 0.15e2 - 0.67052432253024338946e-1 * t48 * t34 - 0.44701621502016225964e-2 * t162 * t55 - 0.2e1 / 0.25e2 * t130 * t80 + 0.12e2 / 0.125e3 * t135 * t80 * t55 - 0.2e1 / 0.25e2 * t66 * t157));
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rhosigma[0] = 0.2e1 * rho[0] * t177 + 0.2e1 * t91;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_NEEDS_LAPLACIAN) && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rholapl[0] = 0.0e0;

  t189 = my_piecewise3(t4, 0, -0.27728251656125717124e-2 * t7 / t9 / t10 * t34 - 0.36971002208167622832e-3 * t95 * t65 * t55);
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rhotau[0] = 0.2e1 * rho[0] * t189 + 0.2e1 * t98;

  t192 = t80 * t80;
  t207 = my_piecewise3(t4, 0, -0.2e1 / 0.3e1 * t8 * t9 * (0.16e2 / 0.225e3 * t109 * t192 - 0.33615937024120256457e-3 * t47 * t18 - 0.89403243004032451928e-2 * t162 * t80 + 0.12e2 / 0.125e3 * t135 * t192 - 0.40339124428944307749e-3 * t66 * t18));
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigma2[0] = 0.2e1 * rho[0] * t207;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_NEEDS_LAPLACIAN) && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigmalapl[0] = 0.0e0;

  t212 = my_piecewise3(t4, 0, -0.36971002208167622832e-3 * t95 * t65 * t80);
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigmatau[0] = 0.2e1 * rho[0] * t212;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_NEEDS_LAPLACIAN) && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2lapl2[0] = 0.0e0;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_NEEDS_LAPLACIAN) && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2lapltau[0] = 0.0e0;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2tau2[0] = 0.0e0;

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
  double t19, t20, t22, t25, t26, t29, t33, t36;
  double t37, t38, t41, t45, t46, t47, t48, t49;
  double t50, t51, t52, t53, t54, t56, t57, t59;
  double t62, t63, t66, t72, t73, t74, t77, t81;

#ifndef XC_DONT_COMPILE_VXC
  double t82, t83, t87, t88, t90, t92, t93, t94;
  double t95, t96, t98, t99, t103, t104, t105, t108;
  double t111, t117, t121, t122, t125, t130, t131, t133;
  double t134, t136, t137, t138, t143, t146, t147, t148;
  double t152, t153, t157, t158, t160, t161, t165, t166;
  double t167, t170, t173, t179, t183, t184, t187, t192;
  double t198, t205, t209, t213, t220, t224, t225, t226;
  double t227, t230, t231, t232, t233, t236;

#ifndef XC_DONT_COMPILE_FXC
  double t239, t240, t250, t252, t255, t258, t259, t260;
  double t268, t269, t276, t278, t279, t284, t286, t290;
  double t299, t304, t314, t318, t320, t323, t326, t328;
  double t330, t336, t346, t356, t357, t365, t368, t372;
  double t379, t385, t397, t406, t419, t421, t422, t427;
  double t429, t433, t442, t447, t457, t464, t476, t481;
  double t496, t499, t504, t510, t526, t531, t546, t553;
  double t558, t563, t567, t571, t576, t585, t590, t592;
  double t607, t608, t623, t627, t631;
#endif

#endif

#endif



  t2 = 0.101e1 * p->threshold_dens;
  t3 = rho[0] <= t2;
  t4 = sqrt(M_PI);
  t5 = 0.1e1 / t4;
  t6 = t5 * rho[0];
  t7 = rho[0] + rho[1];
  t8 = sqrt(t7);
  t9 = 0.1e1 / t8;
  t10 = 0.1e1 / t7;
  t11 = rho[0] * t10;
  t12 = sqrt(t11);
  t13 = t9 * t12;
  t14 = rho[0] * rho[0];
  t15 = t14 * rho[0];
  t16 = 0.1e1 / t15;
  t17 = sigma[0] * t16;
  t19 = sigma[0] * sigma[0];
  t20 = t14 * t14;
  t22 = 0.1e1 / t20 / t14;
  t25 = 0.1e1 + 0.41252961249419271031e0 * t17 + 0.63029881920225480858e-3 * t19 * t22;
  t26 = pow(t25, 0.1e1 / 0.15e2);
  t29 = 0.1e1 / t14;
  t33 = 0.1e1 / M_PI;
  t36 = 0.1e1 + 0.27938513438760141227e-1 * t17 + (-0.7720000000000000000e-1 * tau[0] * t29 - 0.11596246802930644802e2) * t33 / 0.4e1;
  t37 = pow(t25, 0.1e1 / 0.5e1);
  t38 = 0.1e1 / t37;
  t41 = 0.1e1 / t26 + 0.2e1 / 0.5e1 * t36 * t38;
  t45 = my_piecewise3(t3, 0, -0.8e1 / 0.3e1 * t6 * t13 * t41);
  t46 = rho[1] <= t2;
  t47 = t5 * rho[1];
  t48 = rho[1] * t10;
  t49 = sqrt(t48);
  t50 = t9 * t49;
  t51 = rho[1] * rho[1];
  t52 = t51 * rho[1];
  t53 = 0.1e1 / t52;
  t54 = sigma[2] * t53;
  t56 = sigma[2] * sigma[2];
  t57 = t51 * t51;
  t59 = 0.1e1 / t57 / t51;
  t62 = 0.1e1 + 0.41252961249419271031e0 * t54 + 0.63029881920225480858e-3 * t56 * t59;
  t63 = pow(t62, 0.1e1 / 0.15e2);
  t66 = 0.1e1 / t51;
  t72 = 0.1e1 + 0.27938513438760141227e-1 * t54 + (-0.7720000000000000000e-1 * tau[1] * t66 - 0.11596246802930644802e2) * t33 / 0.4e1;
  t73 = pow(t62, 0.1e1 / 0.5e1);
  t74 = 0.1e1 / t73;
  t77 = 0.1e1 / t63 + 0.2e1 / 0.5e1 * t72 * t74;
  t81 = my_piecewise3(t46, 0, -0.8e1 / 0.3e1 * t47 * t50 * t77);
  if(zk != NULL && (p->info->flags & XC_FLAGS_HAVE_EXC))
    zk[0] = t45 + t81;

#ifndef XC_DONT_COMPILE_VXC

  if(order < 1) return;


  t82 = t5 * t9;
  t83 = t12 * t41;
  t87 = 0.1e1 / t8 / t7;
  t88 = t87 * t12;
  t90 = t6 * t88 * t41;
  t92 = t6 * t9;
  t93 = 0.1e1 / t12;
  t94 = t93 * t41;
  t95 = t7 * t7;
  t96 = 0.1e1 / t95;
  t98 = -rho[0] * t96 + t10;
  t99 = t94 * t98;
  t103 = 0.1e1 / t26 / t25;
  t104 = 0.1e1 / t20;
  t105 = sigma[0] * t104;
  t108 = 0.1e1 / t20 / t15;
  t111 = -0.12375888374825781309e1 * t105 - 0.37817929152135288515e-2 * t19 * t108;
  t117 = -0.83815540316280423681e-1 * t105 + 0.12286761606694319921e-1 * tau[0] * t16;
  t121 = 0.1e1 / t37 / t25;
  t122 = t36 * t121;
  t125 = -t103 * t111 / 0.15e2 + 0.2e1 / 0.5e1 * t117 * t38 - 0.2e1 / 0.25e2 * t122 * t111;
  t130 = my_piecewise3(t3, 0, -0.8e1 / 0.3e1 * t82 * t83 + 0.4e1 / 0.3e1 * t90 - 0.4e1 / 0.3e1 * t92 * t99 - 0.8e1 / 0.3e1 * t6 * t13 * t125);
  t131 = t87 * t49;
  t133 = t47 * t131 * t77;
  t134 = t5 * t51;
  t136 = 0.1e1 / t8 / t95;
  t137 = 0.1e1 / t49;
  t138 = t136 * t137;
  t143 = my_piecewise3(t46, 0, 0.4e1 / 0.3e1 * t134 * t138 * t77 + 0.4e1 / 0.3e1 * t133);
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vrho[0] = t45 + t81 + t7 * (t130 + t143);

  t146 = t5 * t14;
  t147 = t136 * t93;
  t148 = t147 * t41;
  t152 = my_piecewise3(t3, 0, 0.4e1 / 0.3e1 * t146 * t148 + 0.4e1 / 0.3e1 * t90);
  t153 = t49 * t77;
  t157 = t47 * t9;
  t158 = t137 * t77;
  t160 = -rho[1] * t96 + t10;
  t161 = t158 * t160;
  t165 = 0.1e1 / t63 / t62;
  t166 = 0.1e1 / t57;
  t167 = sigma[2] * t166;
  t170 = 0.1e1 / t57 / t52;
  t173 = -0.12375888374825781309e1 * t167 - 0.37817929152135288515e-2 * t56 * t170;
  t179 = -0.83815540316280423681e-1 * t167 + 0.12286761606694319921e-1 * tau[1] * t53;
  t183 = 0.1e1 / t73 / t62;
  t184 = t72 * t183;
  t187 = -t165 * t173 / 0.15e2 + 0.2e1 / 0.5e1 * t179 * t74 - 0.2e1 / 0.25e2 * t184 * t173;
  t192 = my_piecewise3(t46, 0, -0.8e1 / 0.3e1 * t82 * t153 + 0.4e1 / 0.3e1 * t133 - 0.4e1 / 0.3e1 * t157 * t161 - 0.8e1 / 0.3e1 * t47 * t50 * t187);
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vrho[1] = t45 + t81 + t7 * (t152 + t192);

  t198 = 0.41252961249419271031e0 * t16 + 0.12605976384045096172e-2 * sigma[0] * t22;
  t205 = -t103 * t198 / 0.15e2 + 0.11175405375504056491e-1 * t16 * t38 - 0.2e1 / 0.25e2 * t122 * t198;
  t209 = my_piecewise3(t3, 0, -0.8e1 / 0.3e1 * t6 * t13 * t205);
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vsigma[0] = t7 * t209;

  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vsigma[1] = 0.0e0;

  t213 = 0.41252961249419271031e0 * t53 + 0.12605976384045096172e-2 * sigma[2] * t59;
  t220 = -t165 * t213 / 0.15e2 + 0.11175405375504056491e-1 * t53 * t74 - 0.2e1 / 0.25e2 * t184 * t213;
  t224 = my_piecewise3(t46, 0, -0.8e1 / 0.3e1 * t47 * t50 * t220);
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vsigma[2] = t7 * t224;

  if(vrho != NULL && (p->info->flags & XC_FLAGS_NEEDS_LAPLACIAN) && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vlapl[0] = 0.0e0;

  if(vrho != NULL && (p->info->flags & XC_FLAGS_NEEDS_LAPLACIAN) && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vlapl[1] = 0.0e0;

  t225 = 0.1e1 / rho[0];
  t226 = t225 * t9;
  t227 = t12 * t38;
  t230 = my_piecewise3(t3, 0, 0.36971002208167622832e-2 * t226 * t227);
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vtau[0] = t7 * t230;

  t231 = 0.1e1 / rho[1];
  t232 = t231 * t9;
  t233 = t49 * t74;
  t236 = my_piecewise3(t46, 0, 0.36971002208167622832e-2 * t232 * t233);
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vtau[1] = t7 * t236;

#ifndef XC_DONT_COMPILE_FXC

  if(order < 2) return;


  t239 = t5 * t87;
  t240 = t239 * t83;
  t250 = 0.2e1 * t6 * t136 * t12 * t41;
  t252 = t6 * t87 * t99;
  t255 = t6 * t88 * t125;
  t258 = 0.1e1 / t12 / t11;
  t259 = t258 * t41;
  t260 = t98 * t98;
  t268 = t95 * t7;
  t269 = 0.1e1 / t268;
  t276 = t25 * t25;
  t278 = 0.1e1 / t26 / t276;
  t279 = t111 * t111;
  t284 = sigma[0] / t20 / rho[0];
  t286 = t20 * t20;
  t290 = 0.49503553499303125236e1 * t284 + 0.26472550406494701960e-1 * t19 / t286;
  t299 = t117 * t121;
  t304 = t36 / t37 / t276;
  t314 = my_piecewise3(t3, 0, 0.8e1 / 0.3e1 * t240 - 0.8e1 / 0.3e1 * t82 * t99 - 0.16e2 / 0.3e1 * t82 * t12 * t125 - t250 + 0.4e1 / 0.3e1 * t252 + 0.8e1 / 0.3e1 * t255 + 0.2e1 / 0.3e1 * t92 * t259 * t260 - 0.8e1 / 0.3e1 * t92 * t93 * t125 * t98 - 0.4e1 / 0.3e1 * t92 * t94 * (0.2e1 * rho[0] * t269 - 0.2e1 * t96) - 0.8e1 / 0.3e1 * t6 * t13 * (0.16e2 / 0.225e3 * t278 * t279 - t103 * t290 / 0.15e2 + 0.2e1 / 0.5e1 * (0.33526216126512169472e0 * t284 - 0.36860284820082959763e-1 * tau[0] * t104) * t38 - 0.4e1 / 0.25e2 * t299 * t111 + 0.12e2 / 0.125e3 * t304 * t279 - 0.2e1 / 0.25e2 * t122 * t290));
  t318 = 0.2e1 * t47 * t136 * t49 * t77;
  t320 = 0.1e1 / t8 / t268;
  t323 = t134 * t320 * t137 * t77;
  t326 = t95 * t95;
  t328 = 0.1e1 / t8 / t326;
  t330 = 0.1e1 / t49 / t48;
  t336 = my_piecewise3(t46, 0, -t318 - 0.4e1 * t323 + 0.2e1 / 0.3e1 * t5 * t52 * t328 * t330 * t77);
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[0] = 0.2e1 * t130 + 0.2e1 * t143 + t7 * (t314 + t336);

  t346 = t146 * t320 * t93 * t41;
  t356 = my_piecewise3(t3, 0, 0.4e1 / 0.3e1 * t240 - t250 + 0.2e1 / 0.3e1 * t252 + 0.4e1 / 0.3e1 * t255 + 0.8e1 / 0.3e1 * t6 * t148 - 0.10e2 / 0.3e1 * t346 - 0.2e1 / 0.3e1 * t146 * t136 * t259 * t98 + 0.4e1 / 0.3e1 * t146 * t147 * t125);
  t357 = t239 * t153;
  t365 = t47 * t87 * t161;
  t368 = t330 * t77;
  t372 = rho[1] * t269;
  t379 = t47 * t131 * t187;
  t385 = my_piecewise3(t46, 0, 0.4e1 / 0.3e1 * t357 + 0.4e1 / 0.3e1 * t5 * t136 * t158 * rho[1] - t318 - 0.2e1 / 0.3e1 * t323 + 0.2e1 / 0.3e1 * t365 - 0.2e1 / 0.3e1 * t134 * t136 * t368 * t160 - 0.4e1 / 0.3e1 * t157 * t158 * (-t96 + 0.2e1 * t372) + 0.4e1 / 0.3e1 * t379 + 0.4e1 / 0.3e1 * t134 * t138 * t187);
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[1] = t130 + t143 + t152 + t192 + t7 * (t356 + t385);

  t397 = my_piecewise3(t3, 0, -t250 - 0.4e1 * t346 + 0.2e1 / 0.3e1 * t5 * t15 * t328 * t258 * t41);
  t406 = t160 * t160;
  t419 = t62 * t62;
  t421 = 0.1e1 / t63 / t419;
  t422 = t173 * t173;
  t427 = sigma[2] / t57 / rho[1];
  t429 = t57 * t57;
  t433 = 0.49503553499303125236e1 * t427 + 0.26472550406494701960e-1 * t56 / t429;
  t442 = t179 * t183;
  t447 = t72 / t73 / t419;
  t457 = my_piecewise3(t46, 0, 0.8e1 / 0.3e1 * t357 - 0.8e1 / 0.3e1 * t82 * t161 - 0.16e2 / 0.3e1 * t82 * t49 * t187 - t318 + 0.4e1 / 0.3e1 * t365 + 0.8e1 / 0.3e1 * t379 + 0.2e1 / 0.3e1 * t157 * t368 * t406 - 0.8e1 / 0.3e1 * t157 * t137 * t187 * t160 - 0.4e1 / 0.3e1 * t157 * t158 * (-0.2e1 * t96 + 0.2e1 * t372) - 0.8e1 / 0.3e1 * t47 * t50 * (0.16e2 / 0.225e3 * t421 * t422 - t165 * t433 / 0.15e2 + 0.2e1 / 0.5e1 * (0.33526216126512169472e0 * t427 - 0.36860284820082959763e-1 * tau[1] * t166) * t74 - 0.4e1 / 0.25e2 * t442 * t173 + 0.12e2 / 0.125e3 * t447 * t422 - 0.2e1 / 0.25e2 * t184 * t433));
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[2] = 0.2e1 * t152 + 0.2e1 * t192 + t7 * (t397 + t457);

  t464 = t6 * t88 * t205;
  t476 = -0.12375888374825781309e1 * t104 - 0.75635858304270577032e-2 * sigma[0] * t108;
  t481 = t16 * t121;
  t496 = my_piecewise3(t3, 0, -0.8e1 / 0.3e1 * t82 * t12 * t205 + 0.4e1 / 0.3e1 * t464 - 0.4e1 / 0.3e1 * t92 * t93 * t205 * t98 - 0.8e1 / 0.3e1 * t6 * t13 * (0.16e2 / 0.225e3 * t278 * t198 * t111 - t103 * t476 / 0.15e2 - 0.33526216126512169473e-1 * t104 * t38 - 0.22350810751008112982e-2 * t481 * t111 - 0.2e1 / 0.25e2 * t299 * t198 + 0.12e2 / 0.125e3 * t304 * t198 * t111 - 0.2e1 / 0.25e2 * t122 * t476));
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rhosigma[0] = t7 * t496 + t209;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rhosigma[1] = 0.0e0;

  t499 = t47 * t131 * t220;
  t504 = my_piecewise3(t46, 0, 0.4e1 / 0.3e1 * t134 * t138 * t220 + 0.4e1 / 0.3e1 * t499);
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rhosigma[2] = t7 * t504 + t224;

  t510 = my_piecewise3(t3, 0, 0.4e1 / 0.3e1 * t146 * t147 * t205 + 0.4e1 / 0.3e1 * t464);
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rhosigma[3] = t7 * t510 + t209;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rhosigma[4] = 0.0e0;

  t526 = -0.12375888374825781309e1 * t166 - 0.75635858304270577032e-2 * sigma[2] * t170;
  t531 = t53 * t183;
  t546 = my_piecewise3(t46, 0, -0.8e1 / 0.3e1 * t82 * t49 * t220 + 0.4e1 / 0.3e1 * t499 - 0.4e1 / 0.3e1 * t157 * t137 * t220 * t160 - 0.8e1 / 0.3e1 * t47 * t50 * (0.16e2 / 0.225e3 * t421 * t213 * t173 - t165 * t526 / 0.15e2 - 0.33526216126512169473e-1 * t166 * t74 - 0.22350810751008112982e-2 * t531 * t173 - 0.2e1 / 0.25e2 * t442 * t213 + 0.12e2 / 0.125e3 * t447 * t213 * t173 - 0.2e1 / 0.25e2 * t184 * t526));
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rhosigma[5] = t7 * t546 + t224;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_NEEDS_LAPLACIAN) && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rholapl[0] = 0.0e0;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_NEEDS_LAPLACIAN) && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rholapl[1] = 0.0e0;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_NEEDS_LAPLACIAN) && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rholapl[2] = 0.0e0;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_NEEDS_LAPLACIAN) && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rholapl[3] = 0.0e0;

  t553 = 0.18485501104083811416e-2 * t225 * t87 * t227;
  t558 = t12 * t121;
  t563 = my_piecewise3(t3, 0, -0.36971002208167622832e-2 * t29 * t9 * t227 - t553 + 0.18485501104083811416e-2 * t226 * t93 * t38 * t98 - 0.73942004416335245664e-3 * t226 * t558 * t111);
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rhotau[0] = t7 * t563 + t230;

  t567 = 0.18485501104083811416e-2 * t231 * t87 * t233;
  t571 = my_piecewise3(t46, 0, -t567 - 0.18485501104083811416e-2 * t138 * t74);
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rhotau[1] = t7 * t571 + t236;

  t576 = my_piecewise3(t3, 0, -t553 - 0.18485501104083811416e-2 * t147 * t38);
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rhotau[2] = t7 * t576 + t230;

  t585 = t49 * t183;
  t590 = my_piecewise3(t46, 0, -0.36971002208167622832e-2 * t66 * t9 * t233 - t567 + 0.18485501104083811416e-2 * t232 * t137 * t74 * t160 - 0.73942004416335245664e-3 * t232 * t585 * t173);
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rhotau[3] = t7 * t590 + t236;

  t592 = t198 * t198;
  t607 = my_piecewise3(t3, 0, -0.8e1 / 0.3e1 * t6 * t13 * (0.16e2 / 0.225e3 * t278 * t592 - 0.84039842560300641147e-4 * t103 * t22 - 0.44701621502016225964e-2 * t481 * t198 + 0.12e2 / 0.125e3 * t304 * t592 - 0.10084781107236076938e-3 * t122 * t22));
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigma2[0] = t7 * t607;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigma2[1] = 0.0e0;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigma2[2] = 0.0e0;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigma2[3] = 0.0e0;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigma2[4] = 0.0e0;

  t608 = t213 * t213;
  t623 = my_piecewise3(t46, 0, -0.8e1 / 0.3e1 * t47 * t50 * (0.16e2 / 0.225e3 * t421 * t608 - 0.84039842560300641147e-4 * t165 * t59 - 0.44701621502016225964e-2 * t531 * t213 + 0.12e2 / 0.125e3 * t447 * t608 - 0.10084781107236076938e-3 * t184 * t59));
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigma2[5] = t7 * t623;

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

  t627 = my_piecewise3(t3, 0, -0.73942004416335245664e-3 * t226 * t558 * t198);
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigmatau[0] = t7 * t627;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigmatau[1] = 0.0e0;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigmatau[2] = 0.0e0;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigmatau[3] = 0.0e0;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigmatau[4] = 0.0e0;

  t631 = my_piecewise3(t46, 0, -0.73942004416335245664e-3 * t232 * t585 * t213);
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigmatau[5] = t7 * t631;

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

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2tau2[0] = 0.0e0;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2tau2[1] = 0.0e0;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2tau2[2] = 0.0e0;

#ifndef XC_DONT_COMPILE_KXC

  if(order < 3) return;


#endif

#endif

#endif


}

