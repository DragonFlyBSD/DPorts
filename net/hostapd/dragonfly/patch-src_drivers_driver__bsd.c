--- src/drivers/driver_bsd.c.intermediate	2022-12-04 12:34:06 UTC
+++ src/drivers/driver_bsd.c
@@ -890,7 +890,7 @@ static int bsd_sta_deauth(void *priv, co
 			  u16 reason_code);
 
 static const char *
-ether_sprintf(const u8 *addr)
+hostapd_ether_sprintf(const u8 *addr)
 {
 	static char buf[sizeof(MACSTR)];
 
@@ -916,7 +916,7 @@ bsd_get_seqnum(const char *ifname, void
 	struct ieee80211req_key wk;
 
 	wpa_printf(MSG_DEBUG, "%s: addr=%s idx=%d",
-		   __func__, ether_sprintf(addr), idx);
+		   __func__, hostapd_ether_sprintf(addr), idx);
 
 	memset(&wk, 0, sizeof(wk));
 	if (addr == NULL)
