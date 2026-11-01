diff --git third_party/compiler-rt/src/lib/builtins/atomic.c third_party/compiler-rt/src/lib/builtins/atomic.c
index aded25d9baa9..e443324182c2 100644
--- third_party/compiler-rt/src/lib/builtins/atomic.c
+++ third_party/compiler-rt/src/lib/builtins/atomic.c
@@ -66,7 +66,7 @@ __inline static void lock(Lock *l) { pthread_mutex_lock(l); }
 /// locks for atomic operations
 static Lock locks[SPINLOCK_COUNT];
 
-#elif defined(__FreeBSD__) || defined(__DragonFly__)
+#elif defined(__FreeBSD__)
 #include <errno.h>
 // clang-format off
 #include <sys/types.h>
