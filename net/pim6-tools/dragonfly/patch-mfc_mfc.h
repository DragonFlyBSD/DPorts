--- mfc/mfc.h.orig	2005-09-10 08:32:57.000000000 +0000
+++ mfc/mfc.h
@@ -40,6 +40,9 @@
 #ifdef __linux__
 #include <linux/mroute.h>
 #include <linux/mroute6.h>
+#elif defined __DragonFly__
+#include <net/ip_mroute/ip_mroute.h>
+#include <netinet6/ip6_mroute.h>
 #else
 #include <netinet/ip_mroute.h>
 #include <netinet6/ip6_mroute.h>
