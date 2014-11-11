--- gio/kqueue/kqueue-missing.c.orig	2013-06-02 23:20:53 UTC
+++ gio/kqueue/kqueue-missing.c
@@ -68,6 +68,7 @@ _km_add_missing (kqueue_sub *sub)
   if (g_slist_find (missing_subs_list, sub))
     {
       KM_W ("asked to add %s to missing list but it's already on the list!\n", sub->filename);
+      G_UNLOCK (missing_lock);
       return;
     }
 
