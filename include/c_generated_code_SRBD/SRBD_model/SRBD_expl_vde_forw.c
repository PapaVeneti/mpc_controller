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
  #define CASADI_PREFIX(ID) SRBD_expl_vde_forw_ ## ID
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

static const casadi_int casadi_s0[11] = {7, 1, 0, 7, 0, 1, 2, 3, 4, 5, 6};
static const casadi_int casadi_s1[59] = {7, 7, 0, 7, 14, 21, 28, 35, 42, 49, 0, 1, 2, 3, 4, 5, 6, 0, 1, 2, 3, 4, 5, 6, 0, 1, 2, 3, 4, 5, 6, 0, 1, 2, 3, 4, 5, 6, 0, 1, 2, 3, 4, 5, 6, 0, 1, 2, 3, 4, 5, 6, 0, 1, 2, 3, 4, 5, 6};
static const casadi_int casadi_s2[27] = {7, 3, 0, 7, 14, 21, 0, 1, 2, 3, 4, 5, 6, 0, 1, 2, 3, 4, 5, 6, 0, 1, 2, 3, 4, 5, 6};
static const casadi_int casadi_s3[7] = {3, 1, 0, 3, 0, 1, 2};
static const casadi_int casadi_s4[8] = {4, 1, 0, 4, 0, 1, 2, 3};

