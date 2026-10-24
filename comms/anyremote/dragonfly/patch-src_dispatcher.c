--- src/dispatcher.c.orig
+++ src/dispatcher.c
@@ -33,7 +33,7 @@
 #include <netinet/in.h>
 #include <time.h>
 #include <unistd.h>
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <signal.h>
 #endif
 #ifndef __FreeBSD__
