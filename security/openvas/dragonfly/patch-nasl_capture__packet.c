--- nasl/capture_packet.c.orig	2021-02-01 15:26:51 UTC
+++ nasl/capture_packet.c
@@ -27,7 +27,7 @@
 #include <pcap.h>
 #include <string.h> /* for bcopy */
 #include <sys/param.h>
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/socket.h>
 #endif
 
