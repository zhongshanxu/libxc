/*
 Copyright (C) 2006-2009 M.A.L. Marques

 This Source Code Form is subject to the terms of the Mozilla Public
 License, v. 2.0. If a copy of the MPL was not distributed with this
 file, You can obtain one at http://mozilla.org/MPL/2.0/.
*/


#include "util.h"

#define XC_MGGA_X_BR89         206 /* Becke-Roussel 89, gamma = 0.8 */
#define XC_MGGA_X_BR89_1       214 /* Becke-Roussel 89, gamma = 1.0 */
#define XC_MGGA_X_B00          284 /* Becke 2000 */

typedef struct{
  double gamma, at;
} mgga_x_br89_params;


static void
mgga_x_br89_init(xc_func_type *p)
{
  mgga_x_br89_params *params;

  p->params = malloc(sizeof(mgga_x_br89_params));
  params = (mgga_x_br89_params *)p->params;

  switch(p->info->number){
  case XC_MGGA_X_BR89:
    params->gamma = 0.8;
    params->at    = 0.0;
    break;
  case XC_MGGA_X_BR89_1:
    params->gamma = 1.0;
    params->at    = 0.0;
    break;
  case XC_MGGA_X_B00:
    params->gamma = 1.0;
    params->at    = 0.928;
    break;
  default:
    fprintf(stderr, "Internal error in mgga_x_br89\n");
    exit(1);
  }
}


static double
br89_x_Q(double x, void *_rhs)
{
  double rhs, xm2, arg, eee;
  rhs = *((double *)_rhs);

  xm2 = x - 2.0;
  arg = 2.0*x/3.0;
  eee = exp(-arg);

  return x*eee - rhs*xm2;
}


double xc_mgga_x_br89_get_x(double Q)
{
  double rhs, tol, x1, x2;

  tol = 5e-12;

  /* build right-hand side of the non-linear equation
     Remember we use a different definition of tau */
  rhs = 2.0/3.0*pow(M_PI, 2.0/3.0)/Q;

  /* starting interval */
  if(rhs > 0.0) {
    x1 = 2.0 + tol;
    x2 = 1.0/rhs + 2.0;
  }else{
    x2 = 2.0 - tol;
    x1 = 0.0;
  }

  return xc_math_brent(br89_x_Q, x1, x2, tol, 500, &rhs);
}

#include "maple2c/mgga_exc/mgga_x_br89.c"
#include "work_mgga_new.c"

const xc_func_info_type xc_func_info_mgga_x_br89 = {
  XC_MGGA_X_BR89,
  XC_EXCHANGE,
  "Becke-Roussel 89, gamma = 0.8",
  XC_FAMILY_MGGA,
  {&xc_ref_Becke1989_3761, NULL, NULL, NULL, NULL},
  XC_FLAGS_3D | XC_FLAGS_NEEDS_LAPLACIAN | XC_FLAGS_I_HAVE_ALL,
  1.0e-12,
  0, NULL, NULL,
  mgga_x_br89_init, NULL,
  NULL, NULL, work_mgga,
};

const xc_func_info_type xc_func_info_mgga_x_br89_1 = {
  XC_MGGA_X_BR89_1,
  XC_EXCHANGE,
  "Becke-Roussel 89, gamma = 1.0",
  XC_FAMILY_MGGA,
  {&xc_ref_Becke1989_3761, NULL, NULL, NULL, NULL},
  XC_FLAGS_3D | XC_FLAGS_NEEDS_LAPLACIAN | XC_FLAGS_I_HAVE_ALL,
  1.0e-12,
  0, NULL, NULL,
  mgga_x_br89_init, NULL,
  NULL, NULL, work_mgga,
};

const xc_func_info_type xc_func_info_mgga_x_b00 = {
  XC_MGGA_X_B00,
  XC_EXCHANGE,
  "Becke 2000",
  XC_FAMILY_MGGA,
  {&xc_ref_Becke2000_4020, NULL, NULL, NULL, NULL},
  XC_FLAGS_3D | XC_FLAGS_NEEDS_LAPLACIAN | XC_FLAGS_I_HAVE_ALL,
  1.0e-23,
  0, NULL, NULL,
  mgga_x_br89_init, NULL,
  NULL, NULL, work_mgga,
};
