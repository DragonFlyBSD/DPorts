--- libs/libzrtp/include/zrtp_config.h.orig	2018-09-07 17:29:48 UTC
+++ libs/libzrtp/include/zrtp_config.h
@@ -19,7 +19,7 @@
 #if !defined(ZRTP_PLATFORM)
 #	if defined(ANDROID_NDK)
 #		define ZRTP_PLATFORM ZP_ANDROID
-#	elif defined(__FreeBSD__)
+#	elif defined(__FreeBSD__) || defined(__DragonFly__)
 #		define ZRTP_PLATFORM ZP_BSD
 #	elif defined(linux) || defined(__linux__) || defined(__linux)
 #		include <linux/version.h>
