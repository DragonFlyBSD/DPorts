--- src/sigar.c.orig	2014-11-17 21:46:20 UTC
+++ src/sigar.c
@@ -24,7 +24,7 @@
 #include <sys/socket.h>
 #include <sys/time.h>
 #endif
-#if defined(__OpenBSD__) || defined(__FreeBSD__)
+#if defined(__OpenBSD__) || defined(__FreeBSD__) || defined(__DragonFly__)
 #include <netinet/in.h>
 #endif
 #ifndef WIN32
@@ -1475,7 +1475,8 @@ int sigar_resource_limit_get(sigar_t *si
 #endif
 
 #if !defined(WIN32) && !defined(NETWARE) && !defined(DARWIN) && \
-    !defined(__FreeBSD__) && !defined(__OpenBSD__) && !defined(__NetBSD__)
+    !defined(__FreeBSD__) && !defined(__OpenBSD__) && !defined(__NetBSD__) \
+    && !defined(__DragonFly__)
 
 /* XXX: prolly will be moving these stuffs into os_net.c */
 #include <sys/ioctl.h>
