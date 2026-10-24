--- src/tcsd/platform.c.orig	2026-09-05 02:48:17 UTC
+++ src/tcsd/platform.c
@@ -9,7 +9,7 @@
  */
 
 
-#if (defined (__FreeBSD__) || defined (__OpenBSD__) || defined (__APPLE__))
+#if (defined (__FreeBSD__) || defined (__OpenBSD__) || defined (__APPLE__) || defined (__DragonFly__))
 #include <sys/param.h>
 #include <sys/sysctl.h>
 #include <err.h>
@@ -82,7 +82,7 @@ platform_get_runlevel()
 
 	return runlevel;
 }
-#elif (defined (__FreeBSD__) || defined (__OpenBSD__) || defined (__APPLE__))
+#elif (defined (__FreeBSD__) || defined (__OpenBSD__) || defined (__APPLE__) || defined (__DragonFly__))
 
 char
 platform_get_runlevel()
