--- src/tcsd/svrside.c.intermediate	2026-09-05 02:48:17 UTC
+++ src/tcsd/svrside.c
@@ -21,7 +21,7 @@
 #include <sys/socket.h>
 #include <netdb.h>
 #include <pwd.h>
-#if (defined (__OpenBSD__) || defined (__FreeBSD__))
+#if (defined (__OpenBSD__) || defined (__FreeBSD__) || defined (__DragonFly__))
 #include <netinet/in.h>
 #endif
 #include <arpa/inet.h>
