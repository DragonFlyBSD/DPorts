--- src/dps8/dps8_math.c.orig	2021-11-24 06:38:47 UTC
+++ src/dps8/dps8_math.c
@@ -28,7 +28,7 @@
 
 #define DBG_CTR cpu.cycleCnt
 
-#ifdef __CYGWIN__
+#if defined(__CYGWIN__) || defined(__DragonFly__)
 long double ldexpl(long double x, int n) {
        return __builtin_ldexpl(x, n);
 }
