--- recv.c.orig	2018-10-08 14:15:21 UTC
+++ recv.c
@@ -94,7 +94,7 @@
 //#include <fcntl.h>
 #include <assert.h>
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <errno.h>
 #endif
 
