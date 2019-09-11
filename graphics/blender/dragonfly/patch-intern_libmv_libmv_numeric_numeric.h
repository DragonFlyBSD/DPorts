--- intern/libmv/libmv/numeric/numeric.h.orig	2019-04-19 13:02:43 UTC
+++ intern/libmv/libmv/numeric/numeric.h
@@ -35,7 +35,7 @@
 
 #if !defined(__MINGW64__)
 #  if defined(_WIN32) || defined(__APPLE__) || \
-      defined(__FreeBSD__) || defined(__NetBSD__) || \
+      defined(__FreeBSD__) || defined(__NetBSD__) || defined(__DragonFly__) ||\
       defined(__HAIKU__)
 inline void sincos(double x, double *sinx, double *cosx) {
   *sinx = sin(x);
