/* 
  This file was generated automatically with ./scripts/maple2c.pl.
  Do not edit this file directly as it can be overwritten!!

  This Source Code Form is subject to the terms of the Mozilla Public
  License, v. 2.0. If a copy of the MPL was not distributed with this
  file, You can obtain one at http://mozilla.org/MPL/2.0/.

  Maple version     : Maple 2016 (X86 64 LINUX)
  Maple source      : ./maple/gga_exc/gga_c_tca.mpl
  Type of functional: gga_exc
*/

#define maple2c_order 2
#define MAPLE2C_FLAGS (XC_FLAGS_I_HAVE_EXC | XC_FLAGS_I_HAVE_VXC | XC_FLAGS_I_HAVE_FXC)


static inline void
func_unpol(const xc_func_type *p, int order, const double *rho, const double *sigma , double *zk GGA_OUT_PARAMS_NO_EXC(XC_COMMA double *, ))
{

#ifndef XC_DONT_COMPILE_EXC
  double t1, t3, t4, t5, t6, t7, t12, t13;
  double t15, t16, t17, t18, t19, t21, t22, t23;
  double t24, t25, t26, t27, t28, t31, t33, t34;
  double t36, t37, t39;

#ifndef XC_DONT_COMPILE_VXC
  double t41, t42, t43, t46, t49, t51, t52, t53;
  double t54, t56, t58, t61, t63, t64, t65;

#ifndef XC_DONT_COMPILE_FXC
  double t73, t79, t85, t96, t105, t107, t108, t111;
  double t112, t113, t114, t115, t119, t132, t133, t134;
  double t138, t145;
#endif

#endif

#endif



  t1 = M_CBRT3;
  t3 = POW_1_3(0.1e1 / M_PI);
  t4 = t1 * t3;
  t5 = M_CBRT4;
  t6 = t5 * t5;
  t7 = POW_1_3(rho[0]);
  t12 = 0.4888270e1 + 0.79425925000000000000e0 * t4 * t6 / t7;
  t13 = atan(t12);
  t15 = -0.655868e0 * t13 + 0.897889e0;
  t16 = t1 * t1;
  t17 = t15 * t16;
  t18 = 0.1e1 / t3;
  t19 = t17 * t18;
  t21 = M_CBRT6;
  t22 = t21 * t21;
  t23 = M_PI * M_PI;
  t24 = POW_1_3(t23);
  t25 = 0.1e1 / t24;
  t26 = t22 * t25;
  t27 = M_CBRT2;
  t28 = sqrt(sigma[0]);
  t31 = 0.1e1 / t7 / rho[0];
  t33 = t26 * t27 * t28 * t31;
  t34 = pow(t33, 0.230e1);
  t36 = 0.1e1 + 0.47121507034422759993e-2 * t34;
  t37 = 0.1e1 / t36;
  t39 = t19 * t5 * t7 * t37;
  if(zk != NULL && (p->info->flags & XC_FLAGS_HAVE_EXC))
    zk[0] = t39 / 0.3e1;

#ifndef XC_DONT_COMPILE_VXC

  if(order < 1) return;


  t41 = t12 * t12;
  t42 = t41 + 0.1e1;
  t43 = 0.1e1 / t42;
  t46 = 0.1e1 / rho[0];
  t49 = t16 * t18 * t5;
  t51 = t36 * t36;
  t52 = 0.1e1 / t51;
  t53 = pow(t33, 0.130e1);
  t54 = t52 * t53;
  t56 = t25 * t27;
  t58 = t54 * t22 * t56 * t28;
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vrho[0] = 0.4e1 / 0.9e1 * t39 + 0.69457230103866666663e0 * t43 * t37 + 0.48168651635187710217e-2 * t46 * t15 * t49 * t58;

  t61 = t18 * t5;
  t63 = t17 * t61 * t52;
  t64 = t53 * t22;
  t65 = 0.1e1 / t28;
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vsigma[0] = -0.18063244363195391331e-2 * t63 * t64 * t56 * t65;

#ifndef XC_DONT_COMPILE_FXC

  if(order < 2) return;


  t73 = t7 * t7;
  t79 = rho[0] * rho[0];
  t85 = t42 * t42;
  t96 = 0.1e1 / t7 / t79;
  t105 = 0.1e1 / t7 / t79 / rho[0] * t15 * t49;
  t107 = 0.1e1 / t51 / t36;
  t108 = pow(t33, 0.260e1);
  t111 = t24 * t24;
  t112 = 0.1e1 / t111;
  t113 = t27 * t27;
  t114 = t112 * t113;
  t115 = t114 * sigma[0];
  t119 = pow(t33, 0.30e0);
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[0] = 0.92609640138488888884e0 * t46 * t43 * t37 + 0.4e1 / 0.27e2 * t19 * t5 / t73 * t37 + 0.16056217211729236738e-2 * t17 * t61 / t79 * t58 + 0.36778031659583040509e0 / t85 * t37 * t12 * t4 * t6 * t31 + 0.20073966722509356988e-1 * t43 * t52 * t64 * t56 * t28 * t96 + 0.83527884012674580095e-3 * t105 * t107 * t108 * t21 * t115 - 0.50095397700595218626e-1 * t105 * t52 * t119 * t21 * t115;

  t132 = t17 * t61 * t107;
  t133 = t108 * t21;
  t134 = t114 * t96;
  t138 = t119 * t21;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rhosigma[0] = -0.37638687604705044352e-2 * t31 * t43 * t54 * t26 * t27 * t65 - 0.31322956504752967535e-3 * t132 * t133 * t134 + 0.18785774137723206984e-1 * t63 * t138 * t134;

  t145 = t113 / sigma[0] * t31;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigma2[0] = 0.11746108689282362825e-3 * t132 * t133 * t112 * t145 - 0.70446653016462026191e-2 * t63 * t138 * t112 * t145 + 0.90316221815976956655e-3 * t63 * t64 * t56 / t28 / sigma[0];

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
  double t1, t2, t3, t4, t5, t6, t7, t8;
  double t9, t10, t12, t13, t14, t15, t17, t18;
  double t19, t20, t21, t26, t27, t29, t30, t31;
  double t32, t33, t34, t35, t36, t37, t38, t39;
  double t40, t41, t43, t44, t45, t46, t47, t49;
  double t50, t52, t53, t56;

#ifndef XC_DONT_COMPILE_VXC
  double t57, t59, t60, t61, t62, t63, t64, t65;
  double t67, t68, t71, t72, t75, t76, t77, t78;
  double t80, t81, t83, t84, t86, t87, t88, t89;
  double t90, t91, t93, t95, t96, t98, t101, t102;
  double t103, t105, t106, t107, t109;

#ifndef XC_DONT_COMPILE_FXC
  double t112, t116, t120, t121, t126, t130, t132, t133;
  double t138, t139, t143, t146, t148, t151, t152, t155;
  double t156, t157, t159, t163, t164, t174, t182, t185;
  double t189, t194, t196, t197, t199, t200, t201, t202;
  double t203, t204, t207, t208, t210, t213, t217, t223;
  double t228, t249, t256, t260, t263, t274, t275, t276;
  double t277, t278, t281, t287, t288, t289, t291, t292;
  double t294, t295, t297, t298, t299, t302, t311, t313;
  double t319, t325;
#endif

#endif

#endif



  t1 = rho[0] - rho[1];
  t2 = rho[0] + rho[1];
  t3 = 0.1e1 / t2;
  t4 = t1 * t3;
  t5 = 0.1e1 + t4;
  t6 = POW_1_3(t5);
  t7 = t6 * t6;
  t8 = 0.1e1 - t4;
  t9 = POW_1_3(t8);
  t10 = t9 * t9;
  t12 = t7 / 0.2e1 + t10 / 0.2e1;
  t13 = t12 * t12;
  t14 = t13 * t12;
  t15 = M_CBRT3;
  t17 = POW_1_3(0.1e1 / M_PI);
  t18 = t15 * t17;
  t19 = M_CBRT4;
  t20 = t19 * t19;
  t21 = POW_1_3(t2);
  t26 = 0.4888270e1 + 0.79425925000000000000e0 * t18 * t20 / t21;
  t27 = atan(t26);
  t29 = -0.655868e0 * t27 + 0.897889e0;
  t30 = t14 * t29;
  t31 = t15 * t15;
  t32 = t30 * t31;
  t33 = 0.1e1 / t17;
  t34 = t33 * t19;
  t35 = M_CBRT6;
  t36 = t35 * t35;
  t37 = M_PI * M_PI;
  t38 = POW_1_3(t37);
  t39 = 0.1e1 / t38;
  t40 = t36 * t39;
  t41 = M_CBRT2;
  t43 = sigma[0] + 0.2e1 * sigma[1] + sigma[2];
  t44 = sqrt(t43);
  t45 = t41 * t44;
  t46 = t21 * t2;
  t47 = 0.1e1 / t46;
  t49 = t40 * t45 * t47;
  t50 = pow(t49, 0.230e1);
  t52 = 0.1e1 + 0.47121507034422759993e-2 * t50;
  t53 = 0.1e1 / t52;
  t56 = t32 * t34 * t21 * t53;
  if(zk != NULL && (p->info->flags & XC_FLAGS_HAVE_EXC))
    zk[0] = t56 / 0.3e1;

#ifndef XC_DONT_COMPILE_VXC

  if(order < 1) return;


  t57 = 0.4e1 / 0.9e1 * t56;
  t59 = t29 * t31;
  t60 = t46 * t13 * t59;
  t61 = 0.1e1 / t6;
  t62 = t2 * t2;
  t63 = 0.1e1 / t62;
  t64 = t1 * t63;
  t65 = t3 - t64;
  t67 = 0.1e1 / t9;
  t68 = -t65;
  t71 = t61 * t65 / 0.3e1 + t67 * t68 / 0.3e1;
  t72 = t53 * t71;
  t75 = t26 * t26;
  t76 = t75 + 0.1e1;
  t77 = 0.1e1 / t76;
  t78 = t14 * t77;
  t80 = 0.69457230103866666663e0 * t78 * t53;
  t81 = t3 * t14;
  t83 = t31 * t33;
  t84 = t83 * t19;
  t86 = t52 * t52;
  t87 = 0.1e1 / t86;
  t88 = pow(t49, 0.130e1);
  t89 = t87 * t88;
  t90 = t89 * t36;
  t91 = t39 * t41;
  t93 = t90 * t91 * t44;
  t95 = 0.48168651635187710217e-2 * t81 * t29 * t84 * t93;
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vrho[0] = t60 * t34 * t72 + t57 + t80 + t95;

  t96 = -t3 - t64;
  t98 = -t96;
  t101 = t61 * t96 / 0.3e1 + t67 * t98 / 0.3e1;
  t102 = t53 * t101;
  t103 = t34 * t102;
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vrho[1] = t60 * t103 + t57 + t80 + t95;

  t105 = t30 * t84;
  t106 = 0.1e1 / t44;
  t107 = t91 * t106;
  t109 = t105 * t90 * t107;
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vsigma[0] = -0.18063244363195391331e-2 * t109;

  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vsigma[1] = -0.36126488726390782660e-2 * t109;

  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vsigma[2] = vsigma[0];

#ifndef XC_DONT_COMPILE_FXC

  if(order < 2) return;


  t112 = t13 * t29;
  t116 = t112 * t83 * t19 * t21 * t72;
  t120 = 0.92609640138488888884e0 * t81 * t77 * t53;
  t121 = t21 * t21;
  t126 = 0.4e1 / 0.27e2 * t32 * t34 / t121 * t53;
  t130 = 0.16056217211729236738e-2 * t32 * t34 * t63 * t93;
  t132 = t46 * t12 * t59;
  t133 = t71 * t71;
  t138 = t13 * t77;
  t139 = t138 * t72;
  t143 = t3 * t13 * t29 * t84;
  t146 = t40 * t45;
  t148 = t143 * t87 * t71 * t88 * t146;
  t151 = 0.1e1 / t6 / t5;
  t152 = t65 * t65;
  t155 = t62 * t2;
  t156 = 0.1e1 / t155;
  t157 = t1 * t156;
  t159 = -0.2e1 * t63 + 0.2e1 * t157;
  t163 = 0.1e1 / t9 / t8;
  t164 = t68 * t68;
  t174 = t76 * t76;
  t182 = 0.36778031659583040509e0 * t14 / t174 * t53 * t26 * t18 * t20 * t47;
  t185 = 0.1e1 / t21 / t62;
  t189 = 0.20073966722509356988e-1 * t78 * t89 * t40 * t45 * t185;
  t194 = 0.1e1 / t21 / t155 * t14 * t29 * t84;
  t196 = 0.1e1 / t86 / t52;
  t197 = pow(t49, 0.260e1);
  t199 = t196 * t197 * t35;
  t200 = t38 * t38;
  t201 = 0.1e1 / t200;
  t202 = t41 * t41;
  t203 = t201 * t202;
  t204 = t203 * t43;
  t207 = 0.83527884012674580095e-3 * t194 * t199 * t204;
  t208 = pow(t49, 0.30e0);
  t210 = t87 * t208 * t35;
  t213 = 0.50095397700595218626e-1 * t194 * t210 * t204;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[0] = 0.8e1 / 0.3e1 * t116 + t120 + t126 + t130 + 0.2e1 * t132 * t34 * t53 * t133 + 0.41674338062319999998e1 * t139 + 0.28901190981112626130e-1 * t148 + t60 * t34 * t53 * (-t151 * t152 / 0.9e1 + t61 * t159 / 0.3e1 - t163 * t164 / 0.9e1 - t67 * t159 / 0.3e1) + t182 + t189 + t207 - t213;

  t217 = t21 * t13 * t59 * t103;
  t223 = t138 * t102;
  t228 = t143 * t87 * t101 * t88 * t146;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[1] = 0.4e1 / 0.3e1 * t116 + t120 + t126 + t130 + 0.4e1 / 0.3e1 * t217 + 0.2e1 * t132 * t34 * t102 * t71 + 0.20837169031159999999e1 * t223 + 0.14450595490556313065e-1 * t228 + t60 * t34 * t53 * (-t151 * t96 * t65 / 0.9e1 + 0.2e1 / 0.3e1 * t61 * t1 * t156 - t163 * t98 * t68 / 0.9e1 - 0.2e1 / 0.3e1 * t67 * t1 * t156) + 0.20837169031159999999e1 * t139 + t182 + t189 + 0.14450595490556313065e-1 * t148 + t207 - t213;

  t249 = t101 * t101;
  t256 = t96 * t96;
  t260 = 0.2e1 * t63 + 0.2e1 * t157;
  t263 = t98 * t98;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[2] = 0.8e1 / 0.3e1 * t217 + t120 + t126 + t130 + 0.2e1 * t132 * t34 * t53 * t249 + 0.41674338062319999998e1 * t223 + 0.28901190981112626130e-1 * t228 + t60 * t34 * t53 * (-t151 * t256 / 0.9e1 + t61 * t260 / 0.3e1 - t163 * t263 / 0.9e1 - t67 * t260 / 0.3e1) + t182 + t189 + t207 - t213;

  t274 = t34 * t87;
  t275 = t112 * t31 * t274;
  t276 = t88 * t36;
  t277 = t276 * t39;
  t278 = t41 * t106;
  t281 = t275 * t277 * t278 * t71;
  t287 = t14 * t47 * t77 * t87 * t276 * t107;
  t288 = 0.37638687604705044352e-2 * t287;
  t289 = t203 * t185;
  t291 = t105 * t199 * t289;
  t292 = 0.31322956504752967535e-3 * t291;
  t294 = t105 * t210 * t289;
  t295 = 0.18785774137723206984e-1 * t294;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rhosigma[0] = -0.54189733089586173993e-2 * t281 - t288 - t292 + t295;

  t297 = 0.75277375209410088701e-2 * t287;
  t298 = 0.62645913009505935067e-3 * t291;
  t299 = 0.37571548275446413966e-1 * t294;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rhosigma[1] = -0.10837946617917234798e-1 * t281 - t297 - t298 + t299;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rhosigma[2] = v2rhosigma[0];

  t302 = t275 * t277 * t278 * t101;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rhosigma[3] = -0.54189733089586173993e-2 * t302 - t288 - t292 + t295;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rhosigma[4] = -0.10837946617917234798e-1 * t302 - t297 - t298 + t299;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rhosigma[5] = v2rhosigma[3];

  t311 = t202 / t43 * t47;
  t313 = t32 * t34 * t196 * t197 * t35 * t201 * t311;
  t319 = t32 * t274 * t208 * t35 * t201 * t311;
  t325 = t105 * t90 * t91 / t44 / t43;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigma2[0] = 0.11746108689282362825e-3 * t313 - 0.70446653016462026191e-2 * t319 + 0.90316221815976956655e-3 * t325;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigma2[1] = 0.23492217378564725649e-3 * t313 - 0.14089330603292405237e-1 * t319 + 0.18063244363195391330e-2 * t325;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigma2[2] = v2sigma2[0];

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigma2[3] = 0.46984434757129451298e-3 * t313 - 0.28178661206584810475e-1 * t319 + 0.36126488726390782660e-2 * t325;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigma2[4] = 0.23492217378564725650e-3 * t313 - 0.14089330603292405238e-1 * t319 + 0.18063244363195391331e-2 * t325;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigma2[5] = v2sigma2[2];

#ifndef XC_DONT_COMPILE_KXC

  if(order < 3) return;


#endif

#endif

#endif


}

