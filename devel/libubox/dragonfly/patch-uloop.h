--- uloop.h.orig	2018-07-25 08:30:05 UTC
+++ uloop.h
@@ -24,7 +24,7 @@
 #include <stdint.h>
 #include <signal.h>
 
-#if defined(__APPLE__) || defined(__FreeBSD__)
+#if defined(__APPLE__) || defined(__FreeBSD__) || defined(__DragonFly__)
 #define USE_KQUEUE
 #else
 #define USE_EPOLL
