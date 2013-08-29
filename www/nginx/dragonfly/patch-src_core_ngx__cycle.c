--- src/core/ngx_cycle.c.orig	2013-07-17 12:51:21.000000000 +0000
+++ src/core/ngx_cycle.c
@@ -575,7 +575,8 @@ ngx_init_cycle(ngx_cycle_t *old_cycle)
         goto failed;
     }
 
-    if (!ngx_test_config) {
+    if (!ngx_test_config &&
+        (ngx_process == NGX_PROCESS_SINGLE || !ccf->so_reuseport)) {
         ngx_configure_listening_sockets(cycle);
     }
 
