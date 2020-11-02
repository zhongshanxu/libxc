/* 
  This file was generated automatically with ./scripts/maple2c.pl.
  Do not edit this file directly as it can be overwritten!!

  This Source Code Form is subject to the terms of the Mozilla Public
  License, v. 2.0. If a copy of the MPL was not distributed with this
  file, You can obtain one at http://mozilla.org/MPL/2.0/.

  Maple version     : Maple 2016 (X86 64 LINUX)
  Maple source      : ./maple/mgga_exc/mgga_xc_cc06.mpl
  Type of functional: mgga_exc
*/

#define maple2c_order 2
#define MAPLE2C_FLAGS (XC_FLAGS_I_HAVE_EXC | XC_FLAGS_I_HAVE_VXC | XC_FLAGS_I_HAVE_FXC)


static inline void
func_unpol(const xc_func_type *p, int order, const double *rho, const double *sigma, const double *lapl, const double *tau , double *zk MGGA_OUT_PARAMS_NO_EXC(XC_COMMA double *, ))
{

#ifndef XC_DONT_COMPILE_EXC
  double t2, t3, t4, t5, t6, t7, t8, t9;
  double t10, t11, t17, t19, t20, t23, t25, t26;
  double t27, t28, t29, t33, t36, t37, t40, t41;
  double t44, t46, t48, t50, t51, t53;

#ifndef XC_DONT_COMPILE_VXC
  double t58, t59, t63, t64, t65, t67, t68, t69;
  double t74, t75, t78, t81, t82, t83, t86, t87;
  double t89, t90, t91, t93, t94, t98, t99, t101;
  double t102, t106, t114;

#ifndef XC_DONT_COMPILE_FXC
  double t123, t124, t136, t143, t146, t151, t157, t164;
  double t167, t177, t180, t185, t186, t187, t188, t192;
  double t199, t200, t215, t230;
#endif

#endif

#endif



  t2 = M_CBRT3;
  t3 = 0.1e1 / M_PI;
  t4 = POW_1_3(t3);
  t5 = t2 * t4;
  t6 = M_CBRT4;
  t7 = t6 * t6;
  t8 = M_CBRT2;
  t9 = t8 * t8;
  t10 = t7 * t9;
  t11 = POW_1_3(rho[0]);
  t17 = t5 * t7 / t11;
  t19 = 0.1e1 + 0.53425000000000000000e-1 * t17;
  t20 = sqrt(t17);
  t23 = POW_3_2(t17);
  t25 = t2 * t2;
  t26 = t4 * t4;
  t27 = t25 * t26;
  t28 = t11 * t11;
  t29 = 0.1e1 / t28;
  t33 = 0.37978500000000000000e1 * t20 + 0.89690000000000000000e0 * t17 + 0.20477500000000000000e0 * t23 + 0.12323500000000000000e0 * t27 * t6 * t29;
  t36 = 0.1e1 + 0.16081824322151104822e2 / t33;
  t37 = log(t36);
  t40 = -0.3e1 / 0.16e2 * t5 * t10 * t11 - 0.62182e-1 * t19 * t37;
  t41 = t25 * t6;
  t44 = 0.1e1 / t28 / rho[0];
  t46 = t41 * t26 * lapl[0] * t44;
  t48 = -0.7e-3 + 0.20000000000000000000e-2 * t46;
  t50 = 0.1e1 + 0.65000000000000000000e-2 * t46;
  t51 = 0.1e1 / t50;
  t53 = t48 * t51 + 0.1e1;
  if(zk != NULL && (p->info->flags & XC_FLAGS_HAVE_EXC))
    zk[0] = t40 * t53;

#ifndef XC_DONT_COMPILE_VXC

  if(order < 1) return;


  t58 = 0.1e1 / t11 / rho[0];
  t59 = t7 * t58;
  t63 = t33 * t33;
  t64 = 0.1e1 / t63;
  t65 = t19 * t64;
  t67 = 0.1e1 / t20 * t2;
  t68 = t4 * t7;
  t69 = t68 * t58;
  t74 = sqrt(t17);
  t75 = t74 * t2;
  t78 = t6 * t44;
  t81 = -0.63297500000000000000e0 * t67 * t69 - 0.29896666666666666667e0 * t5 * t59 - 0.10238750000000000000e0 * t75 * t69 - 0.82156666666666666667e-1 * t27 * t78;
  t82 = 0.1e1 / t36;
  t83 = t81 * t82;
  t86 = -t5 * t10 * t29 / 0.16e2 + 0.11073577833333333333e-2 * t5 * t59 * t37 + 0.10000000000000000000e1 * t65 * t83;
  t87 = rho[0] * t86;
  t89 = rho[0] * t40;
  t90 = t41 * t26;
  t91 = rho[0] * rho[0];
  t93 = 0.1e1 / t28 / t91;
  t94 = lapl[0] * t93;
  t98 = t50 * t50;
  t99 = 0.1e1 / t98;
  t101 = t48 * t99 * t25;
  t102 = t6 * t26;
  t106 = -0.33333333333333333333e-2 * t90 * t94 * t51 + 0.10833333333333333333e-1 * t101 * t102 * t94;
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vrho[0] = t89 * t106 + t87 * t53 + (t40 * t53);

  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vsigma[0] = 0.0e0;

  t114 = 0.20000000000000000000e-2 * t27 * t78 * t51 - 0.65000000000000000000e-2 * t101 * t102 * t44;
  if(vrho != NULL && (p->info->flags & XC_FLAGS_NEEDS_LAPLACIAN) && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vlapl[0] = t89 * t114;

  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vtau[0] = 0.0e0;

#ifndef XC_DONT_COMPILE_FXC

  if(order < 2) return;


  t123 = 0.1e1 / t11 / t91;
  t124 = t7 * t123;
  t136 = t81 * t81;
  t143 = t102 * t93;
  t146 = t68 * t123;
  t151 = 0.1e1/sqrt(t17);
  t157 = t6 * t93;
  t164 = t63 * t63;
  t167 = t36 * t36;
  t177 = t91 * rho[0];
  t180 = lapl[0] / t28 / t177;
  t185 = t4 * t3;
  t186 = t2 * t7 * t185;
  t187 = lapl[0] * lapl[0];
  t188 = t91 * t91;
  t192 = t187 / t11 / t188 / rho[0];
  t199 = t48 / t98 / t50 * t2;
  t200 = t7 * t185;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[0] = 0.2e1 * t86 * t53 + 0.2e1 * t40 * t106 + rho[0] * (t5 * t10 * t44 / 0.24e2 - 0.14764770444444444444e-2 * t5 * t124 * t37 - 0.35616666666666666667e-1 * t5 * t7 * t58 * t64 * t83 - 0.20000000000000000000e1 * t19 / t63 / t33 * t136 * t82 + 0.10000000000000000000e1 * t65 * (-0.42198333333333333333e0 / t20 / t17 * t25 * t143 + 0.84396666666666666666e0 * t67 * t146 + 0.39862222222222222223e0 * t5 * t124 + 0.68258333333333333333e-1 * t151 * t25 * t143 + 0.13651666666666666667e0 * t75 * t146 + 0.13692777777777777778e0 * t27 * t157) * t82 + 0.16081824322151104822e2 * t19 / t164 * t136 / t167) * t53 + 0.2e1 * t87 * t106 + t89 * (0.88888888888888888888e-2 * t90 * t180 * t51 - 0.21666666666666666666e-3 * t186 * t192 * t99 + 0.70416666666666666662e-3 * t199 * t200 * t192 - 0.28888888888888888888e-1 * t101 * t102 * t180);

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rhosigma[0] = 0.0e0;

  t215 = 0.1e1 / t11 / t188;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_NEEDS_LAPLACIAN) && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rholapl[0] = t40 * t114 + t87 * t114 + t89 * (-0.33333333333333333333e-2 * t27 * t157 * t51 + 0.13000000000000000000e-3 * t186 * t215 * t99 * lapl[0] - 0.42249999999999999999e-3 * t199 * t200 * t215 * lapl[0] + 0.10833333333333333333e-1 * t101 * t143);

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rhotau[0] = 0.0e0;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigma2[0] = 0.0e0;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_NEEDS_LAPLACIAN) && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigmalapl[0] = 0.0e0;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigmatau[0] = 0.0e0;

  t230 = 0.1e1 / t11 / t177;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_NEEDS_LAPLACIAN) && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2lapl2[0] = t89 * (-0.78000000000000000000e-4 * t2 * t185 * t7 * t230 * t99 + 0.25350000000000000000e-3 * t199 * t200 * t230);

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
  double t18, t19, t20, t22, t23, t29, t31, t32;
  double t35, t37, t38, t39, t40, t41, t43, t45;
  double t48, t49, t51, t52, t53, t54, t55, t56;
  double t57, t61, t62, t64, t69, t72, t73, t77;
  double t82, t85, t86, t87, t89, t90, t94, t95;
  double t96, t97, t99, t100, t101, t102, t103, t104;
  double t106, t107, t109, t110, t111, t112, t113, t114;
  double t118, t120, t122, t123, t125;

