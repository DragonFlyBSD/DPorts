--- ntpd/ntp_restrict.c.orig	2020-03-03 23:41:29 UTC
+++ ntpd/ntp_restrict.c
@@ -343,7 +343,9 @@ match_restrict4_addr(
 	restrict_u *	next;
 
 	for (res = restrictlist4; res != NULL; res = next) {
+#ifdef DEBUG
 		struct in_addr	sia = { htonl(res->u.v4.addr) };
+#endif
 
 		next = res->link;
 		DPRINTF(2, ("match_restrict4_addr: Checking %s, port %d ... ",
