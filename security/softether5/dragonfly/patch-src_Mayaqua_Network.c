--- src/Mayaqua/Network.c.orig	2021-06-24 08:28:36 UTC
+++ src/Mayaqua/Network.c
@@ -41,10 +41,14 @@
 #include <sys/event.h>
 #endif
 
+#ifdef __DragonFly__
+#include <sys/socket.h> /* for struct sockaddr */
+#endif
+
 #ifdef UNIX
 #ifdef UNIX_SOLARIS
 #define USE_STATVFS
-#include <sys/statvfs.h>'
+#include <sys/statvfs.h>
 #else
 #define MAYAQUA_SUPPORTS_GETIFADDRS
 #include <ifaddrs.h>
