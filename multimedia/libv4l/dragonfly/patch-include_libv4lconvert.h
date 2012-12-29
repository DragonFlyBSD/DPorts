--- include/libv4lconvert.h.orig	2012-04-14 19:33:44.000000000 +0200
+++ include/libv4lconvert.h	2012-12-29 10:38:21.152090000 +0100
@@ -28,7 +28,7 @@
 #include <linux/ioctl.h>
 #endif
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/time.h>
 #include <sys/types.h>
 #include <sys/ioctl.h>
