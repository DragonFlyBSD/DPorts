--- src/core/ngx_cycle.h.orig	2015-04-07 15:35:35 UTC
+++ src/core/ngx_cycle.h
@@ -103,6 +103,8 @@ typedef struct {
      ngx_array_t              env;
      char                   **environment;
 
+     unsigned                 so_reuseport:1;
+
 #if (NGX_OLD_THREADS)
      ngx_int_t                worker_threads;
      size_t                   thread_stack_size;
