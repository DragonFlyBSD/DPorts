--- cegui/src/Exceptions.cpp.orig	2016-04-23 18:19:40 UTC
+++ cegui/src/Exceptions.cpp
@@ -40,7 +40,7 @@
 #elif defined(__ANDROID__)
 #   include <android/log.h>
 #elif     (defined(__linux__) && !defined(__ANDROID__)) \
-      ||  defined(__APPLE__) || defined(__FreeBSD__) || defined(__NetBSD__) \
+      ||  defined(__APPLE__) || defined(__FreeBSD__) || defined(__DragonFly__) || defined(__NetBSD__) \
       ||  defined(__HAIKU__)
 #   include <execinfo.h>
 #   include <dlfcn.h>
@@ -141,7 +141,7 @@ static void dumpBacktrace(size_t frames)
     logger.logEvent("==========  End of Backtrace  ==========", Errors);
 
     SymCleanup(GetCurrentProcess());
-#elif defined(__linux__) || defined(__APPLE__) || defined(__FreeBSD__) || defined(__NetBSD__) || defined(__HAIKU__)
+#elif defined(__linux__) || defined(__APPLE__) || defined(__FreeBSD__) || defined(__DragonFly__) || defined(__NetBSD__) || defined(__HAIKU__)
     void* buffer[frames];
     const int received = backtrace(&buffer[0], frames);
 
