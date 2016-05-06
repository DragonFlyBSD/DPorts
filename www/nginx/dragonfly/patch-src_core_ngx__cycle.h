--- src/core/ngx_cycle.h.orig	2016-04-26 13:31:19 UTC
+++ src/core/ngx_cycle.h
@@ -108,6 +108,7 @@ typedef struct {
 
     ngx_array_t               env;
     char                    **environment;
+    unsigned                  so_reuseport:1;
 } ngx_core_conf_t;
 
 
