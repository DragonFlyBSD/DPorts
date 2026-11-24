--- src/ck-manager.c.orig
+++ src/ck-manager.c
@@ -3723,7 +3723,9 @@
                 return NULL;
         }
 
-        session = g_hash_table_lookup (manager->priv->sessions, arg_session_id);
+        /* sd-login compat (sd_pid_get_session) hands out object paths */
+        session = g_hash_table_lookup (manager->priv->sessions,
+                                       get_object_id_basename (arg_session_id));
 
         if (!CK_IS_SESSION (session)) {
                 return NULL;
