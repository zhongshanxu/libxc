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
#include <string.h>
#include <assert.h>

#include "config.h"

#ifdef HAVE_FORTRAN

#include "xc.h"
#include "string_f.h"

/* xc_config.h needs to be included to use double and related macros*/
#include "xc_config.h"

/* version */
void XC_FC_FUNC(f90_version, F90_VERSION)
     (int *major, int *minor, int *micro)
{
  XC(version)(major, minor, micro);
}

void XC_FC_FUNC(f90_version_string, F90_VERSIN_STRING)
     (STR_F_TYPE version_string STR_ARG1)
{
  const char *version;

  version = XC(version_string)();
  TO_F_STR1(version, version_string);
}

/* info */
CC_FORTRAN_INT XC_FC_FUNC(f90_info_number, F90_INFO_NUMBER)
     (void **info)
{
  return (CC_FORTRAN_INT) ((XC(func_info_type) *)(*info))->number;
}


CC_FORTRAN_INT XC_FC_FUNC(f90_info_kind, F90_INFO_KIND)
     (void **info)
{
  return (CC_FORTRAN_INT) ((XC(func_info_type) *)(*info))->kind;
}


void XC_FC_FUNC(f90_info_name, F90_INFO_NAME)
     (void **info, STR_F_TYPE s STR_ARG1)
{
  TO_F_STR1(((XC(func_info_type) *)(*info))->name, s);
}


CC_FORTRAN_INT  XC_FC_FUNC(f90_info_family, F90_INFO_FAMILY)
     (void **info)
{
  return (CC_FORTRAN_INT) ((XC(func_info_type) *)(*info))->family;
}


CC_FORTRAN_INT  XC_FC_FUNC(f90_info_flags, F90_INFO_FLAGS)
     (void **info)
{
  return (CC_FORTRAN_INT) ((XC(func_info_type) *)(*info))->flags;
}


void XC_FC_FUNC(f90_info_refs, F90_INFO_REFS)
     (void **info, CC_FORTRAN_INT *number, STR_F_TYPE ref_f STR_ARG1)
{
  XC(func_info_type) *func_p = (XC(func_info_type) *)(*info);

  assert(*number >=0 && *number < 5);

  if(func_p->refs[*number] == NULL){
    *number = -1;
    return;
  }

  TO_F_STR1(func_p->refs[*number]->ref, ref_f);

  (*number)++;
  fflush(stdout);
}


void XC_FC_FUNC(f90_functional_get_name, F90_FUNCTIONAL_GET_NAME)
     (CC_FORTRAN_INT *func_number, STR_F_TYPE func_string STR_ARG1)
{
  char *name;

  name = XC(functional_get_name)(*func_number);
  if ( name == NULL ) name = strdup("unknown");

  TO_F_STR1(name, func_string);
  free(name);
}


CC_FORTRAN_INT  XC_FC_FUNC(f90_functional_get_number, F90_FUNCTIONAL_GET_NUMBER)
     (STR_F_TYPE func_string STR_ARG1)
{
  char *name;
  int ret;

  TO_C_STR1(func_string, name);
  
  ret = XC(functional_get_number)(name);
  free(name);

  return (CC_FORTRAN_INT) ret;
}


/* functionals */
CC_FORTRAN_INT  XC_FC_FUNC(f90_family_from_id, F90_FAMILY_FROM_ID)
  (CC_FORTRAN_INT  *functional)
{
  return (CC_FORTRAN_INT) XC(family_from_id)((int) (*functional), NULL, NULL);
}


/* Standard initialization */
void XC_FC_FUNC(f90_func_init, F90_FUNC_INIT)
     (void **p, void **info, CC_FORTRAN_INT *functional, CC_FORTRAN_INT *nspin)
{
  XC(func_type) *func_p;
  
  func_p = (XC(func_type) *)malloc(sizeof(XC(func_type)));
  XC(func_init)(func_p, (int) (*functional), (int) (*nspin));

  *p    = (void *) func_p;
  *info = (void *)(func_p->info);
}

