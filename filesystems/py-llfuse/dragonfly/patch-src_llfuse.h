--- src/llfuse.h.orig
+++ src/llfuse.h
@@ -18,6 +18,8 @@
 #define PLATFORM PLATFORM_LINUX
 #elif __FreeBSD__
 #define PLATFORM PLATFORM_BSD
+#elif __DragonFly__
+#define PLATFORM PLATFORM_BSD
 #elif __NetBSD__
 #define PLATFORM PLATFORM_BSD
 #elif __APPLE__ && __MACH__
