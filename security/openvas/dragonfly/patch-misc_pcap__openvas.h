--- misc/pcap_openvas.h.orig
+++ misc/pcap_openvas.h
@@ -15,7 +15,7 @@
 #include <arpa/inet.h>
 #include <pcap.h>
 #include <sys/param.h>
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <netinet/in.h>
 #endif
 
