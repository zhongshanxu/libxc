/* 
  This file was generated automatically with ../scripts/maple2c.pl.
  Do not edit this file directly as it can be overwritten!!

  Maple source      : ../maple/gga_x_lv_rpw86.mpl
  Type of functional: work_gga_x
*/

void XC(gga_x_lv_rpw86_enhance)
  (const XC(func_type) *p, int order, 
   FLOAT x, FLOAT *f, FLOAT *dfdx, FLOAT *d2fdx2, FLOAT *d3fdx3)
{
  double t1, t3, t4, t5, t6, t7, t8, t13;
  double t14, t16, t17, t22, t23, t24, t25, t31;
  double t32, t34, t37, t38, t41, t42, t44, t45;
  double t52, t53, t54, t62, t68, t69, t70, t71;
  double t74, t75, t80, t81, t84, t87, t97, t106;
  double t139, t143, t154;


  t1 = x * x;
  t3 = 0.10e1 + 0.15524668768951172643e-2 * t1;
  t4 = t1 * t1;
  t5 = t4 * t1;
  t6 = 0.97045613501312856084e-7 * t5;
  t7 = 0.10e1 + t6;
  t8 = 0.1e1 / t7;
  t13 = 0.10e1 + 0.30458774822984051945e-1 * t1 + 0.46925681188056081264e-2 * t4 + 0.72628259874719906069e-6 * t5;
  t14 = pow(t13, 0.66666666666666666667e-1);
  t16 = 0.115e1 + t6;
  t17 = 0.1e1 / t16;
  *f = t3 * t8 + 0.97045613501312856084e-7 * t5 * t14 * t17;

  if(order < 1) return;

  t22 = t7 * t7;
  t23 = 0.1e1 / t22;
  t24 = t3 * t23;
  t25 = t4 * x;
  t31 = pow(t13, -0.93333333333333333333e0);
  t32 = t5 * t31;
  t34 = t1 * x;
  t37 = 0.60917549645968103890e-1 * x + 0.18770272475222432506e-1 * t34 + 0.43576955924831943641e-5 * t25;
  t38 = t17 * t37;
  t41 = t4 * t4;
  t42 = t41 * t34;
  t44 = t16 * t16;
  t45 = 0.1e1 / t44;
  *dfdx = 0.31049337537902345286e-2 * x * t8 - 0.58227368100787713650e-6 * t24 * t25 + 0.58227368100787713650e-6 * t25 * t14 * t17 + 0.64697075667541904056e-8 * t32 * t38 - 0.56507106599077176589e-13 * t42 * t14 * t45;

  if(order < 2) return;

  t52 = 0.1e1 / t22 / t7;
  t53 = t3 * t52;
  t54 = t41 * t1;
  t62 = t25 * t31;
  t68 = pow(t13, -0.19333333333333333333e1);
  t69 = t5 * t68;
  t70 = t37 * t37;
  t71 = t17 * t70;
  t74 = t42 * t31;
  t75 = t45 * t37;
  t80 = 0.60917549645968103890e-1 + 0.56310817425667297518e-1 * t1 + 0.21788477962415971820e-4 * t4;
  t81 = t17 * t80;
  t84 = t41 * t41;
  t87 = 0.1e1 / t44 / t16;
  *d2fdx2 = 0.31049337537902345286e-2 * t8 - 0.36158424122100910956e-8 * t5 * t23 + 0.67808527918892611906e-12 * t53 * t54 - 0.29113684050393856825e-5 * t24 * t4 + 0.29113684050393856825e-5 * t4 * t14 * t17 + 0.77636490801050284868e-7 * t62 * t38 - 0.96062081218431200201e-12 * t54 * t14 * t45 - 0.60383937289705777119e-8 * t69 * t71 - 0.75342808798769568786e-14 * t74 * t75 + 0.64697075667541904056e-8 * t32 * t81 + 0.65805201925098346015e-19 * t84 * t14 * t87;

  if(order < 3) return;

  t97 = pow(t13, -0.29333333333333333333e1);
  t106 = t41 * x;
  t139 = t22 * t22;
  t143 = t41 * t4 * t34;
  t154 = t44 * t44;
  *d3fdx3 = -0.32542581709890819861e-7 * t23 * t25 + 0.63162296139059147154e-14 * t42 * t52 - 0.10869108712147039881e-6 * t25 * t68 * t71 + 0.11674227876009783576e-7 * t5 * t97 * t17 * t70 * t37 - 0.18115181186911733136e-7 * t69 * t38 * t80 + 0.10171279187833891786e-10 * t53 * t106 - 0.11645473620157542730e-4 * t24 * t34 + 0.11645473620157542730e-4 * t34 * t14 * t17 + 0.58227368100787713651e-6 * t4 * t31 * t38 + 0.11645473620157542730e-6 * t62 * t81 - 0.19212416243686240040e-12 * t54 * t31 * t75 + 0.10547993231827739630e-13 * t42 * t68 * t45 * t70 - 0.11301421319815435318e-13 * t74 * t45 * t80 + 0.13161040385019669203e-19 * t84 * t31 * t87 * t37 + 0.64697075667541904056e-8 * t32 * t17 * (0.11262163485133459504e0 * x + 0.87153911849663887280e-4 * t34) - 0.11844936346517702283e-17 * t3 / t139 * t143 - 0.11301421319815435318e-10 * t106 * t14 * t45 + 0.21715716635282454185e-17 * t143 * t14 * t87 - 0.11494991146318097034e-24 * t84 * t25 * t14 / t154;

  if(order < 4) return;


}

#define maple2c_order 3
#define maple2c_func  XC(gga_x_lv_rpw86_enhance)