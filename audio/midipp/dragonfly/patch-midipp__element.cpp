--- midipp_element.cpp.orig	2013-09-17 17:55:13.000000000 +0000
+++ midipp_element.cpp
@@ -774,7 +774,7 @@ MppHead :: optimise()
 	}
 
 	/* remove unused entries, except labels */
-	TAILQ_FOREACH_SAFE(ptr, &head, entry, next) {
+	TAILQ_FOREACH_MUTABLE(ptr, &head, entry, next) {
 		if (ptr->txt.size() != 0)
 			continue;
 		TAILQ_REMOVE(&head, ptr, entry);
