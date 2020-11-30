--- spa/plugins/support/loop.c.orig	2020-09-10 11:13:36 UTC
+++ spa/plugins/support/loop.c
@@ -28,6 +28,7 @@
 #include <signal.h>
 #include <stdlib.h>
 #include <stdio.h>
+#include <stdint.h>
 #include <pthread.h>
 
 #include <spa/support/loop.h>
@@ -255,13 +256,13 @@ static void loop_enter(void *object)
 {
 	struct impl *impl = object;
 	impl->thread = pthread_self();
-	spa_log_trace(impl->log, NAME" %p: enter %lu", impl, impl->thread);
+	spa_log_trace(impl->log, NAME" %p: enter %ju", impl, (uintmax_t)impl->thread);
 }
 
 static void loop_leave(void *object)
 {
 	struct impl *impl = object;
-	spa_log_trace(impl->log, NAME" %p: leave %lu", impl, impl->thread);
+	spa_log_trace(impl->log, NAME" %p: leave %ju", impl, (uintmax_t)impl->thread);
 	impl->thread = 0;
 }
 
