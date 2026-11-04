--- src/network/bridge_driver_platform.c.orig	2026-10-01 09:02:52 UTC
+++ src/network/bridge_driver_platform.c
@@ -25,7 +25,7 @@
 
 #if defined(__linux__)
 # include "bridge_driver_linux.c"
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
 # include "bridge_driver_bsd.c"
 #else
 # include "bridge_driver_nop.c"
