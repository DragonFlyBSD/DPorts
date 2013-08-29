--- src/event/ngx_event.c.orig	2013-07-17 12:51:21.000000000 +0000
+++ src/event/ngx_event.c
@@ -598,7 +598,8 @@ ngx_event_process_init(ngx_cycle_t *cycl
     ccf = (ngx_core_conf_t *) ngx_get_conf(cycle->conf_ctx, ngx_core_module);
     ecf = ngx_event_get_conf(cycle->conf_ctx, ngx_event_core_module);
 
-    if (ccf->master && ccf->worker_processes > 1 && ecf->accept_mutex) {
+    if (ccf->master && ccf->worker_processes > 1 && ecf->accept_mutex &&
+        !ccf->so_reuseport) {
         ngx_use_accept_mutex = 1;
         ngx_accept_mutex_held = 0;
         ngx_accept_mutex_delay = ecf->accept_mutex_delay;
