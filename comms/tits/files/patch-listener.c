
$FreeBSD: comms/tits/files/patch-listener.c 300895 2012-07-14 12:56:14Z beat $

--- listener.c.orig
+++ listener.c
@@ -189,10 +189,6 @@
 	    NULL)
 		context_del_client(cc->cc_ctx, ccc);
 
-	if (lc->lc_args.la_address)
-		(void) free(lc->lc_args.la_address);
-	(void) free(lc->lc_args.la_port);
-
 	(void) free(lc);
 }
 
