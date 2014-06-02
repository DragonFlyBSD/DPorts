--- jogl/src/native/jogl/JAWT_DrawingSurfaceInfo.c.orig	2008-02-02 21:57:12.000000000 +0000
+++ jogl/src/native/jogl/JAWT_DrawingSurfaceInfo.c
@@ -41,7 +41,8 @@
 
 #ifdef WIN32
   #define PLATFORM_DSI_SIZE sizeof(JAWT_Win32DrawingSurfaceInfo)
-#elif defined(linux) || defined(__sun) || defined(__FreeBSD__) || defined(_HPUX)
+#elif defined(linux) || defined(__sun) || defined(__FreeBSD__) \
+   || defined(_HPUX) || defined(__DragonFly__)
   #define PLATFORM_DSI_SIZE sizeof(JAWT_X11DrawingSurfaceInfo)
 #elif defined(macosx)
   #define PLATFORM_DSI_SIZE sizeof(JAWT_MacOSXDrawingSurfaceInfo)
