--- src/wps/wps_upnp.c.orig	2022-06-04 20:19:10 UTC
+++ src/wps/wps_upnp.c
@@ -862,7 +862,8 @@ fail:
 }
 
 
-#if defined(__FreeBSD__) || defined(__FreeBSD_kernel__) || defined(__APPLE__)
+#if defined(__FreeBSD__) || defined(__FreeBSD_kernel__) || defined(__APPLE__) || \
+	defined(__DragonFly__)
 #include <sys/sysctl.h>
 #include <net/route.h>
 #include <net/if_dl.h>
