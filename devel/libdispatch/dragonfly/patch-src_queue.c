--- src/queue.c.intermediate	2025-03-07 00:50:44 UTC
+++ src/queue.c
@@ -6952,7 +6952,7 @@
 	_dispatch_runloop_queue_wakeup(upcast(dq)._dl, 0, false);
 }
 
-#if TARGET_OS_MAC || defined(_WIN32) || defined(__FreeBSD__)
+#if TARGET_OS_MAC || defined(_WIN32) || defined(__FreeBSD__) || defined(__DragonFly__)
 dispatch_runloop_handle_t
 _dispatch_runloop_root_queue_get_port_4CF(dispatch_queue_t dq)
 {
@@ -7336,6 +7336,15 @@
 {
 	return (pid_t)syscall(SYS_gettid);
 }
+#elif defined(__DragonFly__)
+DISPATCH_ALWAYS_INLINE
+static inline pid_t
+_gettid(void)
+{
+	// LWP ids are small (1, 2, ...) but the lock word keeps flags in the
+	// two low bits (DLOCK_OWNER_MASK): shift them out of the way.
+	return (pid_t)(pthread_getthreadid_np() << 2);
+}
 #elif defined(__FreeBSD__)
 DISPATCH_ALWAYS_INLINE
 static inline pid_t
