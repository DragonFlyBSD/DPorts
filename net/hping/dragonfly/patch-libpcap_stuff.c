--- libpcap_stuff.c.orig	2002-12-13 14:07:07 UTC
+++ libpcap_stuff.c
@@ -16,7 +16,9 @@
 #include <string.h>
 #include <stdlib.h>
 #include <sys/ioctl.h>
+#if !defined(__DragonFly__)
 #include <pcap.h>
+#endif
 #include <net/bpf.h>
 
 #include "globals.h"
