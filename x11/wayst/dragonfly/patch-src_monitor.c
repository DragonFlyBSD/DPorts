--- src/monitor.c.orig
+++ src/monitor.c
@@ -9,7 +9,7 @@
 #include <stdint.h>
 #include <sys/wait.h>
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <utmpx.h>
 #else
 #include <utmp.h>
