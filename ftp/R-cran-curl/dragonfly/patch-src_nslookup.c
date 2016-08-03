--- src/nslookup.c.orig	2016-07-26 11:53:35.000000000 +0300
+++ src/nslookup.c
@@ -9,7 +9,7 @@ const char *inet_ntop(int af, const void
 #include <sys/socket.h>
 #include <netdb.h>
 #include <arpa/inet.h>
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <netinet/in.h>
 #endif
 #endif
