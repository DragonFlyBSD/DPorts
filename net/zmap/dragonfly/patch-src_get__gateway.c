--- src/get_gateway.c.orig	2015-09-11 18:30:41.000000000 +0300
+++ src/get_gateway.c
@@ -23,7 +23,7 @@
 #include <sys/ioctl.h>
 
 
-#if defined(__APPLE__) || defined(__FreeBSD__) || defined(__NetBSD__)
+#if defined(__APPLE__) || defined(__FreeBSD__) || defined(__NetBSD__) || defined(__DragonFly__)
 #include "get_gateway-bsd.h"
 #else // (linux)
 #include "get_gateway-linux.h"
