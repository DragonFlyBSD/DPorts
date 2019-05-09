--- src/gldit/cairo-dock-config.c.intermediate	2019-05-09 17:56:17.000000000 +0000
+++ src/gldit/cairo-dock-config.c
@@ -28,7 +28,7 @@
 #include "gldi-config.h"
 
 #ifdef HAVE_LIBCRYPT
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <unistd.h>  // on BSD, there is no crypt.h
 #else
 #include <crypt.h>
