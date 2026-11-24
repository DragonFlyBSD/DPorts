--- src/core.c.orig
+++ src/core.c
@@ -11,7 +11,7 @@
 #include <hiredis/hiredis_ssl.h>
 #endif
 #include <arpa/inet.h>
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/socket.h>
 #endif
 
