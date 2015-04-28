--- src/core/ngx_cycle.h.orig	2015-04-21 14:11:59 UTC
+++ src/core/ngx_cycle.h
@@ -102,6 +102,8 @@ typedef struct {
 
      ngx_array_t              env;
      char                   **environment;
+
+     unsigned                 so_reuseport:1;
 
 #if (NGX_OLD_THREADS)
      ngx_int_t                worker_threads;
