--- tap_dev.c.orig	2009-05-17 19:29:11.000000000 +0300
+++ tap_dev.c
@@ -30,7 +30,11 @@
 #include <net/if.h>
 #include <net/if_arp.h>
 //#include <netinet/if_ether.h>
+#ifdef __DragonFly__
+#include <net/tun/if_tun.h>
+#else
 #include <net/if_tun.h>
+#endif
 
 //#include "wimax.h"
 
