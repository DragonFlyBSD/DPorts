--- bgpq_expander.c.orig	2020-03-12 12:24:44 UTC
+++ bgpq_expander.c
@@ -37,6 +37,7 @@ tentry_cmp(struct sx_tentry* a, struct s
 	return strcasecmp(a->text, b->text);
 }
 
+RB_PROTOTYPE(tentree, sx_tentry, entry, tentry_cmp);
 RB_GENERATE(tentree, sx_tentry, entry, tentry_cmp);
 
 int
