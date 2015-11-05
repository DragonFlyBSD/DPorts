--- channels/chan_skinny.c.orig	2015-10-10 00:23:39.000000000 +0200
+++ channels/chan_skinny.c
@@ -4379,7 +4379,7 @@
 
 	AST_LIST_TRAVERSE(ast_channel_varshead(ast), current, entries) {
 		if (!(strcasecmp(ast_var_name(current),"SKINNY_AUTOANSWER"))) {
-			if (d->hookstate == SKINNY_ONHOOK && !sub->aa_sched < 0) {
+			if (d->hookstate == SKINNY_ONHOOK && !(sub->aa_sched < 0)) {
 				char buf[24];
 				int aatime;
 				char *stringp = buf, *curstr;
