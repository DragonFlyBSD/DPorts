--- bootloader/src/pyi_archive.c.orig	2019-07-09 19:14:04 UTC
+++ bootloader/src/pyi_archive.c
@@ -20,7 +20,7 @@
     #include <winsock.h>  /* ntohl */
 #else
     #include <limits.h>  /* PATH_MAX - not available on windows. */
-    #ifdef __FreeBSD__
+    #if defined(__FreeBSD__) || defined(__DragonFly__)
 /* freebsd issue #188316 */
         #include <arpa/inet.h>  /* ntohl */
     #else
