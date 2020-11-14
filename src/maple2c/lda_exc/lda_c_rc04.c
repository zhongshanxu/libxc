/* 
  This file was generated automatically with ./scripts/maple2c.pl.
  Do not edit this file directly as it can be overwritten!!

  This Source Code Form is subject to the terms of the Mozilla Public
  License, v. 2.0. If a copy of the MPL was not distributed with this
  file, You can obtain one at http://mozilla.org/MPL/2.0/.

  Maple version     : Maple 2020 (X86 64 LINUX)
  Maple source      : ./maple/lda_exc/lda_c_rc04.mpl
  Type of functional: lda_exc
*/

#define maple2c_order 4
#define MAPLE2C_FLAGS (XC_FLAGS_I_HAVE_EXC | XC_FLAGS_I_HAVE_VXC | XC_FLAGS_I_HAVE_FXC | XC_FLAGS_I_HAVE_KXC | XC_FLAGS_I_HAVE_LXC)


static inline void
func_unpol(const xc_func_type *p, int order, const double *rho , double *zk LDA_OUT_PARAMS_NO_EXC(XC_COMMA double *, ))
{

#ifndef XC_DONT_COMPILE_EXC
  double t2, t3, t4, t5, t7, t8, t9, t10;
  double t11, t16, t17, t21, t22, t24, t26;

#ifndef XC_DONT_COMPILE_VXC
  double t28, t29, t30;

#ifndef XC_DONT_COMPILE_FXC
  double t37, t42, t43, t44;

#ifndef XC_DONT_COMPILE_KXC
  double t52, t63, t72, t73, t75, t76, t78, t84;

#ifndef XC_DONT_COMPILE_LXC
  double t88, t101, t114, t118, t119;
#endif

#endif

#endif

#endif

#endif



  t2 = my_piecewise3(0.1e1 <= p->threshold_zeta, 0, 1);
  t3 = t2 * t2;
  t4 = t3 * t2;
  t5 = M_CBRT3;
  t7 = POW_1_3(0.1e1 / M_PI);
  t8 = t5 * t7;
  t9 = M_CBRT4;
  t10 = t9 * t9;
  t11 = POW_1_3(rho[0]);
  t16 = 0.4888270e1 + 0.79425925000000000000e0 * t8 * t10 / t11;
  t17 = atan(t16);
  t21 = t5 * t5;
  t22 = t4 * (-0.655868e0 * t17 + 0.897889e0) * t21;
  t24 = 0.1e1 / t7 * t9;
  t26 = t22 * t24 * t11;
  if(zk != NULL && (p->info->flags & XC_FLAGS_HAVE_EXC))
    zk[0] = t26 / 0.3e1;

#ifndef XC_DONT_COMPILE_VXC

  if(order < 1) return;


  t28 = t16 * t16;
  t29 = t28 + 0.1e1;
  t30 = 0.1e1 / t29;
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vrho[0] = 0.4e1 / 0.9e1 * t26 + 0.69457230103866666663e0 * t4 * t30;

#ifndef XC_DONT_COMPILE_FXC

  if(order < 2) return;


  t37 = t11 * t11;
  t42 = t29 * t29;
  t43 = 0.1e1 / t42;
  t44 = t4 * t43;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[0] = 0.92609640138488888884e0 * t4 / rho[0] * t30 + 0.4e1 / 0.27e2 * t22 * t24 / t37 + 0.36778031659583040509e0 * t44 * t16 * t8 * t10 / t11 / rho[0];

#ifndef XC_DONT_COMPILE_KXC

  if(order < 3) return;


  t52 = rho[0] * rho[0];
  t63 = t16 * t5 * t7 * t10;
  t72 = 0.1e1 / t42 / t29;
  t73 = t4 * t72;
  t75 = t7 * t7;
  t76 = t21 * t75;
  t78 = 0.1e1 / t37 / t52;
  t84 = t75 * t9;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[0] = -0.61739760092325925923e0 * t4 / t52 * t30 - 0.1e-19 * t4 / t11 / t52 * t43 * t63 - 0.8e1 / 0.81e2 * t22 * t24 / t37 / rho[0] + 0.15579355649288896569e1 * t73 * t28 * t76 * t9 * t78 - 0.38948389123222241422e0 * t44 * t21 * t84 * t78;

#ifndef XC_DONT_COMPILE_LXC

  if(order < 4) return;


  t88 = t52 * rho[0];
  t101 = t4 / t37 / t88;
  t114 = t42 * t42;
  t118 = t52 * t52;
  t119 = 0.1e1 / t118;
  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rho4[0] = 0.10289960015387654321e1 * t4 / t88 * t30 - 0.32691583697407147117e0 * t4 / t11 / t88 * t43 * t63 - 0.41544948398103724184e1 * t101 * t72 * t28 * t21 * t84 + 0.10386237099525931046e1 * t101 * t43 * t76 * t9 + 0.40e2 / 0.243e3 * t22 * t24 * t78 + 0.94530758360525579704e1 * t4 / t114 * t28 * t16 * t119 - 0.47265379180262789851e1 * t73 * t16 * t119;

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
  double t1, t2, t3, t4, t5, t6, t7, t8;
  double t9, t10, t11, t12, t13, t14, t16, t17;
  double t18, t19, t21, t22, t23, t24, t25, t30;
  double t31, t33, t35, t36, t37, t38, t39, t40;

#ifndef XC_DONT_COMPILE_VXC
  double t41, t42, t44, t45, t46, t47, t48, t49;
  double t50, t53, t54, t55, t58, t60, t64, t65;
  double t66, t68, t69, t72, t73, t76, t78, t80;

#ifndef XC_DONT_COMPILE_FXC
  double t83, t84, t86, t90, t91, t92, t95, t96;
  double t97, t98, t103, t104, t107, t108, t111, t112;
  double t113, t115, t119, t121, t122, t125, t129, t131;
  double t133, t135, t136, t137, t139, t141, t143, t146;
  double t147, t149, t150, t151, t152, t155, t157, t160;
  double t164, t165, t168, t172, t174, t176, t180, t182;
  double t186, t190, t194, t195, t198, t202, t204, t206;

#ifndef XC_DONT_COMPILE_KXC
  double t208, t209, t210, t214, t215, t216, t217, t219;
  double t223, t225, t229, t232, t234, t235, t237, t239;
  double t240, t241, t243, t246, t249, t252, t255, t256;
  double t257, t259, t261, t264, t265, t268, t271, t273;
  double t274, t277, t280, t281, t282, t284, t288, t289;
  double t291, t292, t295, t298, t302, t304, t309, t310;
  double t314, t316, t318, t319, t322, t327, t328, t330;
  double t331, t333, t335, t338, t339, t342, t343, t344;
  double t349, t354, t357, t358, t361, t372, t373, t376;
  double t387, t389, t391, t393, t401, t403, t404, t407;
  double t408, t410, t411, t414, t416, t418, t422, t427;
  double t432, t436, t437, t442, t445, t449, t451, t453;
  double t455, t461, t462, t467, t472, t478, t482, t483;
  double t488, t492, t494, t496;

#ifndef XC_DONT_COMPILE_LXC
  double t499, t501, t505, t506, t512, t513, t514, t515;
  double t517, t518, t522, t523, t525, t528, t530, t533;
  double t534, t538, t546, t548, t551, t553, t556, t559;
  double t562, t565, t571, t574, t577, t581, t588, t591;
  double t592, t598, t604, t605, t607, t611, t614, t615;
  double t621, t630, t638, t642, t646, t651, t653, t655;
  double t656, t662, t663, t664, t666, t668, t670, t672;
  double t674, t677, t683, t685, t687, t688, t689, t691;
  double t693, t695, t712, t713, t716, t721, t725, t730;
  double t731, t735, t737, t763, t765, t790, t792, t800;
  double t803, t806, t817, t819, t822, t824, t826, t829;
  double t831, t841, t843, t851, t863, t867, t872, t881;
  double t883, t898, t901, t917, t943, t950, t952, t957;
  double t961, t963, t971, t973, t976, t983, t986, t1005;
  double t1008, t1017, t1038, t1042, t1063, t1069, t1071, t1084;
  double t1097, t1102, t1107, t1113, t1117, t1118, t1123, t1132;
  double t1138;
#endif

#endif

#endif

#endif

#endif



  t1 = rho[0] - rho[1];
  t2 = rho[0] + rho[1];
  t3 = 0.1e1 / t2;
  t4 = t1 * t3;
  t5 = 0.1e1 + t4;
  t6 = t5 <= p->threshold_zeta;
  t7 = POW_1_3(t5);
  t8 = t7 * t7;
  t9 = my_piecewise3(t6, 0, t8);
  t10 = 0.1e1 - t4;
  t11 = t10 <= p->threshold_zeta;
  t12 = POW_1_3(t10);
  t13 = t12 * t12;
  t14 = my_piecewise3(t11, 0, t13);
  t16 = t9 / 0.2e1 + t14 / 0.2e1;
  t17 = t16 * t16;
  t18 = t17 * t16;
  t19 = M_CBRT3;
  t21 = POW_1_3(0.1e1 / M_PI);
  t22 = t19 * t21;
  t23 = M_CBRT4;
  t24 = t23 * t23;
  t25 = POW_1_3(t2);
  t30 = 0.4888270e1 + 0.79425925000000000000e0 * t22 * t24 / t25;
  t31 = atan(t30);
  t33 = -0.655868e0 * t31 + 0.897889e0;
  t35 = t19 * t19;
  t36 = t18 * t33 * t35;
  t37 = 0.1e1 / t21;
  t38 = t37 * t23;
  t39 = t38 * t25;
  t40 = t36 * t39;
  if(zk != NULL && (p->info->flags & XC_FLAGS_HAVE_EXC))
    zk[0] = t40 / 0.3e1;

#ifndef XC_DONT_COMPILE_VXC

  if(order < 1) return;


  t41 = 0.4e1 / 0.9e1 * t40;
  t42 = t25 * t2;
  t44 = t42 * t17 * t33;
  t45 = t35 * t37;
  t46 = 0.1e1 / t7;
  t47 = t2 * t2;
  t48 = 0.1e1 / t47;
  t49 = t1 * t48;
  t50 = t3 - t49;
  t53 = my_piecewise3(t6, 0, 0.2e1 / 0.3e1 * t46 * t50);
  t54 = 0.1e1 / t12;
  t55 = -t50;
  t58 = my_piecewise3(t11, 0, 0.2e1 / 0.3e1 * t54 * t55);
  t60 = t53 / 0.2e1 + t58 / 0.2e1;
  t64 = t30 * t30;
  t65 = t64 + 0.1e1;
  t66 = 0.1e1 / t65;
  t68 = 0.69457230103866666663e0 * t18 * t66;
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vrho[0] = t44 * t45 * t23 * t60 + t41 + t68;

  t69 = -t3 - t49;
  t72 = my_piecewise3(t6, 0, 0.2e1 / 0.3e1 * t46 * t69);
  t73 = -t69;
  t76 = my_piecewise3(t11, 0, 0.2e1 / 0.3e1 * t54 * t73);
  t78 = t72 / 0.2e1 + t76 / 0.2e1;
  t80 = t45 * t23 * t78;
  if(vrho != NULL && (p->info->flags & XC_FLAGS_HAVE_VXC))
    vrho[1] = t44 * t80 + t41 + t68;

#ifndef XC_DONT_COMPILE_FXC

  if(order < 2) return;


  t83 = t17 * t33 * t35;
  t84 = t25 * t60;
  t86 = t83 * t38 * t84;
  t90 = 0.92609640138488888884e0 * t18 * t3 * t66;
  t91 = t25 * t25;
  t92 = 0.1e1 / t91;
  t95 = 0.4e1 / 0.27e2 * t36 * t38 * t92;
  t96 = t42 * t16;
  t97 = t96 * t33;
  t98 = t60 * t60;
  t103 = t17 * t66;
  t104 = t103 * t60;
  t107 = 0.1e1 / t7 / t5;
  t108 = t50 * t50;
  t111 = t47 * t2;
  t112 = 0.1e1 / t111;
  t113 = t1 * t112;
  t115 = -0.2e1 * t48 + 0.2e1 * t113;
  t119 = my_piecewise3(t6, 0, -0.2e1 / 0.9e1 * t107 * t108 + 0.2e1 / 0.3e1 * t46 * t115);
  t121 = 0.1e1 / t12 / t10;
  t122 = t55 * t55;
  t125 = -t115;
  t129 = my_piecewise3(t11, 0, -0.2e1 / 0.9e1 * t121 * t122 + 0.2e1 / 0.3e1 * t54 * t125);
  t131 = t119 / 0.2e1 + t129 / 0.2e1;
  t133 = t45 * t23 * t131;
  t135 = t65 * t65;
  t136 = 0.1e1 / t135;
  t137 = t18 * t136;
  t139 = 0.1e1 / t42;
  t141 = t22 * t24 * t139;
  t143 = 0.36778031659583040509e0 * t137 * t30 * t141;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[0] = 0.8e1 / 0.3e1 * t86 + t90 + t95 + 0.2e1 * t97 * t45 * t23 * t98 + 0.41674338062319999998e1 * t104 + t44 * t133 + t143;

  t146 = t25 * t17 * t33;
  t147 = t146 * t80;
  t149 = t33 * t35;
  t150 = t96 * t149;
  t151 = t78 * t60;
  t152 = t38 * t151;
  t155 = t103 * t78;
  t157 = t107 * t69;
  t160 = t46 * t1;
  t164 = my_piecewise3(t6, 0, -0.2e1 / 0.9e1 * t157 * t50 + 0.4e1 / 0.3e1 * t160 * t112);
  t165 = t121 * t73;
  t168 = t54 * t1;
  t172 = my_piecewise3(t11, 0, -0.2e1 / 0.9e1 * t165 * t55 - 0.4e1 / 0.3e1 * t168 * t112);
  t174 = t164 / 0.2e1 + t172 / 0.2e1;
  t176 = t45 * t23 * t174;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[1] = 0.4e1 / 0.3e1 * t86 + t90 + t95 + 0.4e1 / 0.3e1 * t147 + 0.2e1 * t150 * t152 + 0.20837169031159999999e1 * t155 + t44 * t176 + 0.20837169031159999999e1 * t104 + t143;

  t180 = t78 * t78;
  t182 = t45 * t23 * t180;
  t186 = t69 * t69;
  t190 = 0.2e1 * t48 + 0.2e1 * t113;
  t194 = my_piecewise3(t6, 0, -0.2e1 / 0.9e1 * t107 * t186 + 0.2e1 / 0.3e1 * t46 * t190);
  t195 = t73 * t73;
  t198 = -t190;
  t202 = my_piecewise3(t11, 0, -0.2e1 / 0.9e1 * t121 * t195 + 0.2e1 / 0.3e1 * t54 * t198);
  t204 = t194 / 0.2e1 + t202 / 0.2e1;
  t206 = t45 * t23 * t204;
  if(v2rho2 != NULL && (p->info->flags & XC_FLAGS_HAVE_FXC))
    v2rho2[2] = 0.8e1 / 0.3e1 * t147 + t90 + t95 + 0.2e1 * t97 * t182 + 0.41674338062319999998e1 * t155 + t44 * t206 + t143;

#ifndef XC_DONT_COMPILE_KXC

  if(order < 3) return;


  t208 = t17 * t3;
  t209 = t66 * t60;
  t210 = t208 * t209;
  t214 = 0.61739760092325925923e0 * t18 * t48 * t66;
  t215 = t16 * t33;
  t216 = t215 * t35;
  t217 = t25 * t98;
  t219 = t216 * t38 * t217;
  t223 = t83 * t38 * t92 * t60;
  t225 = t60 * t131;
  t229 = t17 * t136;
  t232 = t229 * t60 * t30 * t141;
  t234 = t16 * t66;
  t235 = t234 * t98;
  t237 = t103 * t131;
  t239 = t137 * t35;
  t240 = t21 * t21;
  t241 = t240 * t23;
  t243 = 0.1e1 / t91 / t47;
  t246 = 0.38948389123222241422e0 * t239 * t241 * t243;
  t249 = t83 * t38 * t25 * t131;
  t252 = 0.1e1 / t25 / t47;
  t255 = t30 * t19;
  t256 = t21 * t24;
  t257 = t255 * t256;
  t259 = 0.1e-19 * t18 * t252 * t136 * t257;
  t261 = 0.1e1 / t91 / t2;
  t264 = 0.8e1 / 0.81e2 * t36 * t38 * t261;
  t265 = t98 * t60;
  t268 = t45 * t23;
  t271 = t5 * t5;
  t273 = 0.1e1 / t7 / t271;
  t274 = t108 * t50;
  t277 = t107 * t50;
  t280 = t47 * t47;
  t281 = 0.1e1 / t280;
  t282 = t1 * t281;
  t284 = 0.6e1 * t112 - 0.6e1 * t282;
  t288 = my_piecewise3(t6, 0, 0.8e1 / 0.27e2 * t273 * t274 - 0.2e1 / 0.3e1 * t277 * t115 + 0.2e1 / 0.3e1 * t46 * t284);
  t289 = t10 * t10;
  t291 = 0.1e1 / t12 / t289;
  t292 = t122 * t55;
  t295 = t121 * t55;
  t298 = -t284;
  t302 = my_piecewise3(t11, 0, 0.8e1 / 0.27e2 * t291 * t292 - 0.2e1 / 0.3e1 * t295 * t125 + 0.2e1 / 0.3e1 * t54 * t298);
  t304 = t288 / 0.2e1 + t302 / 0.2e1;
  t309 = 0.1e1 / t135 / t65;
  t310 = t18 * t309;
  t314 = t35 * t240 * t23 * t243;
  t316 = 0.15579355649288896569e1 * t310 * t64 * t314;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[0] = 0.83348676124639999996e1 * t210 - t214 + 0.8e1 * t219 + 0.4e1 / 0.3e1 * t223 + 0.6e1 * t150 * t38 * t225 + 0.33100228493624736458e1 * t232 + 0.12502301418695999999e2 * t235 + 0.62511507093479999997e1 * t237 - t246 + 0.4e1 * t249 - t259 - t264 + 0.2e1 * t42 * t265 * t33 * t268 + t44 * t45 * t23 * t304 + t316;

  t318 = t66 * t78;
  t319 = t208 * t318;
  t322 = 0.83348676124639999996e1 * t234 * t151;
  t327 = t92 * t17 * t33;
  t328 = t327 * t80;
  t330 = t25 * t16;
  t331 = t330 * t149;
  t333 = 0.16e2 / 0.3e1 * t331 * t152;
  t335 = t42 * t98 * t33;
  t338 = t174 * t60;
  t339 = t38 * t338;
  t342 = 0.55565784083093333330e1 * t210 - t214 + 0.27782892041546666665e1 * t319 + t322 + 0.8e1 / 0.3e1 * t219 + 0.8e1 / 0.9e1 * t223 + 0.22066818995749824306e1 * t232 + 0.4e1 / 0.9e1 * t328 + t333 + 0.2e1 * t335 * t80 + 0.4e1 * t150 * t339;
  t343 = t78 * t131;
  t344 = t38 * t343;
  t349 = t229 * t78 * t30 * t141;
  t354 = 0.41674338062319999998e1 * t103 * t174;
  t357 = 0.8e1 / 0.3e1 * t146 * t176;
  t358 = t273 * t69;
  t361 = t107 * t1;
  t372 = my_piecewise3(t6, 0, 0.8e1 / 0.27e2 * t358 * t108 - 0.8e1 / 0.9e1 * t361 * t112 * t50 - 0.2e1 / 0.9e1 * t157 * t115 + 0.4e1 / 0.3e1 * t46 * t112 - 0.4e1 * t160 * t281);
  t373 = t291 * t73;
  t376 = t121 * t1;
  t387 = my_piecewise3(t11, 0, 0.8e1 / 0.27e2 * t373 * t122 + 0.8e1 / 0.9e1 * t376 * t112 * t55 - 0.2e1 / 0.9e1 * t165 * t125 - 0.4e1 / 0.3e1 * t54 * t112 + 0.4e1 * t168 * t281);
  t389 = t372 / 0.2e1 + t387 / 0.2e1;
  t391 = t45 * t23 * t389;
  t393 = 0.2e1 * t150 * t344 + 0.11033409497874912153e1 * t349 + 0.41674338062319999998e1 * t235 + 0.20837169031159999999e1 * t237 + t354 - t246 + 0.4e1 / 0.3e1 * t249 - t259 - t264 + t316 + t357 + t44 * t391;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[1] = t342 + t393;

  t401 = t330 * t33 * t182;
  t403 = t78 * t174;
  t404 = t38 * t403;
  t407 = 0.27782892041546666665e1 * t210 - t214 + 0.55565784083093333331e1 * t319 + t322 + 0.4e1 / 0.9e1 * t223 + 0.11033409497874912153e1 * t232 + 0.8e1 / 0.9e1 * t328 + t333 + 0.22066818995749824305e1 * t349 + 0.8e1 / 0.3e1 * t401 + 0.4e1 * t150 * t404;
  t408 = t146 * t206;
  t410 = t204 * t60;
  t411 = t38 * t410;
  t414 = t234 * t180;
  t416 = t103 * t204;
  t418 = t42 * t60;
  t422 = t273 * t186;
  t427 = t107 * t190;
  t432 = -0.2e1 * t112 - 0.6e1 * t282;
  t436 = my_piecewise3(t6, 0, 0.8e1 / 0.27e2 * t422 * t50 - 0.8e1 / 0.9e1 * t157 * t113 - 0.2e1 / 0.9e1 * t427 * t50 + 0.2e1 / 0.3e1 * t46 * t432);
  t437 = t291 * t195;
  t442 = t121 * t198;
  t445 = -t432;
  t449 = my_piecewise3(t11, 0, 0.8e1 / 0.27e2 * t437 * t55 + 0.8e1 / 0.9e1 * t165 * t113 - 0.2e1 / 0.9e1 * t442 * t55 + 0.2e1 / 0.3e1 * t54 * t445);
  t451 = t436 / 0.2e1 + t449 / 0.2e1;
  t453 = t45 * t23 * t451;
  t455 = 0.4e1 / 0.3e1 * t408 + 0.2e1 * t150 * t411 + t354 + 0.41674338062319999998e1 * t414 + 0.20837169031159999999e1 * t416 - t246 - t259 - t264 + t316 + t357 + 0.2e1 * t418 * t33 * t182 + t44 * t453;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[2] = t407 + t455;

  t461 = t78 * t204;
  t462 = t38 * t461;
  t467 = t180 * t78;
  t472 = t186 * t69;
  t478 = -0.6e1 * t112 - 0.6e1 * t282;
  t482 = my_piecewise3(t6, 0, 0.8e1 / 0.27e2 * t273 * t472 - 0.2e1 / 0.3e1 * t157 * t190 + 0.2e1 / 0.3e1 * t46 * t478);
  t483 = t195 * t73;
  t488 = -t478;
  t492 = my_piecewise3(t11, 0, 0.8e1 / 0.27e2 * t291 * t483 - 0.2e1 / 0.3e1 * t165 * t198 + 0.2e1 / 0.3e1 * t54 * t488);
  t494 = t482 / 0.2e1 + t492 / 0.2e1;
  t496 = t45 * t23 * t494;
  if(v3rho3 != NULL && (p->info->flags & XC_FLAGS_HAVE_KXC))
    v3rho3[3] = -t214 + 0.83348676124639999996e1 * t319 + 0.4e1 / 0.3e1 * t328 + 0.33100228493624736458e1 * t349 + 0.8e1 * t401 + 0.4e1 * t408 + 0.6e1 * t150 * t462 + 0.12502301418695999999e2 * t414 + 0.62511507093479999997e1 * t416 - t246 - t259 - t264 + t316 + 0.2e1 * t42 * t467 * t33 * t268 + t44 * t496;

#ifndef XC_DONT_COMPILE_LXC

  if(order < 4) return;


  t499 = t208 * t66 * t131;
  t501 = t234 * t225;
  t505 = 0.47265379180262789851e1 * t310 * t281 * t30;
  t506 = t135 * t135;
  t512 = 0.94530758360525579704e1 * t18 / t506 * t64 * t30 * t281;
  t513 = t16 * t3;
  t514 = t66 * t98;
  t515 = t513 * t514;
  t517 = t17 * t48;
  t518 = t517 * t209;
  t522 = 0.10289960015387654321e1 * t18 * t112 * t66;
  t523 = t103 * t304;
  t525 = t16 * t136;
  t528 = t525 * t98 * t30 * t141;
  t530 = t17 * t252;
  t533 = t530 * t136 * t60 * t257;
  t534 = 0.3e-19 * t533;
  t538 = t215 * t45 * t23 * t25 * t225;
  t546 = t229 * t131 * t30 * t141;
  t548 = t17 * t309;
  t551 = t548 * t60 * t64 * t314;
  t553 = 0.16669735224927999999e2 * t499 + 0.50009205674783999996e2 * t501 - t505 + t512 + 0.33339470449855999998e2 * t515 - 0.74087712110791111105e1 * t518 + t522 + 0.83348676124639999996e1 * t523 + 0.13240091397449894583e2 * t528 - t534 + 0.32e2 * t538 + 0.8e1 * t150 * t38 * t60 * t304 + 0.66200456987249472916e1 * t546 + 0.18695226779146675883e2 * t551;
  t556 = t265 * t33 * t35 * t39;
  t559 = 0.1e1 / t91 / t111;
  t562 = 0.10386237099525931046e1 * t239 * t241 * t559;
  t565 = 0.40e2 / 0.243e3 * t36 * t38 * t243;
  t571 = 0.32691583697407147117e0 * t18 / t25 / t111 * t136 * t257;
  t574 = t83 * t38 * t92 * t131;
  t577 = t229 * t60 * t314;
  t581 = t83 * t38 * t25 * t304;
  t588 = 0.41544948398103724184e1 * t18 * t559 * t309 * t64 * t35 * t241;
  t591 = 0.1e1 / t7 / t271 / t5;
  t592 = t108 * t108;
  t598 = t115 * t115;
  t604 = 0.1e1 / t280 / t2;
  t605 = t1 * t604;
  t607 = -0.24e2 * t281 + 0.24e2 * t605;
  t611 = my_piecewise3(t6, 0, -0.56e2 / 0.81e2 * t591 * t592 + 0.16e2 / 0.9e1 * t273 * t108 * t115 - 0.2e1 / 0.3e1 * t107 * t598 - 0.8e1 / 0.9e1 * t277 * t284 + 0.2e1 / 0.3e1 * t46 * t607);
  t614 = 0.1e1 / t12 / t289 / t10;
  t615 = t122 * t122;
  t621 = t125 * t125;
  t630 = my_piecewise3(t11, 0, -0.56e2 / 0.81e2 * t614 * t615 + 0.16e2 / 0.9e1 * t291 * t122 * t125 - 0.2e1 / 0.3e1 * t121 * t621 - 0.8e1 / 0.9e1 * t295 * t298 - 0.2e1 / 0.3e1 * t54 * t607);
  t638 = t216 * t38 * t92 * t98;
  t642 = t83 * t38 * t261 * t60;
  t646 = t131 * t131;
  t651 = t265 * t66;
  t653 = 0.32e2 / 0.3e1 * t556 + t562 + t565 - t571 + 0.8e1 / 0.3e1 * t574 - 0.46738066947866689707e1 * t577 + 0.16e2 / 0.3e1 * t581 - t588 + t44 * t45 * t23 * (t611 / 0.2e1 + t630 / 0.2e1) + 0.16e2 / 0.3e1 * t638 - 0.32e2 / 0.27e2 * t642 + 0.12e2 * t335 * t133 + 0.6e1 * t97 * t45 * t23 * t646 + 0.16669735224927999999e2 * t651;
  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rho4[0] = t553 + t653;

  t655 = t513 * t318 * t60;
  t656 = 0.16669735224927999999e2 * t655;
  t662 = t208 * t66 * t174;
  t663 = 0.83348676124639999996e1 * t662;
  t664 = t234 * t338;
  t666 = t234 * t343;
  t668 = t517 * t318;
  t670 = t656 + 0.83348676124639999995e1 * t499 + 0.12502301418695999999e2 * t501 - t505 + t512 + 0.16669735224927999999e2 * t515 - 0.55565784083093333330e1 * t518 + t663 + 0.25004602837391999999e2 * t664 + 0.12502301418695999999e2 * t666 - 0.18521928027697777777e1 * t668 + t522;
  t672 = t514 * t78;
  t674 = t103 * t389;
  t677 = 0.13e-18 * t533;
  t683 = t530 * t136 * t78 * t257;
  t685 = t92 * t16;
  t687 = t685 * t149 * t152;
  t688 = 0.8e1 / 0.3e1 * t687;
  t689 = t331 * t339;
  t691 = t331 * t344;
  t693 = 0.20837169031159999999e1 * t523 + 0.12502301418695999999e2 * t672 + 0.62511507093479999997e1 * t674 + 0.66200456987249472917e1 * t528 - t677 + 0.8e1 * t538 + 0.33100228493624736459e1 * t546 + 0.14021420084360006912e2 * t551 - 0.1e-18 * t683 + t688 + 0.16e2 * t689 + 0.8e1 * t691;
  t695 = t418 * t149;
  t712 = t229 * t174 * t30 * t141;
  t713 = 0.33100228493624736458e1 * t712;
  t716 = t548 * t78 * t64 * t314;
  t721 = t525 * t151 * t255 * t256 * t139;
  t725 = 0.6e1 * t695 * t344 + 0.6e1 * t150 * t38 * t389 * t60 + 0.6e1 * t150 * t38 * t174 * t131 + 0.2e1 * t150 * t38 * t78 * t304 + t713 + 0.46738066947866689708e1 * t716 + 0.66200456987249472917e1 * t721 + 0.8e1 / 0.3e1 * t556 + t562 + t565 - t571 + 0.4e1 / 0.3e1 * t574;
  t730 = t327 * t176;
  t731 = 0.4e1 / 0.3e1 * t730;
  t735 = t229 * t78 * t314;
  t737 = t146 * t391;
  t763 = 0.16e2 * t160 * t604;
  t765 = my_piecewise3(t6, 0, -0.56e2 / 0.81e2 * t591 * t69 * t274 + 0.16e2 / 0.9e1 * t273 * t1 * t112 * t108 + 0.8e1 / 0.9e1 * t358 * t50 * t115 - 0.4e1 / 0.3e1 * t107 * t112 * t50 + 0.4e1 * t361 * t281 * t50 - 0.4e1 / 0.3e1 * t361 * t112 * t115 - 0.2e1 / 0.9e1 * t157 * t284 - 0.8e1 * t46 * t281 + t763);
  t790 = 0.16e2 * t168 * t604;
  t792 = my_piecewise3(t11, 0, -0.56e2 / 0.81e2 * t614 * t73 * t292 - 0.16e2 / 0.9e1 * t291 * t1 * t112 * t122 + 0.8e1 / 0.9e1 * t373 * t55 * t125 + 0.4e1 / 0.3e1 * t121 * t112 * t55 - 0.4e1 * t376 * t281 * t55 + 0.4e1 / 0.3e1 * t376 * t112 * t125 - 0.2e1 / 0.9e1 * t165 * t298 + 0.8e1 * t54 * t281 - t790);
  t800 = t261 * t17 * t33 * t80;
  t803 = t217 * t33 * t80;
  t806 = -0.35053550210900017281e1 * t577 + 0.4e1 / 0.3e1 * t581 - t588 + 0.8e1 / 0.3e1 * t638 - 0.8e1 / 0.9e1 * t642 + t731 + 0.6e1 * t335 * t176 - 0.11684516736966672427e1 * t735 + 0.4e1 * t737 + t44 * t45 * t23 * (t765 / 0.2e1 + t792 / 0.2e1) - 0.8e1 / 0.27e2 * t800 + 0.8e1 * t803 + 0.41674338062319999998e1 * t651;
  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rho4[1] = t670 + t693 + t725 + t806;

  t817 = t513 * t66 * t180;
  t819 = t234 * t403;
  t822 = t208 * t66 * t204;
  t824 = t234 * t410;
  t826 = 0.22226313633237333332e2 * t655 + 0.27782892041546666665e1 * t499 - t505 + t512 + 0.55565784083093333330e1 * t515 - 0.37043856055395555554e1 * t518 + 0.11113156816618666666e2 * t662 + 0.16669735224927999999e2 * t664 + 0.83348676124639999996e1 * t666 - 0.37043856055395555554e1 * t668 + 0.55565784083093333331e1 * t817 + 0.16669735224927999999e2 * t819 + 0.27782892041546666665e1 * t822 + 0.83348676124639999996e1 * t824;
  t829 = t209 * t180;
  t831 = t103 * t451;
  t841 = t331 * t404;
  t843 = t522 + 0.83348676124639999996e1 * t672 + 0.41674338062319999998e1 * t674 + 0.83348676124639999996e1 * t829 + 0.41674338062319999998e1 * t831 + 0.22066818995749824306e1 * t528 - t677 + 0.11033409497874912153e1 * t546 + 0.93476133895733379415e1 * t551 + 0.32e2 / 0.9e1 * t687 + 0.32e2 / 0.3e1 * t689 + 0.16e2 / 0.3e1 * t691 + 0.44133637991499648610e1 * t712 + 0.93476133895733379411e1 * t716 + 0.32e2 / 0.3e1 * t841;
  t851 = t331 * t411;
  t863 = t525 * t180 * t30 * t141;
  t867 = t229 * t204 * t30 * t141;
  t872 = 0.8e1 * t695 * t404 + 0.4e1 * t150 * t38 * t78 * t389 + 0.16e2 / 0.3e1 * t851 + 0.4e1 * t150 * t38 * t451 * t60 + 0.2e1 * t150 * t38 * t204 * t131 + 0.22066818995749824305e1 * t863 + 0.11033409497874912153e1 * t867 + 0.88267275982999297221e1 * t721 + t562 + t565 - t571 + 0.4e1 / 0.9e1 * t574 - 0.23369033473933344854e1 * t577 - t588;
  t881 = t84 * t33 * t182;
  t883 = t146 * t453;
  t898 = t1 * t1;
  t901 = 0.1e1 / t280 / t47;
  t917 = my_piecewise3(t6, 0, -0.56e2 / 0.81e2 * t591 * t186 * t108 + 0.64e2 / 0.27e2 * t358 * t50 * t1 * t112 + 0.8e1 / 0.27e2 * t422 * t115 - 0.16e2 / 0.9e1 * t107 * t898 * t901 - 0.8e1 / 0.9e1 * t157 * t112 + 0.8e1 / 0.3e1 * t157 * t282 + 0.8e1 / 0.27e2 * t273 * t190 * t108 - 0.4e1 / 0.9e1 * t107 * t432 * t50 - 0.2e1 / 0.9e1 * t427 * t115 + t763);
  t943 = my_piecewise3(t11, 0, -0.56e2 / 0.81e2 * t614 * t195 * t122 - 0.64e2 / 0.27e2 * t373 * t55 * t1 * t112 + 0.8e1 / 0.27e2 * t437 * t125 - 0.16e2 / 0.9e1 * t121 * t898 * t901 + 0.8e1 / 0.9e1 * t165 * t112 - 0.8e1 / 0.3e1 * t165 * t282 + 0.8e1 / 0.27e2 * t291 * t198 * t122 - 0.4e1 / 0.9e1 * t121 * t445 * t55 - 0.2e1 / 0.9e1 * t442 * t125 - t790);
  t950 = t685 * t33 * t182;
  t952 = t174 * t174;
  t957 = t327 * t206;
  t961 = 0.8e1 / 0.9e1 * t638 - 0.16e2 / 0.27e2 * t642 + 0.16e2 / 0.9e1 * t730 - 0.23369033473933344853e1 * t735 + 0.8e1 / 0.3e1 * t737 - 0.16e2 / 0.27e2 * t800 + 0.16e2 / 0.3e1 * t803 + 0.16e2 / 0.3e1 * t881 + 0.8e1 / 0.3e1 * t883 + 0.2e1 * t42 * t131 * t33 * t182 + t44 * t45 * t23 * (t917 / 0.2e1 + t943 / 0.2e1) + 0.8e1 / 0.9e1 * t950 + 0.4e1 * t97 * t45 * t23 * t952 + 0.4e1 / 0.9e1 * t957 + 0.2e1 * t335 * t206;
  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rho4[2] = t826 + t843 + t872 + t961;

  t963 = t467 * t66;
  t971 = t234 * t461;
  t973 = 0.41674338062319999998e1 * t963 + t656 - t505 + t512 - 0.18521928027697777777e1 * t518 + t663 - 0.55565784083093333331e1 * t668 + 0.16669735224927999999e2 * t817 + 0.25004602837391999998e2 * t819 + 0.83348676124639999996e1 * t822 + 0.12502301418695999999e2 * t824 + 0.12502301418695999999e2 * t971;
  t976 = t103 * t494;
  t983 = t522 + 0.12502301418695999999e2 * t829 + 0.62511507093479999997e1 * t831 + 0.20837169031159999999e1 * t976 - t534 + 0.46738066947866689707e1 * t551 + t688 + t713 + 0.14021420084360006912e2 * t716 + 0.16e2 * t841 + 0.8e1 * t851 + 0.66200456987249472914e1 * t863;
  t986 = t331 * t462;
  t1005 = t25 * t467 * t33 * t268;
  t1008 = 0.33100228493624736458e1 * t867 + 0.8e1 * t986 + 0.6e1 * t695 * t462 + 0.6e1 * t150 * t38 * t174 * t204 + 0.6e1 * t150 * t38 * t78 * t451 + 0.2e1 * t150 * t38 * t494 * t60 + 0.66200456987249472916e1 * t721 + t562 + t565 + 0.8e1 / 0.3e1 * t1005 - t571 - 0.11684516736966672427e1 * t577;
  t1017 = t42 * t180 * t33;
  t1038 = 0.12e2 * t281 + 0.24e2 * t605;
  t1042 = my_piecewise3(t6, 0, -0.56e2 / 0.81e2 * t591 * t472 * t50 + 0.16e2 / 0.9e1 * t422 * t113 + 0.8e1 / 0.9e1 * t358 * t190 * t50 - 0.4e1 / 0.3e1 * t361 * t112 * t190 - 0.2e1 / 0.3e1 * t157 * t432 - 0.2e1 / 0.9e1 * t107 * t478 * t50 + 0.2e1 / 0.3e1 * t46 * t1038);
  t1063 = my_piecewise3(t11, 0, -0.56e2 / 0.81e2 * t614 * t483 * t55 - 0.16e2 / 0.9e1 * t437 * t113 + 0.8e1 / 0.9e1 * t373 * t198 * t55 + 0.4e1 / 0.3e1 * t376 * t112 * t198 - 0.2e1 / 0.3e1 * t165 * t445 - 0.2e1 / 0.9e1 * t121 * t488 * t55 - 0.2e1 / 0.3e1 * t54 * t1038);
  t1069 = t146 * t496;
  t1071 = -t588 - 0.8e1 / 0.27e2 * t642 + t731 - 0.35053550210900017280e1 * t735 - 0.8e1 / 0.9e1 * t800 + 0.8e1 * t881 + 0.4e1 * t883 + 0.8e1 / 0.3e1 * t950 + 0.4e1 / 0.3e1 * t957 + 0.6e1 * t1017 * t176 + t44 * t45 * t23 * (t1042 / 0.2e1 + t1063 / 0.2e1) + 0.4e1 / 0.3e1 * t1069;
  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rho4[3] = t973 + t983 + t1008 + t1071;

  t1084 = 0.16669735224927999999e2 * t963 - t505 + t512 - 0.74087712110791111105e1 * t668 + 0.33339470449855999998e2 * t817 + 0.16669735224927999999e2 * t822 + 0.50009205674783999996e2 * t971 + t522 + 0.83348676124639999996e1 * t976 - 0.3e-19 * t683 + 0.18695226779146675883e2 * t716 + 0.13240091397449894583e2 * t863 + 0.66200456987249472916e1 * t867 + 0.32e2 * t986;
  t1097 = t204 * t204;
  t1102 = t186 * t186;
  t1107 = t190 * t190;
  t1113 = 0.24e2 * t281 + 0.24e2 * t605;
  t1117 = my_piecewise3(t6, 0, -0.56e2 / 0.81e2 * t591 * t1102 + 0.16e2 / 0.9e1 * t422 * t190 - 0.2e1 / 0.3e1 * t107 * t1107 - 0.8e1 / 0.9e1 * t157 * t478 + 0.2e1 / 0.3e1 * t46 * t1113);
  t1118 = t195 * t195;
  t1123 = t198 * t198;
  t1132 = my_piecewise3(t11, 0, -0.56e2 / 0.81e2 * t614 * t1118 + 0.16e2 / 0.9e1 * t437 * t198 - 0.2e1 / 0.3e1 * t121 * t1123 - 0.8e1 / 0.9e1 * t165 * t488 - 0.2e1 / 0.3e1 * t54 * t1113);
  t1138 = 0.8e1 * t150 * t38 * t78 * t494 + t562 + t565 + 0.32e2 / 0.3e1 * t1005 - t571 - t588 - 0.46738066947866689707e1 * t735 - 0.32e2 / 0.27e2 * t800 + 0.16e2 / 0.3e1 * t950 + 0.8e1 / 0.3e1 * t957 + 0.16e2 / 0.3e1 * t1069 + 0.12e2 * t1017 * t206 + 0.6e1 * t97 * t45 * t23 * t1097 + t44 * t45 * t23 * (t1117 / 0.2e1 + t1132 / 0.2e1);
  if(v4rho4 != NULL && (p->info->flags & XC_FLAGS_HAVE_LXC))
    v4rho4[4] = t1084 + t1138;

#ifndef XC_DONT_COMPILE_MXC

  if(order < 5) return;


#endif

#endif

#endif

#endif

#endif


}

