--- content/browser/geolocation/wifi_data_provider_freebsd.cc.intermediate	2014-06-07 07:18:52.706721000 +0000
+++ content/browser/geolocation/wifi_data_provider_freebsd.cc
@@ -17,7 +17,7 @@
 #include <net/if.h>
 #include <net/if_media.h>
 #include <ifaddrs.h>
-#include <net80211/ieee80211_ioctl.h>
+#include <netproto/802_11/ieee80211_ioctl.h>
 #include <net/ethernet.h>
 
 #include "base/strings/utf_string_conversions.h"
