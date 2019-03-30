--- src/crypto/scrypt.h.orig	2018-09-19 03:16:47 UTC
+++ src/crypto/scrypt.h
@@ -28,7 +28,7 @@ void
 PBKDF2_SHA256(const uint8_t *passwd, size_t passwdlen, const uint8_t *salt,
     size_t saltlen, uint64_t c, uint8_t *buf, size_t dkLen);
 
-#ifndef __FreeBSD__
+#if !(defined(__FreeBSD__) || defined(__DragonFly__))
 static inline uint32_t le32dec(const void *pp)
 {
         const uint8_t *p = (uint8_t const *)pp;
