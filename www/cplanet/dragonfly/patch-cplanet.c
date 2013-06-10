--- cplanet.c.orig	2012-05-27 18:34:13.000000000 +0000
+++ cplanet.c
@@ -521,7 +521,7 @@ fetch_posts(HDF *hdf_cfg, HDF *hdf_dest,
 	}
 
 	time(&t_now);
-	SLIST_FOREACH_SAFE(post, &feed.entries, next, posttemp) {
+	SLIST_FOREACH_MUTABLE(post, &feed.entries, next, posttemp) {
 		if (post->date == NULL) {
 			SLIST_REMOVE(&feed.entries, post, post, next);
 			continue;
