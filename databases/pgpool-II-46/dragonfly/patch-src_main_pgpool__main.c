--- src/main/pgpool_main.c.orig
+++ src/main/pgpool_main.c
@@ -36,7 +36,7 @@
 #include <sys/time.h>
 #include <sys/wait.h>
 
-#ifdef  __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <netinet/in.h>
 #endif
 
