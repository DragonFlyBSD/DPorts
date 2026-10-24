--- src/util/futex.c.orig	2026-07-02 19:34:59 UTC
+++ src/util/futex.c
@@ -89,6 +89,66 @@ int futex_wait(uint32_t *addr, int32_t value, const struct timespec *timeout)
    return _umtx_op(addr, UMTX_OP_WAIT_UINT, (uint32_t)value, uaddr, uaddr2) == -1 ? errno : 0;
 }

+#elif defined(__DragonFly__)
+
+#include <assert.h>
+#include <errno.h>
+#include <limits.h>
+#include <time.h>
+#include <unistd.h>
+
+int futex_wake(uint32_t *addr, int32_t count)
+{
+   assert(count >= 0);
+
+   /*
+    * Ownership: the caller owns the atomic word and only lends its address
+    * to the kernel for wakeup matching.
+    * Lifetime: DragonFly umtx keys sleeps by the backing physical address,
+    * so the word must remain mapped while waiters may exist.
+    * Threading: count 0 wakes all waiters; Mesa uses INT32_MAX for that
+    * semantic, while count 1 keeps the optimized single-waiter path.
+    */
+   return umtx_wakeup((volatile const int *)addr, count == 1 ? 1 : 0);
+}
+
+static int
+dragonfly_umtx_timeout_us(const struct timespec *abs_timeout)
+{
+   struct timespec now;
+   int64_t sec, nsec, usec;
+
+   if (!abs_timeout)
+      return 0;
+
+   if (clock_gettime(CLOCK_MONOTONIC, &now) != 0)
+      return -1;
+
+   sec = (int64_t)abs_timeout->tv_sec - (int64_t)now.tv_sec;
+   nsec = (int64_t)abs_timeout->tv_nsec - (int64_t)now.tv_nsec;
+   usec = sec * 1000000 + (nsec + 999) / 1000;
+   if (usec <= 0) {
+      errno = ETIMEDOUT;
+      return -1;
+   }
+   if (usec > INT_MAX)
+      return INT_MAX;
+   return (int)usec;
+}
+
+int futex_wait(uint32_t *addr, int32_t value, const struct timespec *timeout)
+{
+   int timeout_us;
+
+   assert(value == (int)(uint32_t)value); /* Check that bits weren't discarded */
+
+   timeout_us = dragonfly_umtx_timeout_us(timeout);
+   if (timeout_us < 0)
+      return -1;
+
+   return umtx_sleep((volatile const int *)addr, value, timeout_us);
+}
+
 #elif defined(__OpenBSD__)

 #include <sys/futex.h>
