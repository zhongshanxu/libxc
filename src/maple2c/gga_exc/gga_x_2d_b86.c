/* 
  This file was generated automatically with ./scripts/maple2c.pl.
  Do not edit this file directly as it can be overwritten!!

  This Source Code Form is subject to the terms of the Mozilla Public
  License, v. 2.0. If a copy of the MPL was not distributed with this
  file, You can obtain one at http://mozilla.org/MPL/2.0/.

  Maple version     : Maple 2016 (X86 64 LINUX)
  Maple source      : ./maple/gga_exc/gga_x_2d_b86.mpl
  Type of functional: gga_exc
*/

#define maple2c_order 2
#define MAPLE2C_FLAGS (XC_FLAGS_I_HAVE_EXC | XC_FLAGS_I_HAVE_VXC | XC_FLAGS_I_HAVE_FXC)


static inline void
func_unpol(const xc_func_type *p, int order, const double *rho, const double *sigma , double *zk GGA_OUT_PARAMS_NO_EXC(XC_COMMA double *, ))
{

#ifndef XC_DONT_COMPILE_EXC
  double t3, t4, t6, t7, t8, t9, t10, t12;
  double t14, t17, t18, t22;

#ifndef XC_DONT_COMPILE_VXC
  double t30, t31, t34, t35, t36, t37, t41, t46;
  double t52;

#ifndef XC_DONT_COMPILE_FXC
  double t61, t64, t72, t73, t79, t84, t92, t102;
  double t108, t114;
#endif

#endif

#endif



  t3 = rho[0] / 0.2e1 <= 0.101e1 * p->threshold_dens;
  t4 = sqrt(M_PI);
  t6 = M_SQRT2;
  t7 = 0.1e1 / t4 * t6;
  t8 = sqrt(rho[0]);
  t9 = rho[0] * rho[0];
  t10 = t9 * rho[0];
  t12 = sigma[0] / t10;
  t14 = 0.1e1 + 0.4210e-2 * t12;
  t17 = 0.1e1 + 0.238e-3 * t12;
  t18 = 0.1e1 / t17;
  t22 = my_piecewise3(t3, 0, -0.2e1 / 0.3e1 * t7 * t8 * t14 * t18);
  if(zk != NULL && (p->info->flags & XC_FLAGS_HAVE_EXC))
    zk[0] = 0.2e1 * t22;

#ifndef XC_DONT_COMPILE_VXC

  if(order < 1) return;


  t30 = t6 / t8 / t10;
  t31 = sigma[0] * t18;
  t34 = t17 * t17;
  t35 = 0.1e1 / t34;
  t36 = t14 * t35;
  t37 = t36 * sigma[0];
  t41 = my_piecewise3(t3, 0, -t7 / t8 * t14 * t18 / 0.3e1 + 0.47504762934721079361e-2 * t30 * t31 - 0.26855424176873199259e-3 * t30 * t37);
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vrho[0] = 0.2e1 * rho[0] * t41 + 0.2e1 * t22;

  t46 = t6 / t8 / t9;
  t52 = my_piecewise3(t3, 0, -0.15834920978240359787e-2 * t46 * t18 + 0.89518080589577330860e-4 * t46 * t36);
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vsigma[0] = 0.2e1 * rho[0] * t52;

#ifndef XC_DONT_COMPILE_FXC

  if(order < 2) return;


  t61 = t9 * t9;
  t64 = t6 / t8 / t61;
  t72 = t6 / t8 / t61 / t10;
  t73 = sigma[0] * sigma[0];
  t79 = t14 / t34 / t17;
  t84 = my_piecewise3(t3, 0, t7 / t8 / rho[0] * t14 * t18 / 0.6e1 - 0.14251428880416323808e-1 * t64 * t31 + 0.80566272530619597777e-3 * t64 * t37 + 0.67836801470781701328e-5 * t72 * t73 * t35 - 0.38349545724574928542e-6 * t72 * t79 * t73);
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[0] = 0.2e1 * rho[0] * t84 + 0.4e1 * t41;

  t92 = t6 / t8 / t61 / t9;
  t102 = my_piecewise3(t3, 0, 0.39587302445600899468e-2 * t30 * t18 - 0.22612267156927233776e-5 * t92 * t35 * sigma[0] - 0.22379520147394332715e-3 * t30 * t36 + 0.12783181908191642847e-6 * t92 * t79 * sigma[0]);
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rhosigma[0] = 0.2e1 * rho[0] * t102 + 0.2e1 * t52;

  t108 = t6 / t8 / t61 / rho[0];
  t114 = my_piecewise3(t3, 0, 0.75374223856424112585e-6 * t108 * t35 - 0.42610606360638809489e-7 * t108 * t79);
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigma2[0] = 0.2e1 * rho[0] * t114;

#ifndef XC_DONT_COMPILE_KXC

  if(order < 3) return;


#endif

#endif

#endif


}


