
$FreeBSD: head/lang/racket-minimal/files/patch-racket_src_port.c 385204 2015-05-02 18:59:17Z olgeni $

--- racket/src/port.c.orig
+++ racket/src/port.c
@@ -10996,7 +10996,7 @@
   itimerdata->jit_stack_boundary_ptr = &scheme_jit_stack_boundary;
   pthread_mutex_init(&itimerdata->mutex, NULL);
   pthread_cond_init(&itimerdata->cond, NULL);
-  tmp = mz_proc_thread_create_w_stacksize(green_thread_timer, itimerdata, 4096);
+  tmp = mz_proc_thread_create_w_stacksize(green_thread_timer, itimerdata, 16384);
   itimerdata->thread = tmp;
   itimerdata->itimer = 1;
 }
