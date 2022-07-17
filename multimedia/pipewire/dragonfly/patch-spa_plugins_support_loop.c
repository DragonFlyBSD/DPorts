--- spa/plugins/support/loop.c.orig	2022-07-07 08:19:55 UTC
+++ spa/plugins/support/loop.c
@@ -28,6 +28,7 @@
 #include <signal.h>
 #include <stdlib.h>
 #include <stdio.h>
+#include <stdint.h>
 #include <pthread.h>
 
 #include <spa/support/loop.h>
@@ -335,7 +336,7 @@ static void loop_enter(void *object)
 		spa_return_if_fail(impl->thread == thread_id);
 		impl->enter_count++;
 	}
-	spa_log_trace(impl->log, "%p: enter %lu", impl, impl->thread);
+	spa_log_trace(impl->log, "%p: enter %ju", impl, (uintmax_t)impl->thread);
 }
 
 static void loop_leave(void *object)
@@ -346,7 +347,7 @@ static void loop_leave(void *object)
 	spa_return_if_fail(impl->enter_count > 0);
 	spa_return_if_fail(impl->thread == thread_id);
 
-	spa_log_trace(impl->log, "%p: leave %lu", impl, impl->thread);
+	spa_log_trace(impl->log, "%p: leave %ju", impl, (uintmax_t)impl->thread);
 
 	if (--impl->enter_count == 0) {
 		impl->thread = 0;
