--- include/dos.h.orig	2006-02-03 14:37:38.000000000 +0200
+++ include/dos.h
@@ -23,7 +23,11 @@
 #include <errno.h>
 #include <netinet/udp.h>
 #include <net/if.h>
+#ifdef __DragonFly__
+#include <net/ppp/if_ppp.h>
+#else
 #include <net/ppp_defs.h>
+#endif
 #include <sys/ioctl.h>
 #include <time.h>
 
