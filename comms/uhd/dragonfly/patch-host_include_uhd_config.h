--- host/include/uhd/config.h.intermediate	2020-11-16 15:36:29.00000000 +0000
+++ host/include/uhd/config.h
@@ -77,6 +77,6 @@ typedef ptrdiff_t ssize_t;
     #define UHD_PLATFORM_WIN32
 #elif defined(macintosh) || defined(__APPLE__) || defined(__APPLE_CC__)
     #define UHD_PLATFORM_MACOS
-#elif defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__FreeBSD_kernel__)
+#elif defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__FreeBSD_kernel__) || defined(__DragonFly__)
     #define UHD_PLATFORM_BSD
 #endif
