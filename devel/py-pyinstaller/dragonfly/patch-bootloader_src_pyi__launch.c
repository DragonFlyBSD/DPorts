--- bootloader/src/pyi_launch.c.orig	2019-07-09 19:14:04 UTC
+++ bootloader/src/pyi_launch.c
@@ -23,7 +23,7 @@
     #include <windows.h>
     #include <winsock.h>  /* ntohl */
 #else
-    #ifdef __FreeBSD__
+    #if defined(__FreeBSD__) || defined(__DragonFly__)
 /* freebsd issue #188316 */
         #include <arpa/inet.h>  /* ntohl */
     #else
