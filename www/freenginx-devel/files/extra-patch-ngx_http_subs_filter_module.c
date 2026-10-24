--- ../ngx_http_substitutions_filter_module-e12e965/ngx_http_subs_filter_module.c.orig	2026-07-08 10:43:06.946336000 -0400
+++ ../ngx_http_substitutions_filter_module-e12e965/ngx_http_subs_filter_module.c	2026-07-08 10:49:15.310554000 -0400
@@ -1152,7 +1152,7 @@
         }
 
         /* Dirty hack, if it has captured variables */
-        if (sc.captures_mask) {
+        if (sc.ncaptures) {
             pair->has_captured = 1;
         }
 
@@ -1180,7 +1180,6 @@
     u_char            errstr[NGX_MAX_CONF_ERRSTR];
     ngx_int_t         n, options;
     ngx_str_t         err, *value;
-    ngx_uint_t        mask;
 
     value = cf->args->elts;
 
@@ -1215,19 +1214,6 @@
         return NGX_ERROR;
     }
 
-    n = ngx_http_subs_regex_capture_count(pair->match_regex);
-
-    if (pair->has_captured) {
-        mask = ((1 << (n + 1)) - 1);
-        if ( mask < sc->captures_mask ) {
-            ngx_conf_log_error(NGX_LOG_EMERG, cf, 0,
-                               "You want to capture too many regex substrings, "
-                               "more than %i in \"%V\"",
-                               n, &value[2]);
-
-            return NGX_ERROR;
-        }
-    }
 #else
     ngx_conf_log_error(NGX_LOG_EMERG, cf, 0,
                        "the using of the regex \"%V\" requires PCRE library",
