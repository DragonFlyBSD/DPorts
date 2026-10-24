--- src/xshmfence_futex.h.orig	2026-07-03 00:05:50 UTC
+++ src/xshmfence_futex.h
@@ -45,6 +45,27 @@
 	return sys_futex(addr, UMTX_OP_WAIT_UINT, value);
 }
 
+#elif defined(__DragonFly__)
+
+/*
+ * DragonFly umtx: kernel sleep/wakeup keyed on the physical page, which
+ * is exactly what a fence living in cross-process shared memory needs.
+ * umtx_sleep() returns EBUSY when *addr != value at call time; the
+ * caller loop treats EWOULDBLOCK as a retry, so map retryable errors.
+ */
+#include <unistd.h>
+
+static inline int futex_wake(int32_t *addr) {
+	return umtx_wakeup((volatile const int *)addr, 0);	/* 0 = all */
+}
+
+static inline int futex_wait(int32_t *addr, int32_t value) {
+	int r = umtx_sleep((volatile const int *)addr, value, 0);
+	if (r == -1 && (errno == EBUSY || errno == EINTR))
+		errno = EWOULDBLOCK;
+	return r;
+}
+
 #else
 
 #include <stdint.h>
