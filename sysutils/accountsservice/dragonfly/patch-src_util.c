--- src/util.c.orig
+++ src/util.c
@@ -459,7 +459,11 @@ init_machine_id (void)
 {
         g_autoptr (GError) error = NULL;
 
+#ifdef __DragonFly__
+        if (!g_file_get_contents ("/var/lib/dbus/machine-id", &machine_id, NULL, &error))
+#else
         if (!g_file_get_contents ("/etc/machine-id", &machine_id, NULL, &error))
+#endif
                 g_error ("Failed to read machine-id: %s", error->message);
 
         machine_id = g_strchomp (machine_id);
