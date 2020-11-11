(*
 Copyright (C) 2017 M.A.L. Marques

 This Source Code Form is subject to the terms of the Mozilla Public
 License, v. 2.0. If a copy of the MPL was not distributed with this
 file, You can obtain one at http://mozilla.org/MPL/2.0/.
*)

(* type: gga_exc *)
(* prefix:
  hyb_gga_x_cam_s12_params *params;

  assert(p->params != NULL);
  params = (hyb_gga_x_cam_s12_params * )(p->params);
*)

$include "gga_x_s12.mpl"
$include "lda_x_erf.mpl"

cam_s21_f := (rs, z, xs) -> attenuation_erf(a_cnst*rs/(1 + z)^(1/3)) * s12g_f(xs):

f := (rs, z, xt, xs0, xs1) ->
  gga_exchange_nsp(cam_s21_f, rs, z, xs0, xs1):
