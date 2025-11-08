--- src/libvncserver/main.c.orig	Sun Dec 22 09:54:53 2024
+++ src/libvncserver/main.c	Sat Nov
@@ -20,6 +20,10 @@
 #include <stdarg.h>
 #include <errno.h>
 
+#if defined(__DragonFly__)
+#include <sys/socket.h>        /* For sockaddr_storage */
+#endif
+
 #ifndef false
 #define false 0
 #define true -1
