--- src/libsystemd/sd-bus/bus-message.h.orig	2021-01-06 13:56:51 UTC
+++ src/libsystemd/sd-bus/bus-message.h
@@ -1,7 +1,7 @@
 /* SPDX-License-Identifier: LGPL-2.1+ */
 #pragma once
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/endian.h>
 #else
 #include <byteswap.h>
@@ -129,7 +129,7 @@ static inline bool BUS_MESSAGE_NEED_BSWA
         return m->header->endian != BUS_NATIVE_ENDIAN;
 }
 
-#ifdef __FreeBSD__
+#if (defined(__FreeBSD__) || defined(__DragonFly__)) && !defined(bswap_32)
 #define bswap_16 bswap16
 #define bswap_32 bswap32
 #define bswap_64 bswap64
