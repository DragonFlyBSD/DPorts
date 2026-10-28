--- codemp/rd-rend2/qgl.h.orig	2026-10-26 07:05:23 UTC
+++ codemp/rd-rend2/qgl.h
@@ -14,7 +14,7 @@
 #	if defined(__FX__)
 #		include <GL/fxmesa.h>
 #	endif
-#elif defined( __FreeBSD__ ) // rb010123
+#elif defined( __FreeBSD__ ) || defined(__DragonFly__) // rb010123
 #	include <GL/gl.h>
 #	include <GL/glx.h>
 #	if defined(__FX__)
