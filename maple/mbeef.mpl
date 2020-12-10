(*
 Copyright (C) 2017 M.A.L. Marques

 This Source Code Form is subject to the terms of the Mozilla Public
 License, v. 2.0. If a copy of the MPL was not distributed with this
 file, You can obtain one at http://mozilla.org/MPL/2.0/.
*)

mbeef_q  := 6.5124: (* PBEsol transformation *)
mbeef_ts := s -> 2*s^2/(mbeef_q + s^2) - 1: (* eqn 2 *)
mbeef_ta := a -> (1 - a^2)^3/(1 + a^3 + a^6): (* eqn 3 *)

with(orthopoly):

(* eqns 4 and 5 *)
mbeef_expansion := (x, t) -> add(add(
    + mbeef_coefs[i][j]
    * P(j-1, mbeef_ts(X2S*x))
    * P(i-1, mbeef_ta((t - x^2/8)/K_FACTOR_C)),
    i=1..mbeef_n), j=1..mbeef_n):
