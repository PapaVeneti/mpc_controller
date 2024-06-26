/* This file was automatically generated by CasADi.
   The CasADi copyright holders make no ownership claim of its contents. */
#ifdef __cplusplus
extern "C" {
#endif

/* How to prefix internal symbols */
#ifdef CASADI_CODEGEN_PREFIX
  #define CASADI_NAMESPACE_CONCAT(NS, ID) _CASADI_NAMESPACE_CONCAT(NS, ID)
  #define _CASADI_NAMESPACE_CONCAT(NS, ID) NS ## ID
  #define CASADI_PREFIX(ID) CASADI_NAMESPACE_CONCAT(CODEGEN_PREFIX, ID)
#else
  #define CASADI_PREFIX(ID) SRBD_cost_y_fun_jac_ut_xt_ ## ID
#endif

#include <math.h>

#ifndef casadi_real
#define casadi_real double
#endif

#ifndef casadi_int
#define casadi_int int
#endif

/* Add prefix to internal symbols */
#define casadi_f0 CASADI_PREFIX(f0)
#define casadi_s0 CASADI_PREFIX(s0)
#define casadi_s1 CASADI_PREFIX(s1)
#define casadi_s2 CASADI_PREFIX(s2)
#define casadi_s3 CASADI_PREFIX(s3)
#define casadi_s4 CASADI_PREFIX(s4)
#define casadi_s5 CASADI_PREFIX(s5)
#define casadi_s6 CASADI_PREFIX(s6)
#define casadi_sq CASADI_PREFIX(sq)

/* Symbol visibility in DLLs */
#ifndef CASADI_SYMBOL_EXPORT
  #if defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__)
    #if defined(STATIC_LINKED)
      #define CASADI_SYMBOL_EXPORT
    #else
      #define CASADI_SYMBOL_EXPORT __declspec(dllexport)
    #endif
  #elif defined(__GNUC__) && defined(GCC_HASCLASSVISIBILITY)
    #define CASADI_SYMBOL_EXPORT __attribute__ ((visibility ("default")))
  #else
    #define CASADI_SYMBOL_EXPORT
  #endif
#endif

casadi_real casadi_sq(casadi_real x) { return x*x;}

static const casadi_int casadi_s0[11] = {7, 1, 0, 7, 0, 1, 2, 3, 4, 5, 6};
static const casadi_int casadi_s1[7] = {3, 1, 0, 3, 0, 1, 2};
static const casadi_int casadi_s2[3] = {0, 0, 0};
static const casadi_int casadi_s3[8] = {4, 1, 0, 4, 0, 1, 2, 3};
static const casadi_int casadi_s4[13] = {9, 1, 0, 9, 0, 1, 2, 3, 4, 5, 6, 7, 8};
static const casadi_int casadi_s5[30] = {10, 9, 0, 4, 8, 12, 13, 14, 15, 16, 17, 18, 3, 4, 5, 6, 3, 4, 5, 6, 3, 4, 5, 6, 7, 8, 9, 0, 1, 2};
static const casadi_int casadi_s6[3] = {9, 0, 0};

/* SRBD_cost_y_fun_jac_ut_xt:(i0[7],i1[3],i2[],i3[4])->(o0[9],o1[10x9,18nz],o2[9x0]) */
static int casadi_f0(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem) {
  casadi_real a0, a1, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a2, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a3, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39, a4, a40, a41, a42, a5, a6, a7, a8, a9;
  a0=2.;
  a1=arg[3]? arg[3][0] : 0;
  a2=arg[0]? arg[0][0] : 0;
  a3=casadi_sq(a2);
  a4=arg[0]? arg[0][1] : 0;
  a5=casadi_sq(a4);
  a3=(a3+a5);
  a5=arg[0]? arg[0][2] : 0;
  a6=casadi_sq(a5);
  a3=(a3+a6);
  a6=arg[0]? arg[0][3] : 0;
  a7=casadi_sq(a6);
  a3=(a3+a7);
  a7=1.0000000000000001e-09;
  a3=(a3+a7);
  a3=sqrt(a3);
  a8=(a2/a3);
  a9=(a1*a8);
  a10=arg[3]? arg[3][1] : 0;
  a11=(a4/a3);
  a12=(a10*a11);
  a9=(a9+a12);
  a12=arg[3]? arg[3][2] : 0;
  a13=(a5/a3);
  a14=(a12*a13);
  a9=(a9+a14);
  a14=arg[3]? arg[3][3] : 0;
  a15=(a6/a3);
  a16=(a14*a15);
  a9=(a9+a16);
  a16=casadi_sq(a9);
  a16=(a0*a16);
  a17=1.;
  a16=(a16-a17);
  a18=acos(a16);
  a19=(a8*a10);
  a20=(a11*a1);
  a19=(a19-a20);
  a20=(a13*a14);
  a19=(a19+a20);
  a20=(a15*a12);
  a19=(a19-a20);
  a20=casadi_sq(a19);
  a21=(a8*a12);
  a22=(a13*a1);
  a21=(a21-a22);
  a22=(a11*a14);
  a21=(a21-a22);
  a22=(a15*a10);
  a21=(a21+a22);
  a22=casadi_sq(a21);
  a20=(a20+a22);
  a22=(a8*a14);
  a23=(a1*a15);
  a22=(a22-a23);
  a23=(a11*a12);
  a22=(a22+a23);
  a23=(a13*a10);
  a22=(a22-a23);
  a23=casadi_sq(a22);
  a20=(a20+a23);
  a20=(a20+a7);
  a20=sqrt(a20);
  a7=(a19/a20);
  a23=(a18*a7);
  if (res[0]!=0) res[0][0]=a23;
  a23=(a21/a20);
  a24=(a18*a23);
  if (res[0]!=0) res[0][1]=a24;
  a24=(a22/a20);
  a25=(a18*a24);
  if (res[0]!=0) res[0][2]=a25;
  a25=arg[0]? arg[0][4] : 0;
  if (res[0]!=0) res[0][3]=a25;
  a25=arg[0]? arg[0][5] : 0;
  if (res[0]!=0) res[0][4]=a25;
  a25=arg[0]? arg[0][6] : 0;
  if (res[0]!=0) res[0][5]=a25;
  a25=arg[1]? arg[1][0] : 0;
  if (res[0]!=0) res[0][6]=a25;
  a25=arg[1]? arg[1][1] : 0;
  if (res[0]!=0) res[0][7]=a25;
  a25=arg[1]? arg[1][2] : 0;
  if (res[0]!=0) res[0][8]=a25;
  a25=-1.;
  a16=casadi_sq(a16);
  a16=(a17-a16);
  a16=sqrt(a16);
  a25=(a25/a16);
  a9=(a9+a9);
  a16=(1./a3);
  a8=(a8/a3);
  a2=(a2/a3);
  a26=(a8*a2);
  a16=(a16-a26);
  a26=(a1*a16);
  a11=(a11/a3);
  a27=(a11*a2);
  a28=(a10*a27);
  a26=(a26-a28);
  a13=(a13/a3);
  a28=(a13*a2);
  a29=(a12*a28);
  a26=(a26-a29);
  a15=(a15/a3);
  a2=(a15*a2);
  a29=(a14*a2);
  a26=(a26-a29);
  a26=(a9*a26);
  a26=(a0*a26);
  a26=(a25*a26);
  a29=(a7*a26);
  a30=(a10*a16);
  a31=(a1*a27);
  a30=(a30+a31);
  a31=(a14*a28);
  a30=(a30-a31);
  a31=(a12*a2);
  a30=(a30+a31);
  a31=(a30/a20);
  a32=(a7/a20);
  a19=(a19+a19);
  a30=(a19*a30);
  a21=(a21+a21);
  a33=(a12*a16);
  a34=(a1*a28);
  a33=(a33+a34);
  a34=(a14*a27);
  a33=(a33+a34);
  a34=(a10*a2);
  a33=(a33-a34);
  a34=(a21*a33);
  a30=(a30+a34);
  a22=(a22+a22);
  a16=(a14*a16);
  a2=(a1*a2);
  a16=(a16+a2);
  a27=(a12*a27);
  a16=(a16-a27);
  a28=(a10*a28);
  a16=(a16+a28);
  a28=(a22*a16);
  a30=(a30+a28);
  a28=(a20+a20);
  a30=(a30/a28);
  a27=(a32*a30);
  a31=(a31-a27);
  a31=(a18*a31);
  a29=(a29+a31);
  if (res[1]!=0) res[1][0]=a29;
  a29=(1./a3);
  a4=(a4/a3);
  a31=(a11*a4);
  a29=(a29-a31);
  a31=(a10*a29);
  a27=(a8*a4);
  a2=(a1*a27);
  a31=(a31-a2);
  a2=(a13*a4);
  a34=(a12*a2);
  a31=(a31-a34);
  a4=(a15*a4);
  a34=(a14*a4);
  a31=(a31-a34);
  a31=(a9*a31);
  a31=(a0*a31);
  a31=(a25*a31);
  a34=(a7*a31);
  a35=(a12*a4);
  a36=(a10*a27);
  a37=(a1*a29);
  a36=(a36+a37);
  a37=(a14*a2);
  a36=(a36+a37);
  a35=(a35-a36);
  a36=(a35/a20);
  a35=(a19*a35);
  a37=(a1*a2);
  a38=(a12*a27);
  a37=(a37-a38);
  a38=(a14*a29);
  a37=(a37-a38);
  a38=(a10*a4);
  a37=(a37-a38);
  a38=(a21*a37);
  a35=(a35+a38);
  a4=(a1*a4);
  a27=(a14*a27);
  a4=(a4-a27);
  a29=(a12*a29);
  a4=(a4+a29);
  a2=(a10*a2);
  a4=(a4+a2);
  a2=(a22*a4);
  a35=(a35+a2);
  a35=(a35/a28);
  a2=(a32*a35);
  a36=(a36-a2);
  a36=(a18*a36);
  a34=(a34+a36);
  if (res[1]!=0) res[1][1]=a34;
  a34=(1./a3);
  a5=(a5/a3);
  a36=(a13*a5);
  a34=(a34-a36);
  a36=(a12*a34);
  a2=(a8*a5);
  a29=(a1*a2);
  a27=(a11*a5);
  a38=(a10*a27);
  a29=(a29+a38);
  a36=(a36-a29);
  a5=(a15*a5);
  a29=(a14*a5);
  a36=(a36-a29);
  a36=(a9*a36);
  a36=(a0*a36);
  a36=(a25*a36);
  a29=(a7*a36);
  a38=(a1*a27);
  a39=(a10*a2);
  a38=(a38-a39);
  a39=(a14*a34);
  a38=(a38+a39);
  a39=(a12*a5);
  a38=(a38+a39);
  a39=(a38/a20);
  a38=(a19*a38);
  a40=(a14*a27);
  a41=(a12*a2);
  a42=(a1*a34);
  a41=(a41+a42);
  a40=(a40-a41);
  a41=(a10*a5);
  a40=(a40-a41);
  a41=(a21*a40);
  a38=(a38+a41);
  a5=(a1*a5);
  a2=(a14*a2);
  a5=(a5-a2);
  a27=(a12*a27);
  a5=(a5-a27);
  a34=(a10*a34);
  a5=(a5-a34);
  a34=(a22*a5);
  a38=(a38+a34);
  a38=(a38/a28);
  a34=(a32*a38);
  a39=(a39-a34);
  a39=(a18*a39);
  a29=(a29+a39);
  if (res[1]!=0) res[1][2]=a29;
  a29=(1./a3);
  a6=(a6/a3);
  a15=(a15*a6);
  a29=(a29-a15);
  a15=(a14*a29);
  a8=(a8*a6);
  a3=(a1*a8);
  a11=(a11*a6);
  a39=(a10*a11);
  a3=(a3+a39);
  a13=(a13*a6);
  a6=(a12*a13);
  a3=(a3+a6);
  a15=(a15-a3);
  a9=(a9*a15);
  a0=(a0*a9);
  a25=(a25*a0);
  a7=(a7*a25);
  a0=(a1*a11);
  a9=(a10*a8);
  a0=(a0-a9);
  a9=(a14*a13);
  a0=(a0-a9);
  a9=(a12*a29);
  a0=(a0-a9);
  a9=(a0/a20);
  a19=(a19*a0);
  a0=(a1*a13);
  a15=(a12*a8);
  a0=(a0-a15);
  a15=(a14*a11);
  a0=(a0+a15);
  a15=(a10*a29);
  a0=(a0+a15);
  a21=(a21*a0);
  a19=(a19+a21);
  a10=(a10*a13);
  a14=(a14*a8);
  a1=(a1*a29);
  a14=(a14+a1);
  a12=(a12*a11);
  a14=(a14+a12);
  a10=(a10-a14);
  a22=(a22*a10);
  a19=(a19+a22);
  a19=(a19/a28);
  a32=(a32*a19);
  a9=(a9-a32);
  a9=(a18*a9);
  a7=(a7+a9);
  if (res[1]!=0) res[1][3]=a7;
  a7=(a23*a26);
  a33=(a33/a20);
  a9=(a23/a20);
  a32=(a9*a30);
  a33=(a33-a32);
  a33=(a18*a33);
  a7=(a7+a33);
  if (res[1]!=0) res[1][4]=a7;
  a7=(a23*a31);
  a37=(a37/a20);
  a33=(a9*a35);
  a37=(a37-a33);
  a37=(a18*a37);
  a7=(a7+a37);
  if (res[1]!=0) res[1][5]=a7;
  a7=(a23*a36);
  a40=(a40/a20);
  a37=(a9*a38);
  a40=(a40-a37);
  a40=(a18*a40);
  a7=(a7+a40);
  if (res[1]!=0) res[1][6]=a7;
  a23=(a23*a25);
  a0=(a0/a20);
  a9=(a9*a19);
  a0=(a0-a9);
  a0=(a18*a0);
  a23=(a23+a0);
  if (res[1]!=0) res[1][7]=a23;
  a26=(a24*a26);
  a16=(a16/a20);
  a23=(a24/a20);
  a30=(a23*a30);
  a16=(a16-a30);
  a16=(a18*a16);
  a26=(a26+a16);
  if (res[1]!=0) res[1][8]=a26;
  a31=(a24*a31);
  a4=(a4/a20);
  a35=(a23*a35);
  a4=(a4-a35);
  a4=(a18*a4);
  a31=(a31+a4);
  if (res[1]!=0) res[1][9]=a31;
  a36=(a24*a36);
  a5=(a5/a20);
  a38=(a23*a38);
  a5=(a5-a38);
  a5=(a18*a5);
  a36=(a36+a5);
  if (res[1]!=0) res[1][10]=a36;
  a24=(a24*a25);
  a10=(a10/a20);
  a23=(a23*a19);
  a10=(a10-a23);
  a18=(a18*a10);
  a24=(a24+a18);
  if (res[1]!=0) res[1][11]=a24;
  if (res[1]!=0) res[1][12]=a17;
  if (res[1]!=0) res[1][13]=a17;
  if (res[1]!=0) res[1][14]=a17;
  if (res[1]!=0) res[1][15]=a17;
  if (res[1]!=0) res[1][16]=a17;
  if (res[1]!=0) res[1][17]=a17;
  return 0;
}

CASADI_SYMBOL_EXPORT int SRBD_cost_y_fun_jac_ut_xt(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem){
  return casadi_f0(arg, res, iw, w, mem);
}

CASADI_SYMBOL_EXPORT int SRBD_cost_y_fun_jac_ut_xt_alloc_mem(void) {
  return 0;
}

CASADI_SYMBOL_EXPORT int SRBD_cost_y_fun_jac_ut_xt_init_mem(int mem) {
  return 0;
}

CASADI_SYMBOL_EXPORT void SRBD_cost_y_fun_jac_ut_xt_free_mem(int mem) {
}

CASADI_SYMBOL_EXPORT int SRBD_cost_y_fun_jac_ut_xt_checkout(void) {
  return 0;
}

CASADI_SYMBOL_EXPORT void SRBD_cost_y_fun_jac_ut_xt_release(int mem) {
}

CASADI_SYMBOL_EXPORT void SRBD_cost_y_fun_jac_ut_xt_incref(void) {
}

CASADI_SYMBOL_EXPORT void SRBD_cost_y_fun_jac_ut_xt_decref(void) {
}

CASADI_SYMBOL_EXPORT casadi_int SRBD_cost_y_fun_jac_ut_xt_n_in(void) { return 4;}

CASADI_SYMBOL_EXPORT casadi_int SRBD_cost_y_fun_jac_ut_xt_n_out(void) { return 3;}

CASADI_SYMBOL_EXPORT casadi_real SRBD_cost_y_fun_jac_ut_xt_default_in(casadi_int i){
  switch (i) {
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const char* SRBD_cost_y_fun_jac_ut_xt_name_in(casadi_int i){
  switch (i) {
    case 0: return "i0";
    case 1: return "i1";
    case 2: return "i2";
    case 3: return "i3";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const char* SRBD_cost_y_fun_jac_ut_xt_name_out(casadi_int i){
  switch (i) {
    case 0: return "o0";
    case 1: return "o1";
    case 2: return "o2";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* SRBD_cost_y_fun_jac_ut_xt_sparsity_in(casadi_int i) {
  switch (i) {
    case 0: return casadi_s0;
    case 1: return casadi_s1;
    case 2: return casadi_s2;
    case 3: return casadi_s3;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* SRBD_cost_y_fun_jac_ut_xt_sparsity_out(casadi_int i) {
  switch (i) {
    case 0: return casadi_s4;
    case 1: return casadi_s5;
    case 2: return casadi_s6;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT int SRBD_cost_y_fun_jac_ut_xt_work(casadi_int *sz_arg, casadi_int* sz_res, casadi_int *sz_iw, casadi_int *sz_w) {
  if (sz_arg) *sz_arg = 4;
  if (sz_res) *sz_res = 3;
  if (sz_iw) *sz_iw = 0;
  if (sz_w) *sz_w = 0;
  return 0;
}


#ifdef __cplusplus
} /* extern "C" */
#endif
