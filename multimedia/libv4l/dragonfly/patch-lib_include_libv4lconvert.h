--- lib/include/libv4lconvert.h.orig	2017-01-22 17:33:34 UTC
+++ lib/include/libv4lconvert.h
@@ -28,7 +28,8 @@
 #include <linux/ioctl.h>
 #endif
 
-#if defined(__FreeBSD__) || defined(__FreeBSD_kernel__) || defined(__OpenBSD__)
+#if defined(__FreeBSD__) || defined(__FreeBSD_kernel__) || defined(__OpenBSD__) || \
+  defined(__DragonFly__)
 #include <sys/time.h>
 #include <sys/types.h>
 #include <sys/ioctl.h>
