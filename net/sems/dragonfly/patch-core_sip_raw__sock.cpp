--- core/sip/raw_sock.cpp.orig	2019-08-08 09:53:18 UTC
+++ core/sip/raw_sock.cpp
@@ -47,6 +47,9 @@
 #define __FAVOR_BSD /* on linux use bsd version of udphdr (more portable) */
 #include <netinet/udp.h>
 #include <netdb.h>
+#ifdef __DragonFly__
+#include <err.h>
+#endif
 
 #include "raw_sock.h"
 
@@ -529,7 +532,11 @@ int raw_udp4_send(int rsock, char* buf,
 	memcpy(CMSG_DATA(cmsg), &SAv4(&from)->sin_addr.s_addr,
 	       sizeof(struct in_addr));
 #else
+#ifdef __DragonFly__
+	errx(1, "missing support for IP_SENDSRCADDR"); /* XXX FIXME */
+#else
 #error "no method of setting the source ip supported"
+#endif
 #endif /* IP_PKTINFO / IP_SENDSRCADDR */
 	snd_msg.msg_controllen=cmsg->cmsg_len;
 	snd_msg.msg_flags=0;
