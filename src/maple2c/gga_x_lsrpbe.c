/* 
  This file was generated automatically with ./maple2c.pl.
  Do not edit this file directly as it can be overwritten!!

  This Source Code Form is subject to the terms of the Mozilla Public
  License, v. 2.0. If a copy of the MPL was not distributed with this
  file, You can obtain one at http://mozilla.org/MPL/2.0/.

  Maple version     : Maple 2017 (X86 64 LINUX)
  Maple source      : ../maple/gga_x_lsrpbe.mpl
  Type of functional: work_gga_x
*/

void xc_gga_x_lsrpbe_enhance
  (const xc_func_type *p,  xc_gga_work_x_t *r)
{
  double t1, t2, t3, t4, t5, t6, t7, t8;
  double t9, t13, t16, t20, t23, t26, t34, t35;
  double t38, t39, t48, t50, t60, t61, t63, t64;

  gga_x_lsrpbe_params *params;

  assert(p->params != NULL);
  params = (gga_x_lsrpbe_params * )(p->params);

  t1 = M_CBRT6;
  t2 = params->mu * t1;
  t3 = 0.31415926535897932385e1 * 0.31415926535897932385e1;
  t4 = POW_1_3(t3);
  t5 = t4 * t4;
  t6 = 0.1e1 / t5;
  t7 = r->x * r->x;
  t8 = t6 * t7;
  t9 = 0.1e1 / params->kappa;
  t13 = exp(-t2 * t8 * t9 / 0.24e2);
  t16 = params->kappa + 0.1e1;
  t20 = exp(-params->alpha * t1 * t8 / 0.24e2);
  r->f = 0.1e1 + params->kappa * (0.1e1 - t13) - t16 * (0.1e1 - t20);

  if(r->order < 1) return;

  t23 = t6 * r->x;
  t26 = t16 * params->alpha;
  r->dfdx = -t26 * t1 * t23 * t20 / 0.12e2 + t2 * t23 * t13 / 0.12e2;

  if(r->order < 2) return;

  t34 = params->mu * params->mu;
  t35 = t1 * t1;
  t38 = 0.1e1 / t4 / t3;
  t39 = t34 * t35 * t38;
  t48 = params->alpha * params->alpha;
  t50 = t16 * t48 * t35;
  r->d2fdx2 = t2 * t6 * t13 / 0.12e2 - t39 * t7 * t9 * t13 / 0.144e3 - t26 * t1 * t6 * t20 / 0.12e2 + t50 * t38 * t7 * t20 / 0.144e3;

  if(r->order < 3) return;

  t60 = t3 * t3;
  t61 = 0.1e1 / t60;
  t63 = t7 * r->x;
  t64 = params->kappa * params->kappa;
  r->d3fdx3 = -t39 * r->x * t9 * t13 / 0.48e2 + t34 * params->mu * t61 * t63 / t64 * t13 / 0.288e3 + t50 * t38 * r->x * t20 / 0.48e2 - t16 * t48 * params->alpha * t61 * t63 * t20 / 0.288e3;

  if(r->order < 4) return;


}

#define maple2c_order 3
#define maple2c_func  xc_gga_x_lsrpbe_enhance