--- tools/omusrmsg.c.orig
+++ tools/omusrmsg.c
@@ -231,7 +231,7 @@
  */
 #ifdef OS_BSD
     /* Since version 900007, FreeBSD has a POSIX compliant <utmpx.h> */
-    #if defined(__FreeBSD__) && (__FreeBSD_version >= 900007)
+    #if (defined(__FreeBSD__) && (__FreeBSD_version >= 900007)) || defined(__DragonFly__)
         #ifndef setutent
             #define setutent() setutxent()
         #endif
