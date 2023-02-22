--- src/queue.c.intermediate	2023-02-05 18:10:08 UTC
+++ src/queue.c
@@ -6947,7 +6947,7 @@ _dispatch_runloop_root_queue_wakeup_4CF(
 	_dispatch_runloop_queue_wakeup(upcast(dq)._dl, 0, false);
 }
 
-#if TARGET_OS_MAC || defined(_WIN32) || defined(__FreeBSD__)
+#if TARGET_OS_MAC || defined(_WIN32) || defined(__FreeBSD__) || defined(__DragonFly__)
 dispatch_runloop_handle_t
 _dispatch_runloop_root_queue_get_port_4CF(dispatch_queue_t dq)
 {
@@ -7330,7 +7330,7 @@ _gettid(void)
 {
 	return (pid_t)syscall(SYS_gettid);
 }
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
 DISPATCH_ALWAYS_INLINE
 static inline pid_t
 _gettid(void)
