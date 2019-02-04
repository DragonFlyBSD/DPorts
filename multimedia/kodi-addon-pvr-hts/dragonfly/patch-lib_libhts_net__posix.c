--- lib/libhts/net_posix.c~	2017-08-20 16:07:37.000000000 +0200
+++ lib/libhts/net_posix.c	2019-02-03 20:37:51.472105000 +0100
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
 
