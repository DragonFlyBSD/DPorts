--- libnfc/drivers/acr122_pcsc.c.orig
+++ libnfc/drivers/acr122_pcsc.c
@@ -59,7 +59,7 @@
 #  define IOCTL_CCID_ESCAPE_SCARD_CTL_CODE SCARD_CTL_CODE(3500)
 #elif defined(__APPLE__)
 #  define IOCTL_CCID_ESCAPE_SCARD_CTL_CODE (((0x31) << 16) | ((3500) << 2))
-#elif defined (__FreeBSD__) || defined (__OpenBSD__) || defined (__NetBSD__)
+#elif defined (__FreeBSD__) || defined (__OpenBSD__) || defined (__NetBSD__) || defined (__DragonFly__)
 #  define IOCTL_CCID_ESCAPE_SCARD_CTL_CODE (((0x31) << 16) | ((3500) << 2))
 #elif defined (__linux__)
 #  include <reader.h>
