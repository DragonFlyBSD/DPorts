--- src/core/nginx.c.orig	2016-04-26 13:31:19 UTC
+++ src/core/nginx.c
@@ -28,6 +28,8 @@ static char *ngx_load_module(ngx_conf_t
 #if (NGX_HAVE_DLOPEN)
 static void ngx_unload_module(void *data);
 #endif
+static char *ngx_set_so_reuseport(ngx_conf_t *cf, ngx_command_t *cmd,
+    void *conf);
 
 
 static ngx_conf_enum_t  ngx_debug_points[] = {
@@ -81,6 +83,13 @@ static ngx_command_t  ngx_core_commands[
       0,
       NULL },
 
+    { ngx_string("so_reuseport"),
+      NGX_MAIN_CONF|NGX_DIRECT_CONF|NGX_CONF_TAKE1,
+      ngx_set_so_reuseport,
+      0,
+      0,
+      NULL },
+
     { ngx_string("debug_points"),
       NGX_MAIN_CONF|NGX_DIRECT_CONF|NGX_CONF_TAKE1,
       ngx_conf_set_enum_slot,
@@ -614,24 +623,30 @@ ngx_exec_new_binary(ngx_cycle_t *cycle,
         return NGX_INVALID_PID;
     }
 
-    var = ngx_alloc(sizeof(NGINX_VAR)
-                    + cycle->listening.nelts * (NGX_INT32_LEN + 1) + 2,
-                    cycle->log);
-    if (var == NULL) {
-        ngx_free(env);
-        return NGX_INVALID_PID;
-    }
+    ccf = (ngx_core_conf_t *) ngx_get_conf(cycle->conf_ctx, ngx_core_module);
+
+    if (!ccf->so_reuseport) {
+        var = ngx_alloc(sizeof(NGINX_VAR)
+                        + cycle->listening.nelts * (NGX_INT32_LEN + 1) + 2,
+                        cycle->log);
+        if (var == NULL) {
+            ngx_free(env);
+            return NGX_INVALID_PID;
+        }
 
-    p = ngx_cpymem(var, NGINX_VAR "=", sizeof(NGINX_VAR));
+        p = ngx_cpymem(var, NGINX_VAR "=", sizeof(NGINX_VAR));
 
-    ls = cycle->listening.elts;
-    for (i = 0; i < cycle->listening.nelts; i++) {
-        p = ngx_sprintf(p, "%ud;", ls[i].fd);
-    }
+        ls = cycle->listening.elts;
+        for (i = 0; i < cycle->listening.nelts; i++) {
+            p = ngx_sprintf(p, "%ud;", ls[i].fd);
+        }
 
-    *p = '\0';
+        *p = '\0';
 
-    env[n++] = var;
+        env[n++] = var;
+    } else {
+        var = NULL;
+    }
 
 #if (NGX_SETPROCTITLE_USES_ENV)
 
@@ -658,8 +673,6 @@ ngx_exec_new_binary(ngx_cycle_t *cycle,
 
     ctx.envp = (char *const *) env;
 
-    ccf = (ngx_core_conf_t *) ngx_get_conf(cycle->conf_ctx, ngx_core_module);
-
     if (ngx_rename_file(ccf->pid.data, ccf->oldpid.data) == NGX_FILE_ERROR) {
         ngx_log_error(NGX_LOG_ALERT, cycle->log, ngx_errno,
                       ngx_rename_file_n " %s to %s failed "
@@ -667,7 +680,8 @@ ngx_exec_new_binary(ngx_cycle_t *cycle,
                       ccf->pid.data, ccf->oldpid.data, argv[0]);
 
         ngx_free(env);
-        ngx_free(var);
+        if (var != NULL)
+            ngx_free(var);
 
         return NGX_INVALID_PID;
     }
@@ -686,7 +700,8 @@ ngx_exec_new_binary(ngx_cycle_t *cycle,
     }
 
     ngx_free(env);
-    ngx_free(var);
+    if (var != NULL)
+        ngx_free(var);
 
     return pid;
 }
@@ -1360,6 +1375,29 @@ ngx_set_cpu_affinity(ngx_conf_t *cf, ngx
     return NGX_CONF_OK;
 }
 
+
+static char *
+ngx_set_so_reuseport(ngx_conf_t *cf, ngx_command_t *cmd, void *conf)
+{
+#ifdef SO_REUSEPORT
+    ngx_str_t        *value;
+    ngx_core_conf_t  *ccf;
+
+    ccf = (ngx_core_conf_t *) conf;
+
+    value = (ngx_str_t *) cf->args->elts;
+
+    if (ngx_strcmp(value[1].data, "on") == 0) {
+        ccf->so_reuseport = 1;
+    } else if (ngx_strcmp(value[1].data, "off") == 0) {
+        ccf->so_reuseport = 0;
+    } else {
+        return "invalid value";
+    }
+#endif
+    return NGX_CONF_OK;
+}
+
 
 ngx_cpuset_t *
 ngx_get_cpu_affinity(ngx_uint_t n)
