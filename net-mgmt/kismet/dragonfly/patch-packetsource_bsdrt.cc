--- packetsource_bsdrt.cc.orig	2016-07-02 18:06:10 UTC
+++ packetsource_bsdrt.cc
@@ -42,6 +42,11 @@
 
 #include "packetsourcetracker.h"
 
+#ifdef __DragonFly__
+#include <net/if_media.h>
+#include <netproto/802_11/ieee80211_ioctl.h>
+#endif
+
 Radiotap_BSD_Controller::Radiotap_BSD_Controller(GlobalRegistry *in_globalreg,
 												 string in_dev) {
 	globalreg = in_globalreg;
