--- codemp/rd-dedicated/qgl.h.orig	2019-04-07 09:22:21 UTC
+++ codemp/rd-dedicated/qgl.h
@@ -32,7 +32,7 @@
 #include <GL/fxmesa.h>
 #endif
 
-#elif defined( __FreeBSD__ ) // rb010123
+#elif defined( __FreeBSD__ ) || defined(__DragonFly__) // rb010123
 
 #include <GL/gl.h>
 #include <GL/glx.h>
@@ -346,7 +346,7 @@ extern	void ( APIENTRY * qglUnlockArrays
 //===========================================================================
 
 // non-windows systems will just redefine qgl* to gl*
-#if !defined( _WIN32 ) && !defined(MACOS_X) && !defined( __linux__ ) && !defined( __FreeBSD__ ) // rb010123
+#if !defined( _WIN32 ) && !defined(MACOS_X) && !defined( __linux__ ) && !defined( __FreeBSD__ ) && !defined(__DragonFly__) // rb010123
 
 #include "qgl_linked.h"
 
@@ -724,7 +724,7 @@ extern BOOL ( WINAPI * qwglSwapIntervalE
 
 #endif	// _WIN32
 
-#if ( (defined __linux__ )  || (defined __FreeBSD__ ) ) // rb010123
+#if ( (defined __linux__ )  || (defined __FreeBSD__ ) || defined(__DragonFly__) ) // rb010123
 
 //FX Mesa Functions
 // bk001129 - from cvs1.17 (mkv)
