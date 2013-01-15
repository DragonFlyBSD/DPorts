$NetBSD$

Fix paths.
--- ext/nginx/Configuration.c.orig	2010-10-10 18:52:03.000000000 +0000
+++ ext/nginx/Configuration.c
@@ -185,8 +185,8 @@ passenger_init_main_conf(ngx_conf_t *cf,
     
     if (conf->analytics_log_dir.len == 0) {
         if (geteuid() == 0) {
-            conf->analytics_log_dir.data = (u_char *) "/var/log/passenger-analytics";
-            conf->analytics_log_dir.len  = sizeof("/var/log/passenger-analytics") - 1;
+            conf->analytics_log_dir.data = (u_char *) "@PASSENGER_LOGDIR@/analytics";
+            conf->analytics_log_dir.len  = sizeof("@PASSENGER_LOGDIR@/analytics") - 1;
         } else {
             user_entry = getpwuid(geteuid());
             if (user_entry == NULL) {
