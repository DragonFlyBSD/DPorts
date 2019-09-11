--- host/include/uhd/config.hpp.intermediate	2019-09-05 04:59:45.000000000 +0000
+++ host/include/uhd/config.hpp
@@ -115,7 +115,7 @@ typedef ptrdiff_t ssize_t;
 #    define UHD_PLATFORM_WIN32
 #elif defined(macintosh) || defined(__APPLE__) || defined(__APPLE_CC__)
 #    define UHD_PLATFORM_MACOS
-#elif defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__) \
+#elif defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__DragonFly__) \
     || defined(__FreeBSD_kernel__)
 #    define UHD_PLATFORM_BSD
 #endif
