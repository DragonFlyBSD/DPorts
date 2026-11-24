--- man/man.c.orig
+++ man/man.c
@@ -28,7 +28,7 @@
 #include <sys/param.h>
 #include <ctype.h>
 #include <errno.h>
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <locale.h>
 #endif
 #include <stdio.h>
@@ -160,7 +160,7 @@
   prognam = mkprogname (argv[0]);
 
   unsetenv("IFS");
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
   (void) setlocale(LC_ALL, "");
 #endif
 #ifdef LOCALE
