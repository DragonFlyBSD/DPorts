--- src/crypto/scrypt.cpp.intermediate	2019-11-18 13:26:51.000000000 +0000
+++ src/crypto/scrypt.cpp
@@ -43,7 +43,7 @@
 #include <cpuid.h>
 #endif
 #endif
-#ifndef __FreeBSD__
+#if !defined(__FreeBSD__) && !defined(__DragonFly__)
 static inline uint32_t be32dec(const void *pp)
 {
 	const uint8_t *p = (uint8_t const *)pp;
