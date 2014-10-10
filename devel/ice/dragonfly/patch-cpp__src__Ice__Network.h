--- cpp/src/Ice/Network.h.orig	2013-10-04 15:48:14 UTC
+++ cpp/src/Ice/Network.h
@@ -43,7 +43,7 @@
 
 #if defined(__linux) && !defined(ICE_NO_EPOLL)
 #   define ICE_USE_EPOLL 1
-#elif (defined(__APPLE__) || defined(__FreeBSD__)) && !defined(ICE_NO_KQUEUE)
+#elif (defined(__APPLE__) || defined(__FreeBSD__) || defined(__DragonFly__)) && !defined(ICE_NO_KQUEUE)
 #   define ICE_USE_KQUEUE 1
 #elif defined(_WIN32)
 #  if defined(ICE_OS_WINRT)
