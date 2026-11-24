--- src/event.h.orig
+++ src/event.h
@@ -7,7 +7,7 @@
 
 #ifdef __linux__
 #  define WAIT_USE_EPOLL
-#elif defined(__APPLE__) || defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__)
+#elif defined(__APPLE__) || defined(__FreeBSD__) || defined(__DragonFly__) || defined(__NetBSD__) || defined(__OpenBSD__)
 #  define WAIT_USE_KQUEUE
 #else
 #  error "no event loop implementation available"