void XC_FC_FUNC(f90_func_end, F90_FUNC_END)
     (void **p)
{
  XC(func_end)((XC(func_type) *)(*p));
  free(*p);
  *p = NULL;
}

void XC_FC_FUNC(f90_func_set_dens_threshold, F90_FUNC_SET_DENS_THRESHOLD)
     (void **p, double *dens_threshold)
{
  XC(func_set_dens_threshold)((XC(func_type) *)(*p), *dens_threshold);
}

void XC_FC_FUNC(f90_func_set_ext_params, F90_FUNC_SET_EXT_PARAMS)
     (void **p, double *ext_params)
{
  XC(func_set_ext_params)((XC(func_type) *)(*p), ext_params);
}


/* LDAs */

void XC_FC_FUNC(f90_lda, F90_LDA)
     (void **p, CC_FORTRAN_INT *np, double *rho, 
      double *zk, double *vrho, double *v2rho2, double *v3rho3)
{
  XC(lda)((XC(func_type) *)(*p), *np, rho, zk, vrho, v2rho2, v3rho3);
}

void XC_FC_FUNC(f90_lda_exc, F90_LDA_EXC)
     (void **p, CC_FORTRAN_INT *np, double *rho,
      double *zk)
{
  XC(lda)((XC(func_type) *)(*p), *np, rho, zk, NULL, NULL, NULL);
}

void XC_FC_FUNC(f90_lda_exc_vxc, F90_LDA_EXC_VXC)
     (void **p, CC_FORTRAN_INT *np, double *rho, 
      double *zk, double *vrho)
{
  XC(lda)((XC(func_type) *)(*p), *np, rho, zk, vrho, NULL, NULL);
}

void XC_FC_FUNC(f90_lda_vxc, F90_LDA_VXC)
     (void **p, CC_FORTRAN_INT *np, double *rho, 
      double *vrho)
{
  XC(lda)((XC(func_type) *)(*p), *np, rho, NULL, vrho, NULL, NULL);
}

void XC_FC_FUNC(f90_lda_vxc_fxc, F90_LDA_VXC_FXC)
     (void **p, CC_FORTRAN_INT *np, double *rho,
      double *vrho, double *v2rho2)
{
  XC(lda)((XC(func_type) *)(*p), *np, rho, NULL, vrho, v2rho2, NULL);
}

void XC_FC_FUNC(f90_lda_fxc, F90_LDA_FXC)
     (void **p, CC_FORTRAN_INT *np, double *rho,
      double *v2rho2)
{
  XC(lda)((XC(func_type) *)(*p), *np, rho, NULL, NULL, v2rho2, NULL);
}

void XC_FC_FUNC(f90_lda_kxc, F90_LDA_KXC)
     (void **p, CC_FORTRAN_INT *np, double *rho,
      double *v3rho3)
{
  XC(lda)((XC(func_type) *)(*p), *np, rho, NULL, NULL, NULL, v3rho3);
}


/* GGAs */

void XC_FC_FUNC(f90_gga, F90_GGA)
     (void **p, CC_FORTRAN_INT *np, double *rho, double *sigma, 
      double *zk, double *vrho, double *vsigma,
      double *v2rho2, double *v2rhosigma, double *v2sigma2,
      double *v3rho3, double *v3rho2sigma, double *v3rhosigma2, double *v3sigma3)
{
  XC(gga)((XC(func_type) *)(*p), *np, rho, sigma, zk, vrho, vsigma, 
	  v2rho2, v2rhosigma, v2sigma2, v3rho3, v3rho2sigma, v3rhosigma2, v3sigma3);
}

