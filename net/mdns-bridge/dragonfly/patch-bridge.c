--- bridge.c.orig
+++ bridge.c
@@ -47,7 +47,7 @@
 //
 #if defined(__linux__)
 # define HAVE_EPOLL
-#elif defined(__FreeBSD__) || defined(__APPLE__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__) || defined(__APPLE__)
 # define HAVE_KQUEUE
 #endif
 
