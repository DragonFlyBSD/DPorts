--- bootloader/src/main.c.intermediate	2019-12-30 17:27:00 UTC
+++ bootloader/src/main.c
@@ -16,7 +16,7 @@
  * main: For OS X and Linux
  */
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
     #include <floatingpoint.h>
     #include <ieeefp.h>
 #endif
