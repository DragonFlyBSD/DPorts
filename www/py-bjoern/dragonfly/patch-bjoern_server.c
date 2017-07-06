--- bjoern/server.c.orig	2016-04-11 09:43:38 UTC
+++ bjoern/server.c
@@ -2,7 +2,7 @@
 #include <fcntl.h>
 #include <ev.h>
 
-#if defined __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 # include <netinet/in.h> /* for struct sockaddr_in */
 # include <sys/types.h>
 # include <sys/socket.h>
