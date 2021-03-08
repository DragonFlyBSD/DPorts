--- src/os-dragonfly.h.orig	2021-01-04 17:40:01 UTC
+++ src/os-dragonfly.h
@@ -1,7 +1,8 @@
-#include <net/route.h>
-#include <net/ip_mroute/ip_mroute.h>
+
 #include <netinet/ip.h>
 #include <netinet/igmp.h>
+#include <net/route.h>
+#include <net/ip_mroute/ip_mroute.h>
 
 #define IGMP_V3_MEMBERSHIP_REPORT 0x22
 
