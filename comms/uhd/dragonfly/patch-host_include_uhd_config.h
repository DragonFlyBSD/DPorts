--- host/include/uhd/config.h.orig	2016-10-17 17:15:00 UTC
+++ host/include/uhd/config.h
@@ -75,7 +75,7 @@ typedef ptrdiff_t ssize_t;
     #define UHD_PLATFORM_WIN32
 #elif defined(macintosh) || defined(__APPLE__) || defined(__APPLE_CC__)
     #define UHD_PLATFORM_MACOS
-#elif defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__FreeBSD_kernel__)
+#elif defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__FreeBSD_kernel__) || defined(__DragonFly__)
     #define UHD_PLATFORM_BSD
 #endif
 
