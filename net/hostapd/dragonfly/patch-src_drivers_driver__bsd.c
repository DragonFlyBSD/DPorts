--- src/drivers/driver_bsd.c.orig
+++ src/drivers/driver_bsd.c
@@ -666,7 +666,9 @@
 		mode = IFM_IEEE80211_11B;
 	} else {
 		mode =
+#ifdef IFM_IEEE80211_VHT5G
 			freq->vht_enabled ? IFM_IEEE80211_VHT5G :
+#endif
 			freq->ht_enabled ? IFM_IEEE80211_11NA :
 			IFM_IEEE80211_11A;
 	}
@@ -970,7 +972,7 @@
 			  u16 reason_code, int link_id);
 
 static const char *
-ether_sprintf(const u8 *addr)
+hostapd_ether_sprintf(const u8 *addr)
 {
 	static char buf[sizeof(MACSTR)];
 
@@ -996,7 +998,7 @@
 	struct ieee80211req_key wk;
 
 	wpa_printf(MSG_DEBUG, "%s: addr=%s idx=%d",
-		   __func__, ether_sprintf(addr), idx);
+		   __func__, hostapd_ether_sprintf(addr), idx);
 
 	memset(&wk, 0, sizeof(wk));
 	if (addr == NULL)
