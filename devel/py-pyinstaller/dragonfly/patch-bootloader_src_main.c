--- bootloader/src/main.c.intermediate	2021-03-08 11:48:12.000000000 +0000
+++ bootloader/src/main.c
@@ -16,7 +16,7 @@
  * main: For OS X and Linux
  */
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
     #include <sys/cdefs.h>
     #include <floatingpoint.h>
     #include <ieeefp.h>
