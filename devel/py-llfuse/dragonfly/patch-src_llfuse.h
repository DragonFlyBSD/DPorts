--- src/llfuse.h.orig	2016-02-02 17:05:02 UTC
+++ src/llfuse.h
@@ -16,14 +16,14 @@ the terms of the GNU LGPL.
 #define PLATFORM PLATFORM_LINUX
 #elif __FreeBSD_kernel__&&__GLIBC__
 #define PLATFORM PLATFORM_LINUX
-#elif __FreeBSD__
+#elif __FreeBSD__ || __DragonFly__
 #define PLATFORM PLATFORM_BSD
 #elif __NetBSD__
 #define PLATFORM PLATFORM_BSD
 #elif __APPLE__ && __MACH__
 #define PLATFORM PLATFORM_DARWIN
 #else
-#error "Unable to determine system (Linux/FreeBSD/NetBSD/Darwin)"
+#error "Unable to determine system (Linux/DragonFly/FreeBSD/NetBSD/Darwin)"
 #endif
 
 #if PLATFORM == PLATFORM_DARWIN
