--- src/lib/eina/eina_debug_bt.c.orig	2020-06-17 07:47:44 UTC
+++ src/lib/eina/eina_debug_bt.c
@@ -207,7 +207,7 @@ _signal_handler(int sig EINA_UNUSED,
    // in the correct slot for us
    for (i = 0; i < _eina_debug_thread_active_num; i++)
      {
-        if (self == _eina_debug_thread_active[i].thread)
+        if ((uintptr_t)self == _eina_debug_thread_active[i].thread)
           {
              slot = i;
              goto found;
@@ -339,7 +339,7 @@ _trace_cb(void *data EINA_UNUSED)
       ((_eina_debug_thread_active_num) * sizeof(int));
    // now collect per thread
    for (i = 0; i < _eina_debug_thread_active_num; i++)
-      _collect_bt(_eina_debug_thread_active[i].thread);
+      _collect_bt((pthread_t)(uintptr_t)_eina_debug_thread_active[i].thread);
    // we're done probing. now collec all the "i'm done" msgs on the
    // semaphore for every thread + mainloop
    for (i = 0; i < (_eina_debug_thread_active_num); i++)
