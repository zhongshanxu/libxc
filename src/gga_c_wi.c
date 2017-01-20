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
#include <string.h>

#include "util.h"

#define XC_GGA_C_WI0 153 /* Wilson & Ivanov initial version */
#define XC_GGA_C_WI  148 /* Wilson & Ivanov */

typedef struct {
  FLOAT a, b, c, d, k;
} gga_c_wi_params;

static gga_c_wi_params wi0_params = {
  -0.44, 0.0032407, 7.8, 0.0073, 0.000311
};

static gga_c_wi_params wi_params = {
  -0.00652, 0.0007, 0.21, 0.002, 0.001
};

static void 
gga_c_wi_init(XC(func_type) *p)
{
  gga_c_wi_params *params;

  assert(p!=NULL && p->params == NULL);
  p->params = malloc(sizeof(gga_c_wi_params));
  params = (gga_c_wi_params *) (p->params);

  switch(p->info->number){
  case XC_GGA_C_WI0: 
    memcpy(params, &wi0_params, sizeof(gga_c_wi_params));
    break;
  case XC_GGA_C_WI:
    memcpy(params, &wi_params, sizeof(gga_c_wi_params));
    break;
  default:
    fprintf(stderr, "Internal error in gga_c_wi\n");
    exit(1);
  }
}


static inline void 
funcold(const XC(func_type) *p, XC(gga_work_c_t) *r)
{
  FLOAT xt0, xt2, xt52, xt72, cnst_rs, aux;
  FLOAT num, den, ddendrs, dnumdxt, ddendxt, d2dendrsxt, d2numdxt2, d2dendxt2, d3dendrsxt2, d3dendxt3, d3numdxt3;

  gga_c_wi_params *params;

  assert(p->params != NULL);
  params = (gga_c_wi_params * )(p->params);

  cnst_rs = CBRT(4.0*M_PI/3.0);
  xt2     = r->xt*r->xt;
  xt0     = SQRT(r->xt);
  xt52    = xt2*xt0;
  xt72    = r->xt*xt52;

  aux = exp(-params->k*xt2);

  num = params->a + params->b*xt2*aux;
  den = params->c + r->rs*(1.0 + params->d*cnst_rs*xt72);

  r->f  = num/den;

  if(r->order < 1) return;

  ddendrs = 1.0 + params->d*cnst_rs*xt72;
  ddendxt = 7.0/2.0*params->d*cnst_rs*r->rs*xt52;
  dnumdxt = -2.0*params->b*r->xt*(params->k*xt2 - 1.0)*aux;

  r->dfdrs    = DFRACTION(num, 0.0, den, ddendrs);
  r->dfdxt    = DFRACTION(num, dnumdxt, den, ddendxt);

  if(r->order < 2) return;

  d2dendrsxt  = 7.0/2.0*params->d*cnst_rs*xt52;
  d2dendxt2   = 5.0*ddendxt/(2.0*r->xt);
  d2numdxt2   = params->b*(2.0 + 2.0*params->k*xt2*(2.0*params->k*xt2 - 5.0))*aux;

  r->d2fdrs2     = D2FRACTION(num, 0.0, 0.0, den, ddendrs, 0.0);
  r->d2fdrsxt    = ((-den*dnumdxt + 2.0*num*ddendxt)*ddendrs - den*num*d2dendrsxt)/(den*den*den);
  r->d2fdxt2     = D2FRACTION(num, dnumdxt, d2numdxt2, den, ddendxt, d2dendxt2);

  if(r->order < 3) return;

  d3dendrsxt2 = 5.0*d2dendrsxt/(2.0*r->xt);
  d3dendxt3   = 3.0*d2dendxt2 /(2.0*r->xt);
  d3numdxt3   = -4.0*params->b*params->k*r->xt*(6.0 + params->k*xt2*(2.0*params->k*xt2 - 9.0))*aux;

  r->d3fdrs3    = D3FRACTION(num, 0.0, 0.0, 0.0, den, ddendrs, 0.0, 0.0);
  r->d3fdrs2xt = (- 6.0*num*ddendxt*ddendrs*ddendrs
		  + 2.0*den*(dnumdxt*ddendrs*ddendrs + num*2.0*ddendrs*d2dendrsxt))/(den*den*den*den);
  r->d3fdrsxt2 = (- 6.0*num*ddendxt*ddendxt*ddendrs
		  + 2.0*den*((2.0*dnumdxt*ddendxt + num*d2dendxt2)*ddendrs + 2.0*num*ddendxt*d2dendrsxt)
		  - den*den*(d2numdxt2*ddendrs + 2.0*dnumdxt*d2dendrsxt + num*d3dendrsxt2))/(den*den*den*den);
  r->d3fdxt3   = D3FRACTION(num, dnumdxt, d2numdxt2, d3numdxt3, den, ddendxt, d2dendxt2, d3dendxt3);
}

#include "maple2c/gga_c_wi.c"

#define func maple2c_func
#include "work_gga_c.c"

const XC(func_info_type) XC(func_info_gga_c_wi0) = {
  XC_GGA_C_WI0,
  XC_CORRELATION,
  "Wilson & Ivanov initial version",
  XC_FAMILY_GGA,
  {&xc_ref_Wilson1998_523, NULL, NULL, NULL, NULL},
  XC_FLAGS_3D | XC_FLAGS_HAVE_EXC | XC_FLAGS_HAVE_VXC | XC_FLAGS_HAVE_FXC | XC_FLAGS_HAVE_KXC,
  1e-32, 1e-32, 0.0, 1e-32,
  0, NULL, NULL,
  gga_c_wi_init,
  NULL, NULL,
  work_gga_c,
  NULL
};

const XC(func_info_type) XC(func_info_gga_c_wi) = {
  XC_GGA_C_WI,
  XC_CORRELATION,
  "Wilson & Ivanov",
  XC_FAMILY_GGA,
  {&xc_ref_Wilson1998_523, NULL, NULL, NULL, NULL},
  XC_FLAGS_3D | XC_FLAGS_HAVE_EXC | XC_FLAGS_HAVE_VXC | XC_FLAGS_HAVE_FXC | XC_FLAGS_HAVE_KXC,
  1e-32, 1e-32, 0.0, 1e-32,
  0, NULL, NULL,
  gga_c_wi_init,
  NULL, NULL,
  work_gga_c,
  NULL
};
