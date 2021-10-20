--- ext/tls/axTLS/ssl/os_port.h.orig	2017-04-14 08:07:25 UTC
+++ ext/tls/axTLS/ssl/os_port.h
@@ -160,7 +160,7 @@ EXP_FUNC int STDCALL getdomainname(char
 #if    defined(__APPLE__)
 #include <libkern/OSByteOrder.h>
 #define be64toh(x) OSSwapBigToHostInt64(x)
-#elif  defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__)
+#elif  defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__DragonFly__)
 #include <sys/endian.h>
 #else
 #include <asm/byteorder.h>
