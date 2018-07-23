--- src/first_network_device.c.orig	2018-05-11 09:10:46 UTC
+++ src/first_network_device.c
@@ -3,13 +3,17 @@
 #include <sys/stat.h>
 #include <stdlib.h>
 #include <ifaddrs.h>
-#ifdef __OpenBSD__
+#if defined(__OpenBSD__) || defined(__DragonFly__)
 #include <sys/types.h>
 #include <sys/sockio.h>
 #include <sys/ioctl.h>
 #include <net/if.h>
+#endif
+#if defined(__OpenBSD__)
 #include <net80211/ieee80211.h>
 #include <net80211/ieee80211_ioctl.h>
+#elif defined(__DragonFly__)
+#include <netproto/802_11/ieee80211_ioctl.h>
 #endif
 
 #include "i3status.h"
@@ -67,7 +71,7 @@ static bool is_virtual(const char *ifnam
 }
 
 static net_type_t iface_type(const char *ifname) {
-#ifdef __OpenBSD__
+#if defined(__OpenBSD__)
     /*
      *First determine if the device is a wireless device by trying two ioctl(2)
      * commands against it. If either succeeds we can be sure it's a wireless
@@ -78,14 +82,23 @@ static net_type_t iface_type(const char
     struct ifreq ifr;
     struct ieee80211_bssid bssid;
     struct ieee80211_nwid nwid;
+#elif defined(__DragonFly__)
+    struct ieee80211req ifr;
+#endif
+#if defined(__OpenBSD__) || defined(__DragonFly__)
     struct ifmediareq ifmr;
-
-    int s, ibssid, inwid;
-
+    int s;
+#endif
+#if defined(__OpenBSD__)
+    int ibssid, inwid;
+#endif
+#if defined(__OpenBSD__) || defined(__DragonFly__)
     if ((s = socket(AF_INET, SOCK_DGRAM, 0)) == -1)
         return NET_TYPE_OTHER;
 
     memset(&ifr, 0, sizeof(ifr));
+#endif
+#if defined(__OpenBSD__)
     ifr.ifr_data = (caddr_t)&nwid;
     (void)strlcpy(ifr.ifr_name, ifname, sizeof(ifr.ifr_name));
     inwid = ioctl(s, SIOCG80211NWID, (caddr_t)&ifr);
@@ -98,7 +111,15 @@ static net_type_t iface_type(const char
         close(s);
         return NET_TYPE_WIRELESS;
     }
-
+#elif defined(__DragonFly__)
+    (void)strlcpy(ifr.i_name, ifname, sizeof(ifr.i_name));
+    ifr.i_type = IEEE80211_IOC_NUMSSIDS;
+    if (ioctl(s, SIOCG80211, &ifr) == 0) {
+        close(s);
+        return NET_TYPE_WIRELESS;
+    }
+#endif
+#if defined(__OpenBSD__) || defined(__DragonFly__)
     (void)memset(&ifmr, 0, sizeof(ifmr));
     (void)strlcpy(ifmr.ifm_name, ifname, sizeof(ifmr.ifm_name));
 
