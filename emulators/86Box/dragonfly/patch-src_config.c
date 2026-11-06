--- src/config.c.orig	2026-05-30 16:43:41 UTC
+++ src/config.c
@@ -32,7 +32,7 @@
 #else
 #    include <arpa/inet.h>
 #endif
-#if defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__NetBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__) || defined(__OpenBSD__) || defined(__NetBSD__)
 #    include <sys/types.h>
 #    include <sys/socket.h>
 #endif
