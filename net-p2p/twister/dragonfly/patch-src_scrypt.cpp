--- src/scrypt.cpp.intermediate	2016-08-05 20:02:46 UTC
+++ src/scrypt.cpp
@@ -37,7 +37,7 @@
 #include <sys/endian.h>
 #endif
 
-#ifndef __FreeBSD__
+#if !defined(__FreeBSD__) && !defined(__DragonFly__)
 /* Allready defined in sys/endian.h */
 static inline uint32_t be32dec(const void *pp)
 {
