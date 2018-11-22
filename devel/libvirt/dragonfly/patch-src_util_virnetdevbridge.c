--- src/util/virnetdevbridge.c.orig	2018-11-05 11:30:03 UTC
+++ src/util/virnetdevbridge.c
@@ -69,7 +69,7 @@
 
 #if defined(HAVE_BSD_BRIDGE_MGMT)
 # include <net/ethernet.h>
-# include <net/if_bridgevar.h>
+# include <net/bridge/if_bridgevar.h>
 #endif
 
 #define VIR_FROM_THIS VIR_FROM_NONE
@@ -579,6 +579,12 @@ int virNetDevBridgeAddPort(const char *b
                            const char *ifname)
 {
     struct ifbreq req;
+#if defined(__DragonFly__)
+    struct ifreq ifr;
+    int flags, s;
+
+    memset(&ifr, 0, sizeof(ifr));
+#endif
 
     memset(&req, 0, sizeof(req));
     if (virStrcpyStatic(req.ifbr_ifsname, ifname) < 0) {
@@ -588,6 +594,27 @@ int virNetDevBridgeAddPort(const char *b
         return -1;
     }
 
+#if defined(__DragonFly__)
+    snprintf(ifr.ifr_name, IF_NAMESIZE, "%s", ifname);
+
+    if ((s = socket(AF_LOCAL, SOCK_DGRAM, 0)) < 0) {
+      virReportSystemError(errno, "%s",
+                             _("Cannot open network interface control socket"));
+      return -1;
+    }
+
+    /* Set the interface UP */
+    flags = IFF_UP;
+    ifr.ifr_flags |= flags & 0xFFFF;
+    ifr.ifr_flagshigh |= flags >> 16;
+    if (ioctl(s, SIOCSIFFLAGS, &ifr) < 0) {
+      perror("SIOCSIFFLAGS");
+      close(s);
+      return -1;
+    }
+    close(s);
+#endif
+
     if (virNetDevBridgeCmd(brname, BRDGADD, &req, sizeof(req)) < 0) {
         virReportSystemError(errno,
                              _("Unable to add bridge %s port %s"), brname, ifname);
