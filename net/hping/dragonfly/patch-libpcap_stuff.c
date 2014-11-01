--- libpcap_stuff.c.orig	2002-12-13 14:07:07 UTC
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
 
