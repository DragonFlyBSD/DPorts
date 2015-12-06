--- src/base/detect.h.orig	2013-05-01 14:47:39.000000000 +0300
+++ src/base/detect.h
@@ -25,6 +25,13 @@
 #endif
 
 /* unix family */
+#if defined(__DragonFly__)
+	#define CONF_FAMILY_UNIX 1
+	#define CONF_FAMILY_STRING "unix"
+	#define CONF_PLATFORM_DRAGONFLY 1
+	#define CONF_PLATFORM_STRING "dragonfly"
+#endif
+
 #if defined(__FreeBSD__) || defined(__FreeBSD_kernel__)
 	#define CONF_FAMILY_UNIX 1
 	#define CONF_FAMILY_STRING "unix"
@@ -78,7 +85,7 @@
 
 /* use gcc endianness definitions when available */
 #if defined(__GNUC__) && !defined(__APPLE__) && !defined(__MINGW32__) && !defined(__sun)
-	#if defined(__FreeBSD__) || defined(__OpenBSD__)
+	#if defined(__DragonFly__) || defined(__FreeBSD__) || defined(__OpenBSD__)
 		#include <sys/endian.h>
 	#else
 		#include <endian.h>
