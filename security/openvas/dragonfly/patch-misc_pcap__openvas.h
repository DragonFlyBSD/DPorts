--- /tmp/pcap_openvas.h	2021-02-01 15:26:51.000000000 +0000
+++ misc/pcap_openvas.h	2021-03-10 15:21:52.319213000 +0000
@@ -29,7 +29,7 @@
 #include <arpa/inet.h>
 #include <pcap.h>
 #include <sys/param.h>
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <netinet/in.h>
 #endif
 
