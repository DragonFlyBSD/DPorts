--- src/wps/wps_upnp.c.intermediate	2021-12-22 20:16:46.000000000 +0000
+++ src/wps/wps_upnp.c
@@ -862,7 +862,7 @@ fail:
 }
 
 
-#if defined(__FreeBSD__) || defined(__FreeBSD_kernel__) || defined(__APPLE__)
+#if defined(__FreeBSD__) || defined(__FreeBSD_kernel__) || defined(__APPLE__) || defined(__DragonFly__)
 #include <sys/sysctl.h>
 #include <net/route.h>
 #include <net/if_dl.h>
