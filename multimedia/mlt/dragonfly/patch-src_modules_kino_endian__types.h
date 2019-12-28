--- src/modules/kino/endian_types.h.orig	2019-11-12 01:44:42 UTC
+++ src/modules/kino/endian_types.h
@@ -30,7 +30,8 @@
 #include <sys/types.h>
 
 /* Needed for BYTE_ORDER and BIG/LITTLE_ENDIAN macros. */
-#if !defined(__FreeBSD__) && !defined(__NetBSD__) && !defined(__OpenBSD__)
+#if !defined(__FreeBSD__) && !defined(__NetBSD__) && !defined(__OpenBSD__) && \
+    !defined(__DragonFly__)
 #ifndef _BSD_SOURCE
 # define _BSD_SOURCE
 # include <endian.h>
@@ -42,7 +43,8 @@
 # include <sys/endian.h>
 #endif /* !defined(__FreeBSD__) && !defined(__NetBSD__) */
 
-#if !defined(__FreeBSD__) && !defined(__NetBSD__) && !defined(__OpenBSD__)
+#if !defined(__FreeBSD__) && !defined(__NetBSD__) && !defined(__OpenBSD__) && \
+    !defined(__DragonFly__)
 #include <byteswap.h>
 #elif defined(__OpenBSD__)
 #define bswap_16(x) swap16(x)
