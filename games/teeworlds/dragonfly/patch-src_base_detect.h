--- src/base/detect.h.orig	2019-04-22 18:47:23 UTC
+++ src/base/detect.h
@@ -32,6 +32,13 @@
 	#define CONF_PLATFORM_STRING "freebsd"
 #endif
 
+#if defined(__DragonFly__)
+	#define CONF_FAMILY_UNIX 1
+	#define CONF_FAMILY_STRING "unix"
+	#define CONF_PLATFORM_DRAGONFLY 1
+	#define CONF_PLATFORM_STRING "dragonfly"
+#endif
+
 #if defined(__NetBSD__)
 	#define CONF_FAMILY_UNIX 1
 	#define CONF_FAMILY_STRING "unix"
@@ -85,7 +92,7 @@
 
 /* use gcc endianness definitions when available */
 #if defined(__GNUC__) && !defined(__APPLE__) && !defined(__MINGW32__) && !defined(__sun)
-	#if defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__NetBSD__)
+	#if defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__NetBSD__) || defined(__DragonFly__)
 		#include <sys/endian.h>
 	#else
 		#include <endian.h>
