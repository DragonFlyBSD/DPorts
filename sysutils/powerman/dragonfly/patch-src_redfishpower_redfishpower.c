--- src/redfishpower/redfishpower.c.orig
+++ src/redfishpower/redfishpower.c
@@ -26,7 +26,7 @@
 #include <sys/types.h>
 #include <sys/socket.h>
 #include <netdb.h>
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <netinet/in.h>
 #endif
 #include <arpa/inet.h>
