--- libpcap_stuff.c.orig	2014-10-26 21:10:34 UTC
+++ libpcap_stuff.c
@@ -16,6 +16,9 @@
 #include <string.h>
 #include <stdlib.h>
 #include <sys/ioctl.h>
+#if defined(__DragonFly__)
+# define PCAP_DONT_INCLUDE_PCAP_BPF_H
+#endif
 #include <pcap.h>
 #include <net/bpf.h>
 
