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
  #define CASADI_PREFIX(ID) fr_leg_pos_constr_h_e_fun_ ## ID
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

static const casadi_int casadi_s0[14] = {10, 1, 0, 10, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
static const casadi_int casadi_s1[3] = {0, 0, 0};
static const casadi_int casadi_s2[8] = {4, 1, 0, 4, 0, 1, 2, 3};

/* fr_leg_pos_constr_h_e_fun:(i0[10],i1[])->(o0[4]) */
static int casadi_f0(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem) {
  casadi_real a0, a1, a10, a11, a12, a13, a14, a15, a2, a3, a4, a5, a6, a7, a8, a9;
  a0=-4.7499999999999998e-01;
  a1=arg[0]? arg[0][0] : 0;
  a0=(a0*a1);
  a2=1.8999999999999999e+00;
  a0=(a0+a2);
  a2=1.;
  a3=-4.9399999999999999e+01;
  a4=9.0000000000000002e-01;
  a4=(a1-a4);
  a3=(a3*a4);
  a3=exp(a3);
  a3=(a2+a3);
  a0=(a0/a3);
  a3=-30.;
  a4=9.4999999999999996e-01;
  a4=(a1-a4);
  a3=(a3*a4);
  a3=exp(a3);
  a3=(a2+a3);
  a3=(1./a3);
  a2=(a2-a3);
  a3=-1.9399999999999999e+01;
  a3=(a3*a1);
  a4=2.1500000000000000e+01;
  a3=(a3+a4);
  a2=(a2*a3);
  a0=(a0+a2);
  a2=arg[0]? arg[0][1] : 0;
  a0=(a0-a2);
  if (res[0]!=0) res[0][0]=a0;
  a0=-8.1159999999999999e-01;
  a3=casadi_sq(a1);
  a3=casadi_sq(a3);
  a3=(a1*a3);
  a0=(a0*a3);
  a3=8.9614999999999991e+00;
  a4=casadi_sq(a1);
  a4=casadi_sq(a4);
  a3=(a3*a4);
  a0=(a0+a3);
  a3=-3.8647399999999998e+01;
  a4=casadi_sq(a1);
  a4=(a1*a4);
  a3=(a3*a4);
  a0=(a0+a3);
  a3=8.1128100000000003e+01;
  a4=casadi_sq(a1);
  a3=(a3*a4);
  a0=(a0+a3);
  a3=-8.3697000000000003e+01;
  a3=(a3*a1);
  a0=(a0+a3);
  a3=3.6456400000000002e+01;
  a0=(a0+a3);
  a3=arg[0]? arg[0][3] : 0;
  a0=(a0-a3);
  if (res[0]!=0) res[0][1]=a0;
  a0=2.9929000000000000e-01;
  a1=cos(a3);
  a1=(a0*a1);
  a4=1.4501633819223289e-01;
  a5=arg[0]? arg[0][4] : 0;
  a6=cos(a5);
  a6=(a4*a6);
  a7=9.8942926056253055e-01;
  a8=sin(a5);
  a8=(a7*a8);
  a6=(a6+a8);
  a1=(a1*a6);
  a6=1.7499999999999399e-01;
  a8=sin(a3);
  a8=(a6*a8);
  a1=(a1-a8);
  a8=1.7499999999999100e-01;
  a9=sin(a2);
  a9=(a8*a9);
  a1=(a1-a9);
  a9=2.9976999999999998e-01;
  a10=cos(a2);
  a10=(a9*a10);
  a11=1.5547417496984137e-01;
  a12=arg[0]? arg[0][2] : 0;
  a13=cos(a12);
  a13=(a11*a13);
  a14=9.8783995713751482e-01;
  a15=sin(a12);
  a15=(a14*a15);
  a13=(a13-a15);
  a10=(a10*a13);
  a1=(a1+a10);
  a10=sin(a3);
  a10=(a0*a10);
  a13=cos(a5);
  a13=(a7*a13);
  a15=sin(a5);
  a15=(a4*a15);
  a13=(a13-a15);
  a10=(a10*a13);
  a1=(a1-a10);
  a10=sin(a2);
  a10=(a9*a10);
  a13=cos(a12);
  a13=(a14*a13);
  a15=sin(a12);
  a15=(a11*a15);
  a13=(a13+a15);
  a10=(a10*a13);
  a1=(a1-a10);
  a10=8.9999999999999997e-02;
  a1=(a1-a10);
  if (res[0]!=0) res[0][2]=a1;
  a1=cos(a3);
  a6=(a6*a1);
  a1=cos(a2);
  a8=(a8*a1);
  a6=(a6-a8);
  a8=cos(a3);
  a8=(a0*a8);
  a1=cos(a5);
  a1=(a7*a1);
  a10=sin(a5);
  a10=(a4*a10);
  a1=(a1-a10);
  a8=(a8*a1);
  a6=(a6+a8);
  a8=cos(a2);
  a8=(a9*a8);
  a1=cos(a12);
  a1=(a14*a1);
  a10=sin(a12);
  a10=(a11*a10);
  a1=(a1+a10);
  a8=(a8*a1);
  a6=(a6-a8);
  a3=sin(a3);
  a0=(a0*a3);
  a3=cos(a5);
  a4=(a4*a3);
  a5=sin(a5);
  a7=(a7*a5);
  a4=(a4+a7);
  a0=(a0*a4);
  a6=(a6+a0);
  a2=sin(a2);
  a9=(a9*a2);
  a2=cos(a12);
  a11=(a11*a2);
  a12=sin(a12);
  a14=(a14*a12);
  a11=(a11-a14);
  a9=(a9*a11);
  a6=(a6-a9);
  if (res[0]!=0) res[0][3]=a6;
  return 0;
}

CASADI_SYMBOL_EXPORT int fr_leg_pos_constr_h_e_fun(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem){
  return casadi_f0(arg, res, iw, w, mem);
}

CASADI_SYMBOL_EXPORT int fr_leg_pos_constr_h_e_fun_alloc_mem(void) {
  return 0;
}

CASADI_SYMBOL_EXPORT int fr_leg_pos_constr_h_e_fun_init_mem(int mem) {
  return 0;
}

CASADI_SYMBOL_EXPORT void fr_leg_pos_constr_h_e_fun_free_mem(int mem) {
}

CASADI_SYMBOL_EXPORT int fr_leg_pos_constr_h_e_fun_checkout(void) {
  return 0;
}

CASADI_SYMBOL_EXPORT void fr_leg_pos_constr_h_e_fun_release(int mem) {
}

CASADI_SYMBOL_EXPORT void fr_leg_pos_constr_h_e_fun_incref(void) {
}

CASADI_SYMBOL_EXPORT void fr_leg_pos_constr_h_e_fun_decref(void) {
}

CASADI_SYMBOL_EXPORT casadi_int fr_leg_pos_constr_h_e_fun_n_in(void) { return 2;}

CASADI_SYMBOL_EXPORT casadi_int fr_leg_pos_constr_h_e_fun_n_out(void) { return 1;}

CASADI_SYMBOL_EXPORT casadi_real fr_leg_pos_constr_h_e_fun_default_in(casadi_int i){
  switch (i) {
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const char* fr_leg_pos_constr_h_e_fun_name_in(casadi_int i){
  switch (i) {
    case 0: return "i0";
    case 1: return "i1";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const char* fr_leg_pos_constr_h_e_fun_name_out(casadi_int i){
  switch (i) {
    case 0: return "o0";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* fr_leg_pos_constr_h_e_fun_sparsity_in(casadi_int i) {
  switch (i) {
    case 0: return casadi_s0;
    case 1: return casadi_s1;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* fr_leg_pos_constr_h_e_fun_sparsity_out(casadi_int i) {
  switch (i) {
    case 0: return casadi_s2;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT int fr_leg_pos_constr_h_e_fun_work(casadi_int *sz_arg, casadi_int* sz_res, casadi_int *sz_iw, casadi_int *sz_w) {
  if (sz_arg) *sz_arg = 2;
  if (sz_res) *sz_res = 1;
  if (sz_iw) *sz_iw = 0;
  if (sz_w) *sz_w = 0;
  return 0;
}


#ifdef __cplusplus
} /* extern "C" */
#endif
