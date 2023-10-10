--- mpmt_server.c.orig	2023-10-05 03:47:09 UTC
+++ mpmt_server.c
@@ -19,6 +19,7 @@
 
 #include "common.h"
 #include "c-icap.h"
+#include <stdint.h>
 #include <stdio.h>
 #include <sys/socket.h>
 #include <netinet/in.h>
@@ -248,8 +249,8 @@ static void cancel_all_threads()
         for (i=0; i<CI_CONF.THREADS_PER_CHILD; i++) {
             if (threads_list[i] != NULL) { /* if the i thread is still alive*/
                 if (!threads_list[i]->running) { /*if the i thread is not running any more*/
-                    ci_debug_printf(5, "Cancel server %d, thread_id %lu (%d)\n",
-                                    threads_list[i]->srv_id, threads_list[i]->srv_pthread,
+                    ci_debug_printf(5, "Cancel server %d, thread_id %ju (%d)\n",
+                                    threads_list[i]->srv_id, (uintmax_t)(threads_list[i]->srv_pthread),
                                     i);
                     ci_thread_join(threads_list[i]->srv_pthread);
                     release_thread_i(i);
@@ -258,7 +259,7 @@ static void cancel_all_threads()
                     /*The thread is still running, and we have a timeout for waiting
                       the thread to exit. */
                     if (wait_for_workers <= 2) {
-                        ci_debug_printf(5, "Thread %ld still running near the timeout. Try to kill it\n", threads_list[i]->srv_pthread);
+                        ci_debug_printf(5, "Thread %ju still running near the timeout. Try to kill it\n", (uintmax_t)(threads_list[i]->srv_pthread));
                         pthread_kill( threads_list[i]->srv_pthread, SIGTERM);
                     }
                 }
