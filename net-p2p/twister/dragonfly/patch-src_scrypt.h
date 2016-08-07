--- src/scrypt.h.orig	2015-12-21 00:45:59.000000000 +0200
+++ src/scrypt.h
@@ -2,7 +2,7 @@
 #define SCRYPT_H
 #include <stdlib.h>
 #include <stdint.h>
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 # include <sys/endian.h>
 #endif
 static const int SCRYPT_SCRATCHPAD_SIZE = 131072 + 63;
@@ -20,7 +20,7 @@ void
 PBKDF2_SHA256(const uint8_t *passwd, size_t passwdlen, const uint8_t *salt,
     size_t saltlen, uint64_t c, uint8_t *buf, size_t dkLen);
 
-# ifndef __FreeBSD__
+# if !defined(__FreeBSD__) && !defined(__DragonFly__)
 /* Already defined in sys/endian.h */
 static inline uint32_t le32dec(const void *pp)
 {
