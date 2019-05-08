--- lib/private-libwebsockets.h.orig	2018-03-08 10:28:37 UTC
+++ lib/private-libwebsockets.h
@@ -373,7 +373,7 @@ esp8266_tcp_stream_bind(lws_sockfd_type
 
 #if defined(__APPLE__)
 #include <machine/endian.h>
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/endian.h>
 #elif defined(__linux__)
 #include <endian.h>
