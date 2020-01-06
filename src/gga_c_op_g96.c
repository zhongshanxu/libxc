/*
 Copyright (C) 2006-2007 M.A.L. Marques

 This Source Code Form is subject to the terms of the Mozilla Public
 License, v. 2.0. If a copy of the MPL was not distributed with this
 file, You can obtain one at http://mozilla.org/MPL/2.0/.
*/


#include "util.h"

#define XC_GGA_C_OP_G96      85 /* one-parameter progressive functional (G96 version)     */

#include "decl_gga.h"
#include "maple2c/gga_exc/gga_c_op_g96.c"
#include "work_gga.c"

#ifdef __cplusplus
extern "C"
#endif
const xc_func_info_type xc_func_info_gga_c_op_g96 = {
  XC_GGA_C_OP_G96,
  XC_CORRELATION,
  "one-parameter progressive functional (G96 version)",
  XC_FAMILY_GGA,
  {&xc_ref_Tsuneda1999_10664, &xc_ref_Tsuneda1999_5656, NULL, NULL, NULL},
  XC_FLAGS_3D | MAPLE2C_FLAGS,
  1e-24,
  0, NULL, NULL,
  NULL, NULL, 
  NULL, work_gga, NULL
};

