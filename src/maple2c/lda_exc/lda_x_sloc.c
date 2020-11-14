/* 
  This file was generated automatically with ./scripts/maple2c.pl.
  Do not edit this file directly as it can be overwritten!!

  This Source Code Form is subject to the terms of the Mozilla Public
  License, v. 2.0. If a copy of the MPL was not distributed with this
  file, You can obtain one at http://mozilla.org/MPL/2.0/.

  Maple version     : Maple 2020 (X86 64 LINUX)
  Maple source      : ./maple/lda_exc/lda_x_sloc.mpl
  Type of functional: lda_exc
*/

#define maple2c_order 4
#define MAPLE2C_FLAGS (XC_FLAGS_I_HAVE_EXC | XC_FLAGS_I_HAVE_VXC | XC_FLAGS_I_HAVE_FXC | XC_FLAGS_I_HAVE_KXC | XC_FLAGS_I_HAVE_LXC)


static inline void
func_unpol(const xc_func_type *p, int order, const double *rho , double *zk LDA_OUT_PARAMS_NO_EXC(XC_COMMA double *, ))
{

#ifndef XC_DONT_COMPILE_EXC
  double t4, t5, t7, t9;

#ifndef XC_DONT_COMPILE_FXC
  double t15, t16, t20;

#ifndef XC_DONT_COMPILE_KXC
  double t25, t26, t30;

#ifndef XC_DONT_COMPILE_LXC
  double t36, t45;
#endif

#endif

#endif

#endif


  lda_x_sloc_params *params;

  assert(p->params != NULL);
  params = (lda_x_sloc_params * )(p->params);

  t4 = params->a / (0.2e1 * params->b + 0.2e1);
  t5 = pow(rho[0], params->b);
  t7 = my_piecewise3(0.1e1 <= p->threshold_zeta, 0, 1);
  t9 = t4 * t5 * t7;
  if(zk != NULL && (p->info->flags & XC_FLAGS_HAVE_EXC))
    zk[0] = -0.2e1 * t9;

#ifndef XC_DONT_COMPILE_VXC

  if(order < 1) return;


  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vrho[0] = -0.2e1 * t4 * t5 * params->b * t7 - 0.2e1 * t9;

#ifndef XC_DONT_COMPILE_FXC

  if(order < 2) return;


  t15 = t4 * t5;
  t16 = 0.1e1 / rho[0];
  t20 = params->b * params->b;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[0] = -0.2e1 * t15 * t20 * t16 * t7 - 0.2e1 * t15 * params->b * t16 * t7;

#ifndef XC_DONT_COMPILE_KXC

  if(order < 3) return;


  t25 = rho[0] * rho[0];
  t26 = 0.1e1 / t25;
  t30 = t20 * params->b;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[0] = -0.2e1 * t15 * t30 * t26 * t7 + 0.2e1 * t15 * params->b * t26 * t7;

#ifndef XC_DONT_COMPILE_LXC

  if(order < 4) return;


  t36 = 0.1e1 / t25 / rho[0];
  t45 = t20 * t20;
  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rho4[0] = 0.2e1 * t15 * t20 * t36 * t7 + 0.4e1 * t15 * t30 * t36 * t7 - 0.2e1 * t15 * t45 * t36 * t7 - 0.4e1 * t15 * params->b * t36 * t7;

#ifndef XC_DONT_COMPILE_MXC

  if(order < 5) return;


#endif

#endif

#endif

#endif

#endif


}


