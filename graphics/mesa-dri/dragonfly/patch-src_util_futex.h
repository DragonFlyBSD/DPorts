--- src/util/futex.h.orig	2020-09-28 22:52:13 UTC
+++ src/util/futex.h
@@ -86,6 +86,39 @@ static inline int futex_wait(uint32_t *a
 
    return _umtx_op(addr, UMTX_OP_WAIT_UINT, (uint32_t)value, uaddr, uaddr2) == -1 ? errno : 0;
 }
+#elif defined(__DragonFly__)
+#define UTIL_FUTEX_SUPPORTED 1
+
+#include <errno.h>
+#include <unistd.h>
+#include <time.h>
+
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
 
 #elif defined(__OpenBSD__)
 #define UTIL_FUTEX_SUPPORTED 1
