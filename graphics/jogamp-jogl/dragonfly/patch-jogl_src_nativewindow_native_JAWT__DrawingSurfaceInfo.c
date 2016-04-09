--- jogl/src/nativewindow/native/JAWT_DrawingSurfaceInfo.c.orig	2014-10-10 14:04:55 UTC
+++ jogl/src/nativewindow/native/JAWT_DrawingSurfaceInfo.c
@@ -41,7 +41,7 @@
 
 #ifdef WIN32
   #define PLATFORM_DSI_SIZE sizeof(JAWT_Win32DrawingSurfaceInfo)
-#elif defined(linux) || defined(__sun) || defined(__FreeBSD__) || defined(_HPUX)
+#elif defined(linux) || defined(__sun) || defined(__FreeBSD__) || defined(__DragonFly__)
   #define PLATFORM_DSI_SIZE sizeof(JAWT_X11DrawingSurfaceInfo)
 #elif defined(__APPLE__)
   #define PLATFORM_DSI_SIZE sizeof(JAWT_MacOSXDrawingSurfaceInfo)
