--- src/libstrongswan/networking/tun_device.c.orig	2014-06-05 07:50:30.000000000 +0000
+++ src/libstrongswan/networking/tun_device.c
@@ -49,6 +49,10 @@ tun_device_t *tun_device_create(const ch
 #elif defined(__linux__)
 #include <linux/types.h>
 #include <linux/if_tun.h>
+#elif defined(__DragonFly__)
+#include <net/tun/if_tun.h>
+#include <net/if_var.h>
+#include <netinet/in_var.h>
 #elif __FreeBSD__ >= 10
 #include <net/if_tun.h>
 #include <net/if_var.h>
