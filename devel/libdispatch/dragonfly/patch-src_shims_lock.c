--- src/shims/lock.c.orig
+++ src/shims/lock.c
@@ -20,6 +20,10 @@
 
 #include "internal.h"
 
+#if defined(__DragonFly__)
+#include <unistd.h>
+#endif
+
 #if TARGET_OS_MAC
 dispatch_static_assert(DLOCK_LOCK_DATA_CONTENTION ==
 		ULF_WAIT_WORKQ_DATA_CONTENTION);
@@ -556,6 +560,43 @@
 	} while (usecs == UINT32_MAX && rc == ETIMEDOUT &&
 			(nsecs = _dispatch_timeout(timeout)) != 0);
 	return rc;
+#elif defined(__DragonFly__)
+	// DragonFly has neither ulock nor futex(2); use the native umtx
+	// sleep/wakeup. umtx_sleep takes a relative timeout in microseconds
+	// and the kernel caps sleeps at kern.umtx_timeout_max, returning
+	// EWOULDBLOCK, so recompute the remaining time and retry, and loop
+	// accordingly for infinite waits.
+	(void)flags;
+	uint64_t usecs = 0;
+	int rc;
+	if (nsecs == DISPATCH_TIME_FOREVER) {
+		for (;;) {
+			rc = umtx_sleep((volatile const int *)address,
+					(int)value, 0);
+			if (rc == 0 || errno == EBUSY) {
+				return 0;
+			}
+			if (errno != EWOULDBLOCK) {
+				return errno;
+			}
+		}
+	}
+	do {
+		if (*(volatile uint32_t *)address != value) {
+			return 0;
+		}
+		usecs = howmany(nsecs, NSEC_PER_USEC);
+		if (usecs > INT_MAX) usecs = INT_MAX;
+		rc = umtx_sleep((volatile const int *)address,
+				(int)value, (int)usecs);
+		if (rc == 0 || errno == EBUSY) {
+			return 0;
+		}
+		if (errno != EWOULDBLOCK) {
+			return errno;
+		}
+	} while ((nsecs = _dispatch_timeout(timeout)) != 0);
+	return ETIMEDOUT;
 #else
 #error _dispatch_wait_on_address unimplemented for this platform
 #endif
@@ -570,6 +611,8 @@
 	_dispatch_futex_wake((uint32_t *)address, INT_MAX, FUTEX_PRIVATE_FLAG);
 #elif defined(_WIN32)
 	WakeByAddressAll((uint32_t *)address);
+#elif defined(__DragonFly__)
+	umtx_wakeup((volatile const int *)address, 0);
 #else
 	(void)address;
 #endif