static inline void
func_pol(const xc_func_type *p, int order, const double *rho, const double *sigma , double *zk GGA_OUT_PARAMS_NO_EXC(XC_COMMA double *, ))
{

#ifndef XC_DONT_COMPILE_EXC
  double t1, t2, t3, t4, t5, t6, t7, t8;
  double t9, t10, t11, t12, t13, t14, t15, t16;
  double t18, t19, t21, t22, t23, t26, t27, t28;
  double t29, t30, t31, t32, t33, t34, t35, t37;
  double t38, t40, t41, t42, t45;

#ifndef XC_DONT_COMPILE_VXC
  double t46, t50, t51, t52, t54, t55, t56, t57;
  double t59, t60, t61, t64, t66, t70, t71, t72;
  double t73, t77, t78, t79, t80, t82, t83, t84;
  double t85, t86, t90, t93, t94, t95, t99, t104;
  double t105, t106, t109, t111, t115, t116, t117, t118;
  double t122, t125, t126, t127, t130, t134, t135, t136;
  double t137, t140, t144;

#ifndef XC_DONT_COMPILE_FXC
  double t147, t148, t155, t156, t157, t167, t169, t170;
  double t172, t173, t176, t180, t181, t186, t195, t196;
  double t206, t207, t214, t215, t219, t220, t223, t225;
  double t227, t230, t232, t236, t241, t251, t256, t265;
  double t266, t270, t275, t280, t287, t288, t290, t296;
  double t301, t302, t314, t320, t321, t322, t335, t340;
  double t357, t358, t365, t366, t370, t371, t376, t378;
  double t379, t385, t386, t393, t403, t405, t407, t409;
  double t410, t414, t419, t422, t429, t438, t439, t454;
  double t458, t465, t468, t475;
#endif

#endif

#endif



  t1 = 0.101e1 * p->threshold_dens;
  t2 = rho[0] <= t1;
  t3 = sqrt(M_PI);
  t4 = 0.1e1 / t3;
  t5 = t4 * rho[0];
  t6 = rho[0] + rho[1];
  t7 = sqrt(t6);
  t8 = 0.1e1 / t7;
  t9 = t5 * t8;
  t10 = 0.1e1 / t6;
  t11 = rho[0] * t10;
  t12 = sqrt(t11);
  t13 = rho[0] * rho[0];
  t14 = t13 * rho[0];
  t15 = 0.1e1 / t14;
  t16 = sigma[0] * t15;
  t18 = 0.1e1 + 0.2105e-2 * t16;
  t19 = t12 * t18;
  t21 = 0.1e1 + 0.119e-3 * t16;
  t22 = 0.1e1 / t21;
  t23 = t19 * t22;
  t26 = my_piecewise3(t2, 0, -0.8e1 / 0.3e1 * t9 * t23);
  t27 = rho[1] <= t1;
  t28 = t4 * rho[1];
  t29 = t28 * t8;
  t30 = rho[1] * t10;
  t31 = sqrt(t30);
  t32 = rho[1] * rho[1];
  t33 = t32 * rho[1];
  t34 = 0.1e1 / t33;
  t35 = sigma[2] * t34;
  t37 = 0.1e1 + 0.2105e-2 * t35;
  t38 = t31 * t37;
  t40 = 0.1e1 + 0.119e-3 * t35;
  t41 = 0.1e1 / t40;
  t42 = t38 * t41;
  t45 = my_piecewise3(t27, 0, -0.8e1 / 0.3e1 * t29 * t42);
  if(zk != NULL && (p->info->flags & XC_FLAGS_HAVE_EXC))
    zk[0] = t26 + t45;

#ifndef XC_DONT_COMPILE_VXC

  if(order < 1) return;


  t46 = t4 * t8;
  t50 = 0.1e1 / t7 / t6;
  t51 = t5 * t50;
  t52 = t51 * t23;
  t54 = 0.1e1 / t12;
  t55 = t54 * t18;
  t56 = t6 * t6;
  t57 = 0.1e1 / t56;
  t59 = -rho[0] * t57 + t10;
  t60 = t22 * t59;
  t61 = t55 * t60;
  t64 = t15 * t8;
  t66 = t12 * sigma[0] * t22;
  t70 = t21 * t21;
  t71 = 0.1e1 / t70;
  t72 = t18 * t71;
  t73 = t72 * sigma[0];
  t77 = my_piecewise3(t2, 0, -0.8e1 / 0.3e1 * t46 * t23 + 0.4e1 / 0.3e1 * t52 - 0.4e1 / 0.3e1 * t9 * t61 + 0.95009525869442158723e-2 * t64 * t66 - 0.53710848353746398517e-3 * t64 * t12 * t73);
  t78 = t28 * t50;
  t79 = t78 * t42;
  t80 = t4 * t32;
  t82 = 0.1e1 / t7 / t56;
  t83 = t80 * t82;
  t84 = 0.1e1 / t31;
  t85 = t84 * t37;
  t86 = t85 * t41;
  t90 = my_piecewise3(t27, 0, 0.4e1 / 0.3e1 * t83 * t86 + 0.4e1 / 0.3e1 * t79);
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vrho[0] = t26 + t45 + t6 * (t77 + t90);

  t93 = t4 * t13;
  t94 = t93 * t82;
  t95 = t55 * t22;
  t99 = my_piecewise3(t2, 0, 0.4e1 / 0.3e1 * t94 * t95 + 0.4e1 / 0.3e1 * t52);
  t104 = -rho[1] * t57 + t10;
  t105 = t41 * t104;
  t106 = t85 * t105;
  t109 = t34 * t8;
  t111 = t31 * sigma[2] * t41;
  t115 = t40 * t40;
  t116 = 0.1e1 / t115;
  t117 = t37 * t116;
  t118 = t117 * sigma[2];
  t122 = my_piecewise3(t27, 0, -0.8e1 / 0.3e1 * t46 * t42 + 0.4e1 / 0.3e1 * t79 - 0.4e1 / 0.3e1 * t29 * t106 + 0.95009525869442158723e-2 * t109 * t111 - 0.53710848353746398517e-3 * t109 * t31 * t118);
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vrho[1] = t26 + t45 + t6 * (t99 + t122);

  t125 = 0.1e1 / t13;
  t126 = t125 * t8;
  t127 = t12 * t22;
  t130 = t19 * t71;
  t134 = my_piecewise3(t2, 0, -0.31669841956480719573e-2 * t126 * t127 + 0.17903616117915466173e-3 * t126 * t130);
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vsigma[0] = t6 * t134;

  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vsigma[1] = 0.0e0;

  t135 = 0.1e1 / t32;
  t136 = t135 * t8;
  t137 = t31 * t41;
  t140 = t38 * t116;
  t144 = my_piecewise3(t27, 0, -0.31669841956480719573e-2 * t136 * t137 + 0.17903616117915466173e-3 * t136 * t140);
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vsigma[2] = t6 * t144;

#ifndef XC_DONT_COMPILE_FXC

  if(order < 2) return;


  t147 = t4 * t50;
  t148 = t147 * t23;
  t155 = t8 * t12;
  t156 = t13 * t13;
  t157 = 0.1e1 / t156;
  t167 = t5 * t82;
  t169 = 0.2e1 * t167 * t23;
  t170 = t51 * t61;
  t172 = t15 * t50;
  t173 = t172 * t66;
  t176 = t172 * t12 * t73;
  t180 = 0.1e1 / t12 / t11 * t18;
  t181 = t59 * t59;
  t186 = t64 * t54;
  t195 = t56 * t6;
  t196 = 0.1e1 / t195;
  t206 = 0.1e1 / t156 / t14 * t8;
  t207 = sigma[0] * sigma[0];
  t214 = 0.1e1 / t70 / t21;
  t215 = t18 * t214;
  t219 = 0.8e1 / 0.3e1 * t148 - 0.8e1 / 0.3e1 * t46 * t54 * t18 * t22 * t59 - 0.19001905173888431745e-1 * t155 * sigma[0] * t157 * t22 + 0.10742169670749279703e-2 * t155 * t18 * t71 * sigma[0] * t157 - t169 + 0.4e1 / 0.3e1 * t170 - 0.95009525869442158723e-2 * t173 + 0.53710848353746398517e-3 * t176 + 0.2e1 / 0.3e1 * t9 * t180 * t22 * t181 + 0.95009525869442158723e-2 * t186 * sigma[0] * t22 * t59 - 0.53710848353746398517e-3 * t186 * t72 * t59 * sigma[0] - 0.4e1 / 0.3e1 * t9 * t55 * t22 * (0.2e1 * rho[0] * t196 - 0.2e1 * t57) + 0.67836801470781701327e-5 * t206 * t12 * t207 * t71 - 0.38349545724574928541e-6 * t206 * t12 * t215 * t207;
  t220 = my_piecewise3(t2, 0, t219);
  t223 = 0.2e1 * t28 * t82 * t42;
  t225 = 0.1e1 / t7 / t195;
  t227 = t80 * t225 * t86;
  t230 = t56 * t56;
  t232 = 0.1e1 / t7 / t230;
  t236 = 0.1e1 / t31 / t30 * t37;
  t241 = my_piecewise3(t27, 0, -t223 - 0.4e1 * t227 + 0.2e1 / 0.3e1 * t4 * t33 * t232 * t236 * t41);
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[0] = 0.2e1 * t77 + 0.2e1 * t90 + t6 * (t220 + t241);

  t251 = t93 * t225 * t95;
  t256 = t125 * t82;
  t265 = my_piecewise3(t2, 0, 0.4e1 / 0.3e1 * t148 - t169 + 0.2e1 / 0.3e1 * t170 - 0.47504762934721079361e-2 * t173 + 0.26855424176873199259e-3 * t176 + 0.8e1 / 0.3e1 * t167 * t95 - 0.10e2 / 0.3e1 * t251 - 0.2e1 / 0.3e1 * t94 * t180 * t60 - 0.47504762934721079361e-2 * t256 * t54 * sigma[0] * t22 + 0.26855424176873199259e-3 * t256 * t54 * t73);
  t266 = t147 * t42;
  t270 = t37 * t41;
  t275 = t78 * t106;
  t280 = rho[1] * t196;
  t287 = t34 * t50;
  t288 = t287 * t111;
  t290 = t135 * t82;
  t296 = t287 * t31 * t118;
  t301 = 0.4e1 / 0.3e1 * t266 + 0.4e1 / 0.3e1 * t4 * t82 * t84 * t270 * rho[1] - t223 - 0.2e1 / 0.3e1 * t227 + 0.2e1 / 0.3e1 * t275 - 0.2e1 / 0.3e1 * t83 * t236 * t105 - 0.4e1 / 0.3e1 * t29 * t85 * t41 * (-t57 + 0.2e1 * t280) - 0.47504762934721079362e-2 * t288 - 0.47504762934721079362e-2 * t290 * t84 * sigma[2] * t41 + 0.26855424176873199258e-3 * t296 + 0.26855424176873199258e-3 * t290 * t84 * t118;
  t302 = my_piecewise3(t27, 0, t301);
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[1] = t77 + t90 + t99 + t122 + t6 * (t265 + t302);

  t314 = my_piecewise3(t2, 0, -t169 - 0.4e1 * t251 + 0.2e1 / 0.3e1 * t4 * t14 * t232 * t180 * t22);
  t320 = t8 * t31;
  t321 = t32 * t32;
  t322 = 0.1e1 / t321;
  t335 = t104 * t104;
  t340 = t109 * t84;
  t357 = 0.1e1 / t321 / t33 * t8;
  t358 = sigma[2] * sigma[2];
  t365 = 0.1e1 / t115 / t40;
  t366 = t37 * t365;
  t370 = 0.8e1 / 0.3e1 * t266 - 0.8e1 / 0.3e1 * t46 * t84 * t270 * t104 - 0.19001905173888431745e-1 * t320 * sigma[2] * t322 * t41 + 0.10742169670749279703e-2 * t320 * t37 * t116 * sigma[2] * t322 - t223 + 0.4e1 / 0.3e1 * t275 - 0.95009525869442158723e-2 * t288 + 0.53710848353746398517e-3 * t296 + 0.2e1 / 0.3e1 * t29 * t236 * t41 * t335 + 0.95009525869442158723e-2 * t340 * sigma[2] * t41 * t104 - 0.53710848353746398517e-3 * t340 * t117 * t104 * sigma[2] - 0.4e1 / 0.3e1 * t29 * t85 * t41 * (-0.2e1 * t57 + 0.2e1 * t280) + 0.67836801470781701327e-5 * t357 * t31 * t358 * t116 - 0.38349545724574928541e-6 * t357 * t31 * t366 * t358;
  t371 = my_piecewise3(t27, 0, t370);
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[2] = 0.2e1 * t99 + 0.2e1 * t122 + t6 * (t314 + t371);

  t376 = t125 * t50;
  t378 = 0.15834920978240359786e-2 * t376 * t127;
  t379 = t54 * t22;
  t385 = 0.1e1 / t156 / t13 * t8;
  t386 = t12 * t71;
  t393 = 0.89518080589577330865e-4 * t376 * t130;
  t403 = my_piecewise3(t2, 0, 0.63339683912961439146e-2 * t64 * t127 + t378 - 0.15834920978240359786e-2 * t126 * t379 * t59 - 0.22612267156927233776e-5 * t385 * t386 * sigma[0] - 0.35807232235830932346e-3 * t64 * t130 - t393 + 0.89518080589577330865e-4 * t126 * t54 * t72 * t59 + 0.12783181908191642848e-6 * t385 * t12 * t215 * sigma[0]);
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rhosigma[0] = t6 * t403 + t134;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rhosigma[1] = 0.0e0;

  t405 = t135 * t50;
  t407 = 0.15834920978240359786e-2 * t405 * t137;
  t409 = 0.1e1 / rho[1] * t82;
  t410 = t84 * t41;
  t414 = 0.89518080589577330865e-4 * t405 * t140;
  t419 = my_piecewise3(t27, 0, t407 + 0.15834920978240359786e-2 * t409 * t410 - t414 - 0.89518080589577330865e-4 * t409 * t85 * t116);
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rhosigma[2] = t6 * t419 + t144;

  t422 = 0.1e1 / rho[0] * t82;
  t429 = my_piecewise3(t2, 0, t378 + 0.15834920978240359786e-2 * t422 * t379 - t393 - 0.89518080589577330865e-4 * t422 * t55 * t71);
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rhosigma[3] = t6 * t429 + t134;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rhosigma[4] = 0.0e0;

  t438 = 0.1e1 / t321 / t32 * t8;
  t439 = t31 * t116;
  t454 = my_piecewise3(t27, 0, 0.63339683912961439146e-2 * t109 * t137 + t407 - 0.15834920978240359786e-2 * t136 * t410 * t104 - 0.22612267156927233776e-5 * t438 * t439 * sigma[2] - 0.35807232235830932346e-3 * t109 * t140 - t414 + 0.89518080589577330865e-4 * t136 * t84 * t117 * t104 + 0.12783181908191642848e-6 * t438 * t31 * t366 * sigma[2]);
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rhosigma[5] = t6 * t454 + t144;

  t458 = 0.1e1 / t156 / rho[0] * t8;
  t465 = my_piecewise3(t2, 0, 0.75374223856424112586e-6 * t458 * t386 - 0.42610606360638809492e-7 * t458 * t19 * t214);
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigma2[0] = t6 * t465;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigma2[1] = 0.0e0;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigma2[2] = 0.0e0;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigma2[3] = 0.0e0;

  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigma2[4] = 0.0e0;

  t468 = 0.1e1 / t321 / rho[1] * t8;
  t475 = my_piecewise3(t27, 0, 0.75374223856424112586e-6 * t468 * t439 - 0.42610606360638809492e-7 * t468 * t38 * t365);
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2sigma2[5] = t6 * t475;

#ifndef XC_DONT_COMPILE_KXC

  if(order < 3) return;


#endif

#endif

#endif


}

