--- src/drivers/driver_bsd.c.intermediate	2021-12-20 19:31:24.000000000 +0000
+++ src/drivers/driver_bsd.c
@@ -30,7 +30,9 @@
 
 #ifdef __DragonFly__
 #include <netproto/802_11/ieee80211_ioctl.h>
+#define ether_sprintf dfly_ether_sprintf
 #include <netproto/802_11/ieee80211_dragonfly.h>
+#undef ether_sprintf
 #else /* __DragonFly__ */
 #ifdef __GLIBC__
 #include <netinet/ether.h>
