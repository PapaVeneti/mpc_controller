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
  #define CASADI_PREFIX(ID) SRBD_constr_h_e_fun_jac_uxt_zt_hess_ ## ID
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
static const casadi_int casadi_s2[8] = {4, 1, 0, 4, 0, 1, 2, 3};
static const casadi_int casadi_s3[18] = {7, 3, 0, 4, 8, 12, 0, 1, 2, 3, 0, 1, 2, 3, 0, 1, 2, 3};
static const casadi_int casadi_s4[26] = {7, 7, 0, 4, 8, 12, 16, 16, 16, 16, 0, 1, 2, 3, 0, 1, 2, 3, 0, 1, 2, 3, 0, 1, 2, 3};

/* SRBD_constr_h_e_fun_jac_uxt_zt_hess:(i0[7],i1[3],i2[4])->(o0[3],o1[7x3,12nz],o2[7x7,16nz]) */
static int casadi_f0(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem) {
  casadi_real a0, a1, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a2, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a3, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39, a4, a40, a41, a42, a43, a44, a45, a46, a47, a48, a49, a5, a50, a51, a52, a53, a54, a55, a56, a57, a58, a59, a6, a60, a61, a62, a63, a64, a65, a66, a67, a68, a69, a7, a70, a71, a72, a73, a74, a75, a76, a77, a78, a79, a8, a80, a81, a82, a83, a84, a85, a86, a87, a88, a89, a9, a90, a91, a92;
  a0=5.7295779513082323e+01;
  a1=2.;
  a2=arg[2]? arg[2][0] : 0;
  a3=arg[0]? arg[0][0] : 0;
  a4=casadi_sq(a3);
  a5=arg[0]? arg[0][1] : 0;
  a6=casadi_sq(a5);
  a4=(a4+a6);
  a6=arg[0]? arg[0][2] : 0;
  a7=casadi_sq(a6);
  a4=(a4+a7);
  a7=arg[0]? arg[0][3] : 0;
  a8=casadi_sq(a7);
  a4=(a4+a8);
  a8=1.0000000000000001e-09;
  a4=(a4+a8);
  a4=sqrt(a4);
  a9=(a3/a4);
  a10=(a2*a9);
  a11=arg[2]? arg[2][1] : 0;
  a12=(a5/a4);
  a13=(a11*a12);
  a10=(a10+a13);
  a13=arg[2]? arg[2][2] : 0;
  a14=(a6/a4);
  a15=(a13*a14);
  a10=(a10+a15);
  a15=arg[2]? arg[2][3] : 0;
  a16=(a7/a4);
  a17=(a15*a16);
  a10=(a10+a17);
  a17=casadi_sq(a10);
  a17=(a1*a17);
  a18=1.;
  a17=(a17-a18);
  a19=acos(a17);
  a20=(a9*a11);
  a21=(a12*a2);
  a20=(a20-a21);
  a21=(a14*a15);
  a20=(a20+a21);
  a21=(a16*a13);
  a20=(a20-a21);
  a21=casadi_sq(a20);
  a22=(a9*a13);
  a23=(a14*a2);
  a22=(a22-a23);
  a23=(a12*a15);
  a22=(a22-a23);
  a23=(a16*a11);
  a22=(a22+a23);
  a23=casadi_sq(a22);
  a21=(a21+a23);
  a23=(a9*a15);
  a24=(a2*a16);
  a23=(a23-a24);
  a24=(a12*a13);
  a23=(a23+a24);
  a24=(a14*a11);
  a23=(a23-a24);
  a24=casadi_sq(a23);
  a21=(a21+a24);
  a21=(a21+a8);
  a21=sqrt(a21);
  a8=(a20/a21);
  a24=(a19*a8);
  a24=(a0*a24);
  if (res[0]!=0) res[0][0]=a24;
  a24=(a22/a21);
  a25=(a19*a24);
  a25=(a0*a25);
  if (res[0]!=0) res[0][1]=a25;
  a25=(a23/a21);
  a26=(a19*a25);
  a26=(a0*a26);
  if (res[0]!=0) res[0][2]=a26;
  a26=-1.;
  a27=casadi_sq(a17);
  a27=(a18-a27);
  a27=sqrt(a27);
  a27=(a26/a27);
  a28=(a10+a10);
  a29=(1./a4);
  a30=(a9/a4);
  a31=(a3/a4);
  a32=(a30*a31);
  a29=(a29-a32);
  a32=(a2*a29);
  a33=(a12/a4);
  a34=(a33*a31);
  a35=(a11*a34);
  a32=(a32-a35);
  a35=(a14/a4);
  a36=(a35*a31);
  a37=(a13*a36);
  a32=(a32-a37);
  a37=(a16/a4);
  a31=(a37*a31);
  a38=(a15*a31);
  a32=(a32-a38);
  a32=(a28*a32);
  a32=(a1*a32);
  a32=(a27*a32);
  a38=(a8*a32);
  a39=(a11*a29);
  a40=(a2*a34);
  a39=(a39+a40);
  a40=(a15*a36);
  a39=(a39-a40);
  a40=(a13*a31);
  a39=(a39+a40);
  a40=(a39/a21);
  a41=(a8/a21);
  a42=(a20+a20);
  a39=(a42*a39);
  a43=(a22+a22);
  a44=(a13*a29);
  a45=(a2*a36);
  a44=(a44+a45);
  a45=(a15*a34);
  a44=(a44+a45);
  a45=(a11*a31);
  a44=(a44-a45);
  a45=(a43*a44);
  a39=(a39+a45);
  a45=(a23+a23);
  a29=(a15*a29);
  a31=(a2*a31);
  a29=(a29+a31);
  a34=(a13*a34);
  a29=(a29-a34);
  a36=(a11*a36);
  a29=(a29+a36);
  a36=(a45*a29);
  a39=(a39+a36);
  a36=(a21+a21);
  a39=(a39/a36);
  a34=(a41*a39);
  a40=(a40-a34);
  a40=(a19*a40);
  a38=(a38+a40);
  a38=(a0*a38);
  if (res[1]!=0) res[1][0]=a38;
  a38=(1./a4);
  a40=(a5/a4);
  a34=(a33*a40);
  a38=(a38-a34);
  a34=(a11*a38);
  a31=(a30*a40);
  a46=(a2*a31);
  a34=(a34-a46);
  a46=(a35*a40);
  a47=(a13*a46);
  a34=(a34-a47);
  a40=(a37*a40);
  a47=(a15*a40);
  a34=(a34-a47);
  a34=(a28*a34);
  a34=(a1*a34);
  a34=(a27*a34);
  a47=(a8*a34);
  a48=(a13*a40);
  a49=(a11*a31);
  a50=(a2*a38);
  a49=(a49+a50);
  a50=(a15*a46);
  a49=(a49+a50);
  a48=(a48-a49);
  a49=(a48/a21);
  a48=(a42*a48);
  a50=(a2*a46);
  a51=(a13*a31);
  a50=(a50-a51);
  a51=(a15*a38);
  a50=(a50-a51);
  a51=(a11*a40);
  a50=(a50-a51);
  a51=(a43*a50);
  a48=(a48+a51);
  a40=(a2*a40);
  a31=(a15*a31);
  a40=(a40-a31);
  a38=(a13*a38);
  a40=(a40+a38);
  a46=(a11*a46);
  a40=(a40+a46);
  a46=(a45*a40);
  a48=(a48+a46);
  a48=(a48/a36);
  a46=(a41*a48);
  a49=(a49-a46);
  a49=(a19*a49);
  a47=(a47+a49);
  a47=(a0*a47);
  if (res[1]!=0) res[1][1]=a47;
  a47=(1./a4);
  a49=(a6/a4);
  a46=(a35*a49);
  a47=(a47-a46);
  a46=(a13*a47);
  a38=(a30*a49);
  a31=(a2*a38);
  a51=(a33*a49);
  a52=(a11*a51);
  a31=(a31+a52);
  a46=(a46-a31);
  a49=(a37*a49);
  a31=(a15*a49);
  a46=(a46-a31);
  a46=(a28*a46);
  a46=(a1*a46);
  a46=(a27*a46);
  a31=(a8*a46);
  a52=(a2*a51);
  a53=(a11*a38);
  a52=(a52-a53);
  a53=(a15*a47);
  a52=(a52+a53);
  a53=(a13*a49);
  a52=(a52+a53);
  a53=(a52/a21);
  a52=(a42*a52);
  a54=(a15*a51);
  a55=(a13*a38);
  a56=(a2*a47);
  a55=(a55+a56);
  a54=(a54-a55);
  a55=(a11*a49);
  a54=(a54-a55);
  a55=(a43*a54);
  a52=(a52+a55);
  a49=(a2*a49);
  a38=(a15*a38);
  a49=(a49-a38);
  a51=(a13*a51);
  a49=(a49-a51);
  a47=(a11*a47);
  a49=(a49-a47);
  a47=(a45*a49);
  a52=(a52+a47);
  a52=(a52/a36);
  a47=(a41*a52);
  a53=(a53-a47);
  a53=(a19*a53);
  a31=(a31+a53);
  a31=(a0*a31);
  if (res[1]!=0) res[1][2]=a31;
  a31=(1./a4);
  a53=(a7/a4);
  a37=(a37*a53);
  a31=(a31-a37);
  a37=(a15*a31);
  a30=(a30*a53);
  a47=(a2*a30);
  a33=(a33*a53);
  a51=(a11*a33);
  a47=(a47+a51);
  a35=(a35*a53);
  a53=(a13*a35);
  a47=(a47+a53);
  a37=(a37-a47);
  a28=(a28*a37);
  a28=(a1*a28);
  a27=(a27*a28);
  a28=(a8*a27);
  a37=(a2*a33);
  a47=(a11*a30);
  a37=(a37-a47);
  a47=(a15*a35);
  a37=(a37-a47);
  a47=(a13*a31);
  a37=(a37-a47);
  a47=(a37/a21);
  a42=(a42*a37);
  a37=(a2*a35);
  a53=(a13*a30);
  a37=(a37-a53);
  a53=(a15*a33);
  a37=(a37+a53);
  a53=(a11*a31);
  a37=(a37+a53);
  a43=(a43*a37);
  a42=(a42+a43);
  a35=(a11*a35);
  a30=(a15*a30);
  a31=(a2*a31);
  a30=(a30+a31);
  a33=(a13*a33);
  a30=(a30+a33);
  a35=(a35-a30);
  a45=(a45*a35);
  a42=(a42+a45);
  a42=(a42/a36);
  a41=(a41*a42);
  a47=(a47-a41);
  a47=(a19*a47);
  a28=(a28+a47);
  a28=(a0*a28);
  if (res[1]!=0) res[1][3]=a28;
  a28=(a24*a32);
  a44=(a44/a21);
  a47=(a24/a21);
  a41=(a47*a39);
  a44=(a44-a41);
  a44=(a19*a44);
  a28=(a28+a44);
  a28=(a0*a28);
  if (res[1]!=0) res[1][4]=a28;
  a28=(a24*a34);
  a50=(a50/a21);
  a44=(a47*a48);
  a50=(a50-a44);
  a50=(a19*a50);
  a28=(a28+a50);
  a28=(a0*a28);
  if (res[1]!=0) res[1][5]=a28;
  a28=(a24*a46);
  a54=(a54/a21);
  a50=(a47*a52);
  a54=(a54-a50);
  a54=(a19*a54);
  a28=(a28+a54);
  a28=(a0*a28);
  if (res[1]!=0) res[1][6]=a28;
  a28=(a24*a27);
  a37=(a37/a21);
  a47=(a47*a42);
  a37=(a37-a47);
  a37=(a19*a37);
  a28=(a28+a37);
  a28=(a0*a28);
  if (res[1]!=0) res[1][7]=a28;
  a32=(a25*a32);
  a29=(a29/a21);
  a28=(a25/a21);
  a39=(a28*a39);
  a29=(a29-a39);
  a29=(a19*a29);
  a32=(a32+a29);
  a32=(a0*a32);
  if (res[1]!=0) res[1][8]=a32;
  a34=(a25*a34);
  a40=(a40/a21);
  a48=(a28*a48);
  a40=(a40-a48);
  a40=(a19*a40);
  a34=(a34+a40);
  a34=(a0*a34);
  if (res[1]!=0) res[1][9]=a34;
  a46=(a25*a46);
  a49=(a49/a21);
  a52=(a28*a52);
  a49=(a49-a52);
  a49=(a19*a49);
  a46=(a46+a49);
  a46=(a0*a46);
  if (res[1]!=0) res[1][10]=a46;
  a27=(a25*a27);
  a35=(a35/a21);
  a28=(a28*a42);
  a35=(a35-a28);
  a35=(a19*a35);
  a27=(a27+a35);
  a27=(a0*a27);
  if (res[1]!=0) res[1][11]=a27;
  a27=arg[1]? arg[1][2] : 0;
  a27=(a0*a27);
  a35=casadi_sq(a17);
  a35=(a18-a35);
  a35=sqrt(a35);
  a35=(a26/a35);
  a28=(a10+a10);
  a42=(1./a4);
  a46=(a9/a4);
  a49=(a3/a4);
  a52=(a46*a49);
  a42=(a42-a52);
  a52=(a2*a42);
  a34=(a12/a4);
  a40=(a34*a49);
  a48=(a11*a40);
  a52=(a52-a48);
  a48=(a14/a4);
  a32=(a48*a49);
  a29=(a13*a32);
  a52=(a52-a29);
  a29=(a16/a4);
  a39=(a29*a49);
  a37=(a15*a39);
  a52=(a52-a37);
  a37=(a28*a52);
  a37=(a1*a37);
  a47=(a35*a37);
  a54=(a27*a47);
  a50=(a54/a21);
  a44=(a19*a27);
  a41=(a44/a21);
  a36=(a41/a21);
  a45=(a20+a20);
  a30=(a11*a42);
  a33=(a2*a40);
  a30=(a30+a33);
  a33=(a15*a32);
  a30=(a30-a33);
  a33=(a13*a39);
  a30=(a30+a33);
  a33=(a45*a30);
  a31=(a22+a22);
  a43=(a13*a42);
  a53=(a2*a32);
  a43=(a43+a53);
  a53=(a15*a40);
  a43=(a43+a53);
  a53=(a11*a39);
  a43=(a43-a53);
  a53=(a31*a43);
  a33=(a33+a53);
  a53=(a23+a23);
  a51=(a15*a42);
  a38=(a2*a39);
  a51=(a51+a38);
  a38=(a13*a40);
  a51=(a51-a38);
  a38=(a11*a32);
  a51=(a51+a38);
  a38=(a53*a51);
  a33=(a33+a38);
  a38=(a21+a21);
  a33=(a33/a38);
  a55=(a36*a33);
  a50=(a50-a55);
  a55=(a25/a21);
  a56=(a55*a44);
  a57=(a24/a21);
  a58=arg[1]? arg[1][1] : 0;
  a58=(a0*a58);
  a59=(a19*a58);
  a60=(a57*a59);
  a56=(a56+a60);
  a60=(a8/a21);
  a61=arg[1]? arg[1][0] : 0;
  a0=(a0*a61);
  a19=(a19*a0);
  a61=(a60*a19);
  a56=(a56+a61);
  a61=(a21+a21);
  a56=(a56/a61);
  a62=(a51+a51);
  a62=(a56*a62);
  a23=(a23+a23);
  a51=(a51/a21);
  a63=(a25/a21);
  a64=(a63*a33);
  a51=(a51-a64);
  a64=(a51/a21);
  a65=(a55/a21);
  a66=(a65*a33);
  a64=(a64-a66);
  a64=(a44*a64);
  a54=(a55*a54);
  a64=(a64+a54);
  a54=(a43/a21);
  a66=(a24/a21);
  a67=(a66*a33);
  a54=(a54-a67);
  a67=(a54/a21);
  a68=(a57/a21);
  a69=(a68*a33);
  a67=(a67-a69);
  a67=(a59*a67);
  a69=(a58*a47);
  a70=(a57*a69);
  a67=(a67+a70);
  a64=(a64+a67);
  a67=(a30/a21);
  a70=(a8/a21);
  a71=(a70*a33);
  a67=(a67-a71);
  a71=(a67/a21);
  a72=(a60/a21);
  a73=(a72*a33);
  a71=(a71-a73);
  a71=(a19*a71);
  a47=(a0*a47);
  a73=(a60*a47);
  a71=(a71+a73);
  a64=(a64+a71);
  a64=(a64/a61);
  a71=(a56/a61);
  a73=(a33+a33);
  a73=(a71*a73);
  a64=(a64-a73);
  a73=(a23*a64);
  a62=(a62+a73);
  a50=(a50-a62);
  a62=(a15*a50);
  a69=(a69/a21);
  a73=(a59/a21);
  a74=(a73/a21);
  a75=(a74*a33);
  a69=(a69-a75);
  a43=(a43+a43);
  a43=(a56*a43);
  a22=(a22+a22);
  a75=(a22*a64);
  a43=(a43+a75);
  a69=(a69-a43);
  a43=(a13*a69);
  a62=(a62+a43);
  a47=(a47/a21);
  a43=(a19/a21);
  a75=(a43/a21);
  a33=(a75*a33);
  a47=(a47-a33);
  a30=(a30+a30);
  a30=(a56*a30);
  a20=(a20+a20);
  a64=(a20*a64);
  a30=(a30+a64);
  a47=(a47-a30);
  a30=(a11*a47);
  a62=(a62+a30);
  a30=casadi_sq(a17);
  a18=(a18-a30);
  a18=sqrt(a18);
  a26=(a26/a18);
  a25=(a25*a27);
  a24=(a24*a58);
  a25=(a25+a24);
  a8=(a8*a0);
  a25=(a25+a8);
  a8=(a26*a25);
  a8=(a1*a8);
  a52=(a52+a52);
  a52=(a8*a52);
  a10=(a10+a10);
  a24=(a26/a18);
  a17=(a17+a17);
  a37=(a17*a37);
  a18=(a18+a18);
  a37=(a37/a18);
  a37=(a24*a37);
  a37=(a25*a37);
  a51=(a27*a51);
  a54=(a58*a54);
  a51=(a51+a54);
  a67=(a0*a67);
  a51=(a51+a67);
  a51=(a26*a51);
  a37=(a37+a51);
  a37=(a1*a37);
  a37=(a10*a37);
  a52=(a52+a37);
  a37=(a2*a52);
  a62=(a62+a37);
  a37=(a62/a4);
  a51=(a23*a56);
  a41=(a41-a51);
  a51=(a15*a41);
  a67=(a22*a56);
  a73=(a73-a67);
  a67=(a13*a73);
  a51=(a51+a67);
  a67=(a20*a56);
  a43=(a43-a67);
  a67=(a11*a43);
  a51=(a51+a67);
  a67=(a10*a8);
  a54=(a2*a67);
  a51=(a51+a54);
  a54=(a51/a4);
  a54=(a54/a4);
  a30=(a54*a49);
  a37=(a37-a30);
  a16=(a16/a4);
  a30=(a11*a73);
  a64=(a2*a41);
  a30=(a30-a64);
  a64=(a13*a43);
  a30=(a30-a64);
  a64=(a15*a67);
  a30=(a30+a64);
  a64=(a16*a30);
  a14=(a14/a4);
  a33=(a15*a43);
  a76=(a11*a41);
  a77=(a2*a73);
  a76=(a76+a77);
  a33=(a33-a76);
  a76=(a13*a67);
  a33=(a33+a76);
  a76=(a14*a33);
  a64=(a64+a76);
  a12=(a12/a4);
  a41=(a13*a41);
  a73=(a15*a73);
  a41=(a41-a73);
  a43=(a2*a43);
  a41=(a41-a43);
  a67=(a11*a67);
  a41=(a41+a67);
  a67=(a12*a41);
  a64=(a64+a67);
  a9=(a9/a4);
  a67=(a9*a51);
  a64=(a64+a67);
  a67=(a4+a4);
  a64=(a64/a67);
  a43=(a1*a64);
  a3=(a3+a3);
  a73=(a11*a69);
  a76=(a2*a50);
  a73=(a73-a76);
  a76=(a13*a47);
  a73=(a73-a76);
  a76=(a15*a52);
  a73=(a73+a76);
  a76=(a16*a73);
  a39=(a39/a4);
  a77=(a16/a4);
  a78=(a77*a49);
  a39=(a39+a78);
  a39=(a30*a39);
  a76=(a76-a39);
  a39=(a15*a47);
  a78=(a11*a50);
  a79=(a2*a69);
  a78=(a78+a79);
  a39=(a39-a78);
  a78=(a13*a52);
  a39=(a39+a78);
  a78=(a14*a39);
  a32=(a32/a4);
  a79=(a14/a4);
  a80=(a79*a49);
  a32=(a32+a80);
  a32=(a33*a32);
  a78=(a78-a32);
  a76=(a76+a78);
  a50=(a13*a50);
  a69=(a15*a69);
  a50=(a50-a69);
  a47=(a2*a47);
  a50=(a50-a47);
  a52=(a11*a52);
  a50=(a50+a52);
  a52=(a12*a50);
  a40=(a40/a4);
  a47=(a12/a4);
  a69=(a47*a49);
  a40=(a40+a69);
  a40=(a41*a40);
  a52=(a52-a40);
  a76=(a76+a52);
  a42=(a42/a4);
  a52=(a9/a4);
  a40=(a52*a49);
  a42=(a42-a40);
  a42=(a51*a42);
  a62=(a9*a62);
  a42=(a42+a62);
  a76=(a76+a42);
  a76=(a76/a67);
  a42=(a64/a67);
  a62=(a49+a49);
  a62=(a42*a62);
  a76=(a76-a62);
  a62=(a3*a76);
  a43=(a43+a62);
  a37=(a37-a43);
  if (res[2]!=0) res[2][0]=a37;
  a50=(a50/a4);
  a37=(a41/a4);
  a37=(a37/a4);
  a43=(a37*a49);
  a50=(a50-a43);
  a43=(a5+a5);
  a62=(a43*a76);
  a50=(a50-a62);
  if (res[2]!=0) res[2][1]=a50;
  a39=(a39/a4);
  a50=(a33/a4);
  a50=(a50/a4);
  a62=(a50*a49);
  a39=(a39-a62);
  a62=(a6+a6);
  a40=(a62*a76);
  a39=(a39-a40);
  if (res[2]!=0) res[2][2]=a39;
  a73=(a73/a4);
  a39=(a30/a4);
  a39=(a39/a4);
  a49=(a39*a49);
  a73=(a73-a49);
  a49=(a7+a7);
  a76=(a49*a76);
  a73=(a73-a76);
  if (res[2]!=0) res[2][3]=a73;
  a73=(1./a4);
  a5=(a5/a4);
  a76=(a34*a5);
  a73=(a73-a76);
  a76=(a11*a73);
  a40=(a46*a5);
  a69=(a2*a40);
  a76=(a76-a69);
  a69=(a48*a5);
  a78=(a13*a69);
  a76=(a76-a78);
  a78=(a29*a5);
  a32=(a15*a78);
  a76=(a76-a32);
  a32=(a28*a76);
  a32=(a1*a32);
  a80=(a35*a32);
  a81=(a27*a80);
  a82=(a81/a21);
  a83=(a13*a78);
  a84=(a11*a40);
  a85=(a2*a73);
  a84=(a84+a85);
  a85=(a15*a69);
  a84=(a84+a85);
  a83=(a83-a84);
  a84=(a45*a83);
  a85=(a2*a69);
  a86=(a13*a40);
  a85=(a85-a86);
  a86=(a15*a73);
  a85=(a85-a86);
  a86=(a11*a78);
  a85=(a85-a86);
  a86=(a31*a85);
  a84=(a84+a86);
  a86=(a2*a78);
  a87=(a15*a40);
  a86=(a86-a87);
  a87=(a13*a73);
  a86=(a86+a87);
  a87=(a11*a69);
  a86=(a86+a87);
  a87=(a53*a86);
  a84=(a84+a87);
  a84=(a84/a38);
  a87=(a36*a84);
  a82=(a82-a87);
  a87=(a86+a86);
  a87=(a56*a87);
  a86=(a86/a21);
  a88=(a63*a84);
  a86=(a86-a88);
  a88=(a86/a21);
  a89=(a65*a84);
  a88=(a88-a89);
  a88=(a44*a88);
  a81=(a55*a81);
  a88=(a88+a81);
  a81=(a85/a21);
  a89=(a66*a84);
  a81=(a81-a89);
  a89=(a81/a21);
  a90=(a68*a84);
  a89=(a89-a90);
  a89=(a59*a89);
  a90=(a58*a80);
  a91=(a57*a90);
  a89=(a89+a91);
  a88=(a88+a89);
  a89=(a83/a21);
  a91=(a70*a84);
  a89=(a89-a91);
  a91=(a89/a21);
  a92=(a72*a84);
  a91=(a91-a92);
  a91=(a19*a91);
  a80=(a0*a80);
  a92=(a60*a80);
  a91=(a91+a92);
  a88=(a88+a91);
  a88=(a88/a61);
  a91=(a84+a84);
  a91=(a71*a91);
  a88=(a88-a91);
  a91=(a23*a88);
  a87=(a87+a91);
  a82=(a82-a87);
  a87=(a15*a82);
  a90=(a90/a21);
  a91=(a74*a84);
  a90=(a90-a91);
  a85=(a85+a85);
  a85=(a56*a85);
  a91=(a22*a88);
  a85=(a85+a91);
  a90=(a90-a85);
  a85=(a13*a90);
  a87=(a87+a85);
  a80=(a80/a21);
  a84=(a75*a84);
  a80=(a80-a84);
  a83=(a83+a83);
  a83=(a56*a83);
  a88=(a20*a88);
  a83=(a83+a88);
  a80=(a80-a83);
  a83=(a11*a80);
  a87=(a87+a83);
  a76=(a76+a76);
  a76=(a8*a76);
  a32=(a17*a32);
  a32=(a32/a18);
  a32=(a24*a32);
  a32=(a25*a32);
  a86=(a27*a86);
  a81=(a58*a81);
  a86=(a86+a81);
  a89=(a0*a89);
  a86=(a86+a89);
  a86=(a26*a86);
  a32=(a32+a86);
  a32=(a1*a32);
  a32=(a10*a32);
  a76=(a76+a32);
  a32=(a2*a76);
  a87=(a87+a32);
  a32=(a87/a4);
  a86=(a54*a5);
  a32=(a32-a86);
  a86=(a11*a90);
  a89=(a2*a82);
  a86=(a86-a89);
  a89=(a13*a80);
  a86=(a86-a89);
  a89=(a15*a76);
  a86=(a86+a89);
  a89=(a16*a86);
  a78=(a78/a4);
  a81=(a77*a5);
  a78=(a78+a81);
  a78=(a30*a78);
  a89=(a89-a78);
  a78=(a15*a80);
  a81=(a11*a82);
  a83=(a2*a90);
  a81=(a81+a83);
  a78=(a78-a81);
  a81=(a13*a76);
  a78=(a78+a81);
  a81=(a14*a78);
  a69=(a69/a4);
  a83=(a79*a5);
  a69=(a69+a83);
  a69=(a33*a69);
  a81=(a81-a69);
  a89=(a89+a81);
  a73=(a73/a4);
  a81=(a47*a5);
  a73=(a73-a81);
  a73=(a41*a73);
  a82=(a13*a82);
  a90=(a15*a90);
  a82=(a82-a90);
  a80=(a2*a80);
  a82=(a82-a80);
  a76=(a11*a76);
  a82=(a82+a76);
  a76=(a12*a82);
  a73=(a73+a76);
  a89=(a89+a73);
  a87=(a9*a87);
  a40=(a40/a4);
  a73=(a52*a5);
  a40=(a40+a73);
  a40=(a51*a40);
  a87=(a87-a40);
  a89=(a89+a87);
  a89=(a89/a67);
  a87=(a5+a5);
  a87=(a42*a87);
  a89=(a89-a87);
  a87=(a3*a89);
  a32=(a32-a87);
  if (res[2]!=0) res[2][4]=a32;
  a82=(a82/a4);
  a32=(a37*a5);
  a82=(a82-a32);
  a32=(a1*a64);
  a87=(a43*a89);
  a32=(a32+a87);
  a82=(a82-a32);
  if (res[2]!=0) res[2][5]=a82;
  a78=(a78/a4);
  a82=(a50*a5);
  a78=(a78-a82);
  a82=(a62*a89);
  a78=(a78-a82);
  if (res[2]!=0) res[2][6]=a78;
  a86=(a86/a4);
  a5=(a39*a5);
  a86=(a86-a5);
  a89=(a49*a89);
  a86=(a86-a89);
  if (res[2]!=0) res[2][7]=a86;
  a86=(1./a4);
  a6=(a6/a4);
  a89=(a48*a6);
  a86=(a86-a89);
  a89=(a13*a86);
  a5=(a46*a6);
  a78=(a2*a5);
  a82=(a34*a6);
  a32=(a11*a82);
  a78=(a78+a32);
  a89=(a89-a78);
  a78=(a29*a6);
  a32=(a15*a78);
  a89=(a89-a32);
  a32=(a28*a89);
  a32=(a1*a32);
  a87=(a35*a32);
  a40=(a27*a87);
  a73=(a40/a21);
  a76=(a2*a82);
  a80=(a11*a5);
  a76=(a76-a80);
  a80=(a15*a86);
  a76=(a76+a80);
  a80=(a13*a78);
  a76=(a76+a80);
  a80=(a45*a76);
  a90=(a15*a82);
  a81=(a13*a5);
  a69=(a2*a86);
  a81=(a81+a69);
  a90=(a90-a81);
  a81=(a11*a78);
  a90=(a90-a81);
  a81=(a31*a90);
  a80=(a80+a81);
  a81=(a2*a78);
  a69=(a15*a5);
  a81=(a81-a69);
  a69=(a13*a82);
  a81=(a81-a69);
  a69=(a11*a86);
  a81=(a81-a69);
  a69=(a53*a81);
  a80=(a80+a69);
  a80=(a80/a38);
  a69=(a36*a80);
  a73=(a73-a69);
  a69=(a81+a81);
  a69=(a56*a69);
  a81=(a81/a21);
  a83=(a63*a80);
  a81=(a81-a83);
  a83=(a81/a21);
  a88=(a65*a80);
  a83=(a83-a88);
  a83=(a44*a83);
  a40=(a55*a40);
  a83=(a83+a40);
  a40=(a90/a21);
  a88=(a66*a80);
  a40=(a40-a88);
  a88=(a40/a21);
  a84=(a68*a80);
  a88=(a88-a84);
  a88=(a59*a88);
  a84=(a58*a87);
  a85=(a57*a84);
  a88=(a88+a85);
  a83=(a83+a88);
  a88=(a76/a21);
  a85=(a70*a80);
  a88=(a88-a85);
  a85=(a88/a21);
  a91=(a72*a80);
  a85=(a85-a91);
  a85=(a19*a85);
  a87=(a0*a87);
  a91=(a60*a87);
  a85=(a85+a91);
  a83=(a83+a85);
  a83=(a83/a61);
  a85=(a80+a80);
  a85=(a71*a85);
  a83=(a83-a85);
  a85=(a23*a83);
  a69=(a69+a85);
  a73=(a73-a69);
  a69=(a15*a73);
  a84=(a84/a21);
  a85=(a74*a80);
  a84=(a84-a85);
  a90=(a90+a90);
  a90=(a56*a90);
  a85=(a22*a83);
  a90=(a90+a85);
  a84=(a84-a90);
  a90=(a13*a84);
  a69=(a69+a90);
  a87=(a87/a21);
  a80=(a75*a80);
  a87=(a87-a80);
  a76=(a76+a76);
  a76=(a56*a76);
  a83=(a20*a83);
  a76=(a76+a83);
  a87=(a87-a76);
  a76=(a11*a87);
  a69=(a69+a76);
  a89=(a89+a89);
  a89=(a8*a89);
  a32=(a17*a32);
  a32=(a32/a18);
  a32=(a24*a32);
  a32=(a25*a32);
  a81=(a27*a81);
  a40=(a58*a40);
  a81=(a81+a40);
  a88=(a0*a88);
  a81=(a81+a88);
  a81=(a26*a81);
  a32=(a32+a81);
  a32=(a1*a32);
  a32=(a10*a32);
  a89=(a89+a32);
  a32=(a2*a89);
  a69=(a69+a32);
  a32=(a69/a4);
  a81=(a54*a6);
  a32=(a32-a81);
  a81=(a11*a84);
  a88=(a2*a73);
  a81=(a81-a88);
  a88=(a13*a87);
  a81=(a81-a88);
  a88=(a15*a89);
  a81=(a81+a88);
  a88=(a16*a81);
  a78=(a78/a4);
  a40=(a77*a6);
  a78=(a78+a40);
  a78=(a30*a78);
  a88=(a88-a78);
  a86=(a86/a4);
  a78=(a79*a6);
  a86=(a86-a78);
  a86=(a33*a86);
  a78=(a15*a87);
  a40=(a11*a73);
  a76=(a2*a84);
  a40=(a40+a76);
  a78=(a78-a40);
  a40=(a13*a89);
  a78=(a78+a40);
  a40=(a14*a78);
  a86=(a86+a40);
  a88=(a88+a86);
  a73=(a13*a73);
  a84=(a15*a84);
  a73=(a73-a84);
  a87=(a2*a87);
  a73=(a73-a87);
  a89=(a11*a89);
  a73=(a73+a89);
  a89=(a12*a73);
  a82=(a82/a4);
  a87=(a47*a6);
  a82=(a82+a87);
  a82=(a41*a82);
  a89=(a89-a82);
  a88=(a88+a89);
  a69=(a9*a69);
  a5=(a5/a4);
  a89=(a52*a6);
  a5=(a5+a89);
  a5=(a51*a5);
  a69=(a69-a5);
  a88=(a88+a69);
  a88=(a88/a67);
  a69=(a6+a6);
  a69=(a42*a69);
  a88=(a88-a69);
  a69=(a3*a88);
  a32=(a32-a69);
  if (res[2]!=0) res[2][8]=a32;
  a73=(a73/a4);
  a32=(a37*a6);
  a73=(a73-a32);
  a32=(a43*a88);
  a73=(a73-a32);
  if (res[2]!=0) res[2][9]=a73;
  a78=(a78/a4);
  a73=(a50*a6);
  a78=(a78-a73);
  a73=(a1*a64);
  a32=(a62*a88);
  a73=(a73+a32);
  a78=(a78-a73);
  if (res[2]!=0) res[2][10]=a78;
  a81=(a81/a4);
  a6=(a39*a6);
  a81=(a81-a6);
  a88=(a49*a88);
  a81=(a81-a88);
  if (res[2]!=0) res[2][11]=a81;
  a81=(1./a4);
  a7=(a7/a4);
  a29=(a29*a7);
  a81=(a81-a29);
  a29=(a15*a81);
  a46=(a46*a7);
  a88=(a2*a46);
  a34=(a34*a7);
  a6=(a11*a34);
  a88=(a88+a6);
  a48=(a48*a7);
  a6=(a13*a48);
  a88=(a88+a6);
  a29=(a29-a88);
  a28=(a28*a29);
  a28=(a1*a28);
  a35=(a35*a28);
  a88=(a27*a35);
  a6=(a88/a21);
  a78=(a2*a34);
  a73=(a11*a46);
  a78=(a78-a73);
  a73=(a15*a48);
  a78=(a78-a73);
  a73=(a13*a81);
  a78=(a78-a73);
  a45=(a45*a78);
  a73=(a2*a48);
  a32=(a13*a46);
  a73=(a73-a32);
  a32=(a15*a34);
  a73=(a73+a32);
  a32=(a11*a81);
  a73=(a73+a32);
  a31=(a31*a73);
  a45=(a45+a31);
  a31=(a11*a48);
  a32=(a15*a46);
  a69=(a2*a81);
  a32=(a32+a69);
  a69=(a13*a34);
  a32=(a32+a69);
  a31=(a31-a32);
  a53=(a53*a31);
  a45=(a45+a53);
  a45=(a45/a38);
  a36=(a36*a45);
  a6=(a6-a36);
  a36=(a31+a31);
  a36=(a56*a36);
  a31=(a31/a21);
  a63=(a63*a45);
  a31=(a31-a63);
  a63=(a31/a21);
  a65=(a65*a45);
  a63=(a63-a65);
  a44=(a44*a63);
  a55=(a55*a88);
  a44=(a44+a55);
  a55=(a73/a21);
  a66=(a66*a45);
  a55=(a55-a66);
  a66=(a55/a21);
  a68=(a68*a45);
  a66=(a66-a68);
  a59=(a59*a66);
  a66=(a58*a35);
  a57=(a57*a66);
  a59=(a59+a57);
  a44=(a44+a59);
  a59=(a78/a21);
  a70=(a70*a45);
  a59=(a59-a70);
  a70=(a59/a21);
  a72=(a72*a45);
  a70=(a70-a72);
  a19=(a19*a70);
  a35=(a0*a35);
  a60=(a60*a35);
  a19=(a19+a60);
  a44=(a44+a19);
  a44=(a44/a61);
  a61=(a45+a45);
  a71=(a71*a61);
  a44=(a44-a71);
  a23=(a23*a44);
  a36=(a36+a23);
  a6=(a6-a36);
  a36=(a15*a6);
  a66=(a66/a21);
  a74=(a74*a45);
  a66=(a66-a74);
  a73=(a73+a73);
  a73=(a56*a73);
  a22=(a22*a44);
  a73=(a73+a22);
  a66=(a66-a73);
  a73=(a13*a66);
  a36=(a36+a73);
  a35=(a35/a21);
  a75=(a75*a45);
  a35=(a35-a75);
  a78=(a78+a78);
  a56=(a56*a78);
  a20=(a20*a44);
  a56=(a56+a20);
  a35=(a35-a56);
  a56=(a11*a35);
  a36=(a36+a56);
  a29=(a29+a29);
  a8=(a8*a29);
  a17=(a17*a28);
  a17=(a17/a18);
  a24=(a24*a17);
  a25=(a25*a24);
  a27=(a27*a31);
  a58=(a58*a55);
  a27=(a27+a58);
  a0=(a0*a59);
  a27=(a27+a0);
  a26=(a26*a27);
  a25=(a25+a26);
  a25=(a1*a25);
  a10=(a10*a25);
  a8=(a8+a10);
  a10=(a2*a8);
  a36=(a36+a10);
  a10=(a36/a4);
  a54=(a54*a7);
  a10=(a10-a54);
  a81=(a81/a4);
  a77=(a77*a7);
  a81=(a81-a77);
  a30=(a30*a81);
  a81=(a11*a66);
  a77=(a2*a6);
  a81=(a81-a77);
  a77=(a13*a35);
  a81=(a81-a77);
  a77=(a15*a8);
  a81=(a81+a77);
  a16=(a16*a81);
  a30=(a30+a16);
  a16=(a15*a35);
  a77=(a11*a6);
  a54=(a2*a66);
  a77=(a77+a54);
  a16=(a16-a77);
  a77=(a13*a8);
  a16=(a16+a77);
  a14=(a14*a16);
  a48=(a48/a4);
  a79=(a79*a7);
  a48=(a48+a79);
  a33=(a33*a48);
  a14=(a14-a33);
  a30=(a30+a14);
  a13=(a13*a6);
  a15=(a15*a66);
  a13=(a13-a15);
  a2=(a2*a35);
  a13=(a13-a2);
  a11=(a11*a8);
  a13=(a13+a11);
  a12=(a12*a13);
  a34=(a34/a4);
  a47=(a47*a7);
  a34=(a34+a47);
  a41=(a41*a34);
  a12=(a12-a41);
  a30=(a30+a12);
  a9=(a9*a36);
  a46=(a46/a4);
  a52=(a52*a7);
  a46=(a46+a52);
  a51=(a51*a46);
  a9=(a9-a51);
  a30=(a30+a9);
  a30=(a30/a67);
  a67=(a7+a7);
  a42=(a42*a67);
  a30=(a30-a42);
  a3=(a3*a30);
  a10=(a10-a3);
  if (res[2]!=0) res[2][12]=a10;
  a13=(a13/a4);
  a37=(a37*a7);
  a13=(a13-a37);
  a43=(a43*a30);
  a13=(a13-a43);
  if (res[2]!=0) res[2][13]=a13;
  a16=(a16/a4);
  a50=(a50*a7);
  a16=(a16-a50);
  a62=(a62*a30);
  a16=(a16-a62);
  if (res[2]!=0) res[2][14]=a16;
  a81=(a81/a4);
  a39=(a39*a7);
  a81=(a81-a39);
  a1=(a1*a64);
  a49=(a49*a30);
  a1=(a1+a49);
  a81=(a81-a1);
  if (res[2]!=0) res[2][15]=a81;
  return 0;
}