#ifndef XC_DONT_COMPILE_VXC
  double t126, t127, t128, t130, t133, t134, t140, t142;
  double t143, t146, t147, t148, t149, t151, t152, t153;
  double t154, t156, t158, t159, t160, t163, t165, t167;
  double t168, t169, t171, t172, t173, t175, t177, t178;
  double t180, t181, t182, t187, t188, t189, t194, t195;
  double t196, t202, t203, t204, t209, t210, t211, t214;
  double t215, t216, t219, t221, t223, t224, t226, t228;
  double t229, t230, t232, t233, t235, t236, t238, t239;
  double t241, t242, t245, t250, t251, t252, t253, t254;
  double t258, t260, t262, t265, t266, t270, t271, t275;
  double t276, t278, t279, t281, t283, t284, t286, t287;
  double t290, t298, t300, t301, t308, t309, t316;

#ifndef XC_DONT_COMPILE_FXC
  double t317, t319, t321, t322, t323, t327, t328, t329;
  double t330, t333, t334, t335, t341, t342, t349, t350;
  double t351, t354, t355, t356, t358, t359, t361, t363;
  double t365, t368, t370, t374, t375, t376, t377, t379;
  double t380, t383, t385, t388, t392, t398, t402, t404;
  double t416, t430, t433, t440, t444, t448, t451, t461;
  double t462, t465, t469, t488, t490, t492, t495, t497;
  double t499, t500, t504, t507, t512, t516, t520, t522;
  double t524, t530, t538, t539, t546, t547, t555, t560;
  double t561, t562, t569, t570, t571, t580, t593, t594;
  double t597, t599, t604, t610, t613, t617, t622, t624;
  double t629, t651, t656, t657, t672, t675, t676, t679;
  double t685, t686, t700, t702, t708, t715, t723, t731;
  double t736, t749, t751, t755, t760, t764, t765, t773;
  double t774, t780, t782, t790, t795, t819, t844, t847;
  double t868, t871;
