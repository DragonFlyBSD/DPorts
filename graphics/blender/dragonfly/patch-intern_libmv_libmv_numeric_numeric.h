--- intern/libmv/libmv/numeric/numeric.h.orig	2017-09-11 07:34:59.000000000 +0300
+++ intern/libmv/libmv/numeric/numeric.h
@@ -35,7 +35,7 @@
 
 #if !defined(__MINGW64__)
 #  if defined(_WIN32) || defined(__APPLE__) || \
-      defined(__FreeBSD__) || defined(__NetBSD__)
+      defined(__FreeBSD__) || defined(__NetBSD__) || defined(__DragonFly__)
 inline void sincos(double x, double *sinx, double *cosx) {
   *sinx = sin(x);
   *cosx = cos(x);
