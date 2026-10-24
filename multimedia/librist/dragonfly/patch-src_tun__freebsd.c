--- src/tun_freebsd.c.orig
+++ src/tun_freebsd.c
@@ -4,7 +4,7 @@
  * SPDX-License-Identifier: BSD-2-Clause
  */
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 
 #include "librist/tun.h"
 
@@ -16,7 +16,11 @@
 #include <sys/ioctl.h>
 #include <sys/socket.h>
 #include <net/if.h>
+#ifdef __DragonFly__
+#include <net/tun/if_tun.h>
+#else
 #include <net/if_tun.h>
+#endif
 #include <netinet/in.h>
 #include <arpa/inet.h>
 
@@ -164,4 +168,4 @@
 	return 0;
 }
 
-#endif /* __FreeBSD__ */
+#endif /* __FreeBSD__ || __DragonFly__ */
