--- detail-icmp.c.orig	1993-04-22 20:39:53 UTC
+++ detail-icmp.c
@@ -12,6 +12,7 @@
 #include <netinet/in.h>
 #include <netinet/in_systm.h>
 #include <netinet/ip.h>
+#include <arpa/inet.h>
 
 #include "ip_icmp.h"
 #include "tcpview.h" 
@@ -22,6 +23,7 @@ void detail_icmp(icmp, len)
 {
   u_long data_bytes;
   u_short checksum;
+  struct in_addr inet_saddr;
 
 #define PROTO_STR  "ICMP:  "
 
@@ -182,7 +184,8 @@ void detail_icmp(icmp, len)
 	  break;
 	}
 	byte = ICMP_MINLEN + (i * 8);
-	printf("%sRouter Address = %s\n", PROTO_STR, inet_ntoa(ra->addr));
+	inet_saddr.s_addr = ra->addr;
+	printf("%sRouter Address = %s\n", PROTO_STR, inet_ntoa(inet_saddr));
 	hex(byte, byte+3);
 	printf("%sPreference Level = %lX\n", PROTO_STR, ntohl(ra->preference));
 	hex(byte+4, byte+7);
@@ -278,7 +281,7 @@ void detail_icmp(icmp, len)
     hex(4,5);
     printf("%sSequence Number = %d\n", PROTO_STR, ntohs(icmp->icmp_seq));
     hex(6,7);
-    printf("%sAddress Mask = %s\n", PROTO_STR, inet_addr(icmp->icmp_mask));
+    printf("%sAddress Mask = %u\n", PROTO_STR, icmp->icmp_mask);
     hex(8,11);
     break;
   default:
