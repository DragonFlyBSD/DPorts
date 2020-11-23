--- print-icmp.c.orig	1993-04-22 20:40:17 UTC
+++ print-icmp.c
@@ -39,6 +39,7 @@ static char rcsid[] =
 #include <netinet/udp_var.h>
 #include <netinet/tcp.h>
 #include <netinet/tcpip.h>
+#include <arpa/inet.h>
 
 #include "ip_icmp.h"
 
@@ -61,6 +62,7 @@ icmp_print(dp, ip)
 	register int hlen;
 	u_char *ep;
 	u_short dport;
+	struct in_addr inet_saddr;
 
 #define TCHECK(var, l) if ((u_char *)&(var) > ep - l) goto trunc
 
@@ -167,9 +169,10 @@ icmp_print(dp, ip)
 		TCHECK(dp->icmp_num, sizeof(dp->icmp_num));
 		TCHECK(dp->icmp_lifetime, sizeof(dp->icmp_lifetime));
 		TCHECK(dp->icmp_adv, sizeof(dp->icmp_adv));
+		inet_saddr.s_addr = dp->icmp_adv[0].addr;
 		(void)sprintf(buf, "disc. adv.: [num = %d, lifetime = %d] %s/%d...",
 			      dp->icmp_num, ntohs(dp->icmp_lifetime),
-			      inet_ntoa(dp->icmp_adv[0].addr),
+			      inet_ntoa(inet_saddr),
 			      ntohl(dp->icmp_adv[0].preference));
 		break;
 	case ICMP_DISC_SOLICIT:
