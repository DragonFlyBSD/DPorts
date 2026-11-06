--- tags.c.orig	2026-11-06 06:42:04 UTC
+++ tags.c
@@ -46,6 +46,7 @@ struct ctag {
 	char *pat;
 };
 RB_HEAD(tagtree, ctag) tags = RB_INITIALIZER(&tags);
+RB_PROTOTYPE(tagtree, ctag, entry, ctagcmp);
 RB_GENERATE(tagtree, ctag, entry, ctagcmp);
 
 struct tagpos {
