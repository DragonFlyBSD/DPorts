--- code/rd-vanilla/qgl.h.orig	2019-04-07 09:22:21 UTC
+++ code/rd-vanilla/qgl.h
@@ -39,7 +39,7 @@ along with this program; if not, see <ht
 #	if defined(__FX__)
 #		include <GL/fxmesa.h>
 #	endif
-#elif defined( __FreeBSD__ ) || defined(__OpenBSD__) // rb010123
+#elif defined( __FreeBSD__ ) || defined(__OpenBSD__) || defined(__DragonFly__) // rb010123
 #	include <GL/gl.h>
 #	include <GL/glx.h>
 #	if defined(__FX__)
