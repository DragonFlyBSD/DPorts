--- include/libwebsockets.h.orig	1970-01-01 00:00:00 UTC
+++ include/libwebsockets.h
@@ -120,7 +120,7 @@ typedef unsigned long long lws_intptr_t;
 #include <sys/capability.h>
 #endif
 
-#if defined(__NetBSD__) || defined(__FreeBSD__) || defined(__QNX__) || defined(__OpenBSD__)
+#if defined(__NetBSD__) || defined(__FreeBSD__) || defined(__QNX__) || defined(__OpenBSD__) || defined(__DragonFly__)
 #include <sys/socket.h>
 #include <netinet/in.h>
 #endif
@@ -147,7 +147,7 @@ typedef unsigned long long lws_intptr_t;
 #endif
 #endif
 
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/signal.h>
 #endif
 
