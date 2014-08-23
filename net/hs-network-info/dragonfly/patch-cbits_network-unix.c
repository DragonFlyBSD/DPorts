--- cbits/network-unix.c.orig	2014-06-21 09:55:52.000000000 +0000
+++ cbits/network-unix.c
@@ -26,6 +26,10 @@
 #   endif
 #endif
 
+#ifdef __DragonFly__
+#   include <net/pf/pfvar.h>
+#endif
+
 #ifdef __FreeBSD__
 #   include <net/pfvar.h>
 #endif
