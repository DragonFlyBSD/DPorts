--- src/crypto/scrypt.cpp.orig	2018-09-19 03:16:47 UTC
+++ src/crypto/scrypt.cpp
@@ -43,6 +43,10 @@
 #include <cpuid.h>
 #endif
 #endif
+
+#ifdef __DragonFly__
+#include <sys/endian.h>
+#else
 #ifndef __FreeBSD__
 static inline uint32_t be32dec(const void *pp)
 {
@@ -59,6 +63,7 @@ static inline void be32enc(void *pp, uin
 	p[1] = (x >> 16) & 0xff;
 	p[0] = (x >> 24) & 0xff;
 }
+#endif
 
 #endif
 typedef struct HMAC_SHA256Context {
