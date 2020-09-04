- Implement futex_wake() and futex_wait() via umtx_wakeup() and umtx_sleep()
  EXPERIMENTAL and UNTESTED so far.

--- src/util/futex.h.intermediate	2020-09-03 05:33:19.000000000 +0000
+++ src/util/futex.h
@@ -32,6 +32,9 @@
 #if defined(__FreeBSD__)
 #include <errno.h>
 #include <sys/umtx.h>
+#elif defined(__DragonFly__)
+#include <errno.h>
+#include <unistd.h>
 #else
 #include <linux/futex.h>
 #include <sys/syscall.h>
@@ -54,6 +57,33 @@ static inline int futex_wait(uint32_t *a
    }
    return _umtx_op(addr, UMTX_OP_WAIT_UINT, (uint32_t)value, uaddr, uaddr2) == -1 ? errno : 0;
 }
+#elif defined(__DragonFly__)
+static inline int futex_wake(uint32_t *ptr, int count)
+{
+   return umtx_wakeup((volatile const int*)ptr, count);
+}
+
+static inline int futex_wait(uint32_t *ptr, int value, struct timespec *timeout)
+{
+   int timo = 0;
+   int ret;
+   if (timeout != NULL) {
+      timo = timeout->tv_sec * 1000*1000 + timeout->tv_nsec / 1000; /* XXX check overflow? */
+      if (timo < 0)
+         timo = 1 << 26; /* about 1 minute or so */  // 0x7fffffff; /* XXX ~35 minutes */
+      if (timo == 0 && timeout->tv_nsec > 0)
+         timo = 1; /* cap up to one 1us */
+   }
+   ret = umtx_sleep((volatile const int*)ptr, value, timo);
+   if (ret == 0)
+      return 0;
+   /* errno mangling for compat */
+   if (errno == EBUSY)
+      return EWOULDBLOCK;
+   if (errno == EWOULDBLOCK)
+      return ETIMEDOUT;
+   return errno;
+}
 #else
 static inline long sys_futex(void *addr1, int op, int val1, const struct timespec *timeout, void *addr2, int val3)
 {
