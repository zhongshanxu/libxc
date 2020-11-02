/* 
  This file was generated automatically with ./scripts/maple2c.pl.
  Do not edit this file directly as it can be overwritten!!

  This Source Code Form is subject to the terms of the Mozilla Public
  License, v. 2.0. If a copy of the MPL was not distributed with this
  file, You can obtain one at http://mozilla.org/MPL/2.0/.

  Maple version     : Maple 2016 (X86 64 LINUX)
  Maple source      : ./maple/gga_exc/gga_x_lv_rpw86.mpl
  Type of functional: gga_exc
*/

#define maple2c_order 2
#define MAPLE2C_FLAGS (XC_FLAGS_I_HAVE_EXC | XC_FLAGS_I_HAVE_VXC | XC_FLAGS_I_HAVE_FXC)


static inline void
func_unpol(const xc_func_type *p, int order, const double *rho, const double *sigma , double *zk GGA_OUT_PARAMS_NO_EXC(XC_COMMA double *, ))
{

#ifndef XC_DONT_COMPILE_EXC
  double t3, t4, t5, t7, t8, t9, t10, t11;
  double t12, t14, t15, t16, t17, t18, t19, t21;
  double t23, t25, t26, t27, t28, t29, t30, t31;
  double t32, t33, t34, t37, t40, t41, t44, t49;
  double t50, t51, t52, t53, t56, t60;

#ifndef XC_DONT_COMPILE_VXC
  double t61, t65, t66, t68, t69, t70, t73, t74;
  double t75, t76, t77, t78, t83, t84, t86, t87;
  double t88, t89, t95, t100, t101, t104, t105, t106;
  double t108, t109, t110, t111, t112, t115, t120, t123;
  double t127, t134, t139, t140, t143, t144, t145, t148;
  double t152;

#ifndef XC_DONT_COMPILE_FXC
  double t164, t179, t182, t185, t187, t197, t198, t199;
  double t203, t204, t221, t228, t231, t236, t244, t252;
  double t255, t271, t291, t296, t305, t308, t317, t341;
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
  t14 = t9 / t12;
  t15 = M_CBRT2;
  t16 = t15 * t15;
  t17 = sigma[0] * t16;
  t18 = rho[0] * rho[0];
  t19 = t8 * t8;
  t21 = 0.1e1 / t19 / t18;
  t23 = t14 * t17 * t21;
  t25 = 0.1e1 + 0.39310185185185185185e-2 * t23;
  t26 = sigma[0] * sigma[0];
  t27 = t26 * sigma[0];
  t28 = t18 * t18;
  t29 = t28 * t28;
  t30 = 0.1e1 / t29;
  t31 = t27 * t30;
  t32 = 0.38818245400525142432e-6 * t31;
  t33 = 0.1e1 + t32;
  t34 = 0.1e1 / t33;
  t37 = t9 * t9;
  t40 = t37 / t11 / t10;
  t41 = t26 * t15;
  t44 = 0.1e1 / t8 / t28 / rho[0];
  t49 = 0.1e1 + 0.77125000000000000002e-1 * t23 + 0.60173611111111111112e-1 * t40 * t41 * t44 + 0.29051303949887962426e-5 * t31;
  t50 = pow(t49, 0.1e1 / 0.15e2);
  t51 = 0.115e1 + t32;
  t52 = 0.1e1 / t51;
  t53 = t50 * t52;
  t56 = t25 * t34 + 0.38818245400525142432e-6 * t31 * t53;
  t60 = my_piecewise3(t3, 0, -0.3e1 / 0.8e1 * t7 * t8 * t56);
  if(zk != NULL && (p->info->flags & XC_FLAGS_HAVE_EXC))
    zk[0] = 0.2e1 * t60;

#ifndef XC_DONT_COMPILE_VXC

  if(order < 1) return;


  t61 = 0.1e1 / t19;
  t65 = t14 * sigma[0];
  t66 = t18 * rho[0];
  t68 = 0.1e1 / t19 / t66;
  t69 = t16 * t68;
  t70 = t69 * t34;
  t73 = t33 * t33;
  t74 = 0.1e1 / t73;
  t75 = t25 * t74;
  t76 = t29 * rho[0];
  t77 = 0.1e1 / t76;
  t78 = t27 * t77;
  t83 = t50 * t50;
  t84 = t83 * t83;
  t86 = t84 * t84;
  t87 = t86 * t84 * t83;
  t88 = 0.1e1 / t87;
  t89 = t88 * t52;
  t95 = 0.1e1 / t8 / t28 / t18;
  t100 = -0.20566666666666666667e0 * t14 * t17 * t68 - 0.32092592592592592593e0 * t40 * t41 * t95 - 0.23241043159910369941e-4 * t78;
  t101 = t89 * t100;
  t104 = t26 * t26;
  t105 = t104 * t26;
  t106 = t29 * t29;
  t108 = 0.1e1 / t106 / rho[0];
  t109 = t105 * t108;
  t110 = t51 * t51;
  t111 = 0.1e1 / t110;
  t112 = t50 * t111;
  t115 = -0.10482716049382716049e-1 * t65 * t70 + 0.31054596320420113946e-5 * t75 * t78 - 0.31054596320420113946e-5 * t78 * t53 + 0.25878830267016761621e-7 * t31 * t101 + 0.12054849407803131005e-11 * t109 * t112;
  t120 = my_piecewise3(t3, 0, -t7 * t61 * t56 / 0.8e1 - 0.3e1 / 0.8e1 * t7 * t8 * t115);
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vrho[0] = 0.2e1 * rho[0] * t120 + 0.2e1 * t60;

  t123 = t16 * t21;
  t127 = t26 * t30;
  t134 = sigma[0] * t15;
  t139 = 0.77125000000000000002e-1 * t14 * t123 + 0.12034722222222222222e0 * t40 * t134 * t44 + 0.87153911849663887278e-5 * t127;
  t140 = t89 * t139;
  t143 = t104 * sigma[0];
  t144 = 0.1e1 / t106;
  t145 = t143 * t144;
  t148 = 0.39310185185185185185e-2 * t14 * t123 * t34 - 0.11645473620157542730e-5 * t75 * t127 + 0.11645473620157542730e-5 * t127 * t53 + 0.25878830267016761621e-7 * t31 * t140 - 0.45205685279261741269e-12 * t145 * t112;
  t152 = my_piecewise3(t3, 0, -0.3e1 / 0.8e1 * t7 * t8 * t148);
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vsigma[0] = 0.2e1 * rho[0] * t152;

#ifndef XC_DONT_COMPILE_FXC

  if(order < 2) return;


  t164 = 0.1e1 / t19 / t28;
  t179 = t25 / t73 / t33;
  t182 = t105 / t106 / t18;
  t185 = t29 * t18;
  t187 = t27 / t185;
  t197 = 0.1e1 / t87 / t49;
  t198 = t197 * t52;
  t199 = t100 * t100;
  t203 = t88 * t111;
  t204 = t203 * t100;
  t221 = t104 * t104;
  t228 = t50 / t110 / t51;
  t231 = 0.38436625514403292180e-1 * t65 * t16 * t164 * t34 - 0.65107303051033873458e-7 * t14 * t104 * t16 / t19 / t29 / t28 * t74 + 0.19287759052485009608e-10 * t179 * t182 - 0.27949136688378102551e-4 * t75 * t187 + 0.27949136688378102551e-4 * t187 * t53 - 0.41406128427226818594e-6 * t78 * t101 - 0.30137123519507827512e-10 * t182 * t112 - 0.24153574915882310846e-7 * t31 * t198 * t199 + 0.16073132543737508006e-12 * t109 * t204 + 0.25878830267016761621e-7 * t31 * t89 * (0.75411111111111111112e0 * t14 * t17 * t164 + 0.20325308641975308642e1 * t40 * t41 / t8 / t28 / t66 + 0.20916938843919332947e-3 * t187) + 0.74871696412556340349e-17 * t221 * sigma[0] / t106 / t185 * t228;
  t236 = my_piecewise3(t3, 0, t7 / t19 / rho[0] * t56 / 0.12e2 - t7 * t61 * t115 / 0.4e1 - 0.3e1 / 0.8e1 * t7 * t8 * t231);
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[0] = 0.2e1 * rho[0] * t236 + 0.4e1 * t120;

  t244 = t14 * t16;
  t252 = t143 * t108;
  t255 = t26 * t77;
  t271 = t203 * t139;
  t291 = -0.10482716049382716049e-1 * t14 * t70 + 0.24415238644137702548e-7 * t244 / t19 / t29 / t66 * t74 * t27 - 0.72329096446818786032e-11 * t179 * t252 + 0.93163788961260341840e-5 * t75 * t255 - 0.93163788961260341840e-5 * t255 * t53 + 0.77636490801050284867e-7 * t127 * t101 + 0.10849364467022817905e-10 * t252 * t112 - 0.20703064213613409297e-6 * t78 * t140 - 0.24153574915882310846e-7 * t31 * t197 * t52 * t139 * t100 + 0.80365662718687540032e-13 * t109 * t271 + 0.25878830267016761621e-7 * t31 * t89 * (-0.20566666666666666667e0 * t14 * t69 - 0.64185185185185185184e0 * t40 * t134 * t95 - 0.69723129479731109822e-4 * t255) - 0.30137123519507827513e-13 * t145 * t204 - 0.28076886154708627631e-17 * t221 / t106 / t76 * t228;
  t296 = my_piecewise3(t3, 0, -t7 * t61 * t148 / 0.8e1 - 0.3e1 / 0.8e1 * t7 * t8 * t291);
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rhosigma[0] = 0.2e1 * rho[0] * t296 + 0.2e1 * t152;

  t305 = t104 * t144;
  t308 = sigma[0] * t30;
  t317 = t139 * t139;
  t341 = my_piecewise3(t3, 0, -0.3e1 / 0.8e1 * t7 * t8 * (-0.91557144915516384556e-8 * t244 / t19 / t185 * t74 * t26 + 0.27123411167557044763e-11 * t179 * t305 - 0.23290947240315085460e-5 * t75 * t308 + 0.23290947240315085460e-5 * t308 * t53 + 0.15527298160210056973e-6 * t127 * t140 - 0.36164548223409393015e-11 * t305 * t112 - 0.24153574915882310846e-7 * t31 * t198 * t317 - 0.60274247039015655025e-13 * t145 * t271 + 0.25878830267016761621e-7 * t31 * t89 * (0.12034722222222222222e0 * t40 * t15 * t44 + 0.17430782369932777456e-4 * t308) + 0.10528832308015735362e-17 * t104 * t27 / t106 / t29 * t228));
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigma2[0] = 0.2e1 * rho[0] * t341;

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
  double t18, t19, t20, t22, t23, t24, t25, t27;
  double t29, t31, t32, t33, t34, t35, t36, t37;
  double t38, t39, t40, t43, t46, t49, t54, t55;
  double t56, t57, t58, t61, t62, t66, t67, t68;
  double t69, t70, t71, t72, t73, t75, t77, t79;
  double t80, t81, t82, t83, t84, t85, t86, t87;
  double t88, t93, t98, t99, t100, t101, t102, t105;
  double t106, t110;

#ifndef XC_DONT_COMPILE_VXC
  double t111, t116, t117, t120, t122, t123, t124, t125;
  double t126, t127, t129, t130, t131, t134, t136, t137;
  double t141, t142, t143, t144, t145, t146, t151, t152;
  double t154, t155, t156, t157, t162, t167, t168, t171;
  double t172, t173, t175, t176, t177, t178, t179, t182;
  double t183, t188, t189, t192, t194, t195, t196, t197;
  double t198, t203, t206, t207, t212, t213, t218, t219;
  double t221, t222, t223, t226, t228, t229, t233, t234;
  double t235, t236, t237, t238, t243, t244, t246, t247;
  double t248, t249, t254, t259, t260, t263, t264, t265;
  double t267, t268, t269, t270, t271, t274, t275, t280;
  double t286, t297, t298, t301, t302, t303, t306, t307;
  double t311, t315, t326, t327, t330, t331, t332, t335;
  double t336, t340;

#ifndef XC_DONT_COMPILE_FXC
  double t345, t351, t354, t357, t360, t362, t364, t373;
  double t374, t384, t397, t400, t403, t405, t415, t416;
  double t417, t421, t422, t438, t445, t448, t454, t458;
  double t460, t463, t465, t467, t470, t476, t487, t500;
  double t503, t513, t521, t529, t536, t548, t556, t573;
  double t586, t589, t592, t594, t604, t605, t606, t610;
  double t611, t627, t634, t637, t643, t651, t666, t669;
  double t685, t705, t711, t715, t721, t728, t747, t750;
  double t766, t786, t792, t800, t803, t812, t836, t843;
  double t846, t855, t879;
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
  t22 = t17 / t20;
  t23 = rho[0] * rho[0];
  t24 = POW_1_3(rho[0]);
  t25 = t24 * t24;
  t27 = 0.1e1 / t25 / t23;
  t29 = t22 * sigma[0] * t27;
  t31 = 0.1e1 + 0.39310185185185185185e-2 * t29;
  t32 = sigma[0] * sigma[0];
  t33 = t32 * sigma[0];
  t34 = t23 * t23;
  t35 = t34 * t34;
  t36 = 0.1e1 / t35;
  t37 = t33 * t36;
  t38 = 0.97045613501312856080e-7 * t37;
  t39 = 0.1e1 + t38;
  t40 = 0.1e1 / t39;
  t43 = t17 * t17;
  t46 = t43 / t19 / t18;
  t49 = 0.1e1 / t24 / t34 / rho[0];
  t54 = 0.1e1 + 0.77125000000000000002e-1 * t29 + 0.30086805555555555556e-1 * t46 * t32 * t49 + 0.72628259874719906066e-6 * t37;
  t55 = pow(t54, 0.1e1 / 0.15e2);
  t56 = 0.115e1 + t38;
  t57 = 0.1e1 / t56;
  t58 = t55 * t57;
  t61 = t31 * t40 + 0.97045613501312856080e-7 * t37 * t58;
  t62 = t16 * t61;
  t66 = my_piecewise3(t2, 0, -0.3e1 / 0.4e1 * t8 * t13 * t62);
  t67 = rho[1] <= t1;
  t68 = rho[1] * t12;
  t69 = rho[1] * t14;
  t70 = POW_1_3(t69);
  t71 = rho[1] * rho[1];
  t72 = POW_1_3(rho[1]);
  t73 = t72 * t72;
  t75 = 0.1e1 / t73 / t71;
  t77 = t22 * sigma[2] * t75;
  t79 = 0.1e1 + 0.39310185185185185185e-2 * t77;
  t80 = sigma[2] * sigma[2];
  t81 = t80 * sigma[2];
  t82 = t71 * t71;
  t83 = t82 * t82;
  t84 = 0.1e1 / t83;
  t85 = t81 * t84;
  t86 = 0.97045613501312856080e-7 * t85;
  t87 = 0.1e1 + t86;
  t88 = 0.1e1 / t87;
  t93 = 0.1e1 / t72 / t82 / rho[1];
  t98 = 0.1e1 + 0.77125000000000000002e-1 * t77 + 0.30086805555555555556e-1 * t46 * t80 * t93 + 0.72628259874719906066e-6 * t85;
  t99 = pow(t98, 0.1e1 / 0.15e2);
  t100 = 0.115e1 + t86;
  t101 = 0.1e1 / t100;
  t102 = t99 * t101;
  t105 = t79 * t88 + 0.97045613501312856080e-7 * t85 * t102;
  t106 = t70 * t105;
  t110 = my_piecewise3(t67, 0, -0.3e1 / 0.4e1 * t8 * t68 * t106);
  if(zk != NULL && (p->info->flags & XC_FLAGS_HAVE_EXC))
    zk[0] = t66 + t110;

#ifndef XC_DONT_COMPILE_VXC

  if(order < 1) return;


  t111 = t12 * t16;
  t116 = 0.1e1 / t11 / t9;
  t117 = rho[0] * t116;
  t120 = t8 * t117 * t62 / 0.2e1;
  t122 = t6 * t7 * rho[0];
  t123 = t16 * t16;
  t124 = 0.1e1 / t123;
  t125 = t12 * t124;
  t126 = t9 * t9;
  t127 = 0.1e1 / t126;
  t129 = -rho[0] * t127 + t14;
  t130 = t61 * t129;
  t131 = t125 * t130;
  t134 = t23 * rho[0];
  t136 = 0.1e1 / t25 / t134;
  t137 = sigma[0] * t136;
  t141 = t39 * t39;
  t142 = 0.1e1 / t141;
  t143 = t31 * t142;
  t144 = t35 * rho[0];
  t145 = 0.1e1 / t144;
  t146 = t33 * t145;
  t151 = t55 * t55;
  t152 = t151 * t151;
  t154 = t152 * t152;
  t155 = t154 * t152 * t151;
  t156 = 0.1e1 / t155;
  t157 = t156 * t57;
  t162 = 0.1e1 / t24 / t34 / t23;
  t167 = -0.20566666666666666667e0 * t22 * t137 - 0.16046296296296296297e0 * t46 * t32 * t162 - 0.58102607899775924853e-5 * t146;
  t168 = t157 * t167;
  t171 = t32 * t32;
  t172 = t171 * t32;
  t173 = t35 * t35;
  t175 = 0.1e1 / t173 / rho[0];
  t176 = t172 * t175;
  t177 = t56 * t56;
  t178 = 0.1e1 / t177;
  t179 = t55 * t178;
  t182 = -0.10482716049382716049e-1 * t22 * t137 * t40 + 0.77636490801050284864e-6 * t143 * t146 - 0.77636490801050284864e-6 * t146 * t58 + 0.64697075667541904053e-8 * t37 * t168 + 0.75342808798769568780e-13 * t176 * t179;
  t183 = t16 * t182;
  t188 = my_piecewise3(t2, 0, -0.3e1 / 0.4e1 * t8 * t111 * t61 + t120 - t122 * t131 / 0.4e1 - 0.3e1 / 0.4e1 * t8 * t13 * t183);
  t189 = rho[1] * t116;
  t192 = t8 * t189 * t106 / 0.2e1;
  t194 = 0.1e1 / t11 / t126;
  t195 = t71 * t194;
  t196 = t70 * t70;
  t197 = 0.1e1 / t196;
  t198 = t197 * t105;
  t203 = my_piecewise3(t67, 0, t192 + t8 * t195 * t198 / 0.4e1);
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vrho[0] = t66 + t110 + t9 * (t188 + t203);

  t206 = t23 * t194;
  t207 = t124 * t61;
  t212 = my_piecewise3(t2, 0, t120 + t8 * t206 * t207 / 0.4e1);
  t213 = t12 * t70;
  t218 = t6 * t7 * rho[1];
  t219 = t12 * t197;
  t221 = -rho[1] * t127 + t14;
  t222 = t105 * t221;
  t223 = t219 * t222;
  t226 = t71 * rho[1];
  t228 = 0.1e1 / t73 / t226;
  t229 = sigma[2] * t228;
  t233 = t87 * t87;
  t234 = 0.1e1 / t233;
  t235 = t79 * t234;
  t236 = t83 * rho[1];
  t237 = 0.1e1 / t236;
  t238 = t81 * t237;
  t243 = t99 * t99;
  t244 = t243 * t243;
  t246 = t244 * t244;
  t247 = t246 * t244 * t243;
  t248 = 0.1e1 / t247;
  t249 = t248 * t101;
  t254 = 0.1e1 / t72 / t82 / t71;
  t259 = -0.20566666666666666667e0 * t22 * t229 - 0.16046296296296296297e0 * t46 * t80 * t254 - 0.58102607899775924853e-5 * t238;
  t260 = t249 * t259;
  t263 = t80 * t80;
  t264 = t263 * t80;
  t265 = t83 * t83;
  t267 = 0.1e1 / t265 / rho[1];
  t268 = t264 * t267;
  t269 = t100 * t100;
  t270 = 0.1e1 / t269;
  t271 = t99 * t270;
  t274 = -0.10482716049382716049e-1 * t22 * t229 * t88 + 0.77636490801050284864e-6 * t235 * t238 - 0.77636490801050284864e-6 * t238 * t102 + 0.64697075667541904053e-8 * t85 * t260 + 0.75342808798769568780e-13 * t268 * t271;
  t275 = t70 * t274;
  t280 = my_piecewise3(t67, 0, -0.3e1 / 0.4e1 * t8 * t213 * t105 + t192 - t218 * t223 / 0.4e1 - 0.3e1 / 0.4e1 * t8 * t68 * t275);
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vrho[1] = t66 + t110 + t9 * (t212 + t280);

  t286 = t32 * t36;
  t297 = 0.77125000000000000002e-1 * t22 * t27 + 0.60173611111111111112e-1 * t46 * sigma[0] * t49 + 0.21788477962415971820e-5 * t286;
  t298 = t157 * t297;
  t301 = t171 * sigma[0];
  t302 = 0.1e1 / t173;
  t303 = t301 * t302;
  t306 = 0.39310185185185185185e-2 * t22 * t27 * t40 - 0.29113684050393856824e-6 * t143 * t286 + 0.29113684050393856824e-6 * t286 * t58 + 0.64697075667541904053e-8 * t37 * t298 - 0.28253553299538588292e-13 * t303 * t179;
  t307 = t16 * t306;
  t311 = my_piecewise3(t2, 0, -0.3e1 / 0.4e1 * t8 * t13 * t307);
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vsigma[0] = t9 * t311;

  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vsigma[1] = 0.0e0;

  t315 = t80 * t84;
  t326 = 0.77125000000000000002e-1 * t22 * t75 + 0.60173611111111111112e-1 * t46 * sigma[2] * t93 + 0.21788477962415971820e-5 * t315;
  t327 = t249 * t326;
  t330 = t263 * sigma[2];
  t331 = 0.1e1 / t265;
  t332 = t330 * t331;
  t335 = 0.39310185185185185185e-2 * t22 * t75 * t88 - 0.29113684050393856824e-6 * t235 * t315 + 0.29113684050393856824e-6 * t315 * t102 + 0.64697075667541904053e-8 * t85 * t327 - 0.28253553299538588292e-13 * t332 * t271;
  t336 = t70 * t335;
  t340 = my_piecewise3(t67, 0, -0.3e1 / 0.4e1 * t8 * t68 * t336);
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vsigma[2] = t9 * t340;

#ifndef XC_DONT_COMPILE_FXC

  if(order < 2) return;


  t345 = t8 * t116 * t16 * t61;
  t351 = rho[0] * t194;
  t354 = 0.5e1 / 0.6e1 * t8 * t351 * t62;
  t357 = t122 * t116 * t124 * t130;
  t360 = t8 * t117 * t183;
  t362 = 0.1e1 / t123 / t15;
  t364 = t129 * t129;
  t373 = t126 * t9;
  t374 = 0.1e1 / t373;
  t384 = sigma[0] / t25 / t34;
  t397 = t31 / t141 / t39;
  t400 = t172 / t173 / t23;
  t403 = t35 * t23;
  t405 = t33 / t403;
  t415 = 0.1e1 / t155 / t54;
  t416 = t415 * t57;
  t417 = t167 * t167;
  t421 = t156 * t178;
  t422 = t421 * t167;
  t438 = t171 * t171;
  t445 = t55 / t177 / t56;
  t448 = 0.38436625514403292180e-1 * t22 * t384 * t40 - 0.16276825762758468364e-7 * t22 * t171 / t25 / t35 / t34 * t142 + 0.12054849407803131005e-11 * t397 * t400 - 0.69872841720945256378e-5 * t143 * t405 + 0.69872841720945256378e-5 * t405 * t58 - 0.10351532106806704648e-6 * t146 * t168 - 0.18835702199692392195e-11 * t400 * t179 - 0.60383937289705777116e-8 * t37 * t416 * t417 + 0.10045707839835942504e-13 * t176 * t422 + 0.64697075667541904053e-8 * t37 * t157 * (0.75411111111111111112e0 * t22 * t384 + 0.10162654320987654321e1 * t46 * t32 / t24 / t34 / t134 + 0.52292347109798332368e-4 * t405) + 0.11698702564461928179e-18 * t438 * sigma[0] / t173 / t403 * t445;
  t454 = my_piecewise3(t2, 0, t345 - t8 * t131 / 0.2e1 - 0.3e1 / 0.2e1 * t8 * t111 * t182 - t354 + t357 / 0.3e1 + t360 + t122 * t12 * t362 * t61 * t364 / 0.6e1 - t122 * t125 * t182 * t129 / 0.2e1 - t122 * t125 * t61 * (0.2e1 * rho[0] * t374 - 0.2e1 * t127) / 0.4e1 - 0.3e1 / 0.4e1 * t8 * t13 * t16 * t448);
  t458 = 0.5e1 / 0.6e1 * t8 * rho[1] * t194 * t106;
  t460 = 0.1e1 / t11 / t373;
  t463 = t8 * t71 * t460 * t198;
  t465 = t126 * t126;
  t467 = 0.1e1 / t11 / t465;
  t470 = 0.1e1 / t196 / t69;
  t476 = my_piecewise3(t67, 0, -t458 - 0.5e1 / 0.6e1 * t463 + t8 * t226 * t467 * t470 * t105 / 0.6e1);
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[0] = 0.2e1 * t188 + 0.2e1 * t203 + t9 * (t454 + t476);

  t487 = t8 * t23 * t460 * t207;
  t500 = my_piecewise3(t2, 0, t345 / 0.2e1 - t354 + t357 / 0.6e1 + t360 / 0.2e1 + t8 * t351 * t207 / 0.2e1 - 0.2e1 / 0.3e1 * t487 - t6 * t7 * t23 * t194 * t362 * t130 / 0.6e1 + t8 * t206 * t124 * t182 / 0.4e1);
  t503 = t8 * t116 * t70 * t105;
  t513 = t218 * t116 * t197 * t222;
  t521 = rho[1] * t374;
  t529 = t8 * t189 * t275;
  t536 = my_piecewise3(t67, 0, t503 / 0.2e1 + t8 * t194 * t197 * t105 * rho[1] / 0.4e1 - t458 - t463 / 0.6e1 + t513 / 0.6e1 - t6 * t7 * t71 * t194 * t470 * t222 / 0.6e1 - t218 * t219 * t105 * (-t127 + 0.2e1 * t521) / 0.4e1 + t529 / 0.2e1 + t8 * t195 * t197 * t274 / 0.4e1);
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[1] = t188 + t203 + t212 + t280 + t9 * (t500 + t536);

  t548 = my_piecewise3(t2, 0, -t354 - 0.5e1 / 0.6e1 * t487 + t8 * t134 * t467 * t362 * t61 / 0.6e1);
  t556 = t221 * t221;
  t573 = sigma[2] / t73 / t82;
  t586 = t79 / t233 / t87;
  t589 = t264 / t265 / t71;
  t592 = t83 * t71;
  t594 = t81 / t592;
  t604 = 0.1e1 / t247 / t98;
  t605 = t604 * t101;
  t606 = t259 * t259;
  t610 = t248 * t270;
  t611 = t610 * t259;
  t627 = t263 * t263;
  t634 = t99 / t269 / t100;
  t637 = 0.38436625514403292180e-1 * t22 * t573 * t88 - 0.16276825762758468364e-7 * t22 * t263 / t73 / t83 / t82 * t234 + 0.12054849407803131005e-11 * t586 * t589 - 0.69872841720945256378e-5 * t235 * t594 + 0.69872841720945256378e-5 * t594 * t102 - 0.10351532106806704648e-6 * t238 * t260 - 0.18835702199692392195e-11 * t589 * t271 - 0.60383937289705777116e-8 * t85 * t605 * t606 + 0.10045707839835942504e-13 * t268 * t611 + 0.64697075667541904053e-8 * t85 * t249 * (0.75411111111111111112e0 * t22 * t573 + 0.10162654320987654321e1 * t46 * t80 / t72 / t82 / t226 + 0.52292347109798332368e-4 * t594) + 0.11698702564461928179e-18 * t627 * sigma[2] / t265 / t592 * t634;
  t643 = my_piecewise3(t67, 0, t503 - t8 * t223 / 0.2e1 - 0.3e1 / 0.2e1 * t8 * t213 * t274 - t458 + t513 / 0.3e1 + t529 + t218 * t12 * t470 * t105 * t556 / 0.6e1 - t218 * t219 * t274 * t221 / 0.2e1 - t218 * t219 * t105 * (-0.2e1 * t127 + 0.2e1 * t521) / 0.4e1 - 0.3e1 / 0.4e1 * t8 * t68 * t70 * t637);
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[2] = 0.2e1 * t212 + 0.2e1 * t280 + t9 * (t548 + t643);

  t651 = t8 * t117 * t307 / 0.2e1;
  t666 = t301 * t175;
  t669 = t32 * t145;
  t685 = t421 * t297;
  t705 = -0.10482716049382716049e-1 * t22 * t136 * t40 + 0.61038096610344256367e-8 * t22 / t25 / t35 / t134 * t142 * t33 - 0.45205685279261741268e-12 * t397 * t666 + 0.23290947240315085459e-5 * t143 * t669 - 0.23290947240315085459e-5 * t669 * t58 + 0.19409122700262571216e-7 * t286 * t168 + 0.67808527918892611901e-12 * t666 * t179 - 0.51757660534033523242e-7 * t146 * t298 - 0.60383937289705777116e-8 * t37 * t415 * t57 * t297 * t167 + 0.50228539199179712519e-14 * t176 * t685 + 0.64697075667541904053e-8 * t37 * t157 * (-0.20566666666666666667e0 * t22 * t136 - 0.32092592592592592593e0 * t46 * sigma[0] * t162 - 0.17430782369932777456e-4 * t669) - 0.18835702199692392195e-14 * t303 * t422 - 0.43870134616732230672e-19 * t438 / t173 / t144 * t445;
  t711 = my_piecewise3(t2, 0, -0.3e1 / 0.4e1 * t8 * t111 * t306 + t651 - t122 * t125 * t306 * t129 / 0.4e1 - 0.3e1 / 0.4e1 * t8 * t13 * t16 * t705);
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rhosigma[0] = t9 * t711 + t311;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rhosigma[1] = 0.0e0;

  t715 = t8 * t189 * t336 / 0.2e1;
  t721 = my_piecewise3(t67, 0, t715 + t8 * t195 * t197 * t335 / 0.4e1);
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rhosigma[2] = t9 * t721 + t340;

  t728 = my_piecewise3(t2, 0, t651 + t8 * t206 * t124 * t306 / 0.4e1);
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rhosigma[3] = t9 * t728 + t311;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rhosigma[4] = 0.0e0;

  t747 = t330 * t267;
  t750 = t80 * t237;
  t766 = t610 * t326;
  t786 = -0.10482716049382716049e-1 * t22 * t228 * t88 + 0.61038096610344256367e-8 * t22 / t73 / t83 / t226 * t234 * t81 - 0.45205685279261741268e-12 * t586 * t747 + 0.23290947240315085459e-5 * t235 * t750 - 0.23290947240315085459e-5 * t750 * t102 + 0.19409122700262571216e-7 * t315 * t260 + 0.67808527918892611901e-12 * t747 * t271 - 0.51757660534033523242e-7 * t238 * t327 - 0.60383937289705777116e-8 * t85 * t604 * t101 * t326 * t259 + 0.50228539199179712519e-14 * t268 * t766 + 0.64697075667541904053e-8 * t85 * t249 * (-0.20566666666666666667e0 * t22 * t228 - 0.32092592592592592593e0 * t46 * sigma[2] * t254 - 0.17430782369932777456e-4 * t750) - 0.18835702199692392195e-14 * t332 * t611 - 0.43870134616732230672e-19 * t627 / t265 / t236 * t634;
  t792 = my_piecewise3(t67, 0, -0.3e1 / 0.4e1 * t8 * t213 * t335 + t715 - t218 * t219 * t335 * t221 / 0.4e1 - 0.3e1 / 0.4e1 * t8 * t68 * t70 * t786);
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rhosigma[5] = t9 * t792 + t340;

  t800 = t171 * t302;
  t803 = sigma[0] * t36;
  t812 = t297 * t297;
  t836 = my_piecewise3(t2, 0, -0.3e1 / 0.4e1 * t8 * t13 * t16 * (-0.22889286228879096138e-8 * t22 / t25 / t403 * t142 * t32 + 0.16952131979723152975e-12 * t397 * t800 - 0.58227368100787713648e-6 * t143 * t803 + 0.58227368100787713648e-6 * t803 * t58 + 0.38818245400525142432e-7 * t286 * t298 - 0.22602842639630870634e-12 * t800 * t179 - 0.60383937289705777116e-8 * t37 * t416 * t812 - 0.37671404399384784390e-14 * t303 * t685 + 0.64697075667541904053e-8 * t37 * t157 * (0.60173611111111111112e-1 * t46 * t49 + 0.43576955924831943640e-5 * t803) + 0.16451300481274586502e-19 * t171 * t33 / t173 / t35 * t445));
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigma2[0] = t9 * t836;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigma2[1] = 0.0e0;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigma2[2] = 0.0e0;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigma2[3] = 0.0e0;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigma2[4] = 0.0e0;

  t843 = t263 * t331;
  t846 = sigma[2] * t84;
  t855 = t326 * t326;
  t879 = my_piecewise3(t67, 0, -0.3e1 / 0.4e1 * t8 * t68 * t70 * (-0.22889286228879096138e-8 * t22 / t73 / t592 * t234 * t80 + 0.16952131979723152975e-12 * t586 * t843 - 0.58227368100787713648e-6 * t235 * t846 + 0.58227368100787713648e-6 * t846 * t102 + 0.38818245400525142432e-7 * t315 * t327 - 0.22602842639630870634e-12 * t843 * t271 - 0.60383937289705777116e-8 * t85 * t605 * t855 - 0.37671404399384784390e-14 * t332 * t766 + 0.64697075667541904053e-8 * t85 * t249 * (0.60173611111111111112e-1 * t46 * t93 + 0.43576955924831943640e-5 * t846) + 0.16451300481274586502e-19 * t263 * t81 / t265 / t83 * t634));
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigma2[5] = t9 * t879;

#ifndef XC_DONT_COMPILE_KXC

  if(order < 3) return;


#endif

#endif

#endif


}

