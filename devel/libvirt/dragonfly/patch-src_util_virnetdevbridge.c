--- src/util/virnetdevbridge.c.orig	2026-10-01 09:02:52 UTC
+++ src/util/virnetdevbridge.c
@@ -42,7 +42,7 @@
 
 #if defined(WITH_BSD_BRIDGE_MGMT)
 # include <net/ethernet.h>
-# include <net/if_bridgevar.h>
+# include <net/bridge/if_bridgevar.h>
 #endif
 
 #define VIR_FROM_THIS VIR_FROM_NONE
@@ -731,6 +731,12 @@
                              ifname);
         return -1;
     }
+
+# if defined(__DragonFly__)
+    /* DragonFly: bring the port up before adding it to the bridge. */
+    if (virNetDevSetOnline(ifname, true) < 0)
+        return -1;
+# endif
 
     if (virNetDevBridgeCmd(brname, BRDGADD, &req, sizeof(req), true) < 0) {
         virReportSystemError(errno,
