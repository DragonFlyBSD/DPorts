--- src/core/ngx_cycle.h.orig	2018-05-13 14:48:24 UTC
+++ src/core/ngx_cycle.h
@@ -115,6 +115,7 @@ typedef struct {
 
     ngx_array_t               env;
     char                    **environment;
+    unsigned                  so_reuseport:1;
 
     ngx_uint_t                transparent;  /* unsigned  transparent:1; */
 } ngx_core_conf_t;
