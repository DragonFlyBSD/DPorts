--- src/main.c.orig
+++ src/main.c
@@ -32,7 +32,7 @@
 #include <sys/wait.h>
 #include <time.h>
 #include <unistd.h>
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <signal.h>
 #endif
 
