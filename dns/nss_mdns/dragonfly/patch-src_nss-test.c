--- src/nss-test.c.orig	2020-06-26 00:04:20 UTC
+++ src/nss-test.c
@@ -26,7 +26,7 @@
 #include <sys/socket.h>
 #include <string.h>
 #include <arpa/inet.h>
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <netinet/in.h>
 #endif
 
