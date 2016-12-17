--- build/premake/4.3/src/host/premake.h.orig	2011-10-20 12:58:38.000000000 +0300
+++ build/premake/4.3/src/host/premake.h
@@ -15,7 +15,7 @@
 #if defined(__linux__)
 #define PLATFORM_LINUX    (1)
 #define PLATFORM_STRING   "linux"
-#elif defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__)
+#elif defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__DragonFly__)
 #define PLATFORM_BSD      (1)
 #define PLATFORM_STRING   "bsd"
 #elif defined(__APPLE__) && defined(__MACH__)
