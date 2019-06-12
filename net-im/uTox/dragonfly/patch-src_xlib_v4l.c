--- src/xlib/v4l.c.intermediate	2019-06-11 09:36:34.000000000 +0000
+++ src/xlib/v4l.c
@@ -16,7 +16,7 @@
 int utox_v4l_fd = -1;
 
 #include <sys/mman.h>
-#if defined(__linux__) || defined(__FreeBSD__) //FreeBSD will have the proper includes after installing v4l
+#if defined(__linux__) || defined(__FreeBSD__) || defined(__DragonFly__) //FreeBSD will have the proper includes after installing v4l
 #include <linux/videodev2.h>
 #else //OpenBSD
 #include <sys/videoio.h>
