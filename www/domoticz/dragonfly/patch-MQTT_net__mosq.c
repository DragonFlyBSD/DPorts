--- MQTT/net_mosq.c.orig	2019-05-10 09:37:55 UTC
+++ MQTT/net_mosq.c
@@ -34,7 +34,7 @@ Contributors:
 #include <sys/endian.h>
 #endif
 
-#if defined(__FreeBSD__) || defined(__NetBSD__)
+#if defined(__FreeBSD__) || defined(__NetBSD__) || defined(__DragonFly__)
 #  include <netinet/in.h>
 #endif
 
