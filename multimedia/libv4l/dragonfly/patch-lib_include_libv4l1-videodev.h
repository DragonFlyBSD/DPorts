--- lib/include/libv4l1-videodev.h.orig	2015-06-16 09:34:09 UTC
+++ lib/include/libv4l1-videodev.h
@@ -6,7 +6,7 @@
 #include <linux/ioctl.h>
 #endif
 
-#if defined(__FreeBSD__) || defined(__FreeBSD_kernel__)
+#if defined(__FreeBSD__) || defined(__FreeBSD_kernel__) || defined(__DragonFly__)
 #include <sys/ioctl.h>
 #endif
 
