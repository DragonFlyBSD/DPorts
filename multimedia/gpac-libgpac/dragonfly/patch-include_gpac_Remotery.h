--- include/gpac/Remotery.h.orig	2020-06-16 16:17:17 UTC
+++ include/gpac/Remotery.h
@@ -121,7 +121,7 @@ documented just below this comment.
 // Platform identification
 #if defined(_WINDOWS) || defined(_WIN32)
     #define RMT_PLATFORM_WINDOWS
-#elif defined(__linux__) || defined(__FreeBSD__)
+#elif defined(__linux__) || defined(__FreeBSD__) || defined(__DragonFly__)
     #define RMT_PLATFORM_LINUX
     #define RMT_PLATFORM_POSIX
 #elif defined(__APPLE__)
