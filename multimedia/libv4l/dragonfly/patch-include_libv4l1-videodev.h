--- include/libv4l1-videodev.h.intermediate	2012-12-29 10:45:09.602660000 +0100
+++ include/libv4l1-videodev.h	2012-12-29 10:45:45.462710000 +0100
@@ -6,7 +6,7 @@
 #include <linux/ioctl.h>
 #endif
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/ioctl.h>
 #endif
 
