--- lib/libhts/net_posix.c.orig	2021-08-22 10:10:05 UTC
+++ lib/libhts/net_posix.c
@@ -24,7 +24,7 @@
 #define SOL_TCP IPPROTO_TCP
 #endif
 #include "OSXGNUReplacements.h"
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
 #ifndef SOL_TCP
 #define SOL_TCP IPPROTO_TCP
 #endif
@@ -44,7 +44,7 @@
 #include <netinet/tcp.h>
 #include <arpa/inet.h>
 
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/socket.h>
 #endif
 
