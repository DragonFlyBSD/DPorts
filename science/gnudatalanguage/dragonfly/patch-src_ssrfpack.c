--- src/ssrfpack.c.intermediate	2018-05-14 16:34:57.000000000 +0300
+++ src/ssrfpack.c
@@ -7,7 +7,7 @@
 #define sincosf(x, s, c) __sincosf(x, s, c)
 #endif
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #define sincos(x,s,c) *s = sin(x); *c = cos(x)
 #endif
 
