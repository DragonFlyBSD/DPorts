--- lib/common/mthdecls.h.orig	2019-10-09 20:28:35 UTC
+++ lib/common/mthdecls.h
@@ -509,7 +509,7 @@ double __f90_dbessel_yn(int n1, int n, d
 double __mth_i_dceil(double);
 double __mth_i_dfloor(double);
 
-#if	! defined (TARGET_X8664) && ! defined(LINUX8664)
+#if	(! defined (TARGET_X8664) && ! defined(LINUX8664)) || defined(__DragonFly__)
 /*
  * See explanation below for rationale behind the two flavors of __mth_sincos.
  */
@@ -623,7 +623,7 @@ extern double_complex_t ctan(double_comp
  * during the build process.
  */
 
-#if	defined(TARGET_WIN_X8664)
+#if	defined(TARGET_WIN_X8664) || defined(__DragonFly__)
 static inline __attribute__((always_inline)) void __mth_sincos(float angle, float *s, float *c)
 {
   *s = sinf(angle);
