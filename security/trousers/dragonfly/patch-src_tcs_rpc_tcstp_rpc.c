--- src/tcs/rpc/tcstp/rpc.c.intermediate	2026-09-05 02:48:17 UTC
+++ src/tcs/rpc/tcstp/rpc.c
@@ -13,7 +13,7 @@
 #include <syslog.h>
 #include <string.h>
 #include <netdb.h>
-#if (defined (__OpenBSD__) || defined (__FreeBSD__))
+#if (defined (__OpenBSD__) || defined (__FreeBSD__) || defined (__DragonFly__))
 #include <sys/types.h>
 #include <sys/socket.h>
 #include <netinet/in.h>
