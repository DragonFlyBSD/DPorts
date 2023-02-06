--- src/shims/lock.h.intermediate	2023-02-05 18:10:08 UTC
+++ src/shims/lock.h
@@ -100,7 +100,7 @@ _dispatch_lock_owner(dispatch_lock lock_
 	return lock_value & DLOCK_OWNER_MASK;
 }
 
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
 
 typedef uint32_t dispatch_tid;
 typedef uint32_t dispatch_lock;
