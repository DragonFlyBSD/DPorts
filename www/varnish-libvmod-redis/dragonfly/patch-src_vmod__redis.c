--- src/vmod_redis.c.orig
+++ src/vmod_redis.c
@@ -10,7 +10,7 @@
 #include <hiredis/hiredis_ssl.h>
 #endif
 #include <arpa/inet.h>
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/socket.h>
 #endif
 