#endif

#endif

#endif



  t2 = M_CBRT3;
  t3 = 0.1e1 / M_PI;
  t4 = POW_1_3(t3);
  t5 = t2 * t4;
  t6 = M_CBRT4;
  t7 = t6 * t6;
  t8 = t5 * t7;
  t9 = M_CBRT2;
  t10 = t9 * t9;
  t11 = rho[0] - rho[1];
  t12 = rho[0] + rho[1];
  t13 = 0.1e1 / t12;
  t14 = t11 * t13;
  t15 = 0.1e1 + t14;
  t16 = POW_1_3(t15);
  t17 = t16 * t15;
  t18 = 0.1e1 - t14;
  t19 = POW_1_3(t18);
  t20 = t19 * t18;
  t22 = t10 * (t17 + t20);
  t23 = POW_1_3(t12);
  t29 = t5 * t7 / t23;
  t31 = 0.1e1 + 0.53425000000000000000e-1 * t29;
  t32 = sqrt(t29);
  t35 = POW_3_2(t29);
  t37 = t2 * t2;
  t38 = t4 * t4;
  t39 = t37 * t38;
  t40 = t23 * t23;
  t41 = 0.1e1 / t40;
  t43 = t39 * t6 * t41;
  t45 = 0.37978500000000000000e1 * t32 + 0.89690000000000000000e0 * t29 + 0.20477500000000000000e0 * t35 + 0.12323500000000000000e0 * t43;
  t48 = 0.1e1 + 0.16081824322151104822e2 / t45;
  t49 = log(t48);
  t51 = 0.62182e-1 * t31 * t49;
  t52 = t11 * t11;
  t53 = t52 * t52;
  t54 = t12 * t12;
  t55 = t54 * t54;
  t56 = 0.1e1 / t55;
  t57 = t53 * t56;
  t61 = 0.1e1 / (0.2e1 * t9 - 0.2e1);
  t62 = (t17 + t20 - 0.2e1) * t61;
  t64 = 0.1e1 + 0.51370000000000000000e-1 * t29;
  t69 = 0.70594500000000000000e1 * t32 + 0.15494250000000000000e1 * t29 + 0.42077500000000000000e0 * t35 + 0.15629250000000000000e0 * t43;
  t72 = 0.1e1 + 0.32164683177870697974e2 / t69;
  t73 = log(t72);
  t77 = 0.1e1 + 0.27812500000000000000e-1 * t29;
  t82 = 0.51785000000000000000e1 * t32 + 0.90577500000000000000e0 * t29 + 0.11003250000000000000e0 * t35 + 0.12417750000000000000e0 * t43;
  t85 = 0.1e1 + 0.29608574643216675549e2 / t82;
  t86 = log(t85);
  t87 = t77 * t86;
  t89 = -0.31090e-1 * t64 * t73 + t51 - 0.19751789702565206229e-1 * t87;
  t90 = t62 * t89;
  t94 = -0.3e1 / 0.32e2 * t8 * t22 * t23 - t51 + t57 * t90 + 0.19751789702565206229e-1 * t62 * t87;
  t95 = t37 * t6;
  t96 = POW_1_3(rho[0]);
  t97 = t96 * t96;
  t99 = 0.1e1 / t97 / rho[0];
  t100 = lapl[0] * t99;
  t101 = t15 / 0.2e1;
  t102 = POW_1_3(t101);
  t103 = t102 * t102;
  t104 = t103 * t101;
  t106 = POW_1_3(rho[1]);
  t107 = t106 * t106;
  t109 = 0.1e1 / t107 / rho[1];
  t110 = lapl[1] * t109;
  t111 = t18 / 0.2e1;
  t112 = POW_1_3(t111);
  t113 = t112 * t112;
  t114 = t113 * t111;
  t118 = t95 * t38 * (t100 * t104 + t110 * t114);
  t120 = -0.7e-3 + 0.20000000000000000000e-2 * t118;
  t122 = 0.1e1 + 0.65000000000000000000e-2 * t118;
  t123 = 0.1e1 / t122;
  t125 = t120 * t123 + 0.1e1;
  if(zk != NULL && (p->info->flags & XC_FLAGS_HAVE_EXC))
    zk[0] = t94 * t125;

