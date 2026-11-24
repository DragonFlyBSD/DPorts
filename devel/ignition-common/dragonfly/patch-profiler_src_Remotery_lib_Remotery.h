--- profiler/src/Remotery/lib/Remotery.h.orig
+++ profiler/src/Remotery/lib/Remotery.h
@@ -119,7 +119,7 @@
 // Platform identification
 #if defined(_WINDOWS) || defined(_WIN32)
     #define RMT_PLATFORM_WINDOWS
-#elif defined(__linux__) || defined(__FreeBSD__)
+#elif defined(__linux__) || defined(__FreeBSD__) || defined(__DragonFly__)
     #define RMT_PLATFORM_LINUX
     #define RMT_PLATFORM_POSIX
 #elif defined(__APPLE__)
