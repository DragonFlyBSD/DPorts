--- ../ngx_postgres-8aa7359/src/ngx_postgres_module.c.orig	2026-07-07 15:00:37.981716000 -0400
+++ ../ngx_postgres-8aa7359/src/ngx_postgres_module.c	2026-07-07 15:01:51.287487000 -0400
@@ -1180,7 +1180,6 @@
     ngx_int_t                            index;
     ngx_http_variable_t                 *v;
     ngx_http_script_var_code_t          *vcode;
-    ngx_http_script_var_handler_code_t  *vhcode;
     ngx_postgres_rewrite_loc_conf_t     *rlcf;
     ngx_postgres_escape_t               *pge;
     ngx_str_t                            dst;
@@ -1269,22 +1268,6 @@
 
     pge->code = ngx_postgres_escape_string;
     pge->empty = empty;
-
-    if (v->set_handler) {
-        vhcode = ngx_http_script_start_code(cf->pool, &rlcf->codes,
-                                   sizeof(ngx_http_script_var_handler_code_t));
-        if (vhcode == NULL) {
-            dd("returning NGX_CONF_ERROR");
-            return NGX_CONF_ERROR;
-        }
-
-        vhcode->code = ngx_http_script_var_set_handler_code;
-        vhcode->handler = v->set_handler;
-        vhcode->data = v->data;
-
-        dd("returning NGX_CONF_OK");
-        return NGX_CONF_OK;
-    }
 
     vcode = ngx_http_script_start_code(cf->pool, &rlcf->codes,
                                        sizeof(ngx_http_script_var_code_t));
