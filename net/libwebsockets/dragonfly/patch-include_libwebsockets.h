--- include/libwebsockets.h.orig	2026-03-27 03:22:53 UTC
+++ include/libwebsockets.h
@@ -167,7 +167,7 @@ typedef int suseconds_t;
 #include <sys/capability.h>
 #endif
 
-#if defined(__NetBSD__) || defined(__FreeBSD__) || defined(__QNX__) || defined(__OpenBSD__) || defined(__NuttX__)
+#if defined(__NetBSD__) || defined(__FreeBSD__) || defined(__QNX__) || defined(__OpenBSD__) || defined(__NuttX__) || defined(__DragonFly__)
 #include <sys/socket.h>
 #include <netinet/in.h>
 #endif
@@ -200,7 +200,7 @@ typedef int suseconds_t;
 #endif
 #endif
 
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/signal.h>
 #endif
 #if defined(__GNUC__)
