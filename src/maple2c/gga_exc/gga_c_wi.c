/* 
  This file was generated automatically with ./scripts/maple2c.pl.
  Do not edit this file directly as it can be overwritten!!

  This Source Code Form is subject to the terms of the Mozilla Public
  License, v. 2.0. If a copy of the MPL was not distributed with this
  file, You can obtain one at http://mozilla.org/MPL/2.0/.

  Maple version     : Maple 2016 (X86 64 LINUX)
  Maple source      : ./maple/gga_exc/gga_c_wi.mpl
  Type of functional: gga_exc
*/

#define maple2c_order 2
#define MAPLE2C_FLAGS (XC_FLAGS_I_HAVE_EXC | XC_FLAGS_I_HAVE_VXC | XC_FLAGS_I_HAVE_FXC)


static inline void
func_unpol(const xc_func_type *p, int order, const double *rho, const double *sigma , double *zk GGA_OUT_PARAMS_NO_EXC(XC_COMMA double *, ))
{

#ifndef XC_DONT_COMPILE_EXC
  double t1, t2, t3, t4, t6, t7, t9, t12;
  double t13, t15, t16, t17, t18, t22, t23, t25;
  double t26, t27, t31, t32, t33, t38, t42, t43;

#ifndef XC_DONT_COMPILE_VXC
  double t44, t46, t49, t50, t53, t58, t59, t61;
  double t62, t63, t71, t73, t76, t77, t81, t83;
  double t87, t88, t90, t91, t92, t93, t94, t96;
  double t97;

#ifndef XC_DONT_COMPILE_FXC
  double t119, t122, t133, t134, t151, t152, t168, t217;
  double t218, t220;
#endif

#endif

#endif


  gga_c_wi_params *params;

  assert(p->params != NULL);
  params = (gga_c_wi_params * )(p->params);

  t1 = params->b * sigma[0];
  t2 = rho[0] * rho[0];
  t3 = POW_1_3(rho[0]);
  t4 = t3 * t3;
  t6 = 0.1e1 / t4 / t2;
  t7 = params->k * sigma[0];
  t9 = exp(-t7 * t6);
  t12 = t1 * t6 * t9 + params->a;
  t13 = M_CBRT3;
  t15 = POW_1_3(0.1e1 / M_PI);
  t16 = t13 * t15;
  t17 = M_CBRT4;
  t18 = t17 * t17;
  t22 = t13 * t13;
  t23 = M_CBRTPI;
  t25 = sqrt(sigma[0]);
  t26 = t25 * sigma[0];
  t27 = t2 * t2;
  t31 = 0.1e1 / t3 / rho[0];
  t32 = t25 * t31;
  t33 = sqrt(t32);
  t38 = 0.1e1 + params->d * t17 * t22 * t23 * t33 * t26 / t27 / 0.3e1;
  t42 = params->c + t16 * t18 / t3 * t38 / 0.4e1;
  t43 = 0.1e1 / t42;
  if(zk != NULL && (p->info->flags & XC_FLAGS_HAVE_EXC))
    zk[0] = t12 * t43;

#ifndef XC_DONT_COMPILE_VXC

  if(order < 1) return;


  t44 = t2 * rho[0];
  t46 = 0.1e1 / t4 / t44;
  t49 = sigma[0] * sigma[0];
  t50 = params->b * t49;
  t53 = 0.1e1 / t3 / t27 / t2;
  t58 = 0.8e1 / 0.3e1 * t50 * t53 * params->k * t9 - 0.8e1 / 0.3e1 * t1 * t46 * t9;
  t59 = rho[0] * t58;
  t61 = rho[0] * t12;
  t62 = t42 * t42;
  t63 = 0.1e1 / t62;
  t71 = t33 * sigma[0] * t6;
  t73 = t23 * t71 * t25;
  t76 = -t16 * t18 * t31 * t38 / 0.12e2 - 0.14e2 / 0.3e1 * t15 * t6 * params->d * t73;
  t77 = t63 * t76;
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vrho[0] = t59 * t43 - t61 * t77 + (t12 * t43);

  t81 = t27 * rho[0];
  t83 = 0.1e1 / t3 / t81;
  t87 = -t1 * t83 * params->k * t9 + params->b * t6 * t9;
  t88 = rho[0] * t87;
  t90 = 0.1e1 / t4;
  t91 = t90 * t12;
  t92 = t63 * t15;
  t93 = t91 * t92;
  t94 = params->d * t23;
  t96 = t71 / t25;
  t97 = t94 * t96;
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vsigma[0] = t88 * t43 - 0.7e1 / 0.4e1 * t93 * t97;

#ifndef XC_DONT_COMPILE_FXC

  if(order < 2) return;


  t119 = t27 * t27;
  t122 = params->k * params->k;
  t133 = 0.1e1 / t62 / t42;
  t134 = t76 * t76;
  t151 = t33 * t32;
  t152 = t23 * t151;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[0] = 0.2e1 * t58 * t43 - 0.2e1 * t12 * t63 * t76 + rho[0] * (0.88e2 / 0.9e1 * t1 / t4 / t27 * t9 - 0.24e2 * t50 / t3 / t27 / t44 * params->k * t9 + 0.64e2 / 0.9e1 * params->b * t49 * sigma[0] / t119 / t2 * t122 * t9) * t43 - 0.2e1 * t59 * t77 + 0.2e1 * t61 * t133 * t134 - t61 * t63 * (t16 * t18 / t3 / t2 * t38 / 0.9e1 + 0.14e2 * t15 * t46 * params->d * t73 + 0.140e3 / 0.9e1 * t15 / t81 * params->d * t152 * sigma[0]);

  t168 = 0.1e1 / t119 / rho[0];
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rhosigma[0] = t87 * t43 + rho[0] * (-0.8e1 / 0.3e1 * params->b * t46 * t9 + 0.8e1 * params->b * t53 * t7 * t9 - 0.8e1 / 0.3e1 * t50 * t168 * t122 * t9) * t43 - t88 * t77 + 0.7e1 / 0.6e1 / t4 / rho[0] * t12 * t92 * t97 - 0.7e1 / 0.4e1 * t90 * t58 * t92 * t97 + 0.7e1 / 0.2e1 * t91 * t133 * t15 * t94 * t96 * t76 + 0.35e2 / 0.6e1 / t44 * t12 * t63 * t15 * params->d * t152;

  t217 = t15 * t15;
  t218 = params->d * params->d;
  t220 = t23 * t23;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigma2[0] = rho[0] * (-0.2e1 * params->b * t83 * params->k * t9 + t1 / t119 * t122 * t9) * t43 - 0.7e1 / 0.2e1 * t90 * t87 * t92 * t97 + 0.49e2 / 0.8e1 * t168 * t12 * t133 * t217 * t218 * t220 * t26 - 0.35e2 / 0.16e2 / t2 * t12 * t92 * t94 * t151 / sigma[0] + 0.7e1 / 0.8e1 * t93 * t94 * t71 / t26;

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
  double t2, t3, t4, t5, t6, t7, t9, t10;
  double t12, t15, t16, t18, t19, t20, t21, t25;
  double t26, t28, t29, t30, t34, t35, t36, t41;
  double t45, t46;

#ifndef XC_DONT_COMPILE_VXC
  double t47, t49, t52, t53, t56, t61, t62, t64;
  double t65, t66, t74, t76, t79, t80, t84, t86;
  double t90, t91, t93, t94, t95, t96, t97, t99;
  double t100, t101, t103, t104;

#ifndef XC_DONT_COMPILE_FXC
  double t126, t129, t140, t141, t158, t159, t168, t172;
  double t175, t178, t188, t192, t198, t205, t221, t226;
  double t233, t236, t237, t239, t242, t250, t255, t264;
#endif

#endif

#endif


  gga_c_wi_params *params;

  assert(p->params != NULL);
  params = (gga_c_wi_params * )(p->params);

  t2 = sigma[0] + 0.2e1 * sigma[1] + sigma[2];
  t3 = params->b * t2;
  t4 = rho[0] + rho[1];
  t5 = t4 * t4;
  t6 = POW_1_3(t4);
  t7 = t6 * t6;
  t9 = 0.1e1 / t7 / t5;
  t10 = params->k * t2;
  t12 = exp(-t10 * t9);
  t15 = t3 * t9 * t12 + params->a;
  t16 = M_CBRT3;
  t18 = POW_1_3(0.1e1 / M_PI);
  t19 = t16 * t18;
  t20 = M_CBRT4;
  t21 = t20 * t20;
  t25 = t16 * t16;
  t26 = M_CBRTPI;
  t28 = sqrt(t2);
  t29 = t28 * t2;
  t30 = t5 * t5;
  t34 = 0.1e1 / t6 / t4;
  t35 = t28 * t34;
  t36 = sqrt(t35);
  t41 = 0.1e1 + params->d * t20 * t25 * t26 * t36 * t29 / t30 / 0.3e1;
  t45 = params->c + t19 * t21 / t6 * t41 / 0.4e1;
  t46 = 0.1e1 / t45;
  if(zk != NULL && (p->info->flags & XC_FLAGS_HAVE_EXC))
    zk[0] = t15 * t46;

#ifndef XC_DONT_COMPILE_VXC

  if(order < 1) return;


  t47 = t5 * t4;
  t49 = 0.1e1 / t7 / t47;
  t52 = t2 * t2;
  t53 = params->b * t52;
  t56 = 0.1e1 / t6 / t30 / t5;
  t61 = 0.8e1 / 0.3e1 * t53 * t56 * params->k * t12 - 0.8e1 / 0.3e1 * t3 * t49 * t12;
  t62 = t4 * t61;
  t64 = t4 * t15;
  t65 = t45 * t45;
  t66 = 0.1e1 / t65;
  t74 = t36 * t2 * t9;
  t76 = t26 * t74 * t28;
  t79 = -t19 * t21 * t34 * t41 / 0.12e2 - 0.14e2 / 0.3e1 * t18 * t9 * params->d * t76;
  t80 = t66 * t79;
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vrho[0] = t62 * t46 - t64 * t80 + (t15 * t46);

  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vrho[1] = vrho[0];

  t84 = t30 * t4;
  t86 = 0.1e1 / t6 / t84;
  t90 = -t3 * t86 * params->k * t12 + params->b * t9 * t12;
  t91 = t4 * t90;
  t93 = 0.1e1 / t7;
  t94 = t93 * t15;
  t95 = t66 * t18;
  t96 = t94 * t95;
  t97 = params->d * t26;
  t99 = t74 / t28;
  t100 = t97 * t99;
  t101 = t96 * t100;
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vsigma[0] = t91 * t46 - 0.7e1 / 0.4e1 * t101;

  t103 = 0.2e1 * t90;
  t104 = t4 * t103;
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vsigma[1] = t104 * t46 - 0.7e1 / 0.2e1 * t101;

  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vsigma[2] = vsigma[0];

#ifndef XC_DONT_COMPILE_FXC

  if(order < 2) return;


  t126 = t30 * t30;
  t129 = params->k * params->k;
  t140 = 0.1e1 / t65 / t45;
  t141 = t79 * t79;
  t158 = t36 * t35;
  t159 = t26 * t158;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[0] = 0.2e1 * t61 * t46 - 0.2e1 * t15 * t66 * t79 + t4 * (0.88e2 / 0.9e1 * t3 / t7 / t30 * t12 - 0.24e2 * t53 / t6 / t30 / t47 * params->k * t12 + 0.64e2 / 0.9e1 * params->b * t52 * t2 / t126 / t5 * t129 * t12) * t46 - 0.2e1 * t62 * t80 + 0.2e1 * t64 * t140 * t141 - t64 * t66 * (t19 * t21 / t6 / t5 * t41 / 0.9e1 + 0.14e2 * t18 * t49 * params->d * t76 + 0.140e3 / 0.9e1 * t18 / t84 * params->d * t159 * t2);

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[1] = v2rho2[0];

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[2] = v2rho2[1];

  t168 = params->b * t49 * t12;
  t172 = params->b * t56 * t10 * t12;
  t175 = 0.1e1 / t126 / t4;
  t178 = t53 * t175 * t129 * t12;
  t188 = 0.1e1 / t7 / t4 * t15 * t95 * t100;
  t192 = t93 * t61 * t95 * t100;
  t198 = t94 * t140 * t18 * t97 * t99 * t79;
  t205 = 0.1e1 / t47 * t15 * t66 * t18 * params->d * t159;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rhosigma[0] = t90 * t46 + t4 * (-0.8e1 / 0.3e1 * t168 + 0.8e1 * t172 - 0.8e1 / 0.3e1 * t178) * t46 - t91 * t80 + 0.7e1 / 0.6e1 * t188 - 0.7e1 / 0.4e1 * t192 + 0.7e1 / 0.2e1 * t198 + 0.35e2 / 0.6e1 * t205;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rhosigma[1] = t103 * t46 + t4 * (-0.16e2 / 0.3e1 * t168 + 0.16e2 * t172 - 0.16e2 / 0.3e1 * t178) * t46 - t104 * t80 + 0.7e1 / 0.3e1 * t188 - 0.7e1 / 0.2e1 * t192 + 0.7e1 * t198 + 0.35e2 / 0.3e1 * t205;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rhosigma[2] = v2rhosigma[0];

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rhosigma[3] = v2rhosigma[2];

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rhosigma[4] = v2rhosigma[1];

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rhosigma[5] = v2rhosigma[3];

  t221 = params->b * t86 * params->k * t12;
  t226 = t3 / t126 * t129 * t12;
  t233 = 0.7e1 / 0.2e1 * t93 * t90 * t95 * t100;
  t236 = t18 * t18;
  t237 = params->d * params->d;
  t239 = t26 * t26;
  t242 = t175 * t15 * t140 * t236 * t237 * t239 * t29;
  t250 = 0.1e1 / t5 * t15 * t95 * t97 * t158 / t2;
  t255 = t96 * t97 * t74 / t29;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigma2[0] = t4 * (-0.2e1 * t221 + t226) * t46 - t233 + 0.49e2 / 0.8e1 * t242 - 0.35e2 / 0.16e2 * t250 + 0.7e1 / 0.8e1 * t255;

  t264 = t93 * t103 * t95 * t100;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigma2[1] = t4 * (-0.4e1 * t221 + 0.2e1 * t226) * t46 - 0.7e1 / 0.4e1 * t264 - t233 + 0.49e2 / 0.4e1 * t242 - 0.35e2 / 0.8e1 * t250 + 0.7e1 / 0.4e1 * t255;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigma2[2] = v2sigma2[0];

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigma2[3] = t4 * (-0.8e1 * t221 + 0.4e1 * t226) * t46 - 0.7e1 * t264 + 0.49e2 / 0.2e1 * t242 - 0.35e2 / 0.4e1 * t250 + 0.7e1 / 0.2e1 * t255;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigma2[4] = v2sigma2[1];

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigma2[5] = v2sigma2[2];

#ifndef XC_DONT_COMPILE_KXC

  if(order < 3) return;


#endif

#endif

#endif


}

