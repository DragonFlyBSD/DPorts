--- src/if-bsd.c.orig	2019-05-04 09:19:02 UTC
+++ src/if-bsd.c
@@ -50,6 +50,8 @@
 #include <netinet6/nd6.h>
 #ifdef __NetBSD__
 #include <net/if_vlanvar.h> /* Needs netinet/if_ether.h */
+#elif __DragonFly__
+#include <net/vlan/if_vlan_var.h>
 #else
 #include <net/if_vlan_var.h>
 #endif
@@ -537,7 +539,7 @@ if_route(unsigned char cmd, const struct
  * Neither OS currently allows IPv6 address sharing anyway, so let's
  * try to encourage someone to fix that by logging a waring during compile.
  */
-#if defined(__FreeBSD__) || defined(__OpenBSD__)
+#if defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__DragonFly__)
 #warning OS does not allow IPv6 address sharing
 			if (!gateway_unspec || rt->rt_dest.sa_family!=AF_INET6)
 #endif
