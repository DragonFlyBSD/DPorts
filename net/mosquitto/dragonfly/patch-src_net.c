--- src/net.c.orig	2016-06-03 00:20:22.000000000 +0300
+++ src/net.c
@@ -35,7 +35,7 @@ Contributors:
 #include <tcpd.h>
 #endif
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #  include <netinet/in.h>
 #  include <sys/socket.h>
 #endif
