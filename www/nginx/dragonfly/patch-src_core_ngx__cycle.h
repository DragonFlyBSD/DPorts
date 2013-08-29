--- src/core/ngx_cycle.h.orig	2013-07-17 12:51:21.000000000 +0000
+++ src/core/ngx_cycle.h
@@ -101,6 +101,8 @@ typedef struct {
      ngx_array_t              env;
      char                   **environment;
 
+     unsigned                 so_reuseport:1;
+
 #if (NGX_THREADS)
      ngx_int_t                worker_threads;
      size_t                   thread_stack_size;
