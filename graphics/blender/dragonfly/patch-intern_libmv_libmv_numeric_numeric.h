--- intern/libmv/libmv/numeric/numeric.h.orig	2022-09-21 08:04:43.828736000 +0200
+++ intern/libmv/libmv/numeric/numeric.h	2022-09-21 08:05:04.078274000 +0200
@@ -35,7 +35,7 @@
 
 #if !defined(__MINGW64__)
 #  if defined(_WIN32) || defined(__APPLE__) || defined(__FreeBSD__) ||         \
-      defined(__NetBSD__) || defined(__HAIKU__)
+      defined(__NetBSD__) || defined(__HAIKU__) || defined(__Dragonfly__)
 inline void sincos(double x, double* sinx, double* cosx) {
   *sinx = sin(x);
   *cosx = cos(x);
