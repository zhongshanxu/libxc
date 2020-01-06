/*
 Copyright (C) 2006-2007 M.A.L. Marques
               2019      X. Andrade

 This Source Code Form is subject to the terms of the Mozilla Public
 License, v. 2.0. If a copy of the MPL was not distributed with this
 file, You can obtain one at http://mozilla.org/MPL/2.0/.
*/

#ifdef XC_NO_EXC

GPU_FUNCTION static inline void
func_unpol(const xc_func_type *p, int order, const double *rho, const double *sigma, GGA_OUT_PARAMS_NO_EXC(double *));

GPU_FUNCTION static inline void
func_ferr(const xc_func_type *p, int order, const double *rho, const double *sigma, GGA_OUT_PARAMS_NO_EXC(double *));

GPU_FUNCTION static inline void
func_pol(const xc_func_type *p, int order, const double *rho, const double *sigma, GGA_OUT_PARAMS_NO_EXC(double *));

#else

GPU_FUNCTION static inline void
func_unpol(const xc_func_type *p, int order, const double *rho, const double *sigma, double *zk, GGA_OUT_PARAMS_NO_EXC(double *));

GPU_FUNCTION static inline void
func_ferr(const xc_func_type *p, int order, const double *rho, const double *sigma, double *zk, GGA_OUT_PARAMS_NO_EXC(double *));

GPU_FUNCTION static inline void
func_pol(const xc_func_type *p, int order, const double *rho, const double *sigma, double *zk, GGA_OUT_PARAMS_NO_EXC(double *));

#endif