CASADI_SYMBOL_EXPORT int SRBD_constr_h_e_fun_jac_uxt_zt_hess(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem){
  return casadi_f0(arg, res, iw, w, mem);
}

CASADI_SYMBOL_EXPORT int SRBD_constr_h_e_fun_jac_uxt_zt_hess_alloc_mem(void) {
  return 0;
}

CASADI_SYMBOL_EXPORT int SRBD_constr_h_e_fun_jac_uxt_zt_hess_init_mem(int mem) {
  return 0;
}

CASADI_SYMBOL_EXPORT void SRBD_constr_h_e_fun_jac_uxt_zt_hess_free_mem(int mem) {
}

CASADI_SYMBOL_EXPORT int SRBD_constr_h_e_fun_jac_uxt_zt_hess_checkout(void) {
  return 0;
}

CASADI_SYMBOL_EXPORT void SRBD_constr_h_e_fun_jac_uxt_zt_hess_release(int mem) {
}

CASADI_SYMBOL_EXPORT void SRBD_constr_h_e_fun_jac_uxt_zt_hess_incref(void) {
}

CASADI_SYMBOL_EXPORT void SRBD_constr_h_e_fun_jac_uxt_zt_hess_decref(void) {
}

CASADI_SYMBOL_EXPORT casadi_int SRBD_constr_h_e_fun_jac_uxt_zt_hess_n_in(void) { return 3;}

