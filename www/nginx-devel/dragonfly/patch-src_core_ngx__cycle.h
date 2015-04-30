--- src/core/ngx_cycle.h.orig	2015-04-28 15:31:18 UTC
+++ src/core/ngx_cycle.h
@@ -102,6 +102,7 @@ typedef struct {
 
      ngx_array_t              env;
      char                   **environment;
+     unsigned                 so_reuseport:1;
 } ngx_core_conf_t;
 
 
