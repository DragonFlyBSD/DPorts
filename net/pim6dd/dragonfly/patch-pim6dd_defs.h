--- pim6dd/defs.h.orig	2005-09-21 14:33:52.000000000 +0300
+++ pim6dd/defs.h
@@ -92,7 +92,11 @@
 #include <net/route.h>
 #undef rtentry
 #endif
+#ifdef __DragonFly__
+#include <net/ip_mroute/ip_mroute.h>
+#else
 #include <netinet/ip_mroute.h>
+#endif
 #ifdef __linux__
 #include <linux/mroute6.h>
 #else
