--- xwin.c.orig	2015-12-01 14:46:58.000000000 +0200
+++ xwin.c
@@ -20,7 +20,7 @@
 #include <GL/gl.h>
 #include <GL/glu.h>
 #endif
-#if defined(DARWIN) || defined(FREEBSD)
+#if defined(DARWIN) || defined(FREEBSD) || defined(DRAGONFLY)
 #else
 #include <malloc.h>
 #endif
