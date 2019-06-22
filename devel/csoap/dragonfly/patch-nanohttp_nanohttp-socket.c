--- nanohttp/nanohttp-socket.c.orig	2006-07-09 16:24:19 UTC
+++ nanohttp/nanohttp-socket.c
@@ -29,6 +29,10 @@
 #include <sys/types.h>
 #endif
 
+#ifdef HAVE_SYS_SELECT_H
+#include <sys/select.h>
+#endif
+
 #ifdef HAVE_SYS_SOCKET_H
 #include <sys/socket.h>
 #endif
