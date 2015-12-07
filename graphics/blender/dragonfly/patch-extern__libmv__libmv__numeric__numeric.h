--- extern/libmv/libmv/numeric/numeric.h.orig	2015-06-24 08:07:34.000000000 +0300
+++ extern/libmv/libmv/numeric/numeric.h
@@ -35,7 +35,7 @@
 
 #if !defined(__MINGW64__)
 #  if defined(_WIN32) || defined(__APPLE__) || \
-      defined(__FreeBSD__) || defined(__NetBSD__)
+      defined(__FreeBSD__) || defined(__NetBSD__) || defined(__DragonFly__)
 static void sincos(double x, double *sinx, double *cosx) {
   *sinx = sin(x);
   *cosx = cos(x);
