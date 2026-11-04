--- src/util/virnetdevtap.h.orig	2026-10-01 09:02:52 UTC
+++ src/util/virnetdevtap.h
@@ -23,7 +23,7 @@
 #include "virnetdevvportprofile.h"
 #include "virnetdevvlan.h"
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 /* This should be defined on OSes that don't automatically
  * cleanup released devices */
 # define VIR_NETDEV_TAP_REQUIRE_MANUAL_CLEANUP 1
