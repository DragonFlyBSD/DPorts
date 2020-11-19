--- src/libical/icaltz-util.c.orig	2020-03-07 14:42:42 UTC
+++ src/libical/icaltz-util.c
@@ -40,6 +40,7 @@
 #else
 #if defined(HAVE_SYS_ENDIAN_H)
 #include <sys/endian.h>
+/* this is why */
 #if defined(bswap32)
 #define bswap_32 bswap32
 #else
@@ -49,6 +50,10 @@
 #endif
 #endif
 
+#if defined(__DragonFly__) && !defined(bswap_32)
+#define bswap_32 bswap32
+#endif
+
 #if defined(__OpenBSD__) && !defined(bswap_32)
 #define bswap_32 swap32
 #endif
