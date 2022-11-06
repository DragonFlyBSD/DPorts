--- src/xitk/xine-toolkit/backend_x11.c.orig	2021-12-12 19:49:29 UTC
+++ src/xitk/xine-toolkit/backend_x11.c
@@ -30,7 +30,9 @@
 #include <strings.h>
 #include <unistd.h>
 #include <pthread.h>
+#ifndef __DragonFly__
 #include <malloc.h>
+#endif
 
 #include <X11/Xlib.h>
 #include <X11/Xutil.h>
