/*
 Copyright (C) 2006-2007 M.A.L. Marques

 This Source Code Form is subject to the terms of the Mozilla Public
 License, v. 2.0. If a copy of the MPL was not distributed with this
 file, You can obtain one at http://mozilla.org/MPL/2.0/.
*/

#include "util.h"

#define XC_HYB_GGA_XC_WB97    463 /* Chai and Head-Gordon                     */
#define XC_HYB_GGA_XC_WB97X   464 /* Chai and Head-Gordon                     */
#define XC_HYB_GGA_XC_WB97X_V 466 /* Mardirossian and Head-Gordon             */
#define XC_HYB_GGA_XC_WB97X_D 471 /* Chai and Head-Gordon                     */

typedef struct {
  double c_x[5], c_ss[5], c_ab[5];
} gga_xc_wb97_params;

static const gga_xc_wb97_params par_wb97 = {
  { 1.00000e+00,  1.13116e+00, -2.74915e+00,  1.20900e+01, -5.71642e+00},
  { 1.00000e+00, -2.55352e+00,  1.18926e+01, -2.69452e+01,  1.70927e+01},
  { 1.00000e+00,  3.99051e+00, -1.70066e+01,  1.07292e+00,  8.88211e+00}
};

static const gga_xc_wb97_params par_wb97x = {
  { 8.42294e-01,  7.26479e-01,  1.04760e+00, -5.70635e+00,  1.32794e+01},
  { 1.00000e+00, -4.33879e+00,  1.82308e+01, -3.17430e+01,  1.72901e+01},
  { 1.00000e+00,  2.37031e+00, -1.13995e+01,  6.58405e+00, -3.78132e+00}
};

static const gga_xc_wb97_params par_wb97x_v = {
  { 0.833,        0.603,        1.194,        0.0,          0.0        },
  { 0.556,       -0.257,        0.0,          0.0,          0.0        },
  { 1.219,       -1.850,        0.0,          0.0,          0.0        }
};

static const gga_xc_wb97_params par_wb97x_d = {
  { 7.77964e-01,  6.61160e-01,  5.74541e-01, -5.25671e+00,  1.16386e+01},
  { 1.00000e+00, -6.90539e+00,  3.13343e+01, -5.10533e+01,  2.64423e+01},
  { 1.00000e+00,  1.79413e+00, -1.20477e+01,  1.40847e+01, -8.50809e+00}
};

static void 
gga_xc_wb97_init(xc_func_type *p)
{
  gga_xc_wb97_params *params;

  assert(p->params == NULL);
  p->params = libxc_malloc(sizeof(gga_xc_wb97_params));
  params = (gga_xc_wb97_params *)(p->params);

  switch(p->info->number){
  case XC_HYB_GGA_XC_WB97:
    memcpy(params, &par_wb97, sizeof(gga_xc_wb97_params));
    xc_hyb_init_cam(p, 0.4, 1.0, -1.0);
    break;
  case XC_HYB_GGA_XC_WB97X:
    memcpy(params, &par_wb97x, sizeof(gga_xc_wb97_params));
    xc_hyb_init_cam(p, 0.3, 1.0, -(1.0 - 1.57706e-01)); 
    break;
  case XC_HYB_GGA_XC_WB97X_V:
    memcpy(params, &par_wb97x_v, sizeof(gga_xc_wb97_params));
    xc_hyb_init_cam(p, 0.3, 1.0, -(1.0 - 0.167));
    p->nlc_b = 6.0;
    p->nlc_C = 0.01;
    break;
  case XC_HYB_GGA_XC_WB97X_D:
    memcpy(params, &par_wb97x_d, sizeof(gga_xc_wb97_params));
    xc_hyb_init_cam(p, 0.2, 1.0, -(1.0 - 2.22036e-01));
    break;
  default:
    fprintf(stderr, "Internal error in gga_wb97\n");
    exit(1);
    break;
  }
}

#include "decl_gga.h"
#include "maple2c/gga_exc/hyb_gga_xc_wb97.c"
#include "work_gga.c"

#ifdef __cplusplus
extern "C"
#endif
const xc_func_info_type xc_func_info_hyb_gga_xc_wb97 = {
  XC_HYB_GGA_XC_WB97,
  XC_EXCHANGE_CORRELATION,
  "wB97 range-separated functional",
  XC_FAMILY_HYB_GGA,
  {&xc_ref_Chai2008_084106, NULL, NULL, NULL, NULL},
  XC_FLAGS_3D | XC_FLAGS_HYB_CAM | MAPLE2C_FLAGS,
  1e-23,
  {0, NULL, NULL, NULL, NULL},
  gga_xc_wb97_init, NULL,
  NULL, work_gga, NULL
};

#ifdef __cplusplus
extern "C"
#endif
const xc_func_info_type xc_func_info_hyb_gga_xc_wb97x = {
  XC_HYB_GGA_XC_WB97X,
  XC_EXCHANGE_CORRELATION,
  "wB97X range-separated functional",
  XC_FAMILY_HYB_GGA,
  {&xc_ref_Chai2008_084106, NULL, NULL, NULL, NULL},
  XC_FLAGS_3D | XC_FLAGS_HYB_CAM | MAPLE2C_FLAGS,
  1e-23,
  {0, NULL, NULL, NULL, NULL},
  gga_xc_wb97_init, NULL,
  NULL, work_gga, NULL
};

#ifdef __cplusplus
extern "C"
#endif
const xc_func_info_type xc_func_info_hyb_gga_xc_wb97x_v = {
  XC_HYB_GGA_XC_WB97X_V,
  XC_EXCHANGE_CORRELATION,
  "wB97X-V range-separated functional",
  XC_FAMILY_HYB_GGA,
  {&xc_ref_Mardirossian2014_9904, NULL, NULL, NULL, NULL},
  XC_FLAGS_3D | XC_FLAGS_HYB_CAM | XC_FLAGS_VV10 | MAPLE2C_FLAGS,
  1e-23,
  {0, NULL, NULL, NULL, NULL},
  gga_xc_wb97_init, NULL,
  NULL, work_gga, NULL
};

#ifdef __cplusplus
extern "C"
#endif
const xc_func_info_type xc_func_info_hyb_gga_xc_wb97x_d = {
  XC_HYB_GGA_XC_WB97X_D,
  XC_EXCHANGE_CORRELATION,
  "wB97D range-separated functional",
  XC_FAMILY_HYB_GGA,
  {&xc_ref_Chai2008_6615, NULL, NULL, NULL, NULL},
  XC_FLAGS_3D | XC_FLAGS_HYB_CAM | MAPLE2C_FLAGS,
  1e-23,
  {0, NULL, NULL, NULL, NULL},
  gga_xc_wb97_init, NULL,
  NULL, work_gga, NULL
};
