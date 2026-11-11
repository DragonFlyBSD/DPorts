--- diquota.c.orig
+++ diquota.c
@@ -208,8 +208,8 @@
 static void
 vq_updLimit (struct vqvalentry *entry, dinum_t limit)
 {
-  if (entry->values [DI_QUOTA_LIMIT] == 0 || limit < entry->values [DI_QUOTA_LIMIT]) {
-    entry->values [DI_QUOTA_LIMIT] = limit;
+  if (entry->limit == 0 || limit < entry->limit) {
+    entry->limit = limit;
   }
 }
 
@@ -305,9 +305,9 @@
   }
 
   vqval->uvqval.usage = 0;
-  vqval->uvqval.values [DI_QUOTA_LIMIT] = 0;
+  vqval->uvqval.limit = 0;
   vqval->gvqval.usage = 0;
-  vqval->gvqval.values [DI_QUOTA_LIMIT] = 0;
+  vqval->gvqval.limit = 0;
   while ( (item = prop_object_iterator_next (iter)) != NULL) {
     rv = prop_dictionary_get_uint64 (item, "limit", &limit);
     if (rv && limit != 0) {
@@ -781,7 +781,7 @@
     } else {
 # if _lib_vquotactl
       if (diopts->optval [DI_OPT_DEBUG] > 1) { printf ("# diquota: vquotactl\n"); }
-      dinum_set_u (&tsize, (di_ui_t) qdata->vqval.vqvalptr->values [DI_QUOTA_LIMIT]);
+      dinum_set_u (&tsize, (di_ui_t) qdata->vqval.vqvalptr->limit);
 # endif
 # if _typ_struct_quotaval
       if (diopts->optval [DI_OPT_DEBUG] > 1) { printf ("# diquota: struct quotaval\n"); }
@@ -822,7 +822,7 @@
       ;
     } else {
 # if _lib_vquotactl  /* no soft limit, use hard */
-      dinum_set_u (&tsize, (di_ui_t) qdata->vqval.vqvalptr->values [DI_QUOTA_LIMIT]);
+      dinum_set_u (&tsize, (di_ui_t) qdata->vqval.vqvalptr->limit);
 # endif
 # if _typ_struct_quotaval
       dinum_set_u (&tsize, (di_ui_t) qdata->qval.qbval.qv_softlimit);
