--- src/tuntap_bsd.c.intermediate	2019-12-29 13:46:44.000000000 +0000
+++ src/tuntap_bsd.c
@@ -7,7 +7,11 @@
 #include <netdb.h>
 #include <net/if.h>
 #include <net/if_types.h>
+#ifdef __DragonFly__
+#include <net/tun/if_tun.h>
+#else
 #include <net/if_tun.h>
+#endif
 #include <sys/uio.h>
 
 #include "buffer.h"
