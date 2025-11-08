--- src/3rdparty/chromium/base/allocator/partition_allocator/src/partition_alloc/spinning_mutex.cc.intermediate	Thu Nov  6 18:11:31 2025
+++ src/3rdparty/chromium/base/allocator/partition_allocator/src/partition_alloc/spinning_mutex.cc	Thu Nov
@@ -24,6 +24,8 @@
 #include <sys/types.h>
 #include <sys/thr.h>
 #include <sys/umtx.h>
+#elif defined(OS_DRAGONFLY)
+#include <sys/types.h>
 #else
 #include <linux/futex.h>
 #endif
@@ -124,6 +126,8 @@ void SpinningMutex::FutexWait() {
 #elif defined(OS_OPENBSD)
   int err = futex(reinterpret_cast<volatile unsigned int *>(&state_), FUTEX_WAIT | FUTEX_PRIVATE_FLAG,
                     kLockedContended, nullptr, nullptr);
+#elif defined(OS_DRAGONFLY)
+  int err = umtx_sleep(reinterpret_cast<volatile const int *>(&state_), kLockedContended, 0);
 #else
   int err = syscall(SYS_futex, &state_, FUTEX_WAIT | FUTEX_PRIVATE_FLAG,
                     kLockedContended, nullptr, nullptr, 0);
@@ -145,6 +149,8 @@ void SpinningMutex::FutexWake() {
 #elif defined(OS_OPENBSD)
   long retval = futex(reinterpret_cast<volatile unsigned int *>(&state_), FUTEX_WAKE | FUTEX_PRIVATE_FLAG,
                         1 /* wake up a single waiter */, nullptr, nullptr);
+#elif defined(OS_DRAGONFLY)
+  int retval = umtx_wakeup(reinterpret_cast<volatile const int *>(&state_), 1);
 #else
   long retval = syscall(SYS_futex, &state_, FUTEX_WAKE | FUTEX_PRIVATE_FLAG,
                         1 /* wake up a single waiter */, nullptr, nullptr, 0);
