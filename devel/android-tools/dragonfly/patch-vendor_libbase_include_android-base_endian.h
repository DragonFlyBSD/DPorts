--- vendor/libbase/include/android-base/endian.h.orig	2022-06-10 23:11:16 UTC
+++ vendor/libbase/include/android-base/endian.h
@@ -61,8 +61,10 @@
 #if defined(__APPLE__)
 /* macOS has some of the basics. */
 #include <sys/_endian.h>
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/endian.h>
+#define ntohl(x) __builtin_bswap32(x)
+#define htonl(x) __builtin_bswap32(x)
 #else
 /* Windows has some of the basics as well. */
 #include <sys/param.h>
@@ -74,12 +76,14 @@
 #define ntohl(x) __builtin_bswap32(x)
 #endif
 
+# if (defined(__APPLE__) && defined(__MACH__)) || defined(_WIN32)
 /* Neither macOS nor Windows have the rest. */
 
 #define __LITTLE_ENDIAN 1234
 #define __BIG_ENDIAN 4321
 #define __BYTE_ORDER __LITTLE_ENDIAN
 
+
 #define htonq(x) __builtin_bswap64(x)
 
 #define ntohq(x) __builtin_bswap64(x)
@@ -107,5 +111,6 @@
 #define le16toh(x) (x)
 #define le32toh(x) (x)
 #define le64toh(x) (x)
+# endif
 
 #endif
