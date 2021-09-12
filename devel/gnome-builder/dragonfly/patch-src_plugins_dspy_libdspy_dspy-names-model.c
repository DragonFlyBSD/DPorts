--- src/plugins/dspy/libdspy/dspy-names-model.c.orig	2021-05-05 20:59:41 UTC
+++ src/plugins/dspy/libdspy/dspy-names-model.c
@@ -385,7 +385,7 @@ dspy_names_model_init_async (GAsyncInita
   task = g_task_new (self, cancellable, callback, user_data);
   g_task_set_priority (task, io_priority);
   g_task_set_source_tag (task, dspy_names_model_init_async);
-  g_task_set_task_data (task, g_memdup2 (&n_active, sizeof n_active), g_free);
+  g_task_set_task_data (task, g_memdup (&n_active, sizeof n_active), g_free);
 
   if (self->connection == NULL)
     g_task_return_new_error (task,
