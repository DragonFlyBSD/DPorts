--- src/vmod_ip2location.c.intermediate	2020-11-25 11:25:55.000000000 +0000
+++ src/vmod_ip2location.c
@@ -12,7 +12,7 @@
 #include <unistd.h>
 #include <pthread.h>
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <stdio.h>
 #define gcvt(v, d, c) sprintf(c, "%*g", d, v);
 #endif
