/* 
  This file was generated automatically with ./scripts/maple2c.pl.
  Do not edit this file directly as it can be overwritten!!

  This Source Code Form is subject to the terms of the Mozilla Public
  License, v. 2.0. If a copy of the MPL was not distributed with this
  file, You can obtain one at http://mozilla.org/MPL/2.0/.

  Maple version     : Maple 2016 (X86 64 LINUX)
  Maple source      : ./maple/lda_exc/lda_k_gds08_worker.mpl
  Type of functional: lda_exc
*/

#define maple2c_order 4
#define MAPLE2C_FLAGS (XC_FLAGS_I_HAVE_EXC | XC_FLAGS_I_HAVE_VXC | XC_FLAGS_I_HAVE_FXC | XC_FLAGS_I_HAVE_KXC | XC_FLAGS_I_HAVE_LXC)


static inline void
func_unpol(const xc_func_type *p, int order, const double *rho, double *zk, LDA_OUT_PARAMS_NO_EXC(double *))
{

#ifndef XC_DONT_COMPILE_EXC
  double t1, t2, t3, t4;

#ifndef XC_DONT_COMPILE_VXC
  double t5, t6, t7, t8;

#ifndef XC_DONT_COMPILE_FXC
  double t14, t15, t16, t17, t19;

#ifndef XC_DONT_COMPILE_KXC
  double t27, t28, t30, t32;

#ifndef XC_DONT_COMPILE_LXC
  double t39, t40;
#endif

#endif

#endif

#endif

#endif


  lda_k_gds08_params *params;

  assert(p->params != NULL);
  params = (lda_k_gds08_params * )(p->params);

  t1 = log(rho[0]);
  t2 = params->B * t1;
  t3 = t1 * t1;
  t4 = params->C * t3;
  if(zk != NULL && (p->info->flags & XC_FLAGS_HAVE_EXC))
    zk[0] = params->A + t2 + t4;

#ifndef XC_DONT_COMPILE_VXC

  if(order < 1) return;


  t5 = 0.1e1 / rho[0];
  t6 = params->B * t5;
  t7 = params->C * t1;
  t8 = t7 * t5;
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vrho[0] = params->A + t2 + t4 + rho[0] * (t6 + 0.2e1 * t8);

#ifndef XC_DONT_COMPILE_FXC

  if(order < 2) return;


  t14 = rho[0] * rho[0];
  t15 = 0.1e1 / t14;
  t16 = params->B * t15;
  t17 = params->C * t15;
  t19 = t7 * t15;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[0] = 0.2e1 * t6 + 0.4e1 * t8 + rho[0] * (-t16 + 0.2e1 * t17 - 0.2e1 * t19);

#ifndef XC_DONT_COMPILE_KXC

  if(order < 3) return;


  t27 = 0.1e1 / t14 / rho[0];
  t28 = params->B * t27;
  t30 = params->C * t27;
  t32 = t7 * t27;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[0] = -0.3e1 * t16 + 0.6e1 * t17 - 0.6e1 * t19 + rho[0] * (0.2e1 * t28 - 0.6e1 * t30 + 0.4e1 * t32);

#ifndef XC_DONT_COMPILE_LXC

  if(order < 4) return;


  t39 = t14 * t14;
  t40 = 0.1e1 / t39;
  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rho4[0] = 0.8e1 * t28 - 0.24e2 * t30 + 0.16e2 * t32 + rho[0] * (-0.12e2 * t7 * t40 - 0.6e1 * params->B * t40 + 0.22e2 * params->C * t40);

#ifndef XC_DONT_COMPILE_MXC

  if(order < 5) return;


#endif

#endif

#endif

#endif

#endif


}


static inline void
func_pol(const xc_func_type *p, int order, const double *rho, double *zk, LDA_OUT_PARAMS_NO_EXC(double *))
{

#ifndef XC_DONT_COMPILE_EXC
  double t1, t2, t3, t4, t5;

#ifndef XC_DONT_COMPILE_VXC
  double t6, t7, t8, t9;

#ifndef XC_DONT_COMPILE_FXC
  double t15, t16, t17, t18, t20;

#ifndef XC_DONT_COMPILE_KXC
  double t28, t29, t31, t33;

#ifndef XC_DONT_COMPILE_LXC
  double t40, t41;
#endif

#endif

#endif

#endif

#endif


  lda_k_gds08_params *params;

  assert(p->params != NULL);
  params = (lda_k_gds08_params * )(p->params);

  t1 = rho[0] + rho[1];
  t2 = log(t1);
  t3 = params->B * t2;
  t4 = t2 * t2;
  t5 = params->C * t4;
  if(zk != NULL && (p->info->flags & XC_FLAGS_HAVE_EXC))
    zk[0] = params->A + t3 + t5;

#ifndef XC_DONT_COMPILE_VXC

  if(order < 1) return;


  t6 = 0.1e1 / t1;
  t7 = params->B * t6;
  t8 = params->C * t2;
  t9 = t8 * t6;
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vrho[0] = params->A + t3 + t5 + t1 * (t7 + 0.2e1 * t9);

  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vrho[1] = vrho[0];

#ifndef XC_DONT_COMPILE_FXC

  if(order < 2) return;


  t15 = t1 * t1;
  t16 = 0.1e1 / t15;
  t17 = params->B * t16;
  t18 = params->C * t16;
  t20 = t8 * t16;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[0] = 0.2e1 * t7 + 0.4e1 * t9 + t1 * (-t17 + 0.2e1 * t18 - 0.2e1 * t20);

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[1] = v2rho2[0];

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[2] = v2rho2[1];

#ifndef XC_DONT_COMPILE_KXC

  if(order < 3) return;


  t28 = 0.1e1 / t15 / t1;
  t29 = params->B * t28;
  t31 = params->C * t28;
  t33 = t8 * t28;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[0] = -0.3e1 * t17 + 0.6e1 * t18 - 0.6e1 * t20 + t1 * (0.2e1 * t29 - 0.6e1 * t31 + 0.4e1 * t33);

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[1] = v3rho3[0];

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[2] = v3rho3[1];

  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[3] = v3rho3[2];

#ifndef XC_DONT_COMPILE_LXC

  if(order < 4) return;


  t40 = t15 * t15;
  t41 = 0.1e1 / t40;
  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rho4[0] = 0.8e1 * t29 - 0.24e2 * t31 + 0.16e2 * t33 + t1 * (-0.12e2 * t8 * t41 - 0.6e1 * params->B * t41 + 0.22e2 * params->C * t41);

  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rho4[1] = v4rho4[0];

  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rho4[2] = v4rho4[1];

  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rho4[3] = v4rho4[2];

  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rho4[4] = v4rho4[3];

#ifndef XC_DONT_COMPILE_MXC

  if(order < 5) return;


#endif

#endif

#endif

#endif

#endif


}