/* SRBD_expl_vde_forw:(i0[7],i1[7x7],i2[7x3],i3[3],i4[4])->(o0[7],o1[7x7],o2[7x3]) */
static int casadi_f0(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem) {
  casadi_real a0, a1, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a2, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a3, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39, a4, a40, a41, a42, a43, a44, a5, a6, a7, a8, a9;
  a0=5.0000000000000000e-01;
  a1=arg[0]? arg[0][4] : 0;
  a2=(a0*a1);
  a3=arg[0]? arg[0][1] : 0;
  a4=(a2*a3);
  a5=arg[0]? arg[0][5] : 0;
  a6=(a0*a5);
  a7=arg[0]? arg[0][2] : 0;
  a8=(a6*a7);
  a4=(a4+a8);
  a8=arg[0]? arg[0][6] : 0;
  a9=(a0*a8);
  a10=arg[0]? arg[0][3] : 0;
  a11=(a9*a10);
  a4=(a4+a11);
  a4=(-a4);
  if (res[0]!=0) res[0][0]=a4;
  a4=(a0*a1);
  a11=arg[0]? arg[0][0] : 0;
  a12=(a4*a11);
  a13=(a0*a8);
  a14=(a13*a7);
  a12=(a12+a14);
  a14=(a0*a5);
  a15=(a14*a10);
  a12=(a12-a15);
  if (res[0]!=0) res[0][1]=a12;
  a12=(a0*a5);
  a15=(a12*a11);
  a16=(a0*a8);
  a17=(a16*a3);
  a15=(a15-a17);
  a17=(a0*a1);
  a18=(a17*a10);
  a15=(a15+a18);
  if (res[0]!=0) res[0][2]=a15;
  a15=(a0*a8);
  a18=(a15*a11);
  a19=(a0*a5);
  a20=(a19*a3);
  a18=(a18+a20);
  a20=(a0*a1);
  a21=(a20*a7);
  a18=(a18-a21);
  if (res[0]!=0) res[0][3]=a18;
  a18=1.7427481228496535e+00;
  a21=arg[3]? arg[3][0] : 0;
  a22=-1.1122100000000000e-03;
  a23=(a22*a1);
  a24=1.6787099999999999e-04;
  a25=(a24*a5);
  a23=(a23+a25);
  a25=9.5574599999999998e-01;
  a26=(a25*a8);
  a23=(a23+a26);
  a26=(a5*a23);
  a27=-1.1292800000000001e-03;
  a28=(a27*a1);
  a29=9.6511999999999998e-01;
  a30=(a29*a5);
  a28=(a28+a30);
  a30=(a24*a8);
  a28=(a28+a30);
  a30=(a8*a28);
  a26=(a26-a30);
  a21=(a21-a26);
  a26=(a18*a21);
  a30=2.0388244045223499e-03;
  a31=arg[3]? arg[3][1] : 0;
  a32=5.7380900000000001e-01;
  a33=(a32*a1);
  a34=(a27*a5);
  a33=(a33+a34);
  a34=(a22*a8);
  a33=(a33+a34);
  a34=(a8*a33);
  a35=(a1*a23);
  a34=(a34-a35);
  a31=(a31-a34);
  a34=(a30*a31);
  a26=(a26+a34);
  a34=2.0276931634796293e-03;
  a35=arg[3]? arg[3][2] : 0;
  a36=(a1*a28);
  a37=(a5*a33);
  a36=(a36-a37);
  a35=(a35-a36);
  a36=(a34*a35);
  a26=(a26+a36);
  if (res[0]!=0) res[0][4]=a26;
  a26=(a30*a21);
  a36=1.0361430004108854e+00;
  a37=(a36*a31);
  a26=(a26+a37);
  a37=-1.7961964866295221e-04;
  a38=(a37*a35);
  a26=(a26+a38);
  if (res[0]!=0) res[0][5]=a26;
  a21=(a34*a21);
  a31=(a37*a31);
  a21=(a21+a31);
  a31=1.0463054884598455e+00;
  a35=(a31*a35);
  a21=(a21+a35);
  if (res[0]!=0) res[0][6]=a21;
  a21=arg[1]? arg[1][4] : 0;
  a35=(a0*a21);
  a35=(a3*a35);
  a26=arg[1]? arg[1][1] : 0;
  a38=(a2*a26);
  a35=(a35+a38);
  a38=arg[1]? arg[1][5] : 0;
  a39=(a0*a38);
  a39=(a7*a39);
  a40=arg[1]? arg[1][2] : 0;
  a41=(a6*a40);
  a39=(a39+a41);
  a35=(a35+a39);
  a39=arg[1]? arg[1][6] : 0;
  a41=(a0*a39);
  a41=(a10*a41);
  a42=arg[1]? arg[1][3] : 0;
  a43=(a9*a42);
  a41=(a41+a43);
  a35=(a35+a41);
  a35=(-a35);
  if (res[1]!=0) res[1][0]=a35;
  a35=(a0*a21);
  a35=(a11*a35);
  a41=arg[1]? arg[1][0] : 0;
  a43=(a4*a41);
  a35=(a35+a43);
  a43=(a0*a39);
  a43=(a7*a43);
  a44=(a13*a40);
  a43=(a43+a44);
  a35=(a35+a43);
  a43=(a0*a38);
  a43=(a10*a43);
  a44=(a14*a42);
  a43=(a43+a44);
  a35=(a35-a43);
  if (res[1]!=0) res[1][1]=a35;
  a35=(a0*a38);
  a35=(a11*a35);
  a43=(a12*a41);
  a35=(a35+a43);
  a43=(a0*a39);
  a43=(a3*a43);
  a44=(a16*a26);
  a43=(a43+a44);
  a35=(a35-a43);
  a43=(a0*a21);
  a43=(a10*a43);
  a42=(a17*a42);
  a43=(a43+a42);
  a35=(a35+a43);
  if (res[1]!=0) res[1][2]=a35;
  a35=(a0*a39);
  a35=(a11*a35);
  a41=(a15*a41);
  a35=(a35+a41);
  a41=(a0*a38);
  a41=(a3*a41);
  a26=(a19*a26);
  a41=(a41+a26);
  a35=(a35+a41);
  a41=(a0*a21);
  a41=(a7*a41);
  a40=(a20*a40);
  a41=(a41+a40);
  a35=(a35-a41);
  if (res[1]!=0) res[1][3]=a35;
  a35=(a23*a38);
  a41=(a22*a21);
  a40=(a24*a38);
  a41=(a41+a40);
  a40=(a25*a39);
  a41=(a41+a40);
  a40=(a5*a41);
  a35=(a35+a40);
  a40=(a28*a39);
  a26=(a27*a21);
  a43=(a29*a38);
  a26=(a26+a43);
  a43=(a24*a39);
  a26=(a26+a43);
  a43=(a8*a26);
  a40=(a40+a43);
  a35=(a35-a40);
  a40=(a18*a35);
  a43=(a33*a39);
  a42=(a32*a21);
  a44=(a27*a38);
  a42=(a42+a44);
  a39=(a22*a39);
  a42=(a42+a39);
  a39=(a8*a42);
  a43=(a43+a39);
  a39=(a23*a21);
  a41=(a1*a41);
  a39=(a39+a41);
  a43=(a43-a39);
  a39=(a30*a43);
  a40=(a40+a39);
  a21=(a28*a21);
  a26=(a1*a26);
  a21=(a21+a26);
  a38=(a33*a38);
  a42=(a5*a42);
  a38=(a38+a42);
  a21=(a21-a38);
  a38=(a34*a21);
  a40=(a40+a38);
  a40=(-a40);
  if (res[1]!=0) res[1][4]=a40;
  a40=(a30*a35);
  a38=(a36*a43);
  a40=(a40+a38);
  a38=(a37*a21);
  a40=(a40+a38);
  a40=(-a40);
  if (res[1]!=0) res[1][5]=a40;
  a35=(a34*a35);
  a43=(a37*a43);
  a35=(a35+a43);
  a21=(a31*a21);
  a35=(a35+a21);
  a35=(-a35);
  if (res[1]!=0) res[1][6]=a35;
  a35=arg[1]? arg[1][11] : 0;
  a21=(a0*a35);
  a21=(a3*a21);
  a43=arg[1]? arg[1][8] : 0;
  a40=(a2*a43);
  a21=(a21+a40);
  a40=arg[1]? arg[1][12] : 0;
  a38=(a0*a40);
  a38=(a7*a38);
  a42=arg[1]? arg[1][9] : 0;
  a26=(a6*a42);
  a38=(a38+a26);
  a21=(a21+a38);
  a38=arg[1]? arg[1][13] : 0;
  a26=(a0*a38);
  a26=(a10*a26);
  a39=arg[1]? arg[1][10] : 0;
  a41=(a9*a39);
  a26=(a26+a41);
  a21=(a21+a26);
  a21=(-a21);
  if (res[1]!=0) res[1][7]=a21;
  a21=(a0*a35);
  a21=(a11*a21);
  a26=arg[1]? arg[1][7] : 0;
  a41=(a4*a26);
  a21=(a21+a41);
  a41=(a0*a38);
  a41=(a7*a41);
  a44=(a13*a42);
  a41=(a41+a44);
  a21=(a21+a41);
  a41=(a0*a40);
  a41=(a10*a41);
  a44=(a14*a39);
  a41=(a41+a44);
  a21=(a21-a41);
  if (res[1]!=0) res[1][8]=a21;
  a21=(a0*a40);
  a21=(a11*a21);
  a41=(a12*a26);
  a21=(a21+a41);
  a41=(a0*a38);
  a41=(a3*a41);
  a44=(a16*a43);
  a41=(a41+a44);
  a21=(a21-a41);
  a41=(a0*a35);
  a41=(a10*a41);
  a39=(a17*a39);
  a41=(a41+a39);
  a21=(a21+a41);
  if (res[1]!=0) res[1][9]=a21;
  a21=(a0*a38);
  a21=(a11*a21);
  a26=(a15*a26);
  a21=(a21+a26);
  a26=(a0*a40);
  a26=(a3*a26);
  a43=(a19*a43);
  a26=(a26+a43);
  a21=(a21+a26);
  a26=(a0*a35);
  a26=(a7*a26);
  a42=(a20*a42);
  a26=(a26+a42);
  a21=(a21-a26);
  if (res[1]!=0) res[1][10]=a21;
  a21=(a23*a40);
  a26=(a22*a35);
  a42=(a24*a40);
  a26=(a26+a42);
  a42=(a25*a38);
  a26=(a26+a42);
  a42=(a5*a26);
  a21=(a21+a42);
  a42=(a28*a38);
  a43=(a27*a35);
  a41=(a29*a40);
  a43=(a43+a41);
  a41=(a24*a38);
  a43=(a43+a41);
  a41=(a8*a43);
  a42=(a42+a41);
  a21=(a21-a42);
  a42=(a18*a21);
  a41=(a33*a38);
  a39=(a32*a35);
  a44=(a27*a40);
  a39=(a39+a44);
  a38=(a22*a38);
  a39=(a39+a38);
  a38=(a8*a39);
  a41=(a41+a38);
  a38=(a23*a35);
  a26=(a1*a26);
  a38=(a38+a26);
  a41=(a41-a38);
  a38=(a30*a41);
  a42=(a42+a38);
  a35=(a28*a35);
  a43=(a1*a43);
  a35=(a35+a43);
  a40=(a33*a40);
  a39=(a5*a39);
  a40=(a40+a39);
  a35=(a35-a40);
  a40=(a34*a35);
  a42=(a42+a40);
  a42=(-a42);
  if (res[1]!=0) res[1][11]=a42;
  a42=(a30*a21);
  a40=(a36*a41);
  a42=(a42+a40);
  a40=(a37*a35);
  a42=(a42+a40);
  a42=(-a42);
  if (res[1]!=0) res[1][12]=a42;
  a21=(a34*a21);
  a41=(a37*a41);
  a21=(a21+a41);
  a35=(a31*a35);
  a21=(a21+a35);
  a21=(-a21);
  if (res[1]!=0) res[1][13]=a21;
  a21=arg[1]? arg[1][18] : 0;
  a35=(a0*a21);
  a35=(a3*a35);
  a41=arg[1]? arg[1][15] : 0;
  a42=(a2*a41);
  a35=(a35+a42);
  a42=arg[1]? arg[1][19] : 0;
  a40=(a0*a42);
  a40=(a7*a40);
  a39=arg[1]? arg[1][16] : 0;
  a43=(a6*a39);
  a40=(a40+a43);
  a35=(a35+a40);
  a40=arg[1]? arg[1][20] : 0;
  a43=(a0*a40);
  a43=(a10*a43);
  a38=arg[1]? arg[1][17] : 0;
  a26=(a9*a38);
  a43=(a43+a26);
  a35=(a35+a43);
  a35=(-a35);
  if (res[1]!=0) res[1][14]=a35;
  a35=(a0*a21);
  a35=(a11*a35);
  a43=arg[1]? arg[1][14] : 0;
  a26=(a4*a43);
  a35=(a35+a26);
  a26=(a0*a40);
  a26=(a7*a26);
  a44=(a13*a39);
  a26=(a26+a44);
  a35=(a35+a26);
  a26=(a0*a42);
  a26=(a10*a26);
  a44=(a14*a38);
  a26=(a26+a44);
  a35=(a35-a26);
  if (res[1]!=0) res[1][15]=a35;
  a35=(a0*a42);
  a35=(a11*a35);
  a26=(a12*a43);
  a35=(a35+a26);
  a26=(a0*a40);
  a26=(a3*a26);
  a44=(a16*a41);
  a26=(a26+a44);
  a35=(a35-a26);
  a26=(a0*a21);
  a26=(a10*a26);
  a38=(a17*a38);
  a26=(a26+a38);
  a35=(a35+a26);
  if (res[1]!=0) res[1][16]=a35;
  a35=(a0*a40);
  a35=(a11*a35);
  a43=(a15*a43);
  a35=(a35+a43);
  a43=(a0*a42);
  a43=(a3*a43);
  a41=(a19*a41);
  a43=(a43+a41);
  a35=(a35+a43);
  a43=(a0*a21);
  a43=(a7*a43);
  a39=(a20*a39);
  a43=(a43+a39);
  a35=(a35-a43);
  if (res[1]!=0) res[1][17]=a35;
  a35=(a23*a42);
  a43=(a22*a21);
  a39=(a24*a42);
  a43=(a43+a39);
  a39=(a25*a40);
  a43=(a43+a39);
  a39=(a5*a43);
  a35=(a35+a39);
  a39=(a28*a40);
  a41=(a27*a21);
  a26=(a29*a42);
  a41=(a41+a26);
  a26=(a24*a40);
  a41=(a41+a26);
  a26=(a8*a41);
  a39=(a39+a26);
  a35=(a35-a39);
  a39=(a18*a35);
  a26=(a33*a40);
  a38=(a32*a21);
  a44=(a27*a42);
  a38=(a38+a44);
  a40=(a22*a40);
  a38=(a38+a40);
  a40=(a8*a38);
  a26=(a26+a40);
  a40=(a23*a21);
  a43=(a1*a43);
  a40=(a40+a43);
  a26=(a26-a40);
  a40=(a30*a26);
  a39=(a39+a40);
  a21=(a28*a21);
  a41=(a1*a41);
  a21=(a21+a41);
  a42=(a33*a42);
  a38=(a5*a38);
  a42=(a42+a38);
  a21=(a21-a42);
  a42=(a34*a21);
  a39=(a39+a42);
  a39=(-a39);
  if (res[1]!=0) res[1][18]=a39;
  a39=(a30*a35);
  a42=(a36*a26);
  a39=(a39+a42);
  a42=(a37*a21);
  a39=(a39+a42);
  a39=(-a39);
  if (res[1]!=0) res[1][19]=a39;
  a35=(a34*a35);
  a26=(a37*a26);
  a35=(a35+a26);
  a21=(a31*a21);
  a35=(a35+a21);
  a35=(-a35);
  if (res[1]!=0) res[1][20]=a35;
  a35=arg[1]? arg[1][25] : 0;
  a21=(a0*a35);
  a21=(a3*a21);
  a26=arg[1]? arg[1][22] : 0;
  a39=(a2*a26);
  a21=(a21+a39);
  a39=arg[1]? arg[1][26] : 0;
  a42=(a0*a39);
  a42=(a7*a42);
  a38=arg[1]? arg[1][23] : 0;
  a41=(a6*a38);
  a42=(a42+a41);
  a21=(a21+a42);
  a42=arg[1]? arg[1][27] : 0;
  a41=(a0*a42);
  a41=(a10*a41);
  a40=arg[1]? arg[1][24] : 0;
  a43=(a9*a40);
  a41=(a41+a43);
  a21=(a21+a41);
  a21=(-a21);
  if (res[1]!=0) res[1][21]=a21;
  a21=(a0*a35);
  a21=(a11*a21);
  a41=arg[1]? arg[1][21] : 0;
  a43=(a4*a41);
  a21=(a21+a43);
  a43=(a0*a42);
  a43=(a7*a43);
  a44=(a13*a38);
  a43=(a43+a44);
  a21=(a21+a43);
  a43=(a0*a39);
  a43=(a10*a43);
  a44=(a14*a40);
  a43=(a43+a44);
  a21=(a21-a43);
  if (res[1]!=0) res[1][22]=a21;
  a21=(a0*a39);
  a21=(a11*a21);
  a43=(a12*a41);
  a21=(a21+a43);
  a43=(a0*a42);
  a43=(a3*a43);
  a44=(a16*a26);
  a43=(a43+a44);
  a21=(a21-a43);
  a43=(a0*a35);
  a43=(a10*a43);
  a40=(a17*a40);
  a43=(a43+a40);
  a21=(a21+a43);
  if (res[1]!=0) res[1][23]=a21;
  a21=(a0*a42);
  a21=(a11*a21);
  a41=(a15*a41);
  a21=(a21+a41);
  a41=(a0*a39);
  a41=(a3*a41);
  a26=(a19*a26);
  a41=(a41+a26);
  a21=(a21+a41);
  a41=(a0*a35);
  a41=(a7*a41);
  a38=(a20*a38);
  a41=(a41+a38);
  a21=(a21-a41);
  if (res[1]!=0) res[1][24]=a21;
  a21=(a23*a39);
  a41=(a22*a35);
  a38=(a24*a39);
  a41=(a41+a38);
  a38=(a25*a42);
  a41=(a41+a38);
  a38=(a5*a41);
  a21=(a21+a38);
  a38=(a28*a42);
  a26=(a27*a35);
  a43=(a29*a39);
  a26=(a26+a43);
  a43=(a24*a42);
  a26=(a26+a43);
  a43=(a8*a26);
  a38=(a38+a43);
  a21=(a21-a38);
  a38=(a18*a21);
  a43=(a33*a42);
  a40=(a32*a35);
  a44=(a27*a39);
  a40=(a40+a44);
  a42=(a22*a42);
  a40=(a40+a42);
  a42=(a8*a40);
  a43=(a43+a42);
  a42=(a23*a35);
  a41=(a1*a41);
  a42=(a42+a41);
  a43=(a43-a42);
  a42=(a30*a43);
  a38=(a38+a42);
  a35=(a28*a35);
  a26=(a1*a26);
  a35=(a35+a26);
  a39=(a33*a39);
  a40=(a5*a40);
  a39=(a39+a40);
  a35=(a35-a39);
  a39=(a34*a35);
  a38=(a38+a39);
  a38=(-a38);
  if (res[1]!=0) res[1][25]=a38;
  a38=(a30*a21);
  a39=(a36*a43);
  a38=(a38+a39);
  a39=(a37*a35);
  a38=(a38+a39);
  a38=(-a38);
  if (res[1]!=0) res[1][26]=a38;
  a21=(a34*a21);
  a43=(a37*a43);
  a21=(a21+a43);
  a35=(a31*a35);
  a21=(a21+a35);
  a21=(-a21);
  if (res[1]!=0) res[1][27]=a21;
  a21=arg[1]? arg[1][32] : 0;
  a35=(a0*a21);
  a35=(a3*a35);
  a43=arg[1]? arg[1][29] : 0;
  a38=(a2*a43);
  a35=(a35+a38);
  a38=arg[1]? arg[1][33] : 0;
  a39=(a0*a38);
  a39=(a7*a39);
  a40=arg[1]? arg[1][30] : 0;
  a26=(a6*a40);
  a39=(a39+a26);
  a35=(a35+a39);
  a39=arg[1]? arg[1][34] : 0;
  a26=(a0*a39);
  a26=(a10*a26);
  a42=arg[1]? arg[1][31] : 0;
  a41=(a9*a42);
  a26=(a26+a41);
  a35=(a35+a26);
  a35=(-a35);
  if (res[1]!=0) res[1][28]=a35;
  a35=(a0*a21);
  a35=(a11*a35);
  a26=arg[1]? arg[1][28] : 0;
  a41=(a4*a26);
  a35=(a35+a41);
  a41=(a0*a39);
  a41=(a7*a41);
  a44=(a13*a40);
  a41=(a41+a44);
  a35=(a35+a41);
  a41=(a0*a38);
  a41=(a10*a41);
  a44=(a14*a42);
  a41=(a41+a44);
  a35=(a35-a41);
  if (res[1]!=0) res[1][29]=a35;
  a35=(a0*a38);
  a35=(a11*a35);
  a41=(a12*a26);
  a35=(a35+a41);
  a41=(a0*a39);
  a41=(a3*a41);
  a44=(a16*a43);
  a41=(a41+a44);
  a35=(a35-a41);
  a41=(a0*a21);
  a41=(a10*a41);
  a42=(a17*a42);
  a41=(a41+a42);
  a35=(a35+a41);
  if (res[1]!=0) res[1][30]=a35;
  a35=(a0*a39);
  a35=(a11*a35);
  a26=(a15*a26);
  a35=(a35+a26);
  a26=(a0*a38);
  a26=(a3*a26);
  a43=(a19*a43);
  a26=(a26+a43);
  a35=(a35+a26);
  a26=(a0*a21);
  a26=(a7*a26);
  a40=(a20*a40);
  a26=(a26+a40);
  a35=(a35-a26);
  if (res[1]!=0) res[1][31]=a35;
  a35=(a23*a38);
  a26=(a22*a21);
  a40=(a24*a38);
  a26=(a26+a40);
  a40=(a25*a39);
  a26=(a26+a40);
  a40=(a5*a26);
  a35=(a35+a40);
  a40=(a28*a39);
  a43=(a27*a21);
  a41=(a29*a38);
  a43=(a43+a41);
  a41=(a24*a39);
  a43=(a43+a41);
  a41=(a8*a43);
  a40=(a40+a41);
  a35=(a35-a40);
  a40=(a18*a35);
  a41=(a33*a39);
  a42=(a32*a21);
  a44=(a27*a38);
  a42=(a42+a44);
  a39=(a22*a39);
  a42=(a42+a39);
  a39=(a8*a42);
  a41=(a41+a39);
  a39=(a23*a21);
  a26=(a1*a26);
  a39=(a39+a26);
  a41=(a41-a39);
  a39=(a30*a41);
  a40=(a40+a39);
  a21=(a28*a21);
  a43=(a1*a43);
  a21=(a21+a43);
  a38=(a33*a38);
  a42=(a5*a42);
  a38=(a38+a42);
  a21=(a21-a38);
  a38=(a34*a21);
  a40=(a40+a38);
  a40=(-a40);
  if (res[1]!=0) res[1][32]=a40;
  a40=(a30*a35);
  a38=(a36*a41);
  a40=(a40+a38);
  a38=(a37*a21);
  a40=(a40+a38);
  a40=(-a40);
  if (res[1]!=0) res[1][33]=a40;
  a35=(a34*a35);
  a41=(a37*a41);
  a35=(a35+a41);
  a21=(a31*a21);
  a35=(a35+a21);
  a35=(-a35);
  if (res[1]!=0) res[1][34]=a35;
  a35=arg[1]? arg[1][39] : 0;
  a21=(a0*a35);
  a21=(a3*a21);
  a41=arg[1]? arg[1][36] : 0;
  a40=(a2*a41);
  a21=(a21+a40);
  a40=arg[1]? arg[1][40] : 0;
  a38=(a0*a40);
  a38=(a7*a38);
  a42=arg[1]? arg[1][37] : 0;
  a43=(a6*a42);
  a38=(a38+a43);
  a21=(a21+a38);
  a38=arg[1]? arg[1][41] : 0;
  a43=(a0*a38);
  a43=(a10*a43);
  a39=arg[1]? arg[1][38] : 0;
  a26=(a9*a39);
  a43=(a43+a26);
  a21=(a21+a43);
  a21=(-a21);
  if (res[1]!=0) res[1][35]=a21;
  a21=(a0*a35);
  a21=(a11*a21);
  a43=arg[1]? arg[1][35] : 0;
  a26=(a4*a43);
  a21=(a21+a26);
  a26=(a0*a38);
  a26=(a7*a26);
  a44=(a13*a42);
  a26=(a26+a44);
  a21=(a21+a26);
  a26=(a0*a40);
  a26=(a10*a26);
  a44=(a14*a39);
  a26=(a26+a44);
  a21=(a21-a26);
  if (res[1]!=0) res[1][36]=a21;
  a21=(a0*a40);
  a21=(a11*a21);
  a26=(a12*a43);
  a21=(a21+a26);
  a26=(a0*a38);
  a26=(a3*a26);
  a44=(a16*a41);
  a26=(a26+a44);
  a21=(a21-a26);
  a26=(a0*a35);
  a26=(a10*a26);
  a39=(a17*a39);
  a26=(a26+a39);
  a21=(a21+a26);
  if (res[1]!=0) res[1][37]=a21;
  a21=(a0*a38);
  a21=(a11*a21);
  a43=(a15*a43);
  a21=(a21+a43);
  a43=(a0*a40);
  a43=(a3*a43);
  a41=(a19*a41);
  a43=(a43+a41);
  a21=(a21+a43);
  a43=(a0*a35);
  a43=(a7*a43);
  a42=(a20*a42);
  a43=(a43+a42);
  a21=(a21-a43);
  if (res[1]!=0) res[1][38]=a21;
  a21=(a23*a40);
  a43=(a22*a35);
  a42=(a24*a40);
  a43=(a43+a42);
  a42=(a25*a38);
  a43=(a43+a42);
  a42=(a5*a43);
  a21=(a21+a42);
  a42=(a28*a38);
  a41=(a27*a35);
  a26=(a29*a40);
  a41=(a41+a26);
  a26=(a24*a38);
  a41=(a41+a26);
  a26=(a8*a41);
  a42=(a42+a26);
  a21=(a21-a42);
  a42=(a18*a21);
  a26=(a33*a38);
  a39=(a32*a35);
  a44=(a27*a40);
  a39=(a39+a44);
  a38=(a22*a38);
  a39=(a39+a38);
  a38=(a8*a39);
  a26=(a26+a38);
  a38=(a23*a35);
  a43=(a1*a43);
  a38=(a38+a43);
  a26=(a26-a38);
  a38=(a30*a26);
  a42=(a42+a38);
  a35=(a28*a35);
  a41=(a1*a41);
  a35=(a35+a41);
  a40=(a33*a40);
  a39=(a5*a39);
  a40=(a40+a39);
  a35=(a35-a40);
  a40=(a34*a35);
  a42=(a42+a40);
  a42=(-a42);
  if (res[1]!=0) res[1][39]=a42;
  a42=(a30*a21);
  a40=(a36*a26);
  a42=(a42+a40);
  a40=(a37*a35);
  a42=(a42+a40);
  a42=(-a42);
  if (res[1]!=0) res[1][40]=a42;
  a21=(a34*a21);
  a26=(a37*a26);
  a21=(a21+a26);
  a35=(a31*a35);
  a21=(a21+a35);
  a21=(-a21);
  if (res[1]!=0) res[1][41]=a21;
  a21=arg[1]? arg[1][46] : 0;
  a35=(a0*a21);
  a35=(a3*a35);
  a26=arg[1]? arg[1][43] : 0;
  a42=(a2*a26);
  a35=(a35+a42);
  a42=arg[1]? arg[1][47] : 0;
  a40=(a0*a42);
  a40=(a7*a40);
  a39=arg[1]? arg[1][44] : 0;
  a41=(a6*a39);
  a40=(a40+a41);
  a35=(a35+a40);
  a40=arg[1]? arg[1][48] : 0;
  a41=(a0*a40);
  a41=(a10*a41);
  a38=arg[1]? arg[1][45] : 0;
  a43=(a9*a38);
  a41=(a41+a43);
  a35=(a35+a41);
  a35=(-a35);
  if (res[1]!=0) res[1][42]=a35;
  a35=(a0*a21);
  a35=(a11*a35);
  a41=arg[1]? arg[1][42] : 0;
  a43=(a4*a41);
  a35=(a35+a43);
  a43=(a0*a40);
  a43=(a7*a43);
  a44=(a13*a39);
  a43=(a43+a44);
  a35=(a35+a43);
  a43=(a0*a42);
  a43=(a10*a43);
  a44=(a14*a38);
  a43=(a43+a44);
  a35=(a35-a43);
  if (res[1]!=0) res[1][43]=a35;
  a35=(a0*a42);
  a35=(a11*a35);
  a43=(a12*a41);
  a35=(a35+a43);
  a43=(a0*a40);
  a43=(a3*a43);
  a44=(a16*a26);
  a43=(a43+a44);
  a35=(a35-a43);
  a43=(a0*a21);
  a43=(a10*a43);
  a38=(a17*a38);
  a43=(a43+a38);
  a35=(a35+a43);
  if (res[1]!=0) res[1][44]=a35;
  a35=(a0*a40);
  a35=(a11*a35);
  a41=(a15*a41);
  a35=(a35+a41);
  a41=(a0*a42);
  a41=(a3*a41);
  a26=(a19*a26);
  a41=(a41+a26);
  a35=(a35+a41);
  a41=(a0*a21);
  a41=(a7*a41);
  a39=(a20*a39);
  a41=(a41+a39);
  a35=(a35-a41);
  if (res[1]!=0) res[1][45]=a35;
  a35=(a23*a42);
  a41=(a22*a21);
  a39=(a24*a42);
  a41=(a41+a39);
  a39=(a25*a40);
  a41=(a41+a39);
  a39=(a5*a41);
  a35=(a35+a39);
  a39=(a28*a40);
  a26=(a27*a21);
  a43=(a29*a42);
  a26=(a26+a43);
  a43=(a24*a40);
  a26=(a26+a43);
  a43=(a8*a26);
  a39=(a39+a43);
  a35=(a35-a39);
  a39=(a18*a35);
  a43=(a33*a40);
  a38=(a32*a21);
  a44=(a27*a42);
  a38=(a38+a44);
  a40=(a22*a40);
  a38=(a38+a40);
  a40=(a8*a38);
  a43=(a43+a40);
  a40=(a23*a21);
  a41=(a1*a41);
  a40=(a40+a41);
  a43=(a43-a40);
  a40=(a30*a43);
  a39=(a39+a40);
  a21=(a28*a21);
  a26=(a1*a26);
  a21=(a21+a26);
  a42=(a33*a42);
  a38=(a5*a38);
  a42=(a42+a38);
  a21=(a21-a42);
  a42=(a34*a21);
  a39=(a39+a42);
  a39=(-a39);
  if (res[1]!=0) res[1][46]=a39;
  a39=(a30*a35);
  a42=(a36*a43);
  a39=(a39+a42);
  a42=(a37*a21);
  a39=(a39+a42);
  a39=(-a39);
  if (res[1]!=0) res[1][47]=a39;
  a35=(a34*a35);
  a43=(a37*a43);
  a35=(a35+a43);
  a21=(a31*a21);
  a35=(a35+a21);
  a35=(-a35);
  if (res[1]!=0) res[1][48]=a35;
  a35=arg[2]? arg[2][4] : 0;
  a21=(a0*a35);
  a21=(a3*a21);
  a43=arg[2]? arg[2][1] : 0;
  a39=(a2*a43);
  a21=(a21+a39);
  a39=arg[2]? arg[2][5] : 0;
  a42=(a0*a39);
  a42=(a7*a42);
  a38=arg[2]? arg[2][2] : 0;
  a26=(a6*a38);
  a42=(a42+a26);
  a21=(a21+a42);
  a42=arg[2]? arg[2][6] : 0;
  a26=(a0*a42);
  a26=(a10*a26);
  a40=arg[2]? arg[2][3] : 0;
  a41=(a9*a40);
  a26=(a26+a41);
  a21=(a21+a26);
  a21=(-a21);
  if (res[2]!=0) res[2][0]=a21;
  a21=(a0*a35);
  a21=(a11*a21);
  a26=arg[2]? arg[2][0] : 0;
  a41=(a4*a26);
  a21=(a21+a41);
  a41=(a0*a42);
  a41=(a7*a41);
  a44=(a13*a38);
  a41=(a41+a44);
  a21=(a21+a41);
  a41=(a0*a39);
  a41=(a10*a41);
  a44=(a14*a40);
  a41=(a41+a44);
  a21=(a21-a41);
  if (res[2]!=0) res[2][1]=a21;
  a21=(a0*a39);
  a21=(a11*a21);
  a41=(a12*a26);
  a21=(a21+a41);
  a41=(a0*a42);
  a41=(a3*a41);
  a44=(a16*a43);
  a41=(a41+a44);
  a21=(a21-a41);
  a41=(a0*a35);
  a41=(a10*a41);
  a40=(a17*a40);
  a41=(a41+a40);
  a21=(a21+a41);
  if (res[2]!=0) res[2][2]=a21;
  a21=(a0*a42);
  a21=(a11*a21);
  a26=(a15*a26);
  a21=(a21+a26);
  a26=(a0*a39);
  a26=(a3*a26);
  a43=(a19*a43);
  a26=(a26+a43);
  a21=(a21+a26);
  a26=(a0*a35);
  a26=(a7*a26);
  a38=(a20*a38);
  a26=(a26+a38);
  a21=(a21-a26);
  if (res[2]!=0) res[2][3]=a21;
  a21=(a23*a39);
  a26=(a22*a35);
  a38=(a24*a39);
  a26=(a26+a38);
  a38=(a25*a42);
  a26=(a26+a38);
  a38=(a5*a26);
  a21=(a21+a38);
  a38=(a28*a42);
  a43=(a27*a35);
  a41=(a29*a39);
  a43=(a43+a41);
  a41=(a24*a42);
  a43=(a43+a41);
  a41=(a8*a43);
  a38=(a38+a41);
  a21=(a21-a38);
  a38=(a18*a21);
  a41=(a33*a42);
  a40=(a32*a35);
  a44=(a27*a39);
  a40=(a40+a44);
  a42=(a22*a42);
  a40=(a40+a42);
  a42=(a8*a40);
  a41=(a41+a42);
  a42=(a23*a35);
  a26=(a1*a26);
  a42=(a42+a26);
  a41=(a41-a42);
  a42=(a30*a41);
  a38=(a38+a42);
  a35=(a28*a35);
  a43=(a1*a43);
  a35=(a35+a43);
  a39=(a33*a39);
  a40=(a5*a40);
  a39=(a39+a40);
  a35=(a35-a39);
  a39=(a34*a35);
  a38=(a38+a39);
  a38=(a18-a38);
  if (res[2]!=0) res[2][4]=a38;
  a38=(a30*a21);
  a39=(a36*a41);
  a38=(a38+a39);
  a39=(a37*a35);
  a38=(a38+a39);
  a38=(a30-a38);
  if (res[2]!=0) res[2][5]=a38;
  a21=(a34*a21);
  a41=(a37*a41);
  a21=(a21+a41);
  a35=(a31*a35);
  a21=(a21+a35);
  a21=(a34-a21);
  if (res[2]!=0) res[2][6]=a21;
  a21=arg[2]? arg[2][11] : 0;
  a35=(a0*a21);
  a35=(a3*a35);
  a41=arg[2]? arg[2][8] : 0;
  a38=(a2*a41);
  a35=(a35+a38);
  a38=arg[2]? arg[2][12] : 0;
  a39=(a0*a38);
  a39=(a7*a39);
  a40=arg[2]? arg[2][9] : 0;
  a43=(a6*a40);
  a39=(a39+a43);
  a35=(a35+a39);
  a39=arg[2]? arg[2][13] : 0;
  a43=(a0*a39);
  a43=(a10*a43);
  a42=arg[2]? arg[2][10] : 0;
  a26=(a9*a42);
  a43=(a43+a26);
  a35=(a35+a43);
  a35=(-a35);
  if (res[2]!=0) res[2][7]=a35;
  a35=(a0*a21);
  a35=(a11*a35);
  a43=arg[2]? arg[2][7] : 0;
  a26=(a4*a43);
  a35=(a35+a26);
  a26=(a0*a39);
  a26=(a7*a26);
  a44=(a13*a40);
  a26=(a26+a44);
  a35=(a35+a26);
  a26=(a0*a38);
  a26=(a10*a26);
  a44=(a14*a42);
  a26=(a26+a44);
  a35=(a35-a26);
  if (res[2]!=0) res[2][8]=a35;
  a35=(a0*a38);
  a35=(a11*a35);
  a26=(a12*a43);
  a35=(a35+a26);
  a26=(a0*a39);
  a26=(a3*a26);
  a44=(a16*a41);
  a26=(a26+a44);
  a35=(a35-a26);
  a26=(a0*a21);
  a26=(a10*a26);
  a42=(a17*a42);
  a26=(a26+a42);
  a35=(a35+a26);
  if (res[2]!=0) res[2][9]=a35;
  a35=(a0*a39);
  a35=(a11*a35);
  a43=(a15*a43);
  a35=(a35+a43);
  a43=(a0*a38);
  a43=(a3*a43);
  a41=(a19*a41);
  a43=(a43+a41);
  a35=(a35+a43);
  a43=(a0*a21);
  a43=(a7*a43);
  a40=(a20*a40);
  a43=(a43+a40);
  a35=(a35-a43);
  if (res[2]!=0) res[2][10]=a35;
  a35=(a23*a38);
  a43=(a22*a21);
  a40=(a24*a38);
  a43=(a43+a40);
  a40=(a25*a39);
  a43=(a43+a40);
  a40=(a5*a43);
  a35=(a35+a40);
  a40=(a28*a39);
  a41=(a27*a21);
  a26=(a29*a38);
  a41=(a41+a26);
  a26=(a24*a39);
  a41=(a41+a26);
  a26=(a8*a41);
  a40=(a40+a26);
  a35=(a35-a40);
  a40=(a18*a35);
  a26=(a33*a39);
  a42=(a32*a21);
  a44=(a27*a38);
  a42=(a42+a44);
  a39=(a22*a39);
  a42=(a42+a39);
  a39=(a8*a42);
  a26=(a26+a39);
  a39=(a23*a21);
  a43=(a1*a43);
  a39=(a39+a43);
  a26=(a26-a39);
  a39=(a30*a26);
  a40=(a40+a39);
  a21=(a28*a21);
  a41=(a1*a41);
  a21=(a21+a41);
  a38=(a33*a38);
  a42=(a5*a42);
  a38=(a38+a42);
  a21=(a21-a38);
  a38=(a34*a21);
  a40=(a40+a38);
  a40=(a30-a40);
  if (res[2]!=0) res[2][11]=a40;
  a40=(a30*a35);
  a38=(a36*a26);
  a40=(a40+a38);
  a38=(a37*a21);
  a40=(a40+a38);
  a40=(a36-a40);
  if (res[2]!=0) res[2][12]=a40;
  a35=(a34*a35);
  a26=(a37*a26);
  a35=(a35+a26);
  a21=(a31*a21);
  a35=(a35+a21);
  a35=(a37-a35);
  if (res[2]!=0) res[2][13]=a35;
  a35=arg[2]? arg[2][18] : 0;
  a21=(a0*a35);
  a21=(a3*a21);
  a26=arg[2]? arg[2][15] : 0;
  a2=(a2*a26);
  a21=(a21+a2);
  a2=arg[2]? arg[2][19] : 0;
  a40=(a0*a2);
  a40=(a7*a40);
  a38=arg[2]? arg[2][16] : 0;
  a6=(a6*a38);
  a40=(a40+a6);
  a21=(a21+a40);
  a40=arg[2]? arg[2][20] : 0;
  a6=(a0*a40);
  a6=(a10*a6);
  a42=arg[2]? arg[2][17] : 0;
  a9=(a9*a42);
  a6=(a6+a9);
  a21=(a21+a6);
  a21=(-a21);
  if (res[2]!=0) res[2][14]=a21;
  a21=(a0*a35);
  a21=(a11*a21);
  a6=arg[2]? arg[2][14] : 0;
  a4=(a4*a6);
  a21=(a21+a4);
  a4=(a0*a40);
  a4=(a7*a4);
  a13=(a13*a38);
  a4=(a4+a13);
  a21=(a21+a4);
  a4=(a0*a2);
  a4=(a10*a4);
  a14=(a14*a42);
  a4=(a4+a14);
  a21=(a21-a4);
  if (res[2]!=0) res[2][15]=a21;
  a21=(a0*a2);
  a21=(a11*a21);
  a12=(a12*a6);
  a21=(a21+a12);
  a12=(a0*a40);
  a12=(a3*a12);
  a16=(a16*a26);
  a12=(a12+a16);
  a21=(a21-a12);
  a12=(a0*a35);
  a10=(a10*a12);
  a17=(a17*a42);
  a10=(a10+a17);
  a21=(a21+a10);
  if (res[2]!=0) res[2][16]=a21;
  a21=(a0*a40);
  a11=(a11*a21);
  a15=(a15*a6);
  a11=(a11+a15);
  a15=(a0*a2);
  a3=(a3*a15);
  a19=(a19*a26);
  a3=(a3+a19);
  a11=(a11+a3);
  a0=(a0*a35);
  a7=(a7*a0);
  a20=(a20*a38);
  a7=(a7+a20);
  a11=(a11-a7);
  if (res[2]!=0) res[2][17]=a11;
  a11=(a23*a2);
  a7=(a22*a35);
  a20=(a24*a2);
  a7=(a7+a20);
  a25=(a25*a40);
  a7=(a7+a25);
  a25=(a5*a7);
  a11=(a11+a25);
  a25=(a28*a40);
  a20=(a27*a35);
  a29=(a29*a2);
  a20=(a20+a29);
  a24=(a24*a40);
  a20=(a20+a24);
  a24=(a8*a20);
  a25=(a25+a24);
  a11=(a11-a25);
  a18=(a18*a11);
  a25=(a33*a40);
  a32=(a32*a35);
  a27=(a27*a2);
  a32=(a32+a27);
  a22=(a22*a40);
  a32=(a32+a22);
  a8=(a8*a32);
  a25=(a25+a8);
  a23=(a23*a35);
  a7=(a1*a7);
  a23=(a23+a7);
  a25=(a25-a23);
  a23=(a30*a25);
  a18=(a18+a23);
  a28=(a28*a35);
  a1=(a1*a20);
  a28=(a28+a1);
  a33=(a33*a2);
  a5=(a5*a32);
  a33=(a33+a5);
  a28=(a28-a33);
  a33=(a34*a28);
  a18=(a18+a33);
  a18=(a34-a18);
  if (res[2]!=0) res[2][18]=a18;
  a30=(a30*a11);
  a36=(a36*a25);
  a30=(a30+a36);
  a36=(a37*a28);
  a30=(a30+a36);
  a30=(a37-a30);
  if (res[2]!=0) res[2][19]=a30;
  a34=(a34*a11);
  a37=(a37*a25);
  a34=(a34+a37);
  a28=(a31*a28);
  a34=(a34+a28);
  a31=(a31-a34);
  if (res[2]!=0) res[2][20]=a31;
  return 0;
}

