--- include/compiler.h.orig	2020-04-13 15:02:18 UTC
+++ include/compiler.h
@@ -15,7 +15,7 @@
     defined(__sun__)	 || \
     defined(__APPLE__)
 # include <inttypes.h>
-#elif defined(__linux__) || defined(__WIN32__) || defined(__MINGW32__) || defined(__OpenBSD__)
+#elif defined(__linux__) || defined(__WIN32__) || defined(__MINGW32__) || defined(__OpenBSD__) || defined(__DragonFly__)
 # include <stdint.h>
 #endif
 
@@ -44,10 +44,10 @@
 #ifdef __linux__
 # include <endian.h>
 # include <byteswap.h>
-#elif defined(__MACH__) || defined(__FreeBSD__)
+#elif defined(__MACH__) || defined(__FreeBSD__) || defined(__DragonFly__)
 # include <machine/endian.h>
 #endif
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 # include <sys/endian.h> /* htole32 and friends */
 # define __BYTE_ORDER BYTE_ORDER
 # define __LITTLE_ENDIAN LITTLE_ENDIAN
