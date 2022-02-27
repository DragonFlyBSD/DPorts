--- src/recv.c.orig	2020-10-28 00:45:30 UTC
+++ src/recv.c
@@ -95,7 +95,7 @@
 //#include <fcntl.h>
 #include <assert.h>
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <errno.h>
 #endif
 
