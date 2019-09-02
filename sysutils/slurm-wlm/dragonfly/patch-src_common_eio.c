--- src/common/eio.c.orig	2019-07-11 00:40:34 UTC
+++ src/common/eio.c
@@ -44,7 +44,7 @@
 #include <sys/socket.h>
 #include <unistd.h>
 
-#if defined(__APPLE__) || defined(__FreeBSD__) || defined(__NetBSD__)
+#if defined(__APPLE__) || defined(__FreeBSD__) || defined(__NetBSD__) || defined(__DragonFly__)
 #define POLLRDHUP POLLHUP
 #endif
 