#ifndef XC_DONT_COMPILE_VXC

  if(order < 1) return;


  t126 = 0.1e1 / t54;
  t127 = t11 * t126;
  t128 = t13 - t127;
  t130 = -t128;
  t133 = 0.4e1 / 0.3e1 * t16 * t128 + 0.4e1 / 0.3e1 * t19 * t130;
  t134 = t10 * t133;
  t140 = t8 * t22 * t41 / 0.32e2;
  t142 = 0.1e1 / t23 / t12;
  t143 = t7 * t142;
  t146 = 0.11073577833333333333e-2 * t5 * t143 * t49;
  t147 = t45 * t45;
  t148 = 0.1e1 / t147;
  t149 = t31 * t148;
  t151 = 0.1e1 / t32 * t2;
  t152 = t4 * t7;
  t153 = t152 * t142;
  t154 = t151 * t153;
  t156 = t5 * t143;
  t158 = sqrt(t29);
  t159 = t158 * t2;
  t160 = t159 * t153;
  t163 = 0.1e1 / t40 / t12;
  t165 = t39 * t6 * t163;
  t167 = -0.63297500000000000000e0 * t154 - 0.29896666666666666667e0 * t156 - 0.10238750000000000000e0 * t160 - 0.82156666666666666667e-1 * t165;
  t168 = 0.1e1 / t48;
  t169 = t167 * t168;
  t171 = 0.10000000000000000000e1 * t149 * t169;
  t172 = t52 * t11;
  t173 = t172 * t56;
  t175 = 0.4e1 * t173 * t90;
  t177 = 0.1e1 / t55 / t12;
  t178 = t53 * t177;
  t180 = 0.4e1 * t178 * t90;
  t181 = t133 * t61;
  t182 = t181 * t89;
  t187 = t69 * t69;
  t188 = 0.1e1 / t187;
  t189 = t64 * t188;
  t194 = -0.11765750000000000000e1 * t154 - 0.51647500000000000000e0 * t156 - 0.21038750000000000000e0 * t160 - 0.10419500000000000000e0 * t165;
  t195 = 0.1e1 / t72;
  t196 = t194 * t195;
  t202 = t82 * t82;
  t203 = 0.1e1 / t202;
  t204 = t77 * t203;
  t209 = -0.86308333333333333334e0 * t154 - 0.30192500000000000000e0 * t156 - 0.55016250000000000000e-1 * t160 - 0.82785000000000000000e-1 * t165;
  t210 = 0.1e1 / t85;
  t211 = t209 * t210;
  t214 = 0.53236443333333333332e-3 * t5 * t143 * t73 + 0.10000000000000000000e1 * t189 * t196 - t146 - t171 + 0.18311555036753159941e-3 * t5 * t143 * t86 + 0.58482233974552040708e0 * t204 * t211;
  t215 = t62 * t214;
  t216 = t57 * t215;
  t219 = t62 * t2;
  t221 = t152 * t142 * t86;
  t223 = 0.18311555036753159941e-3 * t219 * t221;
  t224 = t62 * t77;
  t226 = t203 * t209 * t210;
  t228 = 0.58482233974552040708e0 * t224 * t226;
  t229 = -0.3e1 / 0.32e2 * t8 * t134 * t23 - t140 + t146 + t171 + t175 - t180 + t57 * t182 + t216 + 0.19751789702565206229e-1 * t181 * t87 - t223 - t228;
  t230 = t12 * t229;
  t232 = t12 * t94;
  t233 = rho[0] * rho[0];
  t235 = 0.1e1 / t97 / t233;
  t236 = lapl[0] * t235;
  t238 = t128 / 0.2e1;
  t239 = t103 * t238;
  t241 = -t238;
  t242 = t113 * t241;
  t245 = 0.5e1 / 0.3e1 * t100 * t239 - 0.5e1 / 0.3e1 * t236 * t104 + 0.5e1 / 0.3e1 * t110 * t242;
  t250 = t122 * t122;
  t251 = 0.1e1 / t250;
  t252 = t120 * t251;
  t253 = t252 * t37;
  t254 = t6 * t38;
  t258 = 0.20000000000000000000e-2 * t95 * t38 * t245 * t123 - 0.65000000000000000000e-2 * t253 * t254 * t245;
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vrho[0] = t230 * t125 + t232 * t258 + (t94 * t125);

  t260 = -t13 - t127;
  t262 = -t260;
  t265 = 0.4e1 / 0.3e1 * t16 * t260 + 0.4e1 / 0.3e1 * t19 * t262;
  t266 = t10 * t265;
  t270 = t265 * t61;
  t271 = t270 * t89;
  t275 = -0.3e1 / 0.32e2 * t8 * t266 * t23 - t140 + t146 + t171 - t175 - t180 + t57 * t271 + t216 + 0.19751789702565206229e-1 * t270 * t87 - t223 - t228;
  t276 = t12 * t275;
  t278 = t260 / 0.2e1;
  t279 = t103 * t278;
  t281 = rho[1] * rho[1];
  t283 = 0.1e1 / t107 / t281;
  t284 = lapl[1] * t283;
  t286 = -t278;
  t287 = t113 * t286;
  t290 = 0.5e1 / 0.3e1 * t100 * t279 + 0.5e1 / 0.3e1 * t110 * t287 - 0.5e1 / 0.3e1 * t284 * t114;
  t298 = 0.20000000000000000000e-2 * t95 * t38 * t290 * t123 - 0.65000000000000000000e-2 * t253 * t254 * t290;
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vrho[1] = t276 * t125 + t232 * t298 + (t94 * t125);

  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vsigma[0] = 0.0e0;

  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vsigma[1] = 0.0e0;

  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vsigma[2] = 0.0e0;

  t300 = t95 * t38;
  t301 = t99 * t104;
  t308 = 0.20000000000000000000e-2 * t300 * t301 * t123 - 0.65000000000000000000e-2 * t253 * t254 * t301;
  if(vrho != NULL && (p->info->flags & XC_FLAGS_NEEDS_LAPLACIAN) && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vlapl[0] = t232 * t308;

  t309 = t109 * t114;
  t316 = 0.20000000000000000000e-2 * t300 * t309 * t123 - 0.65000000000000000000e-2 * t253 * t254 * t309;
  if(vrho != NULL && (p->info->flags & XC_FLAGS_NEEDS_LAPLACIAN) && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vlapl[1] = t232 * t316;

  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vtau[0] = 0.0e0;

  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vtau[1] = 0.0e0;

#ifndef XC_DONT_COMPILE_FXC

  if(order < 2) return;


  t317 = t229 * t125;
  t319 = t94 * t258;
  t321 = t16 * t16;
  t322 = 0.1e1 / t321;
  t323 = t128 * t128;
  t327 = 0.1e1 / t54 / t12;
  t328 = t11 * t327;
  t329 = -t126 + t328;
  t330 = 0.2e1 * t329;
  t333 = t19 * t19;
  t334 = 0.1e1 / t333;
  t335 = t130 * t130;
  t341 = 0.4e1 / 0.9e1 * t322 * t323 + 0.4e1 / 0.3e1 * t16 * t330 + 0.4e1 / 0.9e1 * t334 * t335 - 0.4e1 / 0.3e1 * t19 * t330;
  t342 = t341 * t61;
  t349 = 0.1e1 / t40 / t54;
  t350 = t254 * t349;
  t351 = 0.1e1 / t32 / t29 * t37 * t350;
  t354 = 0.1e1 / t23 / t54;
  t355 = t152 * t354;
  t356 = t151 * t355;
  t358 = t7 * t354;
  t359 = t5 * t358;
  t361 = 0.1e1/sqrt(t29);
  t363 = t361 * t37 * t350;
  t365 = t159 * t355;
  t368 = t39 * t6 * t349;
  t370 = -0.57538888888888888889e0 * t351 + 0.11507777777777777778e1 * t356 + 0.40256666666666666667e0 * t359 + 0.36677500000000000000e-1 * t363 + 0.73355000000000000000e-1 * t365 + 0.13797500000000000000e0 * t368;
  t374 = 0.58482233974552040708e0 * t224 * t203 * t370 * t210;
  t375 = t202 * t202;
  t376 = 0.1e1 / t375;
  t377 = t209 * t209;
  t379 = t85 * t85;
  t380 = 0.1e1 / t379;
  t383 = 0.17315755899375863299e2 * t224 * t376 * t377 * t380;
  t385 = t181 * t77 * t226;
  t388 = 0.1e1 / t202 / t82;
  t392 = 0.11696446794910408142e1 * t224 * t388 * t377 * t210;
  t398 = t8 * t134 * t41;
  t402 = t8 * t22 * t163 / 0.48e2;
  t404 = t57 * t181 * t214;
  t416 = t194 * t194;
  t430 = t187 * t187;
  t433 = t72 * t72;
  t440 = 0.14764770444444444444e-2 * t5 * t358 * t49;
  t444 = 0.35616666666666666667e-1 * t8 * t142 * t148 * t169;
  t448 = t167 * t167;
  t451 = 0.20000000000000000000e1 * t31 / t147 / t45 * t448 * t168;
  t461 = 0.10000000000000000000e1 * t149 * (-0.42198333333333333333e0 * t351 + 0.84396666666666666666e0 * t356 + 0.39862222222222222223e0 * t359 + 0.68258333333333333333e-1 * t363 + 0.13651666666666666667e0 * t365 + 0.13692777777777777778e0 * t368) * t168;
  t462 = t147 * t147;
  t465 = t48 * t48;
  t469 = 0.16081824322151104822e2 * t31 / t462 * t448 / t465;
  t488 = -0.70981924444444444442e-3 * t5 * t358 * t73 - 0.34246666666666666666e-1 * t8 * t142 * t188 * t196 - 0.20000000000000000000e1 * t64 / t187 / t69 * t416 * t195 + 0.10000000000000000000e1 * t189 * (-0.78438333333333333333e0 * t351 + 0.15687666666666666667e1 * t356 + 0.68863333333333333333e0 * t359 + 0.14025833333333333333e0 * t363 + 0.28051666666666666667e0 * t365 + 0.17365833333333333333e0 * t368) * t195 + 0.32164683177870697974e2 * t64 / t430 * t416 / t433 + t440 + t444 + t451 - t461 - t469 - 0.24415406715670879921e-3 * t5 * t358 * t86 - 0.10843580882781524214e-1 * t8 * t142 * t203 * t211 - 0.11696446794910408142e1 * t77 * t388 * t377 * t210 + 0.58482233974552040708e0 * t204 * t370 * t210 + 0.17315755899375863299e2 * t77 * t376 * t377 * t380;
  t490 = t57 * t62 * t488;
  t492 = 0.8e1 * t178 * t215;
  t495 = t173 * t182;
  t497 = 0.19751789702565206229e-1 * t342 * t87 - t374 - t383 - 0.11696446794910408142e1 * t385 + t392 - 0.3e1 / 0.32e2 * t8 * t10 * t341 * t23 - t398 / 0.16e2 + t402 + 0.2e1 * t404 + t490 - t492 + t57 * t342 * t89 + 0.8e1 * t495;
  t499 = 0.8e1 * t173 * t215;
  t500 = t178 * t182;
  t504 = 0.12e2 * t52 * t56 * t90;
  t507 = 0.32e2 * t172 * t177 * t90;
  t512 = 0.20e2 * t53 / t55 / t54 * t90;
  t516 = 0.10843580882781524214e-1 * t62 * t5 * t143 * t226;
  t520 = 0.24415406715670879921e-3 * t219 * t152 * t354 * t86;
  t522 = t181 * t2 * t221;
  t524 = t499 - 0.8e1 * t500 - t440 + t504 - t507 + t512 - t451 + t461 + t469 + t516 + t520 - t444 - 0.36623110073506319882e-3 * t522;
  t530 = t233 * rho[0];
  t538 = 0.1e1 / t102;
  t539 = t238 * t238;
  t546 = 0.1e1 / t112;
  t547 = t241 * t241;
  t555 = 0.40e2 / 0.9e1 * lapl[0] / t97 / t530 * t104 - 0.50e2 / 0.9e1 * t236 * t239 + 0.10e2 / 0.9e1 * t100 * t538 * t539 + 0.5e1 / 0.3e1 * t100 * t103 * t329 + 0.10e2 / 0.9e1 * t110 * t546 * t547 - 0.5e1 / 0.3e1 * t110 * t113 * t329;
  t560 = t2 * t7;
  t561 = t4 * t3;
  t562 = t245 * t245;
  t569 = t120 / t250 / t122;
  t570 = t569 * t2;
  t571 = t7 * t561;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[0] = 0.2e1 * t317 + 0.2e1 * t319 + t12 * (t497 + t524) * t125 + 0.2e1 * t230 * t258 + t232 * (0.20000000000000000000e-2 * t95 * t38 * t555 * t123 - 0.78000000000000000000e-4 * t560 * t561 * t562 * t251 + 0.25350000000000000000e-3 * t570 * t571 * t562 - 0.65000000000000000000e-2 * t253 * t254 * t555);

  t580 = t275 * t125;
  t593 = 0.4e1 / 0.9e1 * t322 * t260 * t128 + 0.8e1 / 0.3e1 * t16 * t11 * t327 + 0.4e1 / 0.9e1 * t334 * t262 * t130 - 0.8e1 / 0.3e1 * t19 * t11 * t327;
  t594 = t593 * t61;
  t597 = t173 * t271;
  t599 = t178 * t271;
  t604 = t57 * t270 * t214;
  t610 = t270 * t77 * t226;
  t613 = t8 * t266 * t41;
  t617 = 0.19751789702565206229e-1 * t594 * t87 + 0.4e1 * t597 - 0.4e1 * t599 + t57 * t594 * t89 + t604 - 0.3e1 / 0.32e2 * t8 * t10 * t593 * t23 - 0.58482233974552040708e0 * t610 - t613 / 0.32e2 - t374 - t383 - 0.58482233974552040708e0 * t385 + t392 - t398 / 0.32e2 + t402 + t404;
  t622 = t270 * t2 * t221;
  t624 = t490 - t492 - 0.4e1 * t495 - 0.4e1 * t500 - t440 - t504 + t512 - t451 + t461 + t469 + t516 + t520 - t444 - 0.18311555036753159941e-3 * t522 - 0.18311555036753159941e-3 * t622;
  t629 = t94 * t298;
  t651 = -0.25e2 / 0.9e1 * t236 * t279 + 0.10e2 / 0.9e1 * t100 * t538 * t278 * t238 + 0.5e1 / 0.3e1 * t100 * t103 * t11 * t327 - 0.25e2 / 0.9e1 * t284 * t242 + 0.10e2 / 0.9e1 * t110 * t546 * t286 * t241 - 0.5e1 / 0.3e1 * t110 * t113 * t11 * t327;
  t656 = t560 * t561;
  t657 = t290 * t251;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[1] = t317 + t319 + t580 + t12 * (t617 + t624) * t125 + t276 * t258 + t629 + t230 * t298 + t232 * (0.20000000000000000000e-2 * t95 * t38 * t651 * t123 - 0.78000000000000000000e-4 * t656 * t657 * t245 + 0.25350000000000000000e-3 * t570 * t571 * t290 * t245 - 0.65000000000000000000e-2 * t253 * t254 * t651);

  t672 = t260 * t260;
  t675 = t126 + t328;
  t676 = 0.2e1 * t675;
  t679 = t262 * t262;
  t685 = 0.4e1 / 0.9e1 * t322 * t672 + 0.4e1 / 0.3e1 * t16 * t676 + 0.4e1 / 0.9e1 * t334 * t679 - 0.4e1 / 0.3e1 * t19 * t676;
  t686 = t685 * t61;
  t700 = t57 * t686 * t89 + 0.19751789702565206229e-1 * t686 * t87 - 0.8e1 * t597 - 0.8e1 * t599 + 0.2e1 * t604 - 0.3e1 / 0.32e2 * t8 * t10 * t685 * t23 - 0.11696446794910408142e1 * t610 - t613 / 0.16e2 - t374 - t383 + t392 + t402 + t490;
  t702 = -t492 - t499 - t440 + t504 + t507 + t512 - t451 + t461 + t469 + t516 + t520 - t444 - 0.36623110073506319882e-3 * t622;
  t708 = t278 * t278;
  t715 = t281 * rho[1];
  t723 = t286 * t286;
  t731 = 0.10e2 / 0.9e1 * t100 * t538 * t708 + 0.5e1 / 0.3e1 * t100 * t103 * t675 + 0.40e2 / 0.9e1 * lapl[1] / t107 / t715 * t114 - 0.50e2 / 0.9e1 * t284 * t287 + 0.10e2 / 0.9e1 * t110 * t546 * t723 - 0.5e1 / 0.3e1 * t110 * t113 * t675;
  t736 = t290 * t290;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[2] = 0.2e1 * t580 + 0.2e1 * t629 + t12 * (t700 + t702) * t125 + 0.2e1 * t276 * t298 + t232 * (0.20000000000000000000e-2 * t95 * t38 * t731 * t123 - 0.78000000000000000000e-4 * t560 * t561 * t736 * t251 + 0.25350000000000000000e-3 * t570 * t571 * t736 - 0.65000000000000000000e-2 * t253 * t254 * t731);

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

  t749 = t94 * t308;
  t751 = t235 * t104;
  t755 = t99 * t103;
  t760 = t251 * t245;
  t764 = t569 * t560;
  t765 = t561 * t99;
  t773 = t252 * t95;
  t774 = t38 * t99;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_NEEDS_LAPLACIAN) && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rholapl[0] = t749 + t230 * t308 + t232 * (-0.33333333333333333333e-2 * t300 * t751 * t123 + 0.33333333333333333333e-2 * t300 * t755 * t123 * t238 - 0.78000000000000000000e-4 * t656 * t301 * t760 + 0.25350000000000000000e-3 * t764 * t765 * t104 * t245 + 0.10833333333333333333e-1 * t253 * t254 * t751 - 0.10833333333333333333e-1 * t773 * t774 * t239);

  t780 = t94 * t316;
  t782 = t109 * t113;
  t790 = t561 * t109;
  t795 = t38 * t109;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_NEEDS_LAPLACIAN) && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rholapl[1] = t780 + t230 * t316 + t232 * (0.33333333333333333333e-2 * t300 * t782 * t123 * t241 - 0.78000000000000000000e-4 * t656 * t309 * t760 + 0.25350000000000000000e-3 * t764 * t790 * t114 * t245 - 0.10833333333333333333e-1 * t773 * t795 * t242);

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_NEEDS_LAPLACIAN) && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rholapl[2] = t749 + t276 * t308 + t232 * (0.33333333333333333333e-2 * t300 * t755 * t123 * t278 - 0.78000000000000000000e-4 * t656 * t301 * t657 + 0.25350000000000000000e-3 * t764 * t765 * t104 * t290 - 0.10833333333333333333e-1 * t773 * t774 * t279);

  t819 = t283 * t114;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_NEEDS_LAPLACIAN) && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rholapl[3] = t780 + t276 * t316 + t232 * (-0.33333333333333333333e-2 * t300 * t819 * t123 + 0.33333333333333333333e-2 * t300 * t782 * t123 * t286 - 0.78000000000000000000e-4 * t656 * t309 * t657 + 0.25350000000000000000e-3 * t764 * t790 * t114 * t290 + 0.10833333333333333333e-1 * t253 * t254 * t819 - 0.10833333333333333333e-1 * t773 * t795 * t287);

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rhotau[0] = 0.0e0;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rhotau[1] = 0.0e0;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rhotau[2] = 0.0e0;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rhotau[3] = 0.0e0;

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

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigmatau[0] = 0.0e0;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigmatau[1] = 0.0e0;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigmatau[2] = 0.0e0;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigmatau[3] = 0.0e0;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigmatau[4] = 0.0e0;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigmatau[5] = 0.0e0;

  t844 = t101 * t101;
  t847 = 0.1e1 / t96 / t530 * t102 * t844 * t101;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_NEEDS_LAPLACIAN) && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2lapl2[0] = t232 * (-0.78000000000000000000e-4 * t656 * t847 * t251 + 0.25350000000000000000e-3 * t570 * t571 * t847);

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_NEEDS_LAPLACIAN) && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2lapl2[1] = t232 * (-0.78000000000000000000e-4 * t560 * t790 * t114 * t251 * t301 + 0.25350000000000000000e-3 * t764 * t790 * t114 * t99 * t104);

  t868 = t111 * t111;
  t871 = 0.1e1 / t106 / t715 * t112 * t868 * t111;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_NEEDS_LAPLACIAN) && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2lapl2[2] = t232 * (-0.78000000000000000000e-4 * t656 * t871 * t251 + 0.25350000000000000000e-3 * t570 * t571 * t871);

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

