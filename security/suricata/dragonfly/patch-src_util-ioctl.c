--- src/util-ioctl.c.orig	2019-10-14 11:25:49 UTC
+++ src/util-ioctl.c
@@ -175,7 +175,7 @@ int GetIfaceFlags(const char *ifname)
     }
 
     close(fd);
-#ifdef OS_FREEBSD
+#if defined OS_FREEBSD || defined __DragonFly__
     int flags = (ifr.ifr_flags & 0xffff) | (ifr.ifr_flagshigh << 16);
     return flags;
 #else
@@ -202,7 +202,7 @@ int SetIfaceFlags(const char *ifname, in
 
     memset(&ifr, 0, sizeof(ifr));
     strlcpy(ifr.ifr_name, ifname, sizeof(ifr.ifr_name));
-#ifdef OS_FREEBSD
+#if defined OS_FREEBSD || defined __DragonFly__
     ifr.ifr_flags = flags & 0xffff;
     ifr.ifr_flagshigh = flags >> 16;
 #else
@@ -560,7 +560,7 @@ static int GetIfaceOffloadingBSD(const c
         ret = 1;
     }
 #else
-    if (if_caps & (IFCAP_TSO|IFCAP_LRO)) {
+    if (if_caps & (IFCAP_TSO/*|IFCAP_LRO*/)) {
         SCLogWarning(SC_ERR_NIC_OFFLOADING,
                 "Using %s with TSO or LRO activated can lead to "
                 "capture problems. Run: ifconfig %s -tso -lro",
@@ -614,9 +614,9 @@ static int DisableIfaceOffloadingBSD(Liv
         set_caps &= ~(IFCAP_TSO|IFCAP_LRO);
     }
 #else
-    if (if_caps & (IFCAP_TSO|IFCAP_LRO)) {
+    if (if_caps & (IFCAP_TSO/*|IFCAP_LRO*/)) {
         SCLogPerf("%s: disabling tso|lro offloading", ifname);
-        set_caps &= ~(IFCAP_TSO|IFCAP_LRO);
+        set_caps &= ~(IFCAP_TSO/*|IFCAP_LRO*/);
     }
 #endif
     if (set_caps != if_caps) {
@@ -628,8 +628,10 @@ static int DisableIfaceOffloadingBSD(Liv
         if (if_caps & IFCAP_TOE)
             ldev->offload_orig |= OFFLOAD_FLAG_TOE;
 #endif
+#ifdef IFCAP_LRO
         if (if_caps & IFCAP_LRO)
             ldev->offload_orig |= OFFLOAD_FLAG_LRO;
+#endif
 
         SetIfaceCaps(ifname, set_caps);
     }
@@ -665,10 +667,12 @@ static int RestoreIfaceOffloadingBSD(Liv
         set_caps |= IFCAP_TOE;
     }
 #endif
+#ifdef IFCAP_LRO
     if (ldev->offload_orig & OFFLOAD_FLAG_LRO) {
         SCLogPerf("%s: restoring lro offloading", ifname);
         set_caps |= IFCAP_LRO;
     }
+#endif
 
     if (set_caps != if_caps) {
         SetIfaceCaps(ifname, set_caps);
