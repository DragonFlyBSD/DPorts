--- intern/libmv/libmv/numeric/numeric.h.orig	2016-03-23 10:49:49.000000000 +0200
+++ intern/libmv/libmv/numeric/numeric.h
@@ -35,7 +35,7 @@
 
 #if !defined(__MINGW64__)
 #  if defined(_WIN32) || defined(__APPLE__) || \
-      defined(__FreeBSD__) || defined(__NetBSD__)
+      defined(__FreeBSD__) || defined(__NetBSD__) || defined(__DragonFly__)
 static void sincos(double x, double *sinx, double *cosx) {
   *sinx = sin(x);
   *cosx = cos(x);