CASADI_SYMBOL_EXPORT int SRBD_expl_vde_forw(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem){
  return casadi_f0(arg, res, iw, w, mem);
}

CASADI_SYMBOL_EXPORT int SRBD_expl_vde_forw_alloc_mem(void) {
  return 0;
}

CASADI_SYMBOL_EXPORT int SRBD_expl_vde_forw_init_mem(int mem) {
  return 0;
}

CASADI_SYMBOL_EXPORT void SRBD_expl_vde_forw_free_mem(int mem) {
}

CASADI_SYMBOL_EXPORT int SRBD_expl_vde_forw_checkout(void) {
  return 0;
}

CASADI_SYMBOL_EXPORT void SRBD_expl_vde_forw_release(int mem) {
}

CASADI_SYMBOL_EXPORT void SRBD_expl_vde_forw_incref(void) {
}

CASADI_SYMBOL_EXPORT void SRBD_expl_vde_forw_decref(void) {
}

CASADI_SYMBOL_EXPORT casadi_int SRBD_expl_vde_forw_n_in(void) { return 5;}

CASADI_SYMBOL_EXPORT casadi_int SRBD_expl_vde_forw_n_out(void) { return 3;}

CASADI_SYMBOL_EXPORT casadi_real SRBD_expl_vde_forw_default_in(casadi_int i){
  switch (i) {
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const char* SRBD_expl_vde_forw_name_in(casadi_int i){
  switch (i) {
    case 0: return "i0";
    case 1: return "i1";
    case 2: return "i2";
    case 3: return "i3";
    case 4: return "i4";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const char* SRBD_expl_vde_forw_name_out(casadi_int i){
  switch (i) {
    case 0: return "o0";
    case 1: return "o1";
    case 2: return "o2";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* SRBD_expl_vde_forw_sparsity_in(casadi_int i) {
  switch (i) {
    case 0: return casadi_s0;
    case 1: return casadi_s1;
    case 2: return casadi_s2;
    case 3: return casadi_s3;
    case 4: return casadi_s4;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* SRBD_expl_vde_forw_sparsity_out(casadi_int i) {
  switch (i) {
    case 0: return casadi_s0;
    case 1: return casadi_s1;
    case 2: return casadi_s2;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT int SRBD_expl_vde_forw_work(casadi_int *sz_arg, casadi_int* sz_res, casadi_int *sz_iw, casadi_int *sz_w) {
  if (sz_arg) *sz_arg = 5;
  if (sz_res) *sz_res = 3;
  if (sz_iw) *sz_iw = 0;
  if (sz_w) *sz_w = 0;
  return 0;
}


#ifdef __cplusplus
} /* extern "C" */
#endif
