/*
 Copyright (C) 2006-2007 M.A.L. Marques

 This program is free software; you can redistribute it and/or modify
 it under the terms of the GNU Lesser General Public License as published by
 the Free Software Foundation; either version 3 of the License, or
 (at your option) any later version.
  
 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU Lesser General Public License for more details.
  
 You should have received a copy of the GNU Lesser General Public License
 along with this program; if not, write to the Free Software
 Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#include "util.h"

/************************************************************************
 Correlation energy per-particle and potential of a HEG as parameterized 
 by 
   J.P. Perdew & Y. Wang
   Ortiz & Ballone

Note that the PW modified corresponds to the version of PW used in the 
original PBE routine. This amounts to adding some more digits in some of
the constants of PW.
************************************************************************/

#define XC_LDA_C_PW     12   /* Perdew & Wang                */
#define XC_LDA_C_PW_MOD 13   /* Perdew & Wang (Modified)     */
#define XC_LDA_C_OB_PW  14   /* Ortiz & Ballone (PW)         */
#define XC_LDA_C_PW_RPA 25   /* Perdew & Wang fit of the RPA */

typedef struct {
  FLOAT pp[3], a[3], alpha1[3];
  FLOAT beta1[3], beta2[3], beta3[3], beta4[3];
  FLOAT fz20;
} lda_c_pw_params;

static const lda_c_pw_params par_pw = {
  {1.0,  1.0,  1.0},
  {0.031091,  0.015545,   0.016887},
  {0.21370,  0.20548,  0.11125},
  {7.5957, 14.1189, 10.357},
  {3.5876, 6.1977, 3.6231},
  {1.6382, 3.3662, 0.88026},
  {0.49294, 0.62517, 0.49671},
  1.709921
};

static const lda_c_pw_params par_pw_mod = {
  {1.0,  1.0,  1.0},
  {0.0310907, 0.01554535, 0.0168869},
  {0.21370,  0.20548,  0.11125},
  {7.5957, 14.1189, 10.357},
  {3.5876, 6.1977, 3.6231},
  {1.6382, 3.3662,  0.88026},
  {0.49294, 0.62517, 0.49671},
  1.709920934161365617563962776245
};

static const lda_c_pw_params par_ob = {
  {1.0,  1.0,  1.0},
  {0.031091,  0.015545, 0.016887},
  {0.026481, 0.022465, 0.11125},
  {7.5957, 14.1189, 10.357},
  {3.5876, 6.1977, 3.6231},
  {-0.46647, -0.56043, 0.88026},
  {0.13354, 0.11313, 0.49671},
  1.709921
};

static const lda_c_pw_params par_pw_rpa = {
  {0.75, 0.75, 1.0},
  {0.031091,  0.015545,   0.016887},
  {0.082477, 0.035374, 0.028829},
  { 5.1486, 6.4869, 10.357},
  {1.6483, 1.3083, 3.6231},
  {0.23647, 0.15180, 0.47990},
  {0.20614, 0.082349, 0.12279},
  1.709921
};

static void 
lda_c_pw_init(XC(func_type) *p)
{  
  lda_c_pw_params *params;

  assert(p!=NULL && p->params == NULL);
  p->params = malloc(sizeof(lda_c_pw_params));
  params = (lda_c_pw_params *) (p->params);

  switch(p->info->number){
  case XC_LDA_C_PW:
    memcpy(params, &par_pw, sizeof(lda_c_pw_params));
    break;
  case XC_LDA_C_PW_MOD:
    memcpy(params, &par_pw_mod, sizeof(lda_c_pw_params));
    break;
  case XC_LDA_C_OB_PW:
    memcpy(params, &par_ob, sizeof(lda_c_pw_params));
    break;
  case XC_LDA_C_PW_RPA:
    memcpy(params, &par_pw_rpa, sizeof(lda_c_pw_params));
    break;
  default:
    fprintf(stderr, "Internal error in lda_c_pw\n");
    exit(1);
  }
}

#include "maple2c/lda_c_pw.c"

#define func maple2c_func
#include "work_lda.c"

const XC(func_info_type) XC(func_info_lda_c_pw) = {
  XC_LDA_C_PW,
  XC_CORRELATION,
  "Perdew & Wang",
  XC_FAMILY_LDA,
  {&xc_ref_Perdew1992_13244, NULL, NULL, NULL, NULL},
  XC_FLAGS_3D | XC_FLAGS_HAVE_EXC | XC_FLAGS_HAVE_VXC | XC_FLAGS_HAVE_FXC | XC_FLAGS_HAVE_KXC,
  1e-25, 0.0, 0.0, 1e-32,
  0, NULL, NULL,
  lda_c_pw_init, /* init */
  NULL,     /* end  */
  work_lda, /* lda  */
  NULL,
  NULL
};

const XC(func_info_type) XC(func_info_lda_c_pw_mod) = {
  XC_LDA_C_PW_MOD,
  XC_CORRELATION,
  "Perdew & Wang (modified)",
  XC_FAMILY_LDA,
  {&xc_ref_Perdew1992_13244_mod, NULL, NULL, NULL, NULL},
  XC_FLAGS_3D | XC_FLAGS_HAVE_EXC | XC_FLAGS_HAVE_VXC | XC_FLAGS_HAVE_FXC | XC_FLAGS_HAVE_KXC,
  1e-26, 0.0, 0.0, 1e-32,
  0, NULL, NULL,
  lda_c_pw_init, /* init */
  NULL,     /* end  */
  work_lda, /* lda  */
  NULL,
  NULL
};

const XC(func_info_type) XC(func_info_lda_c_ob_pw) = {
  XC_LDA_C_OB_PW,
  XC_CORRELATION,
  "Ortiz & Ballone (PW parametrization)",
  XC_FAMILY_LDA,
  {&xc_ref_Ortiz1994_1391, &xc_ref_Ortiz1994_1391_err, &xc_ref_Perdew1992_13244_mod, NULL, NULL},
  XC_FLAGS_3D | XC_FLAGS_HAVE_EXC | XC_FLAGS_HAVE_VXC | XC_FLAGS_HAVE_FXC | XC_FLAGS_HAVE_KXC,
  1e-26, 0.0, 0.0, 1e-32,
  0, NULL, NULL,
  lda_c_pw_init, /* init */
  NULL,     /* end  */
  work_lda, /* lda  */
  NULL,
  NULL
};

const XC(func_info_type) XC(func_info_lda_c_pw_rpa) = {
  XC_LDA_C_PW_RPA,
  XC_CORRELATION,
  "Perdew & Wang (fit to the RPA energy)",
  XC_FAMILY_LDA,
  {&xc_ref_Perdew1992_13244, NULL, NULL, NULL, NULL},
  XC_FLAGS_3D | XC_FLAGS_HAVE_EXC | XC_FLAGS_HAVE_VXC | XC_FLAGS_HAVE_FXC | XC_FLAGS_HAVE_KXC,
  1e-27, 0.0, 0.0, 1e-32,
  0, NULL, NULL,
  lda_c_pw_init, /* init */
  NULL,     /* end  */
  work_lda, /* lda  */
  NULL,
  NULL
};
