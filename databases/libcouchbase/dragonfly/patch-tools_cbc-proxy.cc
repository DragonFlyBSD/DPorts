--- tools/cbc-proxy.cc.intermediate	2023-02-24 19:54:55 UTC
+++ tools/cbc-proxy.cc
@@ -35,7 +35,7 @@
 #include <event2/bufferevent.h>
 #include <event2/buffer.h>
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <netinet/in.h>
 #endif
 