CASADI_SYMBOL_EXPORT casadi_int SRBD_constr_h_e_fun_jac_uxt_zt_hess_n_out(void) { return 3;}

CASADI_SYMBOL_EXPORT casadi_real SRBD_constr_h_e_fun_jac_uxt_zt_hess_default_in(casadi_int i){
  switch (i) {
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const char* SRBD_constr_h_e_fun_jac_uxt_zt_hess_name_in(casadi_int i){
  switch (i) {
    case 0: return "i0";
    case 1: return "i1";
    case 2: return "i2";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const char* SRBD_constr_h_e_fun_jac_uxt_zt_hess_name_out(casadi_int i){
  switch (i) {
    case 0: return "o0";
    case 1: return "o1";
    case 2: return "o2";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* SRBD_constr_h_e_fun_jac_uxt_zt_hess_sparsity_in(casadi_int i) {
  switch (i) {
    case 0: return casadi_s0;
    case 1: return casadi_s1;
    case 2: return casadi_s2;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* SRBD_constr_h_e_fun_jac_uxt_zt_hess_sparsity_out(casadi_int i) {
  switch (i) {
    case 0: return casadi_s1;
    case 1: return casadi_s3;
    case 2: return casadi_s4;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT int SRBD_constr_h_e_fun_jac_uxt_zt_hess_work(casadi_int *sz_arg, casadi_int* sz_res, casadi_int *sz_iw, casadi_int *sz_w) {
  if (sz_arg) *sz_arg = 3;
  if (sz_res) *sz_res = 3;
  if (sz_iw) *sz_iw = 0;
  if (sz_w) *sz_w = 0;
  return 0;
}


#ifdef __cplusplus
} /* extern "C" */
#endif
