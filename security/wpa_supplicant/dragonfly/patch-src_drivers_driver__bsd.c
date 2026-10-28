--- src/drivers/driver_bsd.c.orig
+++ src/drivers/driver_bsd.c
@@ -664,7 +664,9 @@
 		mode = IFM_IEEE80211_11B;
 	} else {
 		mode =
+#ifdef IFM_IEEE80211_VHT5G
 			freq->vht_enabled ? IFM_IEEE80211_VHT5G :
+#endif
 			freq->ht_enabled ? IFM_IEEE80211_11NA :
 			IFM_IEEE80211_11A;
 	}
