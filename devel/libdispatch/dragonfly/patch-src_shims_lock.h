--- src/shims/lock.h.intermediate	2025-03-07 00:50:44 UTC
+++ src/shims/lock.h
@@ -100,10 +100,12 @@
 	return lock_value & DLOCK_OWNER_MASK;
 }
 
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
 
 #include <sys/types.h>
+#if defined(__FreeBSD__)
 #include <sys/umtx.h>
+#endif
 #include <sched.h>
 
 typedef uint32_t dispatch_tid;
