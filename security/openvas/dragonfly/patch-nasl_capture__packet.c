--- nasl/capture_packet.c.orig
+++ nasl/capture_packet.c
@@ -15,7 +15,7 @@
 #include <netinet/ip6.h>
 #include <pcap.h>
 #include <sys/param.h>
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/socket.h>
 #endif
 
