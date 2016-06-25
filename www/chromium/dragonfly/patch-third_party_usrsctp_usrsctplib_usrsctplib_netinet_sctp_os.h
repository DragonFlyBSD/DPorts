--- third_party/usrsctp/usrsctplib/usrsctplib/netinet/sctp_os.h.orig	2016-06-16 22:04:02.000000000 +0300
+++ third_party/usrsctp/usrsctplib/usrsctplib/netinet/sctp_os.h
@@ -62,7 +62,7 @@ __FBSDID("$FreeBSD: head/sys/netinet/sct
  * SCTP_ZONE_DESTROY(zone)
  */
 
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) && !defined(__DragonFly__)
 #include <netinet/sctp_os_bsd.h>
 #else
 #define MODULE_GLOBAL(_B) (_B)
