--- modules/network.c.orig
+++ modules/network.c
@@ -370,7 +370,7 @@
   return TRUE;
 }
 
-#elif defined(__FreeBSD__) || defined(__OpenBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__) || defined(__OpenBSD__)
 
 #include <net/if_dl.h>
 #include <net/route.h>
@@ -410,8 +410,12 @@
   freeifaddrs(addrs);
 }
 
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
+#if defined(__DragonFly__)
+#include <netproto/802_11/ieee80211_ioctl.h>
+#else
 #include <net80211/ieee80211_ioctl.h>
+#endif
 
 static void net_update_essid ( char *interface )
 {
