--- antivirus.c.orig
+++ antivirus.c
@@ -11,7 +11,7 @@
 #include <syslog.h>
 #include <signal.h>
 #include <fcntl.h>
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/wait.h>
 #else
 #include <wait.h>
