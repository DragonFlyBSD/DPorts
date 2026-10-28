--- bootloader/src/pyi_global.h.orig
+++ bootloader/src/pyi_global.h
@@ -239,7 +239,7 @@
     #endif
 #else
     /* On all non-Windows platforms, use ntohl() */
-    #ifdef __FreeBSD__
+    #if defined(__FreeBSD__) || defined(__DragonFly__)
         /* freebsd issue #188316 */
         #include <arpa/inet.h>  /* ntohl */
     #else
