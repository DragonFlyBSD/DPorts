--- lib/include/libv4l1-videodev.h.orig	2017-01-22 17:33:34 UTC
+++ lib/include/libv4l1-videodev.h
@@ -6,7 +6,8 @@
 #include <linux/ioctl.h>
 #endif
 
-#if defined(__FreeBSD__) || defined(__FreeBSD_kernel__) || defined(__OpenBSD__)
+#if defined(__FreeBSD__) || defined(__FreeBSD_kernel__) || defined(__OpenBSD__) || \
+  defined(__DragonFly__)
 #include <sys/ioctl.h>
 #endif
 
