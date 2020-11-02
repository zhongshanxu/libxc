/* 
  This file was generated automatically with ./scripts/maple2c.pl.
  Do not edit this file directly as it can be overwritten!!

  This Source Code Form is subject to the terms of the Mozilla Public
  License, v. 2.0. If a copy of the MPL was not distributed with this
  file, You can obtain one at http://mozilla.org/MPL/2.0/.

  Maple version     : Maple 2016 (X86 64 LINUX)
  Maple source      : ./maple/gga_exc/gga_xc_th2.mpl
  Type of functional: gga_exc
*/

#define maple2c_order 2
#define MAPLE2C_FLAGS (XC_FLAGS_I_HAVE_EXC | XC_FLAGS_I_HAVE_VXC | XC_FLAGS_I_HAVE_FXC)


static inline void
func_unpol(const xc_func_type *p, int order, const double *rho, const double *sigma , double *zk GGA_OUT_PARAMS_NO_EXC(XC_COMMA double *, ))
{

#ifndef XC_DONT_COMPILE_EXC
  double t1, t2, t3, t4, t5, t6, t7, t11;
  double t12, t13, t14, t15, t19, t20, t21, t25;
  double t26, t27, t30, t31, t34, t35, t36, t39;
  double t42, t45, t48, t49, t52, t53, t54, t55;
  double t56, t59, t62;

#ifndef XC_DONT_COMPILE_VXC
  double t73, t75, t76, t77, t78, t79, t82, t85;
  double t88, t89, t92, t94, t98, t99, t102, t105;

#ifndef XC_DONT_COMPILE_FXC
  double t169;
#endif

#endif

#endif



  t1 = pow(0.2e1, 0.1e1 / 0.12e2);
  t2 = t1 * t1;
  t3 = t2 * t1;
  t4 = t2 * t2;
  t5 = t4 * t4;
  t6 = t5 * t3;
  t7 = pow(rho[0], 0.1e1 / 0.12e2);
  t11 = pow(0.2e1, 0.1e1 / 0.6e1);
  t12 = t11 * t11;
  t13 = t12 * t12;
  t14 = t13 * t11;
  t15 = pow(rho[0], 0.1e1 / 0.6e1);
  t19 = M_CBRT2;
  t20 = t19 * t19;
  t21 = POW_1_3(rho[0]);
  t25 = M_SQRT2;
  t26 = sqrt(rho[0]);
  t27 = t26 * rho[0];
  t30 = t21 * t21;
  t31 = t30 * rho[0];
  t34 = t4 * t3;
  t35 = t34 * t7;
  t36 = sqrt(sigma[0]);
  t39 = t25 * t15;
  t42 = t19 * t21;
  t45 = t11 * t26;
  t48 = 0.1e1 / rho[0];
  t49 = t19 * t48;
  t52 = t15 * t15;
  t53 = t52 * t52;
  t54 = t53 * t15;
  t55 = 0.1e1 / t54;
  t56 = t11 * t55;
  t59 = 0.1e1 / t30;
  t62 = 0.33941550000000000000e0 * t6 * t7 * rho[0] - 0.87910500000000000000e0 * t14 * t15 * rho[0] + 0.63838000000000000000e0 * t20 * t21 * rho[0] - 0.80394500000000000000e0 * t25 * t27 + 0.18280500000000000000e0 * t19 * t31 - 0.45331750000000000000e-1 * t35 * t36 + 0.36743250000000000000e-1 * t39 * t36 + 0.36785250000000000000e-1 * t42 * t36 - 0.17922925000000000000e-1 * t45 * t36 - 0.50895875000000000000e-2 * t49 * sigma[0] + 0.26828125000000000000e-2 * t56 * sigma[0] - 0.96019500000000000000e-4 * t59 * sigma[0];
  if(zk != NULL && (p->info->flags & XC_FLAGS_HAVE_EXC))
    zk[0] = t62 * t48;

#ifndef XC_DONT_COMPILE_VXC

  if(order < 1) return;


  t73 = t7 * t7;
  t75 = t73 * t73;
  t76 = t75 * t75;
  t77 = t76 * t73 * t7;
  t78 = 0.1e1 / t77;
  t79 = t34 * t78;
  t82 = t25 * t55;
  t85 = t19 * t59;
  t88 = 0.1e1 / t26;
  t89 = t11 * t88;
  t92 = rho[0] * rho[0];
  t94 = t19 / t92;
  t98 = 0.1e1 / t54 / rho[0];
  t99 = t11 * t98;
  t102 = 0.1e1 / t31;
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vrho[0] = 0.36770012500000000000e0 * t6 * t7 - 0.10256225000000000000e1 * t14 * t15 + 0.85117333333333333333e0 * t20 * t21 - 0.12059175000000000000e1 * t25 * t26 + 0.30467500000000000000e0 * t19 * t30 - 0.37776458333333333333e-2 * t79 * t36 + 0.61238750000000000000e-2 * t82 * t36 + 0.12261750000000000000e-1 * t85 * t36 - 0.89614625000000000000e-2 * t89 * t36 + 0.50895875000000000000e-2 * t94 * sigma[0] - 0.22356770833333333333e-2 * t99 * sigma[0] + 0.64013000000000000000e-4 * t102 * sigma[0];

  t105 = 0.1e1 / t36;
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vsigma[0] = -0.22665875000000000000e-1 * t35 * t105 + 0.18371625000000000000e-1 * t39 * t105 + 0.18392625000000000000e-1 * t42 * t105 - 0.89614625000000000000e-2 * t45 * t105 - 0.50895875000000000000e-2 * t49 + 0.26828125000000000000e-2 * t56 - 0.96019500000000000000e-4 * t59;

#ifndef XC_DONT_COMPILE_FXC

  if(order < 2) return;


  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[0] = 0.30641677083333333333e-1 * t6 * t78 - 0.17093708333333333333e0 * t14 * t55 + 0.28372444444444444444e0 * t20 * t59 - 0.60295875000000000000e0 * t25 * t88 + 0.20311666666666666667e0 * t19 / t21 + 0.34628420138888888889e-2 * t34 / t77 / rho[0] * t36 - 0.51032291666666666667e-2 * t25 * t98 * t36 - 0.81745000000000000000e-2 * t19 * t102 * t36 + 0.44807312500000000000e-2 * t11 / t27 * t36 - 0.10179175000000000000e-1 * t19 / t92 / rho[0] * sigma[0] + 0.40987413194444444444e-2 * t11 / t54 / t92 * sigma[0] - 0.10668833333333333333e-3 * sigma[0] / t30 / t92;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rhosigma[0] = -0.18888229166666666667e-2 * t79 * t105 + 0.30619375000000000000e-2 * t82 * t105 + 0.61308750000000000000e-2 * t85 * t105 - 0.44807312500000000000e-2 * t89 * t105 + 0.50895875000000000000e-2 * t94 - 0.22356770833333333333e-2 * t99 + 0.64013000000000000000e-4 * t102;

  t169 = 0.1e1 / t36 / sigma[0];
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigma2[0] = 0.11332937500000000000e-1 * t35 * t169 - 0.91858125000000000000e-2 * t39 * t169 - 0.91963125000000000000e-2 * t42 * t169 + 0.44807312500000000000e-2 * t45 * t169;

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
  double t1, t4, t7, t8, t10, t11, t13, t14;
  double t16, t17, t19, t20, t22, t23, t25, t26;
  double t28, t29, t31, t32, t33, t35, t36, t37;
  double t39, t40, t41, t42, t43, t44, t45, t46;
  double t48, t49, t50, t52, t53, t54, t56, t57;
  double t58, t60, t63, t66, t67, t70, t71, t72;
  double t73, t74, t75, t76, t77, t78, t81, t83;
  double t84, t85, t86, t87, t88, t89, t91, t92;
  double t93, t94, t95, t96, t97, t102, t108, t109;
  double t110, t111, t113, t114, t115, t122, t123, t124;
  double t125, t128, t129, t132, t135, t136, t137, t138;
  double t141;

#ifndef XC_DONT_COMPILE_VXC
  double t148, t150, t151, t152, t154, t155, t157, t158;
  double t159, t161, t162, t163, t164, t166, t168, t170;
  double t171, t187, t199, t200, t202, t204, t207, t210;
  double t225, t228, t231, t234, t235, t238, t240, t241;
  double t243, t244, t246, t248, t249, t251, t253, t254;
  double t256, t258, t259, t266, t267, t268, t270, t272;
  double t273, t274, t276, t277, t278, t280, t296, t305;
  double t308, t309, t311, t314, t319, t334, t337, t340;
  double t343, t344, t347, t348, t349, t350, t353, t356;
  double t359, t362, t365, t368, t373, t386, t387, t388;
  double t391, t394, t397, t400, t403, t406, t411;

#ifndef XC_DONT_COMPILE_FXC
  double t418, t422, t424, t426, t428, t430, t431, t433;
  double t435, t437, t439, t441, t443, t447, t448, t467;
  double t487, t494, t501, t508, t519, t520, t522, t524;
  double t526, t528, t530, t540, t545, t554, t556, t558;
  double t560, t561, t563, t564, t566, t568, t570, t572;
  double t574, t576, t577, t579, t589, t594, t596, t599;
  double t601, t604, t606, t609, t611, t613, t614, t615;
  double t619, t623, t627, t629, t633, t637, t639, t662;
  double t671, t683, t685, t688, t690, t693, t695, t698;
  double t700, t722, t725, t749, t758, t760, t762, t764;
  double t766, t768, t772, t774, t776, t778, t780, t782;
  double t784, t803, t808, t810, t811, t813, t815, t817;
  double t819, t825, t849, t866, t879, t896, t908, t909;
  double t913, t916, t917, t951, t961, t962, t971, t986;
  double t990, t994, t998, t1002, t1003, t1038, t1041, t1055;
  double t1092, t1109, t1122, t1144, t1166, t1181, t1183, t1197;
#endif

#endif

#endif



  t1 = pow(rho[0], 0.1e1 / 0.12e2);
  t4 = pow(rho[1], 0.1e1 / 0.12e2);
  t7 = pow(rho[0], 0.1e1 / 0.6e1);
  t8 = t7 * rho[0];
  t10 = pow(rho[1], 0.1e1 / 0.6e1);
  t11 = t10 * rho[1];
  t13 = POW_1_3(rho[0]);
  t14 = t13 * rho[0];
  t16 = POW_1_3(rho[1]);
  t17 = t16 * rho[1];
  t19 = sqrt(rho[0]);
  t20 = t19 * rho[0];
  t22 = sqrt(rho[1]);
  t23 = t22 * rho[1];
  t25 = t13 * t13;
  t26 = t25 * rho[0];
  t28 = t16 * t16;
  t29 = t28 * rho[1];
  t31 = t1 * t1;
  t32 = t31 * t31;
  t33 = t32 * t1;
  t35 = t4 * t4;
  t36 = t35 * t35;
  t37 = t36 * t4;
  t39 = t33 * rho[0] + t37 * rho[1];
  t40 = sqrt(sigma[0]);
  t41 = 0.1e1 / t14;
  t42 = t40 * t41;
  t43 = rho[0] - rho[1];
  t44 = rho[0] + rho[1];
  t45 = 0.1e1 / t44;
  t46 = t43 * t45;
  t48 = 0.1e1 / 0.2e1 + t46 / 0.2e1;
  t49 = POW_1_3(t48);
  t50 = t49 * t48;
  t52 = sqrt(sigma[2]);
  t53 = 0.1e1 / t17;
  t54 = t52 * t53;
  t56 = 0.1e1 / 0.2e1 - t46 / 0.2e1;
  t57 = POW_1_3(t56);
  t58 = t57 * t56;
  t60 = t42 * t50 + t54 * t58;
  t63 = t20 + t23;
  t66 = 0.67883100000000000000e0 * t1 * rho[0] + 0.67883100000000000000e0 * t4 * rho[1] - 0.17582100000000000000e1 * t8 - 0.17582100000000000000e1 * t11 + 0.12767600000000000000e1 * t14 + 0.12767600000000000000e1 * t17 - 0.16078900000000000000e1 * t20 - 0.16078900000000000000e1 * t23 + 0.36561000000000000000e0 * t26 + 0.36561000000000000000e0 * t29 - 0.90663500000000000000e-1 * t39 * t60 + 0.73486500000000000000e-1 * t63 * t60;
  t67 = t26 + t29;
  t70 = t7 * t7;
  t71 = t70 * t70;
  t72 = t71 * t7;
  t73 = t72 * rho[0];
  t74 = t10 * t10;
  t75 = t74 * t74;
  t76 = t75 * t10;
  t77 = t76 * rho[1];
  t78 = t73 + t77;
  t81 = rho[0] * rho[0];
  t83 = 0.1e1 / t25 / t81;
  t84 = sigma[0] * t83;
  t85 = t48 * t48;
  t86 = t49 * t49;
  t87 = t86 * t85;
  t88 = t84 * t87;
  t89 = rho[1] * rho[1];
  t91 = 0.1e1 / t28 / t89;
  t92 = sigma[2] * t91;
  t93 = t56 * t56;
  t94 = t57 * t57;
  t95 = t94 * t93;
  t96 = t92 * t95;
  t97 = t88 + t96;
  t102 = t81 + t89;
  t108 = sigma[0] + 0.2e1 * sigma[1] + sigma[2];
  t109 = t44 * t44;
  t110 = POW_1_3(t44);
  t111 = t110 * t110;
  t113 = 0.1e1 / t111 / t109;
  t114 = t108 * t113;
  t115 = 0.2e1 * t88 + 0.2e1 * t96 - t114;
  t122 = t8 + t11;
  t123 = t43 * t43;
  t124 = t122 * t123;
  t125 = 0.1e1 / t109;
  t128 = t14 + t17;
  t129 = t128 * t123;
  t132 = t63 * t123;
  t135 = POW_5_3(rho[0]);
  t136 = POW_5_3(rho[1]);
  t137 = t135 + t136;
  t138 = t137 * t123;
  t141 = 0.73570500000000000000e-1 * t67 * t60 - 0.35845850000000000000e-1 * t78 * t60 - 0.20358350000000000000e-1 * t67 * t97 + 0.10731250000000000000e-1 * t78 * t97 - 0.38407800000000000000e-3 * t102 * t97 + 0.31037700000000000000e-1 * t67 * t115 - 0.72032600000000000000e-1 * t78 * t115 + 0.44656200000000000000e-1 * t102 * t115 - 0.26680200000000000000e0 * t124 * t125 + 0.15082200000000000000e1 * t129 * t125 - 0.19451500000000000000e1 * t132 * t125 + 0.67907800000000000000e0 * t138 * t125;
  if(zk != NULL && (p->info->flags & XC_FLAGS_HAVE_EXC))
    zk[0] = (t66 + t141) * t45;

#ifndef XC_DONT_COMPILE_VXC

  if(order < 1) return;


  t148 = t81 * rho[0];
  t150 = 0.1e1 / t25 / t148;
  t151 = sigma[0] * t150;
  t152 = t151 * t87;
  t154 = t86 * t48;
  t155 = t43 * t125;
  t157 = t45 / 0.2e1 - t155 / 0.2e1;
  t158 = t154 * t157;
  t159 = t84 * t158;
  t161 = t94 * t56;
  t162 = -t157;
  t163 = t161 * t162;
  t164 = t92 * t163;
  t166 = t109 * t44;
  t168 = 0.1e1 / t111 / t166;
  t170 = 0.8e1 / 0.3e1 * t108 * t168;
  t171 = -0.16e2 / 0.3e1 * t152 + 0.16e2 / 0.3e1 * t159 + 0.16e2 / 0.3e1 * t164 + t170;
  t187 = -0.8e1 / 0.3e1 * t152 + 0.8e1 / 0.3e1 * t159 + 0.8e1 / 0.3e1 * t164;
  t199 = 0.1e1 / t13 / t81;
  t200 = t40 * t199;
  t202 = t49 * t157;
  t204 = t57 * t162;
  t207 = -0.4e1 / 0.3e1 * t200 * t50 + 0.4e1 / 0.3e1 * t42 * t202 + 0.4e1 / 0.3e1 * t54 * t204;
  t210 = -0.20512450000000000000e1 * t7 + 0.17023466666666666667e1 * t13 + 0.73540025000000000000e0 * t1 - 0.24118350000000000000e1 * t19 + 0.60935000000000000000e0 * t25 + 0.44656200000000000000e-1 * t102 * t171 + 0.89312400000000000000e-1 * rho[0] * t115 - 0.76815600000000000000e-3 * rho[0] * t97 + 0.31037700000000000000e-1 * t67 * t171 + 0.51729500000000000000e-1 * t25 * t115 - 0.72032600000000000000e-1 * t78 * t171 - 0.13205976666666666667e0 * t72 * t115 - 0.20358350000000000000e-1 * t67 * t187 - 0.33930583333333333333e-1 * t25 * t97 + 0.10731250000000000000e-1 * t78 * t187 + 0.19673958333333333333e-1 * t72 * t97 - 0.38407800000000000000e-3 * t102 * t187 + 0.73570500000000000000e-1 * t67 * t207;
  t225 = t7 * t123;
  t228 = t13 * t123;
  t231 = t19 * t123;
  t234 = POW_2_3(rho[0]);
  t235 = t234 * t123;
  t238 = t122 * t43;
  t240 = 0.53360400000000000000e0 * t238 * t125;
  t241 = 0.1e1 / t166;
  t243 = 0.53360400000000000000e0 * t124 * t241;
  t244 = t128 * t43;
  t246 = 0.30164400000000000000e1 * t244 * t125;
  t248 = 0.30164400000000000000e1 * t129 * t241;
  t249 = t63 * t43;
  t251 = 0.38903000000000000000e1 * t249 * t125;
  t253 = 0.38903000000000000000e1 * t132 * t241;
  t254 = t137 * t43;
  t256 = 0.13581560000000000000e1 * t254 * t125;
  t258 = 0.13581560000000000000e1 * t138 * t241;
  t259 = 0.12261750000000000000e0 * t25 * t60 - 0.35845850000000000000e-1 * t78 * t207 - 0.65717391666666666667e-1 * t72 * t60 - 0.90663500000000000000e-1 * t39 * t207 - 0.12843995833333333333e0 * t33 * t60 + 0.73486500000000000000e-1 * t63 * t207 + 0.11022975000000000000e0 * t19 * t60 - 0.31126900000000000000e0 * t225 * t125 + 0.20109600000000000000e1 * t228 * t125 - 0.29177250000000000000e1 * t231 * t125 + 0.11317966666666666667e1 * t235 * t125 - t240 + t243 + t246 - t248 - t251 + t253 + t256 - t258;
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vrho[0] = t210 + t259;

  t266 = -t45 / 0.2e1 - t155 / 0.2e1;
  t267 = t154 * t266;
  t268 = t84 * t267;
  t270 = t89 * rho[1];
  t272 = 0.1e1 / t28 / t270;
  t273 = sigma[2] * t272;
  t274 = t273 * t95;
  t276 = -t266;
  t277 = t161 * t276;
  t278 = t92 * t277;
  t280 = 0.16e2 / 0.3e1 * t268 - 0.16e2 / 0.3e1 * t274 + 0.16e2 / 0.3e1 * t278 + t170;
  t296 = 0.8e1 / 0.3e1 * t268 - 0.8e1 / 0.3e1 * t274 + 0.8e1 / 0.3e1 * t278;
  t305 = t49 * t266;
  t308 = 0.1e1 / t16 / t89;
  t309 = t52 * t308;
  t311 = t57 * t276;
  t314 = 0.4e1 / 0.3e1 * t42 * t305 - 0.4e1 / 0.3e1 * t309 * t58 + 0.4e1 / 0.3e1 * t54 * t311;
  t319 = -0.20512450000000000000e1 * t10 + 0.17023466666666666667e1 * t16 + 0.73540025000000000000e0 * t4 + 0.60935000000000000000e0 * t28 - 0.24118350000000000000e1 * t22 + 0.44656200000000000000e-1 * t102 * t280 + 0.89312400000000000000e-1 * rho[1] * t115 + 0.31037700000000000000e-1 * t67 * t280 + 0.51729500000000000000e-1 * t28 * t115 - 0.72032600000000000000e-1 * t78 * t280 - 0.13205976666666666667e0 * t76 * t115 - 0.33930583333333333333e-1 * t28 * t97 + 0.10731250000000000000e-1 * t78 * t296 + 0.19673958333333333333e-1 * t76 * t97 - 0.38407800000000000000e-3 * t102 * t296 - 0.76815600000000000000e-3 * rho[1] * t97 + 0.73570500000000000000e-1 * t67 * t314 + 0.12261750000000000000e0 * t28 * t60;
  t334 = t10 * t123;
  t337 = t16 * t123;
  t340 = t22 * t123;
  t343 = POW_2_3(rho[1]);
  t344 = t343 * t123;
  t347 = -0.35845850000000000000e-1 * t78 * t314 - 0.65717391666666666667e-1 * t76 * t60 - 0.20358350000000000000e-1 * t67 * t296 - 0.90663500000000000000e-1 * t39 * t314 - 0.12843995833333333333e0 * t37 * t60 + 0.73486500000000000000e-1 * t63 * t314 + 0.11022975000000000000e0 * t22 * t60 - 0.31126900000000000000e0 * t334 * t125 + 0.20109600000000000000e1 * t337 * t125 - 0.29177250000000000000e1 * t340 * t125 + 0.11317966666666666667e1 * t344 * t125 + t240 + t243 - t246 - t248 + t251 + t253 - t256 - t258;
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vrho[1] = t319 + t347;

  t348 = 0.1e1 / t40;
  t349 = t39 * t348;
  t350 = t41 * t50;
  t353 = t63 * t348;
  t356 = t67 * t348;
  t359 = t78 * t348;
  t362 = t67 * t83;
  t365 = t78 * t83;
  t368 = t102 * t83;
  t373 = 0.2e1 * t83 * t87 - t113;
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vsigma[0] = -0.45331750000000000000e-1 * t349 * t350 + 0.36743250000000000000e-1 * t353 * t350 + 0.36785250000000000000e-1 * t356 * t350 - 0.17922925000000000000e-1 * t359 * t350 - 0.20358350000000000000e-1 * t362 * t87 + 0.10731250000000000000e-1 * t365 * t87 - 0.38407800000000000000e-3 * t368 * t87 + 0.31037700000000000000e-1 * t67 * t373 - 0.72032600000000000000e-1 * t78 * t373 + 0.44656200000000000000e-1 * t102 * t373;

  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vsigma[1] = -0.62075400000000000000e-1 * t67 * t113 + 0.14406520000000000000e0 * t78 * t113 - 0.89312400000000000000e-1 * t102 * t113;

  t386 = 0.1e1 / t52;
  t387 = t39 * t386;
  t388 = t53 * t58;
  t391 = t63 * t386;
  t394 = t67 * t386;
  t397 = t78 * t386;
  t400 = t67 * t91;
  t403 = t78 * t91;
  t406 = t102 * t91;
  t411 = 0.2e1 * t91 * t95 - t113;
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vsigma[2] = -0.45331750000000000000e-1 * t387 * t388 + 0.36743250000000000000e-1 * t391 * t388 + 0.36785250000000000000e-1 * t394 * t388 - 0.17922925000000000000e-1 * t397 * t388 - 0.20358350000000000000e-1 * t400 * t95 + 0.10731250000000000000e-1 * t403 * t95 - 0.38407800000000000000e-3 * t406 * t95 + 0.31037700000000000000e-1 * t67 * t411 - 0.72032600000000000000e-1 * t78 * t411 + 0.44656200000000000000e-1 * t102 * t411;

#ifndef XC_DONT_COMPILE_FXC

  if(order < 2) return;


  t418 = t81 * t81;
  t422 = sigma[0] / t25 / t418 * t87;
  t424 = t151 * t158;
  t426 = t157 * t157;
  t428 = t84 * t86 * t426;
  t430 = t43 * t241;
  t431 = -t125 + t430;
  t433 = t84 * t154 * t431;
  t435 = t162 * t162;
  t437 = t92 * t94 * t435;
  t439 = -t431;
  t441 = t92 * t161 * t439;
  t443 = t109 * t109;
  t447 = 0.88e2 / 0.9e1 * t108 / t111 / t443;
  t448 = 0.176e3 / 0.9e1 * t422 - 0.256e3 / 0.9e1 * t424 + 0.80e2 / 0.9e1 * t428 + 0.16e2 / 0.3e1 * t433 + 0.80e2 / 0.9e1 * t437 + 0.16e2 / 0.3e1 * t441 - t447;
  t467 = 0.88e2 / 0.9e1 * t422 - 0.128e3 / 0.9e1 * t424 + 0.40e2 / 0.9e1 * t428 + 0.8e1 / 0.3e1 * t433 + 0.40e2 / 0.9e1 * t437 + 0.8e1 / 0.3e1 * t441;
  t487 = 0.1e1 / t86;
  t494 = 0.1e1 / t94;
  t501 = 0.28e2 / 0.9e1 * t40 / t13 / t148 * t50 - 0.32e2 / 0.9e1 * t200 * t202 + 0.4e1 / 0.9e1 * t42 * t487 * t426 + 0.4e1 / 0.3e1 * t42 * t49 * t431 + 0.4e1 / 0.9e1 * t54 * t494 * t435 + 0.4e1 / 0.3e1 * t54 * t57 * t439;
  t508 = 0.44656200000000000000e-1 * t102 * t448 + 0.17862480000000000000e0 * rho[0] * t171 - 0.72032600000000000000e-1 * t78 * t448 - 0.26411953333333333334e0 * t72 * t171 + 0.31037700000000000000e-1 * t67 * t448 + 0.10345900000000000000e0 * t25 * t171 - 0.38407800000000000000e-3 * t102 * t467 - 0.15363120000000000000e-2 * rho[0] * t187 + 0.10731250000000000000e-1 * t78 * t467 + 0.39347916666666666666e-1 * t72 * t187 - 0.20358350000000000000e-1 * t67 * t467 - 0.67861166666666666666e-1 * t25 * t187 - 0.35845850000000000000e-1 * t78 * t501 - 0.13143478333333333333e0 * t72 * t207 + 0.73570500000000000000e-1 * t67 * t501;
  t519 = t31 * t1;
  t520 = t32 * t32;
  t522 = 0.1e1 / t520 / t519;
  t524 = 0.1e1 / t13;
  t526 = 0.1e1 / t72;
  t528 = 0.1e1 / t25;
  t530 = 0.1e1 / t19;
  t540 = 0.1e1 / t7;
  t545 = 0.24523500000000000000e0 * t25 * t207 + 0.73486500000000000000e-1 * t63 * t501 + 0.22045950000000000000e0 * t19 * t207 - 0.90663500000000000000e-1 * t39 * t501 - 0.25687991666666666666e0 * t33 * t207 + 0.61283354166666666667e-1 * t522 + 0.40623333333333333333e0 * t524 - 0.34187416666666666667e0 * t526 + 0.56744888888888888890e0 * t528 - 0.12059175000000000000e1 * t530 - 0.53516649305555555554e-1 / t32 / t519 * t60 + 0.55114875000000000000e-1 * t530 * t60 + 0.81745000000000000000e-1 * t524 * t60 - 0.54764493055555555556e-1 * t540 * t60 - 0.22620388888888888889e-1 * t524 * t97;
  t554 = 0.53360400000000000000e0 * t122 * t125;
  t556 = 0.30164400000000000000e1 * t128 * t125;
  t558 = 0.38903000000000000000e1 * t63 * t125;
  t560 = 0.13581560000000000000e1 * t137 * t125;
  t561 = 0.89312400000000000000e-1 * t114;
  t563 = 0.21344160000000000000e1 * t238 * t241;
  t564 = 0.1e1 / t443;
  t566 = 0.16008120000000000000e1 * t124 * t564;
  t568 = 0.12065760000000000000e2 * t244 * t241;
  t570 = 0.90493200000000000000e1 * t129 * t564;
  t572 = 0.15561200000000000000e2 * t249 * t241;
  t574 = 0.11670900000000000000e2 * t132 * t564;
  t576 = 0.54326240000000000000e1 * t254 * t241;
  t577 = 0.16394965277777777777e-1 * t540 * t97 + 0.34486333333333333333e-1 * t524 * t115 - 0.11004980555555555556e0 * t540 * t115 - t554 + t556 - t558 + t560 - t561 + t563 - t566 - t568 + t570 + t572 - t574 - t576;
  t579 = 0.40744680000000000000e1 * t138 * t564;
  t589 = 0.1e1 / POW_1_3(rho[0]);
  t594 = t7 * t43 * t125;
  t596 = t225 * t241;
  t599 = t13 * t43 * t125;
  t601 = t228 * t241;
  t604 = t19 * t43 * t125;
  t606 = t231 * t241;
  t609 = t234 * t43 * t125;
  t611 = t235 * t241;
  t613 = 0.17785664400000000000e0 * t88;
  t614 = 0.17785664400000000000e0 * t96;
  t615 = t579 - 0.51878166666666666667e-1 * t526 * t123 * t125 + 0.67032000000000000000e0 * t528 * t123 * t125 - 0.14588625000000000000e1 * t530 * t123 * t125 + 0.75453111111111111117e0 * t589 * t123 * t125 - 0.12450760000000000000e1 * t594 + 0.12450760000000000000e1 * t596 + 0.80438400000000000000e1 * t599 - 0.80438400000000000000e1 * t601 - 0.11670900000000000000e2 * t604 + 0.11670900000000000000e2 * t606 + 0.45271866666666666668e1 * t609 - 0.45271866666666666668e1 * t611 + t613 + t614;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[0] = t508 + t545 + t577 + t615;

  t619 = t151 * t267;
  t623 = t84 * t86 * t266 * t157;
  t627 = t84 * t154 * t43 * t241;
  t629 = t273 * t163;
  t633 = t92 * t94 * t276 * t162;
  t637 = t92 * t161 * t43 * t241;
  t639 = -0.128e3 / 0.9e1 * t619 + 0.80e2 / 0.9e1 * t623 + 0.16e2 / 0.3e1 * t627 - 0.128e3 / 0.9e1 * t629 + 0.80e2 / 0.9e1 * t633 - 0.16e2 / 0.3e1 * t637 - t447;
  t662 = -0.64e2 / 0.9e1 * t619 + 0.40e2 / 0.9e1 * t623 + 0.8e1 / 0.3e1 * t627 - 0.64e2 / 0.9e1 * t629 + 0.40e2 / 0.9e1 * t633 - 0.8e1 / 0.3e1 * t637;
  t671 = 0.89312400000000000000e-1 * rho[1] * t171 + 0.44656200000000000000e-1 * t102 * t639 + 0.89312400000000000000e-1 * rho[0] * t280 - 0.72032600000000000000e-1 * t78 * t639 - 0.13205976666666666667e0 * t72 * t280 - 0.13205976666666666667e0 * t76 * t171 + 0.51729500000000000000e-1 * t25 * t280 + 0.51729500000000000000e-1 * t28 * t171 + 0.31037700000000000000e-1 * t67 * t639 - 0.38407800000000000000e-3 * t102 * t662 - 0.76815600000000000000e-3 * rho[0] * t296 - 0.76815600000000000000e-3 * rho[1] * t187 + 0.19673958333333333333e-1 * t72 * t296;
  t683 = t10 * t43 * t125;
  t685 = t334 * t241;
  t688 = t16 * t43 * t125;
  t690 = t337 * t241;
  t693 = t22 * t43 * t125;
  t695 = t340 * t241;
  t698 = t343 * t43 * t125;
  t700 = t344 * t241;
  t722 = -0.16e2 / 0.9e1 * t200 * t305 + 0.4e1 / 0.9e1 * t42 * t487 * t266 * t157 + 0.4e1 / 0.3e1 * t42 * t49 * t43 * t241 - 0.16e2 / 0.9e1 * t309 * t204 + 0.4e1 / 0.9e1 * t54 * t494 * t276 * t162 - 0.4e1 / 0.3e1 * t54 * t57 * t43 * t241;
  t725 = 0.19673958333333333333e-1 * t76 * t187 - 0.33930583333333333333e-1 * t28 * t187 + 0.10731250000000000000e-1 * t78 * t662 - 0.20358350000000000000e-1 * t67 * t662 - 0.33930583333333333333e-1 * t25 * t296 - 0.62253800000000000000e0 * t683 + 0.62253800000000000000e0 * t685 + 0.40219200000000000000e1 * t688 - 0.40219200000000000000e1 * t690 - 0.58354500000000000000e1 * t693 + 0.58354500000000000000e1 * t695 + 0.22635933333333333334e1 * t698 - 0.22635933333333333334e1 * t700 - 0.35845850000000000000e-1 * t78 * t722;
  t749 = -0.65717391666666666667e-1 * t72 * t314 - 0.65717391666666666667e-1 * t76 * t207 + 0.12261750000000000000e0 * t25 * t314 + 0.12261750000000000000e0 * t28 * t207 + 0.11022975000000000000e0 * t22 * t207 + 0.73570500000000000000e-1 * t67 * t722 + 0.73486500000000000000e-1 * t63 * t722 + 0.11022975000000000000e0 * t19 * t314 - 0.90663500000000000000e-1 * t39 * t722 - 0.12843995833333333333e0 * t33 * t314 - 0.12843995833333333333e0 * t37 * t207 + t554 - t556;
  t758 = t558 - t560 - t566 + t570 - t574 + t579 + 0.62253800000000000000e0 * t594 + 0.62253800000000000000e0 * t596 - 0.40219200000000000000e1 * t599 - 0.40219200000000000000e1 * t601 + 0.58354500000000000000e1 * t604 + 0.58354500000000000000e1 * t606 - 0.22635933333333333334e1 * t609 - 0.22635933333333333334e1 * t611;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[1] = t671 + t725 + t749 + t758;

  t760 = t266 * t266;
  t762 = t84 * t86 * t760;
  t764 = t125 + t430;
  t766 = t84 * t154 * t764;
  t768 = t89 * t89;
  t772 = sigma[2] / t28 / t768 * t95;
  t774 = t273 * t277;
  t776 = t276 * t276;
  t778 = t92 * t94 * t776;
  t780 = -t764;
  t782 = t92 * t161 * t780;
  t784 = 0.80e2 / 0.9e1 * t762 + 0.16e2 / 0.3e1 * t766 + 0.176e3 / 0.9e1 * t772 - 0.256e3 / 0.9e1 * t774 + 0.80e2 / 0.9e1 * t778 + 0.16e2 / 0.3e1 * t782 - t447;
  t803 = 0.40e2 / 0.9e1 * t762 + 0.8e1 / 0.3e1 * t766 + 0.88e2 / 0.9e1 * t772 - 0.128e3 / 0.9e1 * t774 + 0.40e2 / 0.9e1 * t778 + 0.8e1 / 0.3e1 * t782;
  t808 = 0.1e1 / t28;
  t810 = t35 * t4;
  t811 = t36 * t36;
  t813 = 0.1e1 / t811 / t810;
  t815 = 0.1e1 / t76;
  t817 = 0.1e1 / t16;
  t819 = 0.1e1 / t22;
  t825 = 0.44656200000000000000e-1 * t102 * t784 + 0.17862480000000000000e0 * rho[1] * t280 - 0.72032600000000000000e-1 * t78 * t784 - 0.26411953333333333334e0 * t76 * t280 + 0.31037700000000000000e-1 * t67 * t784 + 0.10345900000000000000e0 * t28 * t280 - 0.38407800000000000000e-3 * t102 * t803 - 0.15363120000000000000e-2 * rho[1] * t296 + 0.56744888888888888890e0 * t808 + 0.61283354166666666667e-1 * t813 - 0.34187416666666666667e0 * t815 + 0.40623333333333333333e0 * t817 - 0.12059175000000000000e1 * t819 + 0.10731250000000000000e-1 * t78 * t803 + 0.39347916666666666666e-1 * t76 * t296;
  t849 = 0.4e1 / 0.9e1 * t42 * t487 * t760 + 0.4e1 / 0.3e1 * t42 * t49 * t764 + 0.28e2 / 0.9e1 * t52 / t16 / t270 * t58 - 0.32e2 / 0.9e1 * t309 * t311 + 0.4e1 / 0.9e1 * t54 * t494 * t776 + 0.4e1 / 0.3e1 * t54 * t57 * t780;
  t866 = 0.1e1 / t10;
  t879 = -0.20358350000000000000e-1 * t67 * t803 - 0.67861166666666666666e-1 * t28 * t296 - 0.35845850000000000000e-1 * t78 * t849 - 0.13143478333333333333e0 * t76 * t314 + 0.73570500000000000000e-1 * t67 * t849 + 0.24523500000000000000e0 * t28 * t314 - 0.53516649305555555554e-1 / t36 / t810 * t60 + 0.55114875000000000000e-1 * t819 * t60 + 0.81745000000000000000e-1 * t817 * t60 - 0.54764493055555555556e-1 * t866 * t60 - 0.22620388888888888889e-1 * t817 * t97 + 0.16394965277777777777e-1 * t866 * t97 + 0.34486333333333333333e-1 * t817 * t115 - 0.11004980555555555556e0 * t866 * t115 - 0.25687991666666666666e0 * t37 * t314;
  t896 = 0.1e1 / POW_1_3(rho[1]);
  t908 = 0.73486500000000000000e-1 * t63 * t849 + 0.22045950000000000000e0 * t22 * t314 - 0.90663500000000000000e-1 * t39 * t849 - 0.51878166666666666667e-1 * t815 * t123 * t125 + 0.67032000000000000000e0 * t808 * t123 * t125 - 0.14588625000000000000e1 * t819 * t123 * t125 + 0.75453111111111111117e0 * t896 * t123 * t125 + 0.12450760000000000000e1 * t683 + 0.12450760000000000000e1 * t685 - 0.80438400000000000000e1 * t688 - 0.80438400000000000000e1 * t690 + 0.11670900000000000000e2 * t693 + 0.11670900000000000000e2 * t695 - 0.45271866666666666668e1 * t698 - 0.45271866666666666668e1 * t700;
  t909 = -t554 + t556 - t558 + t560 - t561 - t563 - t566 + t568 + t570 - t572 - t574 + t576 + t579 + t613 + t614;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[2] = t825 + t879 + t908 + t909;

  t913 = t83 * t154;
  t916 = 0.8e1 / 0.3e1 * t168;
  t917 = -0.16e2 / 0.3e1 * t150 * t87 + 0.16e2 / 0.3e1 * t913 * t157 + t916;
  t951 = 0.31037700000000000000e-1 * t67 * t917 + 0.51729500000000000000e-1 * t25 * t373 - 0.72032600000000000000e-1 * t78 * t917 - 0.13205976666666666667e0 * t72 * t373 + 0.44656200000000000000e-1 * t102 * t917 + 0.89312400000000000000e-1 * rho[0] * t373 - 0.33930583333333333333e-1 / t81 * t87 + 0.19673958333333333333e-1 / t73 * t87 - 0.76815600000000000000e-3 / t26 * t87 + 0.54288933333333333333e-1 * t67 * t150 * t87 - 0.28616666666666666667e-1 * t78 * t150 * t87 + 0.10242080000000000000e-2 * t102 * t150 * t87 - 0.64219979166666666667e-1 * t522 * t348 * t50;
  t961 = t41 * t49;
  t962 = t961 * t157;
  t971 = t199 * t50;
  t986 = 0.55114875000000000000e-1 * t526 * t348 * t50 + 0.61308750000000000000e-1 * t528 * t348 * t50 - 0.32858695833333333333e-1 * t530 * t348 * t50 - 0.60442333333333333333e-1 * t349 * t962 + 0.48991000000000000000e-1 * t353 * t962 + 0.49047000000000000000e-1 * t356 * t962 - 0.23897233333333333333e-1 * t359 * t962 + 0.60442333333333333333e-1 * t349 * t971 - 0.48991000000000000000e-1 * t353 * t971 - 0.49047000000000000000e-1 * t356 * t971 + 0.23897233333333333333e-1 * t359 * t971 - 0.54288933333333333333e-1 * t362 * t158 + 0.28616666666666666667e-1 * t365 * t158 - 0.10242080000000000000e-2 * t368 * t158;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rhosigma[0] = t951 + t986;

  t990 = 0.16553440000000000000e0 * t67 * t168;
  t994 = 0.38417386666666666667e0 * t78 * t168;
  t998 = 0.23816640000000000000e0 * t102 * t168;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rhosigma[1] = -0.10345900000000000000e0 * t25 * t113 + t990 + 0.26411953333333333333e0 * t72 * t113 - t994 - 0.17862480000000000000e0 * rho[0] * t113 + t998;

  t1002 = t53 * t57;
  t1003 = t1002 * t162;
  t1038 = t91 * t161;
  t1041 = 0.16e2 / 0.3e1 * t1038 * t162 + t916;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rhosigma[2] = -0.64219979166666666667e-1 * t33 * t386 * t388 - 0.60442333333333333333e-1 * t387 * t1003 + 0.55114875000000000000e-1 * t19 * t386 * t388 + 0.48991000000000000000e-1 * t391 * t1003 + 0.61308750000000000000e-1 * t25 * t386 * t388 + 0.49047000000000000000e-1 * t394 * t1003 - 0.32858695833333333333e-1 * t72 * t386 * t388 - 0.23897233333333333333e-1 * t397 * t1003 - 0.33930583333333333333e-1 * t25 * t91 * t95 - 0.54288933333333333333e-1 * t400 * t163 + 0.19673958333333333333e-1 * t72 * t91 * t95 + 0.28616666666666666667e-1 * t403 * t163 - 0.76815600000000000000e-3 * rho[0] * t91 * t95 - 0.10242080000000000000e-2 * t406 * t163 + 0.51729500000000000000e-1 * t25 * t411 + 0.31037700000000000000e-1 * t67 * t1041 - 0.13205976666666666667e0 * t72 * t411 - 0.72032600000000000000e-1 * t78 * t1041 + 0.89312400000000000000e-1 * rho[0] * t411 + 0.44656200000000000000e-1 * t102 * t1041;

  t1055 = t961 * t266;
  t1092 = 0.16e2 / 0.3e1 * t913 * t266 + t916;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rhosigma[3] = -0.64219979166666666667e-1 * t37 * t348 * t350 - 0.60442333333333333333e-1 * t349 * t1055 + 0.55114875000000000000e-1 * t22 * t348 * t350 + 0.48991000000000000000e-1 * t353 * t1055 + 0.61308750000000000000e-1 * t28 * t348 * t350 + 0.49047000000000000000e-1 * t356 * t1055 - 0.32858695833333333333e-1 * t76 * t348 * t350 - 0.23897233333333333333e-1 * t359 * t1055 - 0.33930583333333333333e-1 * t28 * t83 * t87 - 0.54288933333333333333e-1 * t362 * t267 + 0.19673958333333333333e-1 * t76 * t83 * t87 + 0.28616666666666666667e-1 * t365 * t267 - 0.76815600000000000000e-3 * rho[1] * t83 * t87 - 0.10242080000000000000e-2 * t368 * t267 + 0.51729500000000000000e-1 * t28 * t373 + 0.31037700000000000000e-1 * t67 * t1092 - 0.13205976666666666667e0 * t76 * t373 - 0.72032600000000000000e-1 * t78 * t1092 + 0.89312400000000000000e-1 * rho[1] * t373 + 0.44656200000000000000e-1 * t102 * t1092;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rhosigma[4] = -0.10345900000000000000e0 * t28 * t113 + t990 + 0.26411953333333333333e0 * t76 * t113 - t994 - 0.17862480000000000000e0 * rho[1] * t113 + t998;

  t1109 = t1002 * t276;
  t1122 = -0.16e2 / 0.3e1 * t272 * t95 + 0.16e2 / 0.3e1 * t1038 * t276 + t916;
  t1144 = -0.60442333333333333333e-1 * t387 * t1109 + 0.48991000000000000000e-1 * t391 * t1109 + 0.49047000000000000000e-1 * t394 * t1109 - 0.23897233333333333333e-1 * t397 * t1109 + 0.44656200000000000000e-1 * t102 * t1122 + 0.89312400000000000000e-1 * rho[1] * t411 - 0.33930583333333333333e-1 / t89 * t95 + 0.19673958333333333333e-1 / t77 * t95 - 0.76815600000000000000e-3 / t29 * t95 + 0.31037700000000000000e-1 * t67 * t1122 + 0.51729500000000000000e-1 * t28 * t411 - 0.72032600000000000000e-1 * t78 * t1122 - 0.13205976666666666667e0 * t76 * t411;
  t1166 = t308 * t58;
  t1181 = -0.64219979166666666667e-1 * t813 * t386 * t58 + 0.55114875000000000000e-1 * t815 * t386 * t58 + 0.61308750000000000000e-1 * t808 * t386 * t58 - 0.32858695833333333333e-1 * t819 * t386 * t58 + 0.54288933333333333333e-1 * t67 * t272 * t95 - 0.28616666666666666667e-1 * t78 * t272 * t95 + 0.10242080000000000000e-2 * t102 * t272 * t95 + 0.60442333333333333333e-1 * t387 * t1166 - 0.48991000000000000000e-1 * t391 * t1166 - 0.49047000000000000000e-1 * t394 * t1166 + 0.23897233333333333333e-1 * t397 * t1166 - 0.54288933333333333333e-1 * t400 * t277 + 0.28616666666666666667e-1 * t403 * t277 - 0.10242080000000000000e-2 * t406 * t277;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rhosigma[5] = t1144 + t1181;

  t1183 = 0.1e1 / t40 / sigma[0];
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigma2[0] = 0.22665875000000000000e-1 * t39 * t1183 * t350 - 0.18371625000000000000e-1 * t63 * t1183 * t350 - 0.18392625000000000000e-1 * t67 * t1183 * t350 + 0.89614625000000000000e-2 * t78 * t1183 * t350;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigma2[1] = 0.0e0;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigma2[2] = 0.0e0;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigma2[3] = 0.0e0;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigma2[4] = 0.0e0;

  t1197 = 0.1e1 / t52 / sigma[2];
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigma2[5] = 0.22665875000000000000e-1 * t39 * t1197 * t388 - 0.18371625000000000000e-1 * t63 * t1197 * t388 - 0.18392625000000000000e-1 * t67 * t1197 * t388 + 0.89614625000000000000e-2 * t78 * t1197 * t388;

#ifndef XC_DONT_COMPILE_KXC

  if(order < 3) return;


#endif

#endif

#endif


}

