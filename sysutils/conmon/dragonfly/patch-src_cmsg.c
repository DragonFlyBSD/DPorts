--- src/cmsg.c.orig	2026-10-26 03:22:00 UTC
+++ src/cmsg.c
@@ -32,7 +32,7 @@
 #error cmsg.c requires C99 or later
 #endif
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #define ECOMM EINVAL
 #endif
 
