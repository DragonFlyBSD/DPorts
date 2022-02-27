--- spa/plugins/support/loop.c.orig	2021-12-16 08:17:48 UTC
+++ spa/plugins/support/loop.c
@@ -28,6 +28,7 @@
 #include <signal.h>
 #include <stdlib.h>
 #include <stdio.h>
+#include <stdint.h>
 #include <pthread.h>
 
 #include <spa/support/loop.h>
@@ -288,13 +289,13 @@ static void loop_enter(void *object)
 {
 	struct impl *impl = object;
 	impl->thread = pthread_self();
-	spa_log_trace(impl->log, "%p: enter %lu", impl, impl->thread);
+	spa_log_trace(impl->log, "%p: enter %ju", impl, (uintmax_t)impl->thread);
 }
 
 static void loop_leave(void *object)
 {
 	struct impl *impl = object;
-	spa_log_trace(impl->log, "%p: leave %lu", impl, impl->thread);
+	spa_log_trace(impl->log, "%p: leave %ju", impl, (uintmax_t)impl->thread);
 	impl->thread = 0;
 }
 
