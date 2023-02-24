--- Telegram/ThirdParty/dispatch/src/transform.c.orig	2022-06-06 20:33:13 UTC
+++ Telegram/ThirdParty/dispatch/src/transform.c
@@ -26,7 +26,7 @@
 #include <endian.h>
 #define OSLittleEndian __LITTLE_ENDIAN
 #define OSBigEndian __BIG_ENDIAN
-#elif defined(__FreeBSD__) || defined(__OpenBSD__)
+#elif defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__DragonFly__)
 #include <sys/endian.h>
 #define OSLittleEndian _LITTLE_ENDIAN
 #define OSBigEndian _BIG_ENDIAN
@@ -35,7 +35,7 @@
 #define OSBigEndian 4321
 #endif
 
-#if defined(__linux__) || defined(__FreeBSD__) || defined(__OpenBSD__)
+#if defined(__linux__) || defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__DragonFly__)
 #define OSSwapLittleToHostInt16 le16toh
 #define OSSwapBigToHostInt16 be16toh
 #define OSSwapHostToLittleInt16 htole16
