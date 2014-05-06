--- src/os/unix/ngx_process_cycle.c.orig	2014-04-24 12:52:26.000000000 +0000
+++ src/os/unix/ngx_process_cycle.c
@@ -212,6 +212,9 @@ ngx_master_process_cycle(ngx_cycle_t *cy
 
             ls = cycle->listening.elts;
             for (n = 0; n < cycle->listening.nelts; n++) {
+                if (ls[n].fd == -1)
+                    continue;
+
                 if (ngx_close_socket(ls[n].fd) == -1) {
                     ngx_log_error(NGX_LOG_EMERG, cycle->log, ngx_socket_errno,
                                   ngx_close_socket_n " %V failed",
@@ -350,8 +353,9 @@ ngx_single_process_cycle(ngx_cycle_t *cy
 static void
 ngx_start_worker_processes(ngx_cycle_t *cycle, ngx_int_t n, ngx_int_t type)
 {
-    ngx_int_t      i;
-    ngx_channel_t  ch;
+    ngx_int_t        i;
+    ngx_channel_t    ch;
+    ngx_core_conf_t *ccf;
 
     ngx_log_error(NGX_LOG_NOTICE, cycle->log, 0, "start worker processes");
 
@@ -359,11 +363,16 @@ ngx_start_worker_processes(ngx_cycle_t *
 
     ch.command = NGX_CMD_OPEN_CHANNEL;
 
+    ccf = (ngx_core_conf_t *) ngx_get_conf(cycle->conf_ctx, ngx_core_module);
+
     for (i = 0; i < n; i++) {
 
         ngx_spawn_process(cycle, ngx_worker_process_cycle,
                           (void *) (intptr_t) i, "worker process", type);
 
+        if (i == 0 && ccf->so_reuseport)
+            ngx_shutdown_listening_sockets(cycle);
+
         ch.pid = ngx_processes[ngx_process_slot].pid;
         ch.slot = ngx_process_slot;
         ch.fd = ngx_processes[ngx_process_slot].channel[0];
@@ -853,13 +862,18 @@ ngx_worker_process_init(ngx_cycle_t *cyc
     ngx_core_conf_t  *ccf;
     ngx_listening_t  *ls;
 
+    ccf = (ngx_core_conf_t *) ngx_get_conf(cycle->conf_ctx, ngx_core_module);
+
+    if (ccf->so_reuseport) {
+        ngx_open_listening_sockets(cycle);
+        ngx_configure_listening_sockets(cycle);
+    }
+
     if (ngx_set_environment(cycle, NULL) == NULL) {
         /* fatal */
         exit(2);
     }
 
-    ccf = (ngx_core_conf_t *) ngx_get_conf(cycle->conf_ctx, ngx_core_module);
-
     if (worker >= 0 && ccf->priority != 0) {
         if (setpriority(PRIO_PROCESS, 0, ccf->priority) == -1) {
             ngx_log_error(NGX_LOG_ALERT, cycle->log, ngx_errno,
