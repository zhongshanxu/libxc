/* 
  This file was generated automatically with ./scripts/maple2c.pl.
  Do not edit this file directly as it can be overwritten!!

  This Source Code Form is subject to the terms of the Mozilla Public
  License, v. 2.0. If a copy of the MPL was not distributed with this
  file, You can obtain one at http://mozilla.org/MPL/2.0/.

  Maple version     : Maple 2016 (X86 64 LINUX)
  Maple source      : ./maple/gga_exc/gga_x_sg4.mpl
  Type of functional: gga_exc
*/

#define maple2c_order 2
#define MAPLE2C_FLAGS (XC_FLAGS_I_HAVE_EXC | XC_FLAGS_I_HAVE_VXC | XC_FLAGS_I_HAVE_FXC)


static inline void
func_unpol(const xc_func_type *p, int order, const double *rho, const double *sigma , double *zk GGA_OUT_PARAMS_NO_EXC(XC_COMMA double *, ))
{

#ifndef XC_DONT_COMPILE_EXC
  double t3, t4, t5, t7, t8, t9, t10, t11;
  double t12, t13, t14, t15, t16, t17, t18, t19;
  double t21, t23, t25, t26, t27, t30, t32, t33;
  double t34, t36, t37, t38, t41, t45, t46, t50;
  double t53, t57;

#ifndef XC_DONT_COMPILE_VXC
  double t58, t62, t63, t65, t67, t70, t71, t73;
  double t74, t75, t79, t83, t85, t86, t90, t95;
  double t102, t103, t107, t111, t115;

#ifndef XC_DONT_COMPILE_FXC
  double t127, t133, t142, t143, t146, t147, t158, t168;
  double t170, t171, t186, t226, t257;
#endif

#endif

#endif



  t3 = rho[0] / 0.2e1 <= 0.101e1 * p->threshold_dens;
  t4 = M_CBRT3;
  t5 = M_CBRTPI;
  t7 = t4 / t5;
  t8 = POW_1_3(rho[0]);
  t9 = M_CBRT6;
  t10 = M_PI * M_PI;
  t11 = POW_1_3(t10);
  t12 = t11 * t11;
  t13 = 0.1e1 / t12;
  t14 = t9 * t13;
  t15 = M_CBRT2;
  t16 = t15 * t15;
  t17 = sigma[0] * t16;
  t18 = rho[0] * rho[0];
  t19 = t8 * t8;
  t21 = 0.1e1 / t19 / t18;
  t23 = t14 * t17 * t21;
  t25 = 0.1e1 - 0.31233982573039466940e-2 * t23;
  t26 = t9 * t9;
  t27 = t10 * t10;
  t30 = 0.1e1 / t11 / t27 / t10;
  t32 = sigma[0] * sigma[0];
  t33 = t32 * t32;
  t34 = t33 * sigma[0];
  t36 = t18 * t18;
  t37 = t36 * rho[0];
  t38 = t36 * t36;
  t41 = 0.1e1 / t8 / t38 / t37;
  t45 = 0.1e1 - 0.14268491327672029207e-10 * t26 * t30 * t34 * t15 * t41;
  t46 = 0.1e1 / t45;
  t50 = 0.1e1 + 0.37270642201834862386e-1 * t23;
  t53 = 0.18040000000000000000e1 - 0.56028717948717948718e0 * t25 * t46 - 0.24371282051282051282e0 / t50;
  t57 = my_piecewise3(t3, 0, -0.3e1 / 0.8e1 * t7 * t8 * t53);
  if(zk != NULL && (p->info->flags & XC_FLAGS_HAVE_EXC))
    zk[0] = 0.2e1 * t57;

#ifndef XC_DONT_COMPILE_VXC

  if(order < 1) return;


  t58 = 0.1e1 / t19;
  t62 = t14 * sigma[0];
  t63 = t18 * rho[0];
  t65 = 0.1e1 / t19 / t63;
  t67 = t16 * t65 * t46;
  t70 = t45 * t45;
  t71 = 0.1e1 / t70;
  t73 = t25 * t71 * t26;
  t74 = t30 * t34;
  t75 = t36 * t18;
  t79 = t15 / t8 / t38 / t75;
  t83 = t50 * t50;
  t85 = 0.1e1 / t83 * t9;
  t86 = t85 * t13;
  t90 = -0.46666666666666666667e-2 * t62 * t67 + 0.10659270348691522892e-9 * t73 * t74 * t79 - 0.24222222222222222223e-1 * t86 * t17 * t65;
  t95 = my_piecewise3(t3, 0, -t7 * t58 * t53 / 0.8e1 - 0.3e1 / 0.8e1 * t7 * t8 * t90);
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vrho[0] = 0.2e1 * rho[0] * t95 + 0.2e1 * t57;

  t102 = t30 * t33;
  t103 = t15 * t41;
  t107 = t13 * t16;
  t111 = 0.17500000000000000000e-2 * t14 * t16 * t21 * t46 - 0.39972263807593210847e-10 * t73 * t102 * t103 + 0.90833333333333333335e-2 * t85 * t107 * t21;
  t115 = my_piecewise3(t3, 0, -0.3e1 / 0.8e1 * t7 * t8 * t111);
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vsigma[0] = 0.2e1 * rho[0] * t115;

#ifndef XC_DONT_COMPILE_FXC

  if(order < 2) return;


  t127 = 0.1e1 / t19 / t36;
  t133 = t38 * t38;
  t142 = t25 / t70 / t45 * t9;
  t143 = t27 * t27;
  t146 = 0.1e1 / t12 / t143 / t27;
  t147 = t33 * t33;
  t158 = t36 * t63;
  t168 = 0.1e1 / t83 / t50 * t26;
  t170 = 0.1e1 / t11 / t10;
  t171 = t168 * t170;
  t186 = my_piecewise3(t3, 0, t7 / t19 / rho[0] * t53 / 0.12e2 - t7 * t58 * t90 / 0.4e1 - 0.3e1 / 0.8e1 * t7 * t8 * (0.17111111111111111111e-1 * t62 * t16 * t127 * t46 + 0.22456177547295639295e-14 * t33 * t32 / t133 / t18 * t71 - 0.24334673044738656188e-18 * t142 * t146 * t147 * t32 * t16 / t19 / t133 / t38 / t36 - 0.15278287499791182812e-8 * t73 * t74 * t15 / t8 / t38 / t158 - 0.96296296296296296303e-2 * t171 * t32 * t15 / t8 / t158 + 0.88814814814814814818e-1 * t86 * t17 * t127));
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[0] = 0.2e1 * rho[0] * t186 + 0.4e1 * t95;

  t226 = my_piecewise3(t3, 0, -t7 * t58 * t111 / 0.8e1 - 0.3e1 / 0.8e1 * t7 * t8 * (-0.46666666666666666667e-2 * t14 * t67 - 0.84210665802358647355e-15 / t133 / rho[0] * t71 * t34 + 0.91255023917769960709e-19 * t142 * t146 * t147 * sigma[0] * t16 / t19 / t133 / t38 / t63 + 0.53296351743457614463e-9 * t73 * t102 * t79 + 0.36111111111111111113e-2 * t171 * t15 / t8 / t75 * sigma[0] - 0.24222222222222222223e-1 * t85 * t107 * t65));
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rhosigma[0] = 0.2e1 * rho[0] * t226 + 0.2e1 * t115;

  t257 = my_piecewise3(t3, 0, -0.3e1 / 0.8e1 * t7 * t8 * (0.31578999675884492758e-15 / t133 * t71 * t33 - 0.34220633969163735268e-19 * t142 * t146 * t147 * t16 / t19 / t133 / t38 / t18 - 0.15988905523037284339e-9 * t73 * t30 * t32 * sigma[0] * t103 - 0.13541666666666666667e-2 * t168 * t170 * t15 / t8 / t37));
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigma2[0] = 0.2e1 * rho[0] * t257;

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
  double t27, t29, t31, t32, t33, t36, t37, t38;
  double t39, t40, t41, t42, t43, t46, t50, t51;
  double t55, t58, t59, t63, t64, t65, t66, t67;
  double t68, t69, t70, t72, t74, t76, t77, t78;
  double t79, t80, t81, t82, t85, t89, t90, t94;
  double t97, t98, t102;

#ifndef XC_DONT_COMPILE_VXC
  double t103, t108, t109, t112, t114, t115, t116, t117;
  double t118, t119, t121, t122, t123, t126, t128, t133;
  double t134, t136, t137, t138, t141, t145, t147, t148;
  double t152, t153, t158, t159, t162, t164, t165, t166;
  double t167, t168, t173, t176, t177, t182, t183, t188;
  double t189, t191, t192, t193, t196, t198, t203, t204;
  double t206, t207, t208, t211, t215, t217, t218, t222;
  double t223, t228, t234, t241, t242, t246, t250, t257;
  double t258, t262;

#ifndef XC_DONT_COMPILE_FXC
  double t267, t273, t276, t279, t282, t284, t286, t295;
  double t296, t305, t311, t320, t321, t324, t325, t335;
  double t344, t346, t362, t366, t368, t371, t373, t375;
  double t378, t384, t395, t408, t411, t421, t429, t437;
  double t444, t456, t464, t480, t486, t495, t496, t506;
  double t515, t531, t539, t579, t583, t589, t596, t640;
  double t669, t697;
#endif

#endif

#endif



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
  t18 = M_PI * M_PI;
  t19 = POW_1_3(t18);
  t20 = t19 * t19;
  t21 = 0.1e1 / t20;
  t22 = t17 * t21;
  t23 = rho[0] * rho[0];
  t24 = POW_1_3(rho[0]);
  t25 = t24 * t24;
  t27 = 0.1e1 / t25 / t23;
  t29 = t22 * sigma[0] * t27;
  t31 = 0.1e1 - 0.31233982573039466940e-2 * t29;
  t32 = t17 * t17;
  t33 = t18 * t18;
  t36 = 0.1e1 / t19 / t33 / t18;
  t37 = t32 * t36;
  t38 = sigma[0] * sigma[0];
  t39 = t38 * t38;
  t40 = t39 * sigma[0];
  t41 = t23 * t23;
  t42 = t41 * rho[0];
  t43 = t41 * t41;
  t46 = 0.1e1 / t24 / t43 / t42;
  t50 = 0.1e1 - 0.17835614159590036509e-11 * t37 * t40 * t46;
  t51 = 0.1e1 / t50;
  t55 = 0.1e1 + 0.37270642201834862386e-1 * t29;
  t58 = 0.18040000000000000000e1 - 0.56028717948717948718e0 * t31 * t51 - 0.24371282051282051282e0 / t55;
  t59 = t16 * t58;
  t63 = my_piecewise3(t2, 0, -0.3e1 / 0.4e1 * t8 * t13 * t59);
  t64 = rho[1] <= t1;
  t65 = rho[1] * t12;
  t66 = rho[1] * t14;
  t67 = POW_1_3(t66);
  t68 = rho[1] * rho[1];
  t69 = POW_1_3(rho[1]);
  t70 = t69 * t69;
  t72 = 0.1e1 / t70 / t68;
  t74 = t22 * sigma[2] * t72;
  t76 = 0.1e1 - 0.31233982573039466940e-2 * t74;
  t77 = sigma[2] * sigma[2];
  t78 = t77 * t77;
  t79 = t78 * sigma[2];
  t80 = t68 * t68;
  t81 = t80 * rho[1];
  t82 = t80 * t80;
  t85 = 0.1e1 / t69 / t82 / t81;
  t89 = 0.1e1 - 0.17835614159590036509e-11 * t37 * t79 * t85;
  t90 = 0.1e1 / t89;
  t94 = 0.1e1 + 0.37270642201834862386e-1 * t74;
  t97 = 0.18040000000000000000e1 - 0.56028717948717948718e0 * t76 * t90 - 0.24371282051282051282e0 / t94;
  t98 = t67 * t97;
  t102 = my_piecewise3(t64, 0, -0.3e1 / 0.4e1 * t8 * t65 * t98);
  if(zk != NULL && (p->info->flags & XC_FLAGS_HAVE_EXC))
    zk[0] = t63 + t102;

#ifndef XC_DONT_COMPILE_VXC

  if(order < 1) return;


  t103 = t12 * t16;
  t108 = 0.1e1 / t11 / t9;
  t109 = rho[0] * t108;
  t112 = t8 * t109 * t59 / 0.2e1;
  t114 = t6 * t7 * rho[0];
  t115 = t16 * t16;
  t116 = 0.1e1 / t115;
  t117 = t12 * t116;
  t118 = t9 * t9;
  t119 = 0.1e1 / t118;
  t121 = -rho[0] * t119 + t14;
  t122 = t58 * t121;
  t123 = t117 * t122;
  t126 = t23 * rho[0];
  t128 = 0.1e1 / t25 / t126;
  t133 = t50 * t50;
  t134 = 0.1e1 / t133;
  t136 = t31 * t134 * t32;
  t137 = t36 * t40;
  t138 = t41 * t23;
  t141 = 0.1e1 / t24 / t43 / t138;
  t145 = t55 * t55;
  t147 = 0.1e1 / t145 * t17;
  t148 = t21 * sigma[0];
  t152 = -0.46666666666666666667e-2 * t22 * sigma[0] * t128 * t51 + 0.13324087935864403616e-10 * t136 * t137 * t141 - 0.24222222222222222223e-1 * t147 * t148 * t128;
  t153 = t16 * t152;
  t158 = my_piecewise3(t2, 0, -0.3e1 / 0.4e1 * t8 * t103 * t58 + t112 - t114 * t123 / 0.4e1 - 0.3e1 / 0.4e1 * t8 * t13 * t153);
  t159 = rho[1] * t108;
  t162 = t8 * t159 * t98 / 0.2e1;
  t164 = 0.1e1 / t11 / t118;
  t165 = t68 * t164;
  t166 = t67 * t67;
  t167 = 0.1e1 / t166;
  t168 = t167 * t97;
  t173 = my_piecewise3(t64, 0, t162 + t8 * t165 * t168 / 0.4e1);
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vrho[0] = t63 + t102 + t9 * (t158 + t173);

  t176 = t23 * t164;
  t177 = t116 * t58;
  t182 = my_piecewise3(t2, 0, t112 + t8 * t176 * t177 / 0.4e1);
  t183 = t12 * t67;
  t188 = t6 * t7 * rho[1];
  t189 = t12 * t167;
  t191 = -rho[1] * t119 + t14;
  t192 = t97 * t191;
  t193 = t189 * t192;
  t196 = t68 * rho[1];
  t198 = 0.1e1 / t70 / t196;
  t203 = t89 * t89;
  t204 = 0.1e1 / t203;
  t206 = t76 * t204 * t32;
  t207 = t36 * t79;
  t208 = t80 * t68;
  t211 = 0.1e1 / t69 / t82 / t208;
  t215 = t94 * t94;
  t217 = 0.1e1 / t215 * t17;
  t218 = t21 * sigma[2];
  t222 = -0.46666666666666666667e-2 * t22 * sigma[2] * t198 * t90 + 0.13324087935864403616e-10 * t206 * t207 * t211 - 0.24222222222222222223e-1 * t217 * t218 * t198;
  t223 = t67 * t222;
  t228 = my_piecewise3(t64, 0, -0.3e1 / 0.4e1 * t8 * t183 * t97 + t162 - t188 * t193 / 0.4e1 - 0.3e1 / 0.4e1 * t8 * t65 * t223);
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vrho[1] = t63 + t102 + t9 * (t182 + t228);

  t234 = t36 * t39;
  t241 = 0.17500000000000000000e-2 * t22 * t27 * t51 - 0.49965329759491513560e-11 * t136 * t234 * t46 + 0.90833333333333333335e-2 * t147 * t21 * t27;
  t242 = t16 * t241;
  t246 = my_piecewise3(t2, 0, -0.3e1 / 0.4e1 * t8 * t13 * t242);
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vsigma[0] = t9 * t246;

  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vsigma[1] = 0.0e0;

  t250 = t36 * t78;
  t257 = 0.17500000000000000000e-2 * t22 * t72 * t90 - 0.49965329759491513560e-11 * t206 * t250 * t85 + 0.90833333333333333335e-2 * t217 * t21 * t72;
  t258 = t67 * t257;
  t262 = my_piecewise3(t64, 0, -0.3e1 / 0.4e1 * t8 * t65 * t258);
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vsigma[2] = t9 * t262;

#ifndef XC_DONT_COMPILE_FXC

  if(order < 2) return;


  t267 = t8 * t108 * t16 * t58;
  t273 = rho[0] * t164;
  t276 = 0.5e1 / 0.6e1 * t8 * t273 * t59;
  t279 = t114 * t108 * t116 * t122;
  t282 = t8 * t109 * t153;
  t284 = 0.1e1 / t115 / t15;
  t286 = t121 * t121;
  t295 = t118 * t9;
  t296 = 0.1e1 / t295;
  t305 = 0.1e1 / t25 / t41;
  t311 = t43 * t43;
  t320 = t31 / t133 / t50 * t17;
  t321 = t33 * t33;
  t324 = 0.1e1 / t20 / t321 / t33;
  t325 = t39 * t39;
  t335 = t41 * t126;
  t344 = 0.1e1 / t145 / t55 * t32;
  t346 = 0.1e1 / t19 / t18;
  t362 = my_piecewise3(t2, 0, t267 - t8 * t123 / 0.2e1 - 0.3e1 / 0.2e1 * t8 * t103 * t152 - t276 + t279 / 0.3e1 + t282 + t114 * t12 * t284 * t58 * t286 / 0.6e1 - t114 * t117 * t152 * t121 / 0.2e1 - t114 * t117 * t58 * (0.2e1 * rho[0] * t296 - 0.2e1 * t119) / 0.4e1 - 0.3e1 / 0.4e1 * t8 * t13 * t16 * (0.17111111111111111111e-1 * t22 * sigma[0] * t305 * t51 + 0.14035110967059774560e-15 * t39 * t38 / t311 / t23 * t134 - 0.38022926632404150298e-20 * t320 * t324 * t325 * t38 / t25 / t311 / t43 / t41 - 0.19097859374738978516e-9 * t136 * t137 / t24 / t43 / t335 - 0.48148148148148148152e-2 * t344 * t346 * t38 / t24 / t335 + 0.88814814814814814818e-1 * t147 * t148 * t305));
  t366 = 0.5e1 / 0.6e1 * t8 * rho[1] * t164 * t98;
  t368 = 0.1e1 / t11 / t295;
  t371 = t8 * t68 * t368 * t168;
  t373 = t118 * t118;
  t375 = 0.1e1 / t11 / t373;
  t378 = 0.1e1 / t166 / t66;
  t384 = my_piecewise3(t64, 0, -t366 - 0.5e1 / 0.6e1 * t371 + t8 * t196 * t375 * t378 * t97 / 0.6e1);
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[0] = 0.2e1 * t158 + 0.2e1 * t173 + t9 * (t362 + t384);

  t395 = t8 * t23 * t368 * t177;
  t408 = my_piecewise3(t2, 0, t267 / 0.2e1 - t276 + t279 / 0.6e1 + t282 / 0.2e1 + t8 * t273 * t177 / 0.2e1 - 0.2e1 / 0.3e1 * t395 - t6 * t7 * t23 * t164 * t284 * t122 / 0.6e1 + t8 * t176 * t116 * t152 / 0.4e1);
  t411 = t8 * t108 * t67 * t97;
  t421 = t188 * t108 * t167 * t192;
  t429 = rho[1] * t296;
  t437 = t8 * t159 * t223;
  t444 = my_piecewise3(t64, 0, t411 / 0.2e1 + t8 * t164 * t167 * t97 * rho[1] / 0.4e1 - t366 - t371 / 0.6e1 + t421 / 0.6e1 - t6 * t7 * t68 * t164 * t378 * t192 / 0.6e1 - t188 * t189 * t97 * (-t119 + 0.2e1 * t429) / 0.4e1 + t437 / 0.2e1 + t8 * t165 * t167 * t222 / 0.4e1);
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[1] = t158 + t173 + t182 + t228 + t9 * (t408 + t444);

  t456 = my_piecewise3(t2, 0, -t276 - 0.5e1 / 0.6e1 * t395 + t8 * t126 * t375 * t284 * t58 / 0.6e1);
  t464 = t191 * t191;
  t480 = 0.1e1 / t70 / t80;
  t486 = t82 * t82;
  t495 = t76 / t203 / t89 * t17;
  t496 = t78 * t78;
  t506 = t80 * t196;
  t515 = 0.1e1 / t215 / t94 * t32;
  t531 = my_piecewise3(t64, 0, t411 - t8 * t193 / 0.2e1 - 0.3e1 / 0.2e1 * t8 * t183 * t222 - t366 + t421 / 0.3e1 + t437 + t188 * t12 * t378 * t97 * t464 / 0.6e1 - t188 * t189 * t222 * t191 / 0.2e1 - t188 * t189 * t97 * (-0.2e1 * t119 + 0.2e1 * t429) / 0.4e1 - 0.3e1 / 0.4e1 * t8 * t65 * t67 * (0.17111111111111111111e-1 * t22 * sigma[2] * t480 * t90 + 0.14035110967059774560e-15 * t78 * t77 / t486 / t68 * t204 - 0.38022926632404150298e-20 * t495 * t324 * t496 * t77 / t70 / t486 / t82 / t80 - 0.19097859374738978516e-9 * t206 * t207 / t69 / t82 / t506 - 0.48148148148148148152e-2 * t515 * t346 * t77 / t69 / t506 + 0.88814814814814814818e-1 * t217 * t218 * t480));
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[2] = 0.2e1 * t182 + 0.2e1 * t228 + t9 * (t456 + t531);

  t539 = t8 * t109 * t242 / 0.2e1;
  t579 = my_piecewise3(t2, 0, -0.3e1 / 0.4e1 * t8 * t103 * t241 + t539 - t114 * t117 * t241 * t121 / 0.4e1 - 0.3e1 / 0.4e1 * t8 * t13 * t16 * (-0.46666666666666666667e-2 * t22 * t128 * t51 - 0.52631666126474154598e-16 / t311 / rho[0] * t134 * t40 + 0.14258597487151556362e-20 * t320 * t324 * t325 * sigma[0] / t25 / t311 / t43 / t126 + 0.66620439679322018080e-10 * t136 * t234 * t141 + 0.18055555555555555557e-2 * t344 * t346 / t24 / t138 * sigma[0] - 0.24222222222222222223e-1 * t147 * t21 * t128));
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rhosigma[0] = t9 * t579 + t246;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rhosigma[1] = 0.0e0;

  t583 = t8 * t159 * t258 / 0.2e1;
  t589 = my_piecewise3(t64, 0, t583 + t8 * t165 * t167 * t257 / 0.4e1);
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rhosigma[2] = t9 * t589 + t262;

  t596 = my_piecewise3(t2, 0, t539 + t8 * t176 * t116 * t241 / 0.4e1);
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rhosigma[3] = t9 * t596 + t246;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rhosigma[4] = 0.0e0;

  t640 = my_piecewise3(t64, 0, -0.3e1 / 0.4e1 * t8 * t183 * t257 + t583 - t188 * t189 * t257 * t191 / 0.4e1 - 0.3e1 / 0.4e1 * t8 * t65 * t67 * (-0.46666666666666666667e-2 * t22 * t198 * t90 - 0.52631666126474154598e-16 / t486 / rho[1] * t204 * t79 + 0.14258597487151556362e-20 * t495 * t324 * t496 * sigma[2] / t70 / t486 / t82 / t196 + 0.66620439679322018080e-10 * t206 * t250 * t211 + 0.18055555555555555557e-2 * t515 * t346 / t69 / t208 * sigma[2] - 0.24222222222222222223e-1 * t217 * t21 * t198));
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rhosigma[5] = t9 * t640 + t262;

  t669 = my_piecewise3(t2, 0, -0.3e1 / 0.4e1 * t8 * t13 * t16 * (0.19736874797427807974e-16 / t311 * t134 * t39 - 0.53469740576818336356e-21 * t320 * t324 * t325 / t25 / t311 / t43 / t23 - 0.19986131903796605424e-10 * t136 * t36 * t38 * sigma[0] * t46 - 0.67708333333333333336e-3 * t344 * t346 / t24 / t42));
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigma2[0] = t9 * t669;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigma2[1] = 0.0e0;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigma2[2] = 0.0e0;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigma2[3] = 0.0e0;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigma2[4] = 0.0e0;

  t697 = my_piecewise3(t64, 0, -0.3e1 / 0.4e1 * t8 * t65 * t67 * (0.19736874797427807974e-16 / t486 * t204 * t78 - 0.53469740576818336356e-21 * t495 * t324 * t496 / t70 / t486 / t82 / t68 - 0.19986131903796605424e-10 * t206 * t36 * t77 * sigma[2] * t85 - 0.67708333333333333336e-3 * t515 * t346 / t69 / t81));
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigma2[5] = t9 * t697;

#ifndef XC_DONT_COMPILE_KXC

  if(order < 3) return;


#endif

#endif

#endif


}

