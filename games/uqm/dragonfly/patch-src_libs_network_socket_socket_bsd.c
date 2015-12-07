--- src/libs/network/socket/socket_bsd.c.orig	2011-05-20 22:24:45.000000000 +0300
+++ src/libs/network/socket/socket_bsd.c
@@ -30,7 +30,7 @@
 #include <sys/types.h>
 #include <sys/socket.h>
 #include <netdb.h>
-#if defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__NetBSD__)
+#if defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__NetBSD__) || defined(__DragonFly__)
 #	include <netinet/in_systm.h>
 #	include <netinet/in.h>
 #endif
