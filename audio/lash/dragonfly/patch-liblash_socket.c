--- liblash/socket.c.orig	2006-09-16 22:25:31.000000000 +0300
+++ liblash/socket.c
@@ -19,6 +19,9 @@
  */
 
 #define _POSIX_SOURCE /* addrinfo */
+#if defined(__DragonFly__)
+#define __BSD_VISIBLE 1 /* for NI_MAXHOST, NI_MAXSERV */
+#endif
 
 #include <stdint.h>
 #include <sys/types.h>
