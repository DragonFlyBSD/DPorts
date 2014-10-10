--- cpp/src/IceSSL/Instance.cpp.orig	2013-10-04 15:48:14 UTC
+++ cpp/src/IceSSL/Instance.cpp
@@ -101,7 +101,7 @@
 {
 #if defined(_WIN32)
     return static_cast<unsigned long>(GetCurrentThreadId());
-#elif defined(__FreeBSD__) || defined(__APPLE__) || defined(__osf1__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__) || defined(__APPLE__) || defined(__osf1__)
     //
     // On some platforms, pthread_t is a pointer to a per-thread structure.
     //
