--- lib/include/libv4lconvert.h.orig	2015-06-16 09:34:09 UTC
+++ lib/include/libv4lconvert.h
@@ -28,7 +28,7 @@
 #include <linux/ioctl.h>
 #endif
 
-#if defined(__FreeBSD__) || defined(__FreeBSD_kernel__)
+#if defined(__FreeBSD__) || defined(__FreeBSD_kernel__) || defined(__DragonFly__)
 #include <sys/time.h>
 #include <sys/types.h>
 #include <sys/ioctl.h>
