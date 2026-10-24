--- libnotify/launch-context.c.orig	2026-01-09 03:16:29 UTC
+++ libnotify/launch-context.c
@@ -49,8 +49,8 @@ notification_app_launch_context_finalize (GObject *obj
 
 static char *
 notification_app_launch_context_get_startup_notify_id (GAppLaunchContext *context,
-                                                       GAppInfo *,
-                                                       GList *)
+                                                       GAppInfo *info,
+                                                       GList *files)
 {
         NotificationAppLaunchContext *self = NOTIFICATION_APP_LAUNCH_CONTEXT (context);
 
