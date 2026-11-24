--- src/vmod_ip2location.c.orig
+++ src/vmod_ip2location.c
@@ -1,4 +1,4 @@
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <stdio.h>
 #define gcvt(v, d, c) sprintf(c, "%*g", d, v);
 #endif
