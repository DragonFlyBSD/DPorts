--- src/libm-tester/tester2sp.c.orig	2019-04-28 03:33:44 UTC
+++ src/libm-tester/tester2sp.c
@@ -38,7 +38,7 @@
 static int isinff(float x) { return x == __builtin_inff() || x == -__builtin_inff(); }
 #endif
 
-#if defined(__FreeBSD__) 
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #define isinff(x) ((x) == (float)(1e+300) || (x) == -(float)(1e+300))
 #endif
 
