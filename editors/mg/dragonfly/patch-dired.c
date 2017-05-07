--- dired.c.orig	2016-11-26 10:20:10 UTC
+++ dired.c
@@ -956,7 +956,7 @@ redelete(struct buffer *bp)
 			continue;
 		}
 		plen = strlen(p);
-		SLIST_FOREACH_SAFE(d1, &delhead, entry, dt) {
+		SLIST_FOREACH_MUTABLE(d1, &delhead, entry, dt) {
 			fnlen = strlen(d1->fn);
 			if ((plen == fnlen) && 
 			    (strncmp(p, d1->fn, plen) == 0)) {
