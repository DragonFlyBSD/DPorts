--- common/glxext.h.orig	2013-06-14 03:46:37.000000000 +0000
+++ common/glxext.h
@@ -330,7 +330,7 @@ typedef unsigned int GLXVideoDeviceNV;
 /* (as used in the GLX_OML_sync_control extension). */
 #if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L
 #include <inttypes.h>
-#elif defined( __VMS ) || defined(__FreeBSD__)
+#elif defined( __VMS ) || defined(__FreeBSD__) || defined(__DragonFly__)
 #include <inttypes.h>
 #elif (defined(__sun__) && defined(__svr4__)) || (defined(__sun) && defined(__SVR4))
 #include <inttypes.h>