static inline void
func_pol(const xc_func_type *p, int order, const double *rho , double *zk LDA_OUT_PARAMS_NO_EXC(XC_COMMA double *, ))
{

#ifndef XC_DONT_COMPILE_EXC
  double t1, t3, t4, t5, t6, t7, t8, t9;
  double t10, t11, t12, t13, t14, t15, t16, t17;
  double t18;

#ifndef XC_DONT_COMPILE_VXC
  double t21, t23, t24, t25, t26, t27, t28, t29;
  double t30, t31, t34, t35, t36, t37, t40, t41;
  double t44, t47, t48, t51, t52;

#ifndef XC_DONT_COMPILE_FXC
  double t55, t56, t58, t60, t62, t63, t65, t67;
  double t69, t70, t71, t72, t73, t74, t77, t78;
  double t80, t85, t86, t87, t88, t89, t90, t92;
  double t97, t98, t102, t104, t105, t106, t113, t114;
  double t115, t122, t123, t128, t129, t132, t137, t138;
  double t139, t141, t146, t147;

#ifndef XC_DONT_COMPILE_KXC
  double t150, t152, t154, t157, t159, t160, t162, t164;
  double t167, t169, t170, t171, t173, t174, t176, t181;
  double t182, t183, t185, t193, t194, t195, t197, t198;
  double t200, t205, t213, t214, t220, t223, t225, t228;
  double t229, t230, t232, t233, t237, t238, t239, t248;
  double t249, t250, t257, t258, t259, t261, t262, t266;
  double t267, t268, t277, t278, t279, t286, t287, t293;
  double t295, t296, t297, t299, t304, t308, t312, t318;
  double t319, t320, t322, t327, t329, t333, t339, t340;
  double t347, t348, t350, t351, t357, t365, t366, t367;
  double t369, t370, t375, t383, t384;

#ifndef XC_DONT_COMPILE_LXC
  double t389, t393, t395, t398, t401, t403, t406, t410;
  double t412, t415, t418, t420, t421, t422, t423, t424;
  double t425, t427, t432, t433, t438, t445, t447, t458;
  double t459, t460, t461, t462, t463, t464, t466, t471;
  double t472, t477, t493, t494, t499, t502, t511, t513;
  double t514, t521, t522, t525, t526, t540, t553, t560;
  double t561, t563, t572, t574, t575, t582, t583, t586;
  double t587, t601, t614, t621, t622, t627, t630, t636;
  double t637, t639, t640, t642, t645, t648, t650, t653;
  double t654, t659, t661, t672, t674, t676, t679, t696;
  double t705, t707, t709, t711, t716, t718, t729, t731;
  double t733, t736, t753, t762, t764, t770, t778, t781;
  double t789, t791, t793, t811, t819, t823, t829, t839;
  double t840, t842, t860, t868, t876, t886, t887, t897;
  double t898, t901, t906, t907, t912, t918, t929, t930;
  double t931, t932, t935, t940, t941, t946, t962, t963;
#endif

#endif

#endif

#endif

#endif


  lda_x_sloc_params *params;

  assert(p->params != NULL);
  params = (lda_x_sloc_params * )(p->params);

  t1 = params->b + 0.1e1;
  t3 = 0.1e1 / t1 / 0.2e1;
  t4 = params->a * t3;
  t5 = rho[0] + rho[1];
  t6 = pow(t5, params->b);
  t7 = rho[0] - rho[1];
  t8 = 0.1e1 / t5;
  t9 = t7 * t8;
  t10 = 0.1e1 + t9;
  t11 = t10 <= p->threshold_zeta;
  t12 = pow(t10, t1);
  t13 = my_piecewise3(t11, 0, t12);
  t14 = 0.1e1 - t9;
  t15 = t14 <= p->threshold_zeta;
  t16 = pow(t14, t1);
  t17 = my_piecewise3(t15, 0, t16);
  t18 = t13 + t17;
  if(zk != NULL && (p->info->flags & XC_FLAGS_HAVE_EXC))
    zk[0] = -t4 * t6 * t18;

#ifndef XC_DONT_COMPILE_VXC

  if(order < 1) return;


  t21 = t6 * params->b;
  t23 = t4 * t21 * t18;
  t24 = t5 * params->a;
  t25 = t3 * t6;
  t26 = t12 * t1;
  t27 = t5 * t5;
  t28 = 0.1e1 / t27;
  t29 = t7 * t28;
  t30 = t8 - t29;
  t31 = 0.1e1 / t10;
  t34 = my_piecewise3(t11, 0, t26 * t30 * t31);
  t35 = t16 * t1;
  t36 = -t30;
  t37 = 0.1e1 / t14;
  t40 = my_piecewise3(t15, 0, t35 * t36 * t37);
  t41 = t34 + t40;
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vrho[0] = -t24 * t25 * t41 - t23 + (-t4 * t6 * t18);

  t44 = -t8 - t29;
  t47 = my_piecewise3(t11, 0, t26 * t44 * t31);
  t48 = -t44;
  t51 = my_piecewise3(t15, 0, t35 * t48 * t37);
  t52 = t47 + t51;
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vrho[1] = -t24 * t25 * t52 - t23 + (-t4 * t6 * t18);

#ifndef XC_DONT_COMPILE_FXC

  if(order < 2) return;


  t55 = t4 * t6;
  t56 = params->b * t8;
  t58 = t55 * t56 * t18;
  t60 = t4 * t6 * t41;
  t62 = params->b * params->b;
  t63 = t62 * t8;
  t65 = t55 * t63 * t18;
  t67 = t4 * t21 * t41;
  t69 = t1 * t1;
  t70 = t12 * t69;
  t71 = t30 * t30;
  t72 = t10 * t10;
  t73 = 0.1e1 / t72;
  t74 = t71 * t73;
  t77 = 0.1e1 / t27 / t5;
  t78 = t7 * t77;
  t80 = -0.2e1 * t28 + 0.2e1 * t78;
  t85 = my_piecewise3(t11, 0, t26 * t80 * t31 - t26 * t74 + t70 * t74);
  t86 = t16 * t69;
  t87 = t36 * t36;
  t88 = t14 * t14;
  t89 = 0.1e1 / t88;
  t90 = t87 * t89;
  t92 = -t80;
  t97 = my_piecewise3(t15, 0, t35 * t92 * t37 - t35 * t90 + t86 * t90);
  t98 = t85 + t97;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[0] = -t24 * t25 * t98 - t58 - 0.2e1 * t60 - t65 - 0.2e1 * t67;

  t102 = t4 * t6 * t52;
  t104 = t4 * t21 * t52;
  t105 = t30 * t73;
  t106 = t105 * t44;
  t113 = my_piecewise3(t11, 0, 0.2e1 * t26 * t78 * t31 - t26 * t106 + t70 * t106);
  t114 = t36 * t89;
  t115 = t114 * t48;
  t122 = my_piecewise3(t15, 0, -0.2e1 * t35 * t78 * t37 - t35 * t115 + t86 * t115);
  t123 = t113 + t122;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[1] = -t24 * t25 * t123 - t102 - t104 - t58 - t60 - t65 - t67;

  t128 = t44 * t44;
  t129 = t128 * t73;
  t132 = 0.2e1 * t28 + 0.2e1 * t78;
  t137 = my_piecewise3(t11, 0, t26 * t132 * t31 - t26 * t129 + t70 * t129);
  t138 = t48 * t48;
  t139 = t138 * t89;
  t141 = -t132;
  t146 = my_piecewise3(t15, 0, t35 * t141 * t37 - t35 * t139 + t86 * t139);
  t147 = t137 + t146;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[2] = -t24 * t25 * t147 - 0.2e1 * t102 - 0.2e1 * t104 - t58 - t65;

#ifndef XC_DONT_COMPILE_KXC

  if(order < 3) return;


  t150 = params->b * t28;
  t152 = t55 * t150 * t18;
  t154 = t55 * t56 * t41;
  t157 = t4 * t6 * t98;
  t159 = t62 * params->b;
  t160 = t159 * t28;
  t162 = t55 * t160 * t18;
  t164 = t55 * t63 * t41;
  t167 = t4 * t21 * t98;
  t169 = t69 * t1;
  t170 = t12 * t169;
  t171 = t71 * t30;
  t173 = 0.1e1 / t72 / t10;
  t174 = t171 * t173;
  t176 = t105 * t80;
  t181 = t27 * t27;
  t182 = 0.1e1 / t181;
  t183 = t7 * t182;
  t185 = 0.6e1 * t77 - 0.6e1 * t183;
  t193 = my_piecewise3(t11, 0, t26 * t185 * t31 + t170 * t174 + 0.2e1 * t26 * t174 - 0.3e1 * t70 * t174 - 0.3e1 * t26 * t176 + 0.3e1 * t70 * t176);
  t194 = t16 * t169;
  t195 = t87 * t36;
  t197 = 0.1e1 / t88 / t14;
  t198 = t195 * t197;
  t200 = t114 * t92;
  t205 = -t185;
  t213 = my_piecewise3(t15, 0, t35 * t205 * t37 + t194 * t198 + 0.2e1 * t35 * t198 - 0.3e1 * t86 * t198 - 0.3e1 * t35 * t200 + 0.3e1 * t86 * t200);
  t214 = t193 + t213;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[0] = -t24 * t25 * t214 + t152 - 0.3e1 * t154 - 0.3e1 * t157 - t162 - 0.3e1 * t164 - 0.3e1 * t167;

  t220 = t55 * t56 * t52;
  t223 = 0.2e1 * t4 * t6 * t123;
  t225 = t55 * t63 * t52;
  t228 = 0.2e1 * t4 * t21 * t123;
  t229 = t71 * t173;
  t230 = t229 * t44;
  t232 = t80 * t73;
  t233 = t232 * t44;
  t237 = t70 * t30;
  t238 = t73 * t7;
  t239 = t238 * t77;
  t248 = t26 * t7;
  t249 = t77 * t73;
  t250 = t249 * t30;
  t257 = my_piecewise3(t11, 0, -0.6e1 * t26 * t183 * t31 + 0.2e1 * t26 * t77 * t31 + t170 * t230 + 0.2e1 * t26 * t230 - 0.3e1 * t70 * t230 - t26 * t233 + t70 * t233 + 0.4e1 * t237 * t239 - 0.4e1 * t248 * t250);
  t258 = t87 * t197;
  t259 = t258 * t48;
  t261 = t92 * t89;
  t262 = t261 * t48;
  t266 = t86 * t36;
  t267 = t89 * t7;
  t268 = t267 * t77;
  t277 = t35 * t7;
  t278 = t77 * t89;
  t279 = t278 * t36;
  t286 = my_piecewise3(t15, 0, 0.6e1 * t35 * t183 * t37 - 0.2e1 * t35 * t77 * t37 + t194 * t259 + 0.2e1 * t35 * t259 - 0.3e1 * t86 * t259 - t35 * t262 + t86 * t262 - 0.4e1 * t266 * t268 + 0.4e1 * t277 * t279);
  t287 = t257 + t286;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[1] = -t24 * t25 * t287 + t152 - 0.2e1 * t154 - t157 - t162 - 0.2e1 * t164 - t167 - t220 - t223 - t225 - t228;

  t293 = t4 * t6 * t147;
  t295 = t4 * t21 * t147;
  t296 = t30 * t173;
  t297 = t296 * t128;
  t299 = t70 * t44;
  t304 = t105 * t132;
  t308 = -0.2e1 * t77 - 0.6e1 * t183;
  t312 = t26 * t44;
  t318 = my_piecewise3(t11, 0, t26 * t308 * t31 + t170 * t297 + 0.4e1 * t299 * t239 - 0.4e1 * t312 * t239 + 0.2e1 * t26 * t297 - t26 * t304 - 0.3e1 * t70 * t297 + t70 * t304);
  t319 = t36 * t197;
  t320 = t319 * t138;
  t322 = t86 * t48;
  t327 = t114 * t141;
  t329 = -t308;
  t333 = t35 * t48;
  t339 = my_piecewise3(t15, 0, t35 * t329 * t37 + t194 * t320 - 0.4e1 * t322 * t268 + 0.4e1 * t333 * t268 + 0.2e1 * t35 * t320 - 0.3e1 * t86 * t320 - t35 * t327 + t86 * t327);
  t340 = t318 + t339;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[2] = -t24 * t25 * t340 + t152 - t154 - t162 - t164 - 0.2e1 * t220 - t223 - 0.2e1 * t225 - t228 - t293 - t295;

  t347 = t128 * t44;
  t348 = t347 * t173;
  t350 = t44 * t73;
  t351 = t350 * t132;
  t357 = -0.6e1 * t77 - 0.6e1 * t183;
  t365 = my_piecewise3(t11, 0, t26 * t357 * t31 + t170 * t348 + 0.2e1 * t26 * t348 - 0.3e1 * t26 * t351 - 0.3e1 * t70 * t348 + 0.3e1 * t70 * t351);
  t366 = t138 * t48;
  t367 = t366 * t197;
  t369 = t48 * t89;
  t370 = t369 * t141;
  t375 = -t357;
  t383 = my_piecewise3(t15, 0, t35 * t375 * t37 + t194 * t367 + 0.2e1 * t35 * t367 - 0.3e1 * t35 * t370 - 0.3e1 * t86 * t367 + 0.3e1 * t86 * t370);
  t384 = t365 + t383;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[3] = -t24 * t25 * t384 + t152 - t162 - 0.3e1 * t220 - 0.3e1 * t225 - 0.3e1 * t293 - 0.3e1 * t295;

#ifndef XC_DONT_COMPILE_LXC

  if(order < 4) return;


  t389 = t55 * t62 * t77 * t18;
  t393 = 0.2e1 * t55 * params->b * t77 * t18;
  t395 = t55 * t150 * t41;
  t398 = t55 * t56 * t98;
  t401 = t4 * t6 * t214;
  t403 = t62 * t62;
  t406 = t55 * t403 * t77 * t18;
  t410 = 0.2e1 * t55 * t159 * t77 * t18;
  t412 = t55 * t160 * t41;
  t415 = t55 * t63 * t98;
  t418 = t4 * t21 * t214;
  t420 = t69 * t69;
  t421 = t12 * t420;
  t422 = t71 * t71;
  t423 = t72 * t72;
  t424 = 0.1e1 / t423;
  t425 = t422 * t424;
  t427 = t229 * t80;
  t432 = t80 * t80;
  t433 = t432 * t73;
  t438 = t105 * t185;
  t445 = t7 / t181 / t5;
  t447 = -0.24e2 * t182 + 0.24e2 * t445;
  t458 = t26 * t447 * t31 - 0.6e1 * t170 * t425 + 0.6e1 * t170 * t427 - 0.6e1 * t26 * t425 + 0.12e2 * t26 * t427 - 0.3e1 * t26 * t433 - 0.4e1 * t26 * t438 + t421 * t425 + 0.11e2 * t70 * t425 - 0.18e2 * t70 * t427 + 0.3e1 * t70 * t433 + 0.4e1 * t70 * t438;
  t459 = my_piecewise3(t11, 0, t458);
  t460 = t16 * t420;
  t461 = t87 * t87;
  t462 = t88 * t88;
  t463 = 0.1e1 / t462;
  t464 = t461 * t463;
  t466 = t258 * t92;
  t471 = t92 * t92;
  t472 = t471 * t89;
  t477 = t114 * t205;
  t493 = -t35 * t447 * t37 - 0.6e1 * t194 * t464 + 0.6e1 * t194 * t466 - 0.6e1 * t35 * t464 + 0.12e2 * t35 * t466 - 0.3e1 * t35 * t472 - 0.4e1 * t35 * t477 + t460 * t464 + 0.11e2 * t86 * t464 - 0.18e2 * t86 * t466 + 0.3e1 * t86 * t472 + 0.4e1 * t86 * t477;
  t494 = my_piecewise3(t15, 0, t493);
  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rho4[0] = t389 - t393 + 0.4e1 * t395 - 0.6e1 * t398 - 0.4e1 * t401 - t406 + t410 - 0.4e1 * t412 - 0.6e1 * t415 - 0.4e1 * t418 - t24 * t25 * (t459 + t494);

  t499 = t4 * t21 * t287;
  t502 = t185 * t73 * t44;
  t511 = t171 * t424 * t44;
  t513 = t170 * t30;
  t514 = t173 * t44;
  t521 = t173 * t7;
  t522 = t521 * t77;
  t525 = t70 * t80;
  t526 = t514 * t30;
  t540 = 0.24e2 * t26 * t445 * t31;
  t553 = t238 * t182;
  t560 = 0.12e2 * t248 * t77 * t173 * t71 + 0.18e2 * t248 * t182 * t73 * t30 + 0.6e1 * t170 * t71 * t522 - 0.12e2 * t26 * t182 * t31 - 0.6e1 * t248 * t249 * t80 + 0.6e1 * t312 * t296 * t80 + 0.3e1 * t513 * t514 * t80 - 0.18e2 * t70 * t71 * t522 - 0.6e1 * t170 * t511 - 0.18e2 * t237 * t553 + 0.6e1 * t525 * t239 - 0.6e1 * t26 * t250 + 0.6e1 * t70 * t250 - t26 * t502 - 0.6e1 * t26 * t511 + t421 * t511 + t70 * t502 + 0.11e2 * t70 * t511 - 0.9e1 * t525 * t526 + t540;
  t561 = my_piecewise3(t11, 0, t560);
  t563 = t205 * t89 * t48;
  t572 = t195 * t463 * t48;
  t574 = t194 * t36;
  t575 = t197 * t48;
  t582 = t197 * t7;
  t583 = t582 * t77;
  t586 = t86 * t92;
  t587 = t575 * t36;
  t601 = 0.24e2 * t35 * t445 * t37;
  t614 = t267 * t182;
  t621 = -0.18e2 * t277 * t182 * t89 * t36 - 0.12e2 * t277 * t77 * t197 * t87 + 0.12e2 * t35 * t182 * t37 - 0.6e1 * t194 * t87 * t583 + 0.6e1 * t277 * t278 * t92 + 0.6e1 * t333 * t319 * t92 + 0.3e1 * t574 * t575 * t92 + 0.18e2 * t86 * t87 * t583 - 0.6e1 * t194 * t572 + 0.18e2 * t266 * t614 - 0.6e1 * t586 * t268 + 0.6e1 * t35 * t279 - 0.6e1 * t86 * t279 - t35 * t563 - 0.6e1 * t35 * t572 + t460 * t572 + t86 * t563 + 0.11e2 * t86 * t572 - 0.9e1 * t586 * t587 - t601;
  t622 = my_piecewise3(t15, 0, t621);
  t627 = t4 * t6 * t287;
  t630 = t55 * t160 * t52;
  t636 = t55 * t56 * t123;
  t637 = 0.3e1 * t636;
  t639 = t55 * t63 * t123;
  t640 = 0.3e1 * t639;
  t642 = t55 * t150 * t52;
  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rho4[1] = -t418 - 0.3e1 * t499 - t24 * t25 * (t561 + t622) - t401 - 0.3e1 * t627 + t389 - t406 - t630 + 0.3e1 * t395 - 0.3e1 * t398 - 0.3e1 * t412 - 0.3e1 * t415 - t637 - t640 - t393 + t410 + t642;

  t645 = t4 * t21 * t340;
  t648 = t80 * t173 * t128;
  t650 = t7 * t7;
  t653 = t650 / t181 / t27;
  t654 = t653 * t73;
  t659 = t232 * t132;
  t661 = t105 * t308;
  t672 = t71 * t424 * t128;
  t674 = t229 * t132;
  t676 = t170 * t648 + t170 * t674 + 0.2e1 * t26 * t648 - 0.8e1 * t26 * t654 - t26 * t659 - 0.2e1 * t26 * t661 + t421 * t672 - 0.3e1 * t70 * t648 + 0.8e1 * t70 * t654 + t70 * t659 + 0.2e1 * t70 * t661 + t540;
  t679 = t350 * t77;
  t696 = t521 * t77 * t30;
  t705 = 0.8e1 * t513 * t514 * t78 - 0.6e1 * t170 * t672 - 0.6e1 * t26 * t672 + 0.2e1 * t26 * t674 - 0.4e1 * t26 * t679 - 0.12e2 * t299 * t553 - 0.24e2 * t299 * t696 + 0.12e2 * t312 * t553 + 0.16e2 * t312 * t696 + 0.11e2 * t70 * t672 - 0.3e1 * t70 * t674 + 0.4e1 * t70 * t679;
  t707 = my_piecewise3(t11, 0, t676 + t705);
  t709 = t92 * t197 * t138;
  t711 = t653 * t89;
  t716 = t261 * t141;
  t718 = t114 * t329;
  t729 = t87 * t463 * t138;
  t731 = t258 * t141;
  t733 = t194 * t709 + t194 * t731 + 0.2e1 * t35 * t709 - 0.8e1 * t35 * t711 - t35 * t716 - 0.2e1 * t35 * t718 + t460 * t729 - 0.3e1 * t86 * t709 + 0.8e1 * t86 * t711 + t86 * t716 + 0.2e1 * t86 * t718 - t601;
  t736 = t369 * t77;
  t753 = t582 * t77 * t36;
  t762 = -0.8e1 * t574 * t575 * t78 - 0.6e1 * t194 * t729 + 0.12e2 * t322 * t614 + 0.24e2 * t322 * t753 - 0.12e2 * t333 * t614 - 0.16e2 * t333 * t753 - 0.6e1 * t35 * t729 + 0.2e1 * t35 * t731 + 0.4e1 * t35 * t736 + 0.11e2 * t86 * t729 - 0.3e1 * t86 * t731 - 0.4e1 * t86 * t736;
  t764 = my_piecewise3(t15, 0, t733 + t762);
  t770 = t4 * t6 * t340;
  t778 = t55 * t56 * t147;
  t781 = t55 * t63 * t147;
  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rho4[2] = -0.2e1 * t499 - 0.2e1 * t645 - t24 * t25 * (t707 + t764) - 0.2e1 * t627 - 0.2e1 * t770 + t389 - t406 - 0.2e1 * t630 + 0.2e1 * t395 - t398 - 0.2e1 * t412 - t415 - 0.4e1 * t636 - 0.4e1 * t639 - t778 - t393 + t410 + 0.2e1 * t642 - t781;

  t789 = t4 * t6 * t384;
  t791 = t4 * t21 * t384;
  t793 = t30 * t424 * t347;
  t811 = t350 * t308;
  t819 = t105 * t357;
  t823 = 0.12e2 * t182 + 0.24e2 * t445;
  t829 = t26 * t132;
  t839 = -0.9e1 * t299 * t173 * t132 * t30 + 0.6e1 * t70 * t7 * t249 * t132 + 0.6e1 * t170 * t128 * t522 + 0.12e2 * t26 * t128 * t522 - 0.18e2 * t70 * t128 * t522 + 0.3e1 * t513 * t514 * t132 + t26 * t823 * t31 - 0.6e1 * t170 * t793 - 0.6e1 * t829 * t239 - 0.6e1 * t26 * t793 - 0.3e1 * t26 * t811 - t26 * t819 + t421 * t793 + 0.6e1 * t829 * t526 + 0.11e2 * t70 * t793 + 0.3e1 * t70 * t811 + t70 * t819;
  t840 = my_piecewise3(t11, 0, t839);
  t842 = t36 * t463 * t366;
  t860 = t369 * t329;
  t868 = t114 * t375;
  t876 = t35 * t141;
  t886 = -0.9e1 * t322 * t197 * t141 * t36 - 0.6e1 * t86 * t7 * t278 * t141 - 0.6e1 * t194 * t138 * t583 - 0.12e2 * t35 * t138 * t583 + 0.18e2 * t86 * t138 * t583 + 0.3e1 * t574 * t575 * t141 - t35 * t823 * t37 - 0.6e1 * t194 * t842 + 0.6e1 * t876 * t268 - 0.6e1 * t35 * t842 - 0.3e1 * t35 * t860 - t35 * t868 + t460 * t842 + 0.6e1 * t876 * t587 + 0.11e2 * t86 * t842 + 0.3e1 * t86 * t860 + t86 * t868;
  t887 = my_piecewise3(t15, 0, t886);
  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rho4[3] = t389 - t393 + t395 + 0.3e1 * t642 - t637 - 0.3e1 * t778 - 0.3e1 * t770 - t406 + t410 - t412 - 0.3e1 * t630 - t640 - 0.3e1 * t781 - 0.3e1 * t645 - t789 - t791 - t24 * t25 * (t840 + t887);

  t897 = t128 * t128;
  t898 = t897 * t424;
  t901 = t128 * t173 * t132;
  t906 = t132 * t132;
  t907 = t906 * t73;
  t912 = t350 * t357;
  t918 = 0.24e2 * t182 + 0.24e2 * t445;
  t929 = t26 * t918 * t31 - 0.6e1 * t170 * t898 + 0.6e1 * t170 * t901 - 0.6e1 * t26 * t898 + 0.12e2 * t26 * t901 - 0.3e1 * t26 * t907 - 0.4e1 * t26 * t912 + t421 * t898 + 0.11e2 * t70 * t898 - 0.18e2 * t70 * t901 + 0.3e1 * t70 * t907 + 0.4e1 * t70 * t912;
  t930 = my_piecewise3(t11, 0, t929);
  t931 = t138 * t138;
  t932 = t931 * t463;
  t935 = t138 * t197 * t141;
  t940 = t141 * t141;
  t941 = t940 * t89;
  t946 = t369 * t375;
  t962 = -t35 * t918 * t37 - 0.6e1 * t194 * t932 + 0.6e1 * t194 * t935 - 0.6e1 * t35 * t932 + 0.12e2 * t35 * t935 - 0.3e1 * t35 * t941 - 0.4e1 * t35 * t946 + t460 * t932 + 0.11e2 * t86 * t932 - 0.18e2 * t86 * t935 + 0.3e1 * t86 * t941 + 0.4e1 * t86 * t946;
  t963 = my_piecewise3(t15, 0, t962);
  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rho4[4] = t389 - t393 + 0.4e1 * t642 - 0.6e1 * t778 - 0.4e1 * t789 - t406 + t410 - 0.4e1 * t630 - 0.6e1 * t781 - 0.4e1 * t791 - t24 * t25 * (t930 + t963);

#ifndef XC_DONT_COMPILE_MXC

  if(order < 5) return;


#endif

#endif

#endif

#endif

#endif


}

