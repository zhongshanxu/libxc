(*
 Copyright (C) 2017 M.A.L. Marques

 This Source Code Form is subject to the terms of the Mozilla Public
 License, v. 2.0. If a copy of the MPL was not distributed with this
 file, You can obtain one at http://mozilla.org/MPL/2.0/.
*)

(* type: lda_exc *)
(* prefix:
  lda_x_params *params;

  assert(p->params != NULL);
  params = (lda_x_params * )(p->params);
*)

$ifdef lda_x_params
params_a_lda_x_alpha := 1:
$endif

z_thr := z -> my_piecewise3(1 + z <= p_a_zeta_threshold, p_a_zeta_threshold - 1, z):

lda_x_s := (rs, z) -> simplify(params_a_lda_x_alpha*LDA_X_FACTOR*((1 + z)/2)^(4/3)*(RS_FACTOR/rs)):

lda_x_f := (rs, z) -> 
  + my_piecewise3(screen_dens_zeta(rs,  z), 0, lda_x_s(rs, z_thr( z)))
  + my_piecewise3(screen_dens_zeta(rs, -z), 0, lda_x_s(rs, z_thr(-z)))
:

f := (rs, z) -> lda_x_f(rs, z):
