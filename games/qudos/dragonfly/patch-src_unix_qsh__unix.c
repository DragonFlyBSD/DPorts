--- src/unix/qsh_unix.c.orig
+++ src/unix/qsh_unix.c
@@ -28,7 +28,7 @@
 
 #include "../qcommon/qcommon.h"
 
-#if defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__) || defined(__NetBSD__) || defined(__OpenBSD__)
 #include <machine/param.h>
 #endif
 
