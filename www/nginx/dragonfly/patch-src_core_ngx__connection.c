--- src/core/ngx_connection.c.orig	2013-07-17 12:51:21.000000000 +0000
+++ src/core/ngx_connection.c
@@ -268,18 +268,26 @@ ngx_set_inherited_sockets(ngx_cycle_t *c
 ngx_int_t
 ngx_open_listening_sockets(ngx_cycle_t *cycle)
 {
-    int               reuseaddr;
+    int               reuseaddr, reuseport;
     ngx_uint_t        i, tries, failed;
     ngx_err_t         err;
     ngx_log_t        *log;
     ngx_socket_t      s;
     ngx_listening_t  *ls;
+    ngx_core_conf_t  *ccf;
 
     reuseaddr = 1;
+    reuseport = 0;
 #if (NGX_SUPPRESS_WARN)
     failed = 0;
 #endif
 
+    ccf = (ngx_core_conf_t *) ngx_get_conf(cycle->conf_ctx, ngx_core_module);
+    if (ccf->so_reuseport) {
+        reuseaddr = 0;
+        reuseport = 1;
+    }
+
     log = cycle->log;
 
     /* TODO: configurable try number */
@@ -317,21 +325,43 @@ ngx_open_listening_sockets(ngx_cycle_t *
                 return NGX_ERROR;
             }
 
-            if (setsockopt(s, SOL_SOCKET, SO_REUSEADDR,
-                           (const void *) &reuseaddr, sizeof(int))
-                == -1)
-            {
-                ngx_log_error(NGX_LOG_EMERG, log, ngx_socket_errno,
-                              "setsockopt(SO_REUSEADDR) %V failed",
-                              &ls[i].addr_text);
-
-                if (ngx_close_socket(s) == -1) {
+            if (reuseaddr) {
+                if (setsockopt(s, SOL_SOCKET, SO_REUSEADDR,
+                               (const void *) &reuseaddr, sizeof(int))
+                    == -1)
+                {
                     ngx_log_error(NGX_LOG_EMERG, log, ngx_socket_errno,
-                                  ngx_close_socket_n " %V failed",
+                                  "setsockopt(SO_REUSEADDR) %V failed",
                                   &ls[i].addr_text);
+
+                    if (ngx_close_socket(s) == -1) {
+                        ngx_log_error(NGX_LOG_EMERG, log, ngx_socket_errno,
+                                      ngx_close_socket_n " %V failed",
+                                      &ls[i].addr_text);
+                    }
+
+                    return NGX_ERROR;
                 }
+            }
+            if (reuseport) {
+#ifdef SO_REUSEPORT
+                if (setsockopt(s, SOL_SOCKET, SO_REUSEPORT,
+                               (const void *) &reuseport, sizeof(int))
+                    == -1)
+                {
+                    ngx_log_error(NGX_LOG_EMERG, log, ngx_socket_errno,
+                                  "setsockopt(SO_REUSEPORT) %V failed",
+                                  &ls[i].addr_text);
 
-                return NGX_ERROR;
+                    if (ngx_close_socket(s) == -1) {
+                        ngx_log_error(NGX_LOG_EMERG, log, ngx_socket_errno,
+                                      ngx_close_socket_n " %V failed",
+                                      &ls[i].addr_text);
+                    }
+
+                    return NGX_ERROR;
+                }
+#endif
             }
 
 #if (NGX_HAVE_INET6 && defined IPV6_V6ONLY)
@@ -461,6 +491,38 @@ ngx_open_listening_sockets(ngx_cycle_t *
 
 
 void
+ngx_shutdown_listening_sockets(ngx_cycle_t *cycle)
+{
+    ngx_uint_t        i;
+    ngx_listening_t  *ls;
+
+    ls = cycle->listening.elts;
+    for (i = 0; i < cycle->listening.nelts; i++) {
+
+        if (ls[i].ignore) {
+            continue;
+        }
+
+        if (ls[i].fd == -1) {
+            continue;
+        }
+
+        if (ls[i].inherited) {
+            continue;
+        }
+
+        if (ngx_close_socket(ls[i].fd) == -1) {
+            ngx_log_error(NGX_LOG_EMERG, cycle->log, ngx_socket_errno,
+                          ngx_close_socket_n " %V failed", &ls[i].addr_text);
+        }
+        ls[i].fd = (ngx_socket_t) -1;
+
+        ls[i].listen = 0;
+    }
+}
+
+
+void
 ngx_configure_listening_sockets(ngx_cycle_t *cycle)
 {
     int                        keepalive;
@@ -517,24 +579,36 @@ ngx_configure_listening_sockets(ngx_cycl
 #if (NGX_HAVE_KEEPALIVE_TUNABLE)
 
         if (ls[i].keepidle) {
+            int val = ls[i].keepidle;
+
+#ifdef __DragonFly__
+            val *= 1000;
+#endif
+
             if (setsockopt(ls[i].fd, IPPROTO_TCP, TCP_KEEPIDLE,
-                           (const void *) &ls[i].keepidle, sizeof(int))
+                           (const void *) &val, sizeof(int))
                 == -1)
             {
                 ngx_log_error(NGX_LOG_ALERT, cycle->log, ngx_socket_errno,
                               "setsockopt(TCP_KEEPIDLE, %d) %V failed, ignored",
-                              ls[i].keepidle, &ls[i].addr_text);
+                              val, &ls[i].addr_text);
             }
         }
 
         if (ls[i].keepintvl) {
+            int val = ls[i].keepintvl;
+
+#ifdef __DragonFly__
+            val *= 1000; 
+#endif
+
             if (setsockopt(ls[i].fd, IPPROTO_TCP, TCP_KEEPINTVL,
-                           (const void *) &ls[i].keepintvl, sizeof(int))
+                           (const void *) &val, sizeof(int))
                 == -1)
             {
                 ngx_log_error(NGX_LOG_ALERT, cycle->log, ngx_socket_errno,
                              "setsockopt(TCP_KEEPINTVL, %d) %V failed, ignored",
-                             ls[i].keepintvl, &ls[i].addr_text);
+                             val, &ls[i].addr_text);
             }
         }
 
