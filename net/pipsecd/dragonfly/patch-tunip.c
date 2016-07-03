--- tunip.c.intermediate	2016-06-29 14:57:38 UTC
+++ tunip.c
@@ -36,7 +36,11 @@
 #include <fcntl.h>
 #include <stdio.h>
 #include <sys/ioctl.h>
+#ifdef __DragonFly__
+#include <net/tun/if_tun.h>
+#else
 #include <net/if_tun.h>
+#endif
 #include <netinet/in_systm.h>
 #include <netinet/in.h>
 #include <netinet/ip.h>
