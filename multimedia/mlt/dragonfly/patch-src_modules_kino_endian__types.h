--- src/modules/kino/endian_types.h.orig	2019-03-30 20:59:21 UTC
+++ src/modules/kino/endian_types.h
@@ -28,7 +28,7 @@
 #define _ENDIAN_TYPES_H
 
 /* Needed for BYTE_ORDER and BIG/LITTLE_ENDIAN macros. */
-#if !defined(__FreeBSD__) && !defined(__NetBSD__)
+#if !defined(__FreeBSD__) && !defined(__NetBSD__) && !defined(__DragonFly__)
 #ifndef _BSD_SOURCE
 # define _BSD_SOURCE
 # include <endian.h>
@@ -41,7 +41,7 @@
 #endif /* !defined(__FreeBSD__) && !defined(__NetBSD__) */
 
 #include <sys/types.h>
-#if !defined(__FreeBSD__) && !defined(__NetBSD__)
+#if !defined(__FreeBSD__) && !defined(__NetBSD__) && !defined(__DragonFly__)
 #include <byteswap.h>
 #else
 #define bswap_16(x) bswap16(x)
