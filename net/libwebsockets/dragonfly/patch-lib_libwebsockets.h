--- lib/libwebsockets.h.orig	2018-03-08 10:28:37 UTC
+++ lib/libwebsockets.h
@@ -117,7 +117,7 @@ typedef unsigned long long lws_intptr_t;
 #include <sys/capability.h>
 #endif
 
-#if defined(__NetBSD__) || defined(__FreeBSD__)
+#if defined(__NetBSD__) || defined(__FreeBSD__) || defined(__DragonFly__)
 #include <netinet/in.h>
 #endif
 
