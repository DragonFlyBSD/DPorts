--- libvncserver/main.c.orig	2020-06-13 18:49:53 UTC
+++ libvncserver/main.c
@@ -20,6 +20,10 @@
 #include <stdarg.h>
 #include <errno.h>
 
+#if defined(__DragonFly__)
+#include <sys/socket.h>	/* For sockaddr_storage */
+#endif
+
 #ifndef false
 #define false 0
 #define true -1
