--- include/SDL_endian.h.orig	2021-11-26 16:03:45 UTC
+++ include/SDL_endian.h
@@ -59,7 +59,7 @@ _m_prefetch(void *__P)
 #ifdef __linux__
 #include <endian.h>
 #define SDL_BYTEORDER  __BYTE_ORDER
-#elif defined(__OpenBSD__)
+#elif defined(__OpenBSD__) || defined(__DragonFly__)
 #include <endian.h>
 #define SDL_BYTEORDER  BYTE_ORDER
 #elif defined(__FreeBSD__) || defined(__NetBSD__)
