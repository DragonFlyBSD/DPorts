--- lib/net_mosq.c.orig	2016-06-03 00:20:22.000000000 +0300
+++ lib/net_mosq.c
@@ -34,7 +34,7 @@ Contributors:
 #include <sys/endian.h>
 #endif
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #  include <netinet/in.h>
 #endif
 
