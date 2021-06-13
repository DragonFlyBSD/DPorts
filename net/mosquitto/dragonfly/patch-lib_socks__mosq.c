--- lib/socks_mosq.c.orig	2021-06-11 10:07:38.501387000 +0200
+++ lib/socks_mosq.c	2021-06-11 10:08:01.790864000 +0200
@@ -30,7 +30,7 @@
 #else
 #  include <arpa/inet.h>
 #endif
-#if defined(__FreeBSD__) || defined(__OpenBSD__)
+#if defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__DragonFly__)
 #  include <sys/socket.h>
 #  include <netinet/in.h>
 #endif