void XC_FC_FUNC(f90_gga_exc, F90_GGA_EXC)
     (void **p, CC_FORTRAN_INT *np, double *rho, double *sigma, 
      double *zk)
{
  XC(gga)((XC(func_type) *)(*p), *np, rho, sigma, zk, NULL, NULL, 
	  NULL, NULL, NULL, NULL, NULL, NULL, NULL);
}

void XC_FC_FUNC(f90_gga_exc_vxc, F90_GGA_EXC_VXC)
     (void **p, CC_FORTRAN_INT *np, double *rho, double *sigma, 
      double *zk, double *vrho, double *vsigma)
{
  XC(gga)((XC(func_type) *)(*p), *np, rho, sigma, zk, vrho, vsigma, 
	  NULL, NULL, NULL, NULL, NULL, NULL, NULL);
}

void XC_FC_FUNC(f90_gga_vxc, F90_GGA_VXC)
     (void **p, CC_FORTRAN_INT *np, double *rho, double *sigma, 
      double *vrho, double *vsigma)
{
  XC(gga)((XC(func_type) *)(*p), *np, rho, sigma, NULL, vrho, vsigma, 
	  NULL, NULL, NULL, NULL, NULL, NULL, NULL);
}

void XC_FC_FUNC(f90_gga_vxc_fxc, F90_GGA_VXC_FXC)
     (void **p, CC_FORTRAN_INT *np, double *rho, double *sigma, 
      double *vrho, double *vsigma,
      double *v2rho2, double *v2rhosigma, double *v2sigma2)
{
  XC(gga)((XC(func_type) *)(*p), *np, rho, sigma, NULL, vrho, vsigma, 
	  v2rho2, v2rhosigma, v2sigma2, NULL, NULL, NULL, NULL);
}

void XC_FC_FUNC(f90_gga_fxc, F90_GGA_FXC)
     (void **p, CC_FORTRAN_INT *np, double *rho, double *sigma, 
      double *v2rho2, double *v2rhosigma, double *v2sigma2)
{
  XC(gga)((XC(func_type) *)(*p), *np, rho, sigma, NULL, NULL, NULL, 
	  v2rho2, v2rhosigma, v2sigma2, NULL, NULL, NULL, NULL);
}

void XC_FC_FUNC(f90_gga_kxc, F90_GGA_KXC)
     (void **p, CC_FORTRAN_INT *np, double *rho, double *sigma, 
      double *v3rho3, double *v3rho2sigma, double *v3rhosigma2, double *v3sigma3)
{
  XC(gga)((XC(func_type) *)(*p), *np, rho, sigma, NULL, NULL, NULL, 
	  NULL, NULL, NULL, v3rho3, v3rho2sigma, v3rhosigma2, v3sigma3);
}


void XC_FC_FUNC(f90_gga_lb_modified, F90_GGA_LB_MODIFIED)
     (void **p, CC_FORTRAN_INT *np, double *rho, double *sigma, double *r, double *vrho)
{
  XC(gga_lb_modified)((XC(func_type) *)(*p), *np, rho, sigma, *r, vrho);
}

void XC_FC_FUNC(f90_gga_ak13_get_asymptotic, F90_GGA_AK13_GET_ASYMPTOTIC)
  (double *homo, double *asymp)
{
  *asymp = XC(gga_ak13_get_asymptotic)(*homo);
}

void XC_FC_FUNC(f90_hyb_exx_coef, F90_HYB_EXX_COEF)
   (void **p, double *coef)
{
  *coef = XC(hyb_exx_coef)((XC(func_type) *)(*p));
}

void XC_FC_FUNC(f90_hyb_cam_coef, F90_HYB_CAM_COEF)
  (void **p, double *omega, double *alpha, double *beta)
{
  XC(hyb_cam_coef)((XC(func_type) *)(*p), omega, alpha, beta);
}


/* meta-GGAs */

