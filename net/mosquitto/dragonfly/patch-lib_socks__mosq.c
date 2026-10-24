--- lib/socks_mosq.c.orig	2026-10-01 00:00:00 UTC
+++ lib/socks_mosq.c
@@ -30,7 +30,7 @@ Contributors:
 #else
 #  include <arpa/inet.h>
 #endif
-#if defined(__FreeBSD__) || defined(__OpenBSD__) || defined(_AIX)
+#if defined(__FreeBSD__) || defined(__OpenBSD__) || defined(_AIX) || defined(__DragonFly__)
 #  include <sys/socket.h>
 #  include <netinet/in.h>
 #endif
