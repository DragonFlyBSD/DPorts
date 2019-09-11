--- src/common/run_command.c.orig	2019-07-11 00:40:34 UTC
+++ src/common/run_command.c
@@ -47,7 +47,7 @@
 #include <unistd.h>
 #include <inttypes.h>		/* for uint16_t, uint32_t definitions */
 
-#if defined(__APPLE__) || defined(__FreeBSD__) || defined(__NetBSD__)
+#if defined(__APPLE__) || defined(__FreeBSD__) || defined(__NetBSD__) || defined(__DragonFly__)
 #define POLLRDHUP POLLHUP
 #endif
 
