--- src/mesa/drivers/dri/mach64/mach64_context.h.intermediate	2012-12-22 09:04:55.652990000 +0100
+++ src/mesa/drivers/dri/mach64/mach64_context.h	2012-12-22 09:23:35.339622000 +0100
@@ -297,7 +297,7 @@
 #if defined(__OpenBSD__)
 #include <machine/endian.h>
 #define bswap_32 bswap32
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/endian.h>
 #define bswap_32 bswap32
 #else
