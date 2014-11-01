--- script.c.orig	2004-05-29 06:48:13 UTC
+++ script.c
@@ -23,6 +23,9 @@
 #include <sched.h>
 
 #include <sys/ioctl.h>
+#if defined(__DragonFly__)
+# define PCAP_DONT_INCLUDE_PCAP_BPF_H
+#endif
 #include <pcap.h>
 #include <net/bpf.h>
 
