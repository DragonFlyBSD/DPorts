--- xworm.c.intermediate	2019-06-07 20:11:52.000000000 +0000
+++ xworm.c
@@ -3,7 +3,7 @@
  
 #include <X11/Xlib.h>
 #include <X11/Xutil.h>
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/time.h>
 #endif
 #include <time.h>
