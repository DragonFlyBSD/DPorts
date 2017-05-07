--- mdnsd/packet.c.orig	2017-03-10 09:24:12 UTC
+++ mdnsd/packet.c
@@ -402,7 +402,7 @@ pkt_process(int unused, short event, voi
 			free(rr);
 		}
 		/* Clear up ESDN0/T_opt packets */
-		LIST_FOREACH_SAFE(rr, &pkt->arlist, pentry, rraux) {
+		LIST_FOREACH_MUTABLE(rr, &pkt->arlist, pentry, rraux) {
 			if (rr->rrs.type == T_OPT) {
 				LIST_REMOVE(rr, pentry);
 				free(rr);
