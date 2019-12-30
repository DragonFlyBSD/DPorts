--- bootloader/src/pyi_pythonlib.c.orig	2019-07-09 19:14:04 UTC
+++ bootloader/src/pyi_pythonlib.c
@@ -23,7 +23,7 @@
 #else
     #include <dlfcn.h>  /* dlerror */
     #include <limits.h> /* PATH_MAX */
-    #ifdef __FreeBSD__
+    #if defined(__FreeBSD__) || defined(__DragonFly__)
 /* freebsd issue #188316 */
         #include <arpa/inet.h>  /* ntohl */
     #else
