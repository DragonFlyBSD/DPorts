--- monitor/udisks2/gvfsudisks2mount.c.orig	2022-12-04 23:31:09.104464000 +0100
+++ monitor/udisks2/gvfsudisks2mount.c	2022-12-04 23:31:36.064917000 +0100
@@ -683,7 +683,7 @@
                                         NULL, /* gchar **out_standard_error */
                                         &error))
     {
-      g_printerr ("Error launching lsof(1): %s (%s, %d)\n",
+      g_printerr ("Error launching fstat(1): %s (%s, %d)\n",
                   error->message, g_quark_to_string (error->domain), error->code);
       g_error_free (error);
       goto out;
@@ -691,7 +691,7 @@
 
   if (!(WIFEXITED (exit_status) && WEXITSTATUS (exit_status) == 0))
     {
-      g_printerr ("lsof(1) did not exit normally\n");
+      g_printerr ("fstat(1) did not exit normally\n");
       goto out;
     }
 
@@ -723,7 +723,7 @@
       is_stop = unmount_operation_is_stop (data->mount_operation);
 
       /* We want to emit the 'show-processes' signal even if launching
-       * lsof(1) failed or if it didn't return any PIDs. This is because
+       * fstat(1) failed or if it didn't return any PIDs. This is because
        * it won't show e.g. root-owned processes operating on files
        * on the mount point.
        *
@@ -793,7 +793,7 @@
                             g_task_get_cancellable (task),
                             lsof_command_cb,
                             g_object_ref (task),
-                            "lsof -t \"%s\"",
+                            "fstat \"%s\" | cut -w -f3 | egrep -v '^0|^PID' | sort -u",
                             escaped_mount_point);
   g_free (escaped_mount_point);
 }
