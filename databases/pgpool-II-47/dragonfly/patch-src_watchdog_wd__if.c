--- src/watchdog/wd_if.c.orig
+++ src/watchdog/wd_if.c
@@ -49,7 +49,7 @@
 #include <arpa/inet.h>
 #include <ifaddrs.h>
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <netinet/in.h>
 #endif
 
@@ -469,7 +469,7 @@
 }
 
 #else							/* For non linux chaps */
-#if defined(__OpenBSD__) || defined(__FreeBSD__)
+#if defined(__OpenBSD__) || defined(__FreeBSD__) || defined(__DragonFly__)
 #define SALIGN (sizeof(long) - 1)
 #else
 #define SALIGN (sizeof(int32_t) - 1)
