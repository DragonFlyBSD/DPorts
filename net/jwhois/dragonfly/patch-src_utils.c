--- src/utils.c.orig	2007-06-26 07:00:20 UTC
+++ src/utils.c
@@ -28,6 +28,7 @@
 #ifdef HAVE_SYS_TYPES_H
 # include <sys/types.h>
 #endif
+#include <sys/select.h>
 #ifdef HAVE_SYS_SOCKET_H
 # include <sys/socket.h>
 #endif
