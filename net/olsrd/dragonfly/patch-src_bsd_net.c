--- src/bsd/net.c.bak	2016-07-04 11:33:55.000000000 +0300
+++ src/bsd/net.c
@@ -105,10 +105,15 @@
 #include <net/ethernet.h>
 #include <netinet/in_var.h>
 #include <ifaddrs.h>
+#ifdef __DragonFly__
+#include <netproto/802_11/ieee80211.h>
+#include <netproto/802_11/ieee80211_ioctl.h>
+#else
 #ifndef FBSD_NO_80211
 #include <net80211/ieee80211.h>
 #include <net80211/ieee80211_ioctl.h>
 #endif /* FBSD_NO_80211 */
+#endif
 #endif /* defined __FreeBSD__ || defined __FreeBSD_kernel__ */
 
 #ifdef __APPLE__
