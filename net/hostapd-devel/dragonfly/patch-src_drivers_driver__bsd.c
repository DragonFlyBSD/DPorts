--- src/drivers/driver_bsd.c.orig
+++ src/drivers/driver_bsd.c
@@ -32,7 +32,9 @@
 
 #ifdef __DragonFly__
 #include <netproto/802_11/ieee80211_ioctl.h>
+#define ether_sprintf dfly_ether_sprintf
 #include <netproto/802_11/ieee80211_dragonfly.h>
+#undef ether_sprintf
 #else /* __DragonFly__ */
 #ifdef __GLIBC__
 #include <netinet/ether.h>
@@ -666,7 +668,9 @@
 		mode = IFM_IEEE80211_11B;
 	} else {
 		mode =
+#ifdef IFM_IEEE80211_VHT5G
 			freq->vht_enabled ? IFM_IEEE80211_VHT5G :
+#endif
 			freq->ht_enabled ? IFM_IEEE80211_11NA :
 			IFM_IEEE80211_11A;
 	}
