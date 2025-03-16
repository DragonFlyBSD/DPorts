--- src_c/camera.h.ori	Thu Feb 27 11:59:59 2025
+++ src_c/camera.h	Thu Feb 27 12:00:13 2025
@@ -50,7 +50,7 @@
 #include <sys/videoio.h>
 #endif
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <linux/videodev2.h>
 #endif
 
