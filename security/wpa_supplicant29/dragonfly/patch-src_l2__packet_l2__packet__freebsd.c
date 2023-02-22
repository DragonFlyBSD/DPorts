--- src/l2_packet/l2_packet_freebsd.c.intermediate	2023-02-20 12:27:29 UTC
+++ src/l2_packet/l2_packet_freebsd.c
@@ -9,7 +9,8 @@
 
 #include "includes.h"
 #include <sys/param.h>
-#if defined(__APPLE__) || defined(__GLIBC__) || defined(__FreeBSD_version)
+#if defined(__APPLE__) || defined(__GLIBC__) || defined(__FreeBSD_version) || \
+    defined(__DragonFly__)
 #include <net/bpf.h>
 #endif /* __APPLE__ */
 #include <pcap.h>
