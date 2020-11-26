--- mclab.h.orig	2016-02-17 21:02:06 UTC
+++ mclab.h
@@ -66,6 +66,9 @@
 #ifdef HAVE_NETINET_IP_MROUTE_H
 #include <netinet/ip_mroute.h>
 #endif
+#ifdef __DragonFly__
+#include <net/ip_mroute/ip_mroute.h>
+#endif
 
 #ifdef HAVE_NETINET6_IP6_MROUTE_H
 #ifdef HAVE_SYS_PARAM_H
