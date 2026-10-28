--- src/console_switch.c.orig
+++ src/console_switch.c
@@ -27,7 +27,7 @@
 #include <errno.h>
 #include <signal.h>
 
-#if defined(__FreeBSD__) || defined(__FreeBSD_kernel__)
+#if defined(__FreeBSD__) || defined(__FreeBSD_kernel__) || defined(__DragonFly__)
 #include <sys/consio.h>
 #else
 #include <sys/vt.h>
