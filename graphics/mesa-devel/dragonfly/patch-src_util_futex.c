--- src/util/futex.c.orig	2026-09-30 21:48:02 UTC
+++ src/util/futex.c
@@ -89,6 +89,50 @@
    return _umtx_op(addr, UMTX_OP_WAIT_UINT, (uint32_t)value, uaddr, uaddr2) == -1 ? errno : 0;
 }
 
+#elif defined(__DragonFly__)
+
+#include <errno.h>
+#include <limits.h>
+#include <time.h>
+#include <unistd.h>
+
+int futex_wake(uint32_t *addr, int32_t count)
+{
+   return umtx_wakeup((volatile const int *)addr, count);
+}
+
+/* umtx_sleep() takes a relative timeout in microseconds, 0 meaning none. */
+int futex_wait(uint32_t *addr, int32_t value, const struct timespec *timeout)
+{
+   struct timespec now;
+   int64_t ns;
+   int timo = 0;
+
+   if (timeout != NULL) {
+      clock_gettime(CLOCK_MONOTONIC, &now);
+      ns = (int64_t)(timeout->tv_sec - now.tv_sec) * 1000000000 +
+           (timeout->tv_nsec - now.tv_nsec);
+      if (ns <= 0) {
+         errno = ETIMEDOUT;
+         return -1;
+      }
+      timo = (ns + 999) / 1000 > INT_MAX ? INT_MAX : (int)((ns + 999) / 1000);
+   }
+
+   if (umtx_sleep((volatile const int *)addr, value, timo) == 0)
+      return 0;
+   if (errno == EBUSY) {
+      errno = EAGAIN;
+   } else if (errno == EWOULDBLOCK && timeout != NULL) {
+      /* Also returned early by a kernel failsafe: only time out at the deadline. */
+      clock_gettime(CLOCK_MONOTONIC, &now);
+      if (now.tv_sec > timeout->tv_sec ||
+          (now.tv_sec == timeout->tv_sec && now.tv_nsec >= timeout->tv_nsec))
+         errno = ETIMEDOUT;
+   }
+   return -1;
+}
+
 #elif defined(__OpenBSD__)
 
 #include <sys/futex.h>
