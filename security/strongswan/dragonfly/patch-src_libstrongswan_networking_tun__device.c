--- src/libstrongswan/networking/tun_device.c.orig	2013-04-10 09:10:56.000000000 +0000
+++ src/libstrongswan/networking/tun_device.c
@@ -33,6 +33,8 @@
 #include <sys/kern_control.h>
 #elif defined(__linux__)
 #include <linux/if_tun.h>
+#elif defined(__DragonFly__)
+#include <net/tun/if_tun.h>
 #else
 #include <net/if_tun.h>
 #endif
