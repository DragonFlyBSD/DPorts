--- src/shims/lock.c.intermediate	2023-02-05 18:10:08 UTC
+++ src/shims/lock.c
@@ -534,7 +534,7 @@ _dispatch_wait_on_address(uint32_t volat
 	return _dispatch_futex_wait(address, value, NULL, FUTEX_PRIVATE_FLAG);
 #elif defined(_WIN32)
 	return WaitOnAddress(address, &value, sizeof(value), INFINITE) == TRUE;
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
 	uint64_t usecs = 0;
 	int rc;
 	if (nsecs == DISPATCH_TIME_FOREVER) {
