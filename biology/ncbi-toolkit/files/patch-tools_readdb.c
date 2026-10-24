-- Fix a chained comparison that modern Clang rejects with -Werror.
-- C does not support 'a <= b <= c'; rewrite as 'a <= b && b <= c'.

--- tools/readdb.c.orig	2026-07-10 18:56:47 UTC
+++ tools/readdb.c
@@ -4893,8 +4893,8 @@ readdb_check_oid(ReadDBFILEPtr rdfp_head, Int4 oid)
 			if (s_SearchOidInLocalOidList(rdfp_var->oidlist, oid-rdfp_var->start) == 0) 
                   		return TRUE;
                 } else {
-                	if (rdfp_var->start <= oid <= rdfp_var->stop)
-                                return TRUE;	 
+                	if (rdfp_var->start <= oid && oid <= rdfp_var->stop)
+                                return TRUE;
                 }
                 rdfp_var = rdfp_var->next;
         }
