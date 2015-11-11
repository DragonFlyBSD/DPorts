--- src/rateup.c.intermediate	2015-11-11 10:52:10 UTC
+++ src/rateup.c
@@ -49,7 +49,7 @@
 #endif
 
 /* BSD* does not have/need malloc.h */
-#if !defined(bsdi) && !defined(__FreeBSD__) && !defined(__OpenBSD__) && !defined(__APPLE__)
+#if !defined(bsdi) && !defined(__FreeBSD__) && !defined(__OpenBSD__) && !defined(__APPLE__) && !defined(__DragonFly__)
 #include <malloc.h>
 #endif
 
