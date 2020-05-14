/*
 Copyright (C) 2006-2018 M.A.L. Marques
 Copyright (C) 2019 X. Andrade

 This Source Code Form is subject to the terms of the Mozilla Public
 License, v. 2.0. If a copy of the MPL was not distributed with this
 file, You can obtain one at http://mozilla.org/MPL/2.0/.
*/

/**
 * @file work_gga.c
 * @brief This file is to be included in GGA functionals.
 */

#ifdef XC_DEBUG
#define __USE_GNU
#include <fenv.h>
#endif

/* hack to avoid compiler warnings */
#define NOARG

#ifdef XC_NO_EXC
#define OUT_PARAMS GGA_OUT_PARAMS_NO_EXC(NOARG)
#else
#define OUT_PARAMS zk, GGA_OUT_PARAMS_NO_EXC(NOARG)
#endif

#ifdef HAVE_CUDA
__global__ static void
work_gga_gpu(const XC(func_type) *p, int order, size_t np, const double *rho, const double *sigma, double *zk, GGA_OUT_PARAMS_NO_EXC(double *));
#endif

/**
 * @param[in,out] func_type: pointer to functional structure
 */
static void
work_gga(const XC(func_type) *p, size_t np,
         const double *rho, const double *sigma,
         double *zk, GGA_OUT_PARAMS_NO_EXC(double *))
{
  int order = -1;
  if(zk     != NULL) order = 0;
  if(vrho   != NULL) order = 1;
  if(v2rho2 != NULL) order = 2;
  if(v3rho3 != NULL) order = 3;

  if(order < 0) return;

#ifdef XC_DEBUG
  feenableexcept(FE_DIVBYZERO | FE_INVALID);
#endif

#ifdef HAVE_CUDA

  //make a copy of 'p' since it might be in host-only memory
  XC(func_type) * pcuda = (XC(func_type) *) libxc_malloc(sizeof(XC(func_type)));

  *pcuda = *p;

  auto nblocks = np/CUDA_BLOCK_SIZE;
  if(np != nblocks*CUDA_BLOCK_SIZE) nblocks++;

  work_gga_gpu<<<nblocks, CUDA_BLOCK_SIZE>>>(pcuda, order, np, rho, sigma, zk, GGA_OUT_PARAMS_NO_EXC(NOARG));

  libxc_free(pcuda);

#else

  size_t ip;
  double my_rho[2] = {0.0, 0.0}, my_sigma[3] = {0.0, 0.0, 0.0};

  for(ip = 0; ip < np; ip++){
    /* sanity check of input parameters */
    my_rho[0]   = max(p->dens_threshold, rho[0]);
    my_sigma[0] = max(1e-40, sigma[0]);
    if(p->nspin == XC_POLARIZED){
      double s_ave = 0.5*(sigma[0] + sigma[2]);

      my_rho[1]   = max(p->dens_threshold, rho[1]);
      my_sigma[2] = max(1e-40, sigma[2]);
      my_sigma[1] = sigma[1];
      /* | grad n |^2 = |grad n_up + grad n_down|^2 > 0 */
      my_sigma[1] = (my_sigma[1] >= -s_ave ? my_sigma[1] : -s_ave);
      /* Since |grad n_up - grad n_down|^2 > 0 we also have */
      my_sigma[1] = (my_sigma[1] <= +s_ave ? my_sigma[1] : +s_ave);
    }

    if(p->nspin == XC_UNPOLARIZED){
      func_unpol(p, order, my_rho, my_sigma, OUT_PARAMS);      
    }else{
      func_pol  (p, order, my_rho, my_sigma, OUT_PARAMS);
    }

    /* check for NaNs */
#ifdef XC_DEBUG
    {
      size_t ii;
      const xc_dimensions *dim = &(p->dim);
      int is_OK = 1;

      if(zk != NULL)
        is_OK = is_OK & isfinite(*zk);

      if(vrho != NULL){
        for(ii=0; ii < dim->vrho; ii++)
          is_OK = is_OK && isfinite(vrho[ii]);
        for(ii=0; ii < dim->vsigma; ii++)
          is_OK = is_OK && isfinite(vsigma[ii]);
      }

      if(!is_OK){
        printf("Problem in the evaluation of the functional\n");
        if(p->nspin == XC_UNPOLARIZED){
          printf("./xc-get_data %d 1 %le 0.0 %le 0.0 0.0 0.0 0.0 0.0 0.0\n",
                 p->info->number, *rho, *sigma);
        }else{
          printf("./xc-get_data %d 2 %le %le %le %le %le 0.0 0.0 0.0 0.0\n",
                 p->info->number, rho[0], rho[1], sigma[0], sigma[1], sigma[2]);
        }
      }
    }
#endif

    internal_counters_gga_next(&(p->dim), 0, &rho, &sigma, &zk, GGA_OUT_PARAMS_NO_EXC(&));
  }   /* for(ip) */

#endif
}

#ifdef HAVE_CUDA

__global__ static void
work_gga_gpu(const XC(func_type) *p, int order, size_t np, const double *rho, const double *sigma,
             double *zk, GGA_OUT_PARAMS_NO_EXC(double *))
{
  double my_rho[2] = {0.0, 0.0}, my_sigma[3] = {0.0, 0.0, 0.0};
  size_t ip = blockIdx.x*blockDim.x + threadIdx.x;

  if(ip >= np) return;

  internal_counters_gga_random(&(p->dim), ip, 0, &rho, &sigma, &zk, GGA_OUT_PARAMS_NO_EXC(&));

  /* sanity check on input parameters */
  my_rho[0]   = max(p->dens_threshold, rho[0]);
  my_sigma[0] = max(1e-40, sigma[0]);
  if(p->nspin == XC_POLARIZED){
    double s_ave = 0.5*(sigma[0] + sigma[2]);

    my_rho[1]   = max(p->dens_threshold, rho[1]);
    my_sigma[2] = max(1e-40, sigma[2]);
    my_sigma[1] = sigma[1];
    /* | grad n |^2 = |grad n_up + grad n_down|^2 > 0 */
    my_sigma[1] = (my_sigma[1] >= -s_ave ? my_sigma[1] : -s_ave);
    /* Since |grad n_up - grad n_down|^2 > 0 we also have */
    my_sigma[1] = (my_sigma[1] <= +s_ave ? my_sigma[1] : +s_ave);
  }

  if(p->nspin == XC_UNPOLARIZED){
    func_unpol(p, order, my_rho, my_sigma, OUT_PARAMS);
  } else {                                      /* polarized (general) case */
    func_pol  (p, order, my_rho, my_sigma, OUT_PARAMS);
  }
}

#endif