void XC_FC_FUNC(f90_mgga, F90_MGGA)
     (void **p, CC_FORTRAN_INT *np, double *rho, double *sigma, double *lapl, double *tau,
      double *zk, double *vrho, double *vsigma, double *vlapl, double *vtau,
      double *v2rho2, double *v2sigma2, double *v2lapl2, double *v2tau2,
      double *v2rhosigma, double *v2rholapl, double *v2rhotau, 
      double *v2sigmalapl, double *v2sigmatau, double *v2lapltau)
{
  XC(mgga)((XC(func_type) *)(*p), *np, rho, sigma, lapl, tau, 
	   zk, vrho, vsigma, vlapl, vtau,
	   v2rho2, v2sigma2, v2lapl2, v2tau2, v2rhosigma, v2rholapl, v2rhotau, 
	   v2sigmalapl, v2sigmatau, v2lapltau);

}

void XC_FC_FUNC(f90_mgga_exc, F90_MGGA_EXC)
     (void **p, CC_FORTRAN_INT *np, double *rho, double *sigma, double *lapl, double *tau, 
      double *zk)
{
  XC(mgga)((XC(func_type) *)(*p), *np, rho, sigma, lapl, tau, 
	   zk, NULL, NULL, NULL, NULL, 
	   NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL);
}

void XC_FC_FUNC(f90_mgga_exc_vxc, F90_MGGA_EXC_VXC)
  (void **p, CC_FORTRAN_INT *np, double *rho, double *sigma, double *lapl, double *tau,
   double *zk, double *vrho, double *vsigma, double *vlapl, double *vtau)
{
  XC(mgga)((XC(func_type) *)(*p), *np, rho, sigma, lapl, tau, 
	   zk, vrho, vsigma, vlapl, vtau, 
	   NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL);
}

void XC_FC_FUNC(f90_mgga_vxc, F90_MGGA_VXC)
  (void **p, CC_FORTRAN_INT *np, double *rho, double *sigma, double *lapl, double *tau,
   double *vrho, double *vsigma, double *vlapl, double *vtau)
{
  XC(mgga)((XC(func_type) *)(*p), *np, rho, sigma, lapl, tau, 
	   NULL, vrho, vsigma, vlapl, vtau, 
	   NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL);
}

void XC_FC_FUNC(f90_mgga_vxc_fxc, F90_MGGA_VXC_FXC)
  (void **p, CC_FORTRAN_INT *np, double *rho, double *sigma, double *lapl, double *tau,
   double *vrho, double *vsigma, double *vlapl, double *vtau,
   double *v2rho2, double *v2sigma2, double *v2lapl2, double *v2tau2,
   double *v2rhosigma, double *v2rholapl, double *v2rhotau, 
   double *v2sigmalapl, double *v2sigmatau, double *v2lapltau)
{
  XC(mgga)((XC(func_type) *)(*p), *np, rho, sigma, lapl, tau, 
	   NULL, vrho, vsigma, vlapl, vtau,
	   v2rho2, v2sigma2, v2lapl2, v2tau2, v2rhosigma, v2rholapl, v2rhotau, 
	   v2sigmalapl, v2sigmatau, v2lapltau);
}

void XC_FC_FUNC(f90_mgga_fxc, F90_MGGA_FXC)
  (void **p, CC_FORTRAN_INT *np, double *rho, double *sigma, double *lapl, double *tau,
      double *v2rho2, double *v2sigma2, double *v2lapl2, double *v2tau2,
      double *v2rhosigma, double *v2rholapl, double *v2rhotau, 
      double *v2sigmalapl, double *v2sigmatau, double *v2lapltau)
{
  XC(mgga)((XC(func_type) *)(*p), *np, rho, sigma, lapl, tau, 
	   NULL, NULL, NULL, NULL, NULL, 
	   v2rho2, v2sigma2, v2lapl2, v2tau2, v2rhosigma, v2rholapl, v2rhotau, 
	   v2sigmalapl, v2sigmatau, v2lapltau);
}

#endif
