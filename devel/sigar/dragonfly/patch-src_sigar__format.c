--- src/sigar_format.c.orig	2014-11-17 21:46:20 UTC
+++ src/sigar_format.c
@@ -30,7 +30,7 @@
 #ifndef WIN32
 #include <netinet/in.h>
 #include <arpa/inet.h>
-#if defined(__OpenBSD__) || defined(__FreeBSD__) || defined(__NetBSD__) || defined(_AIX)
+#if defined(__OpenBSD__) || defined(__FreeBSD__) || defined(__NetBSD__) || defined(_AIX) || defined(__DragonFly__)
 #include <sys/socket.h>
 #endif
 #include <pwd.h>
