--- src/lace32.c.orig
+++ src/lace32.c
@@ -210,6 +210,32 @@
 static int lace_futex_wake_all(atomic_int *addr)
 {
     return _umtx_op(addr, UMTX_OP_WAKE_PRIVATE, INT_MAX, NULL, NULL);
+}
+
+#elif defined(__DragonFly__)
+/* DragonFly: umtx_sleep(2)/umtx_wakeup(2); a zero timeout sleeps forever. */
+
+LACE_UNUSED
+static int lace_futex_wait(atomic_int *addr, int expected, int64_t timeout_us)
+{
+    int t = 0;
+    if (timeout_us >= 0) {
+        t = timeout_us > INT_MAX ? INT_MAX : (int)timeout_us;
+        if (t == 0) t = 1;
+    }
+    return umtx_sleep((volatile const int *)addr, expected, t);
+}
+
+LACE_UNUSED
+static int lace_futex_wake_one(atomic_int *addr)
+{
+    return umtx_wakeup((volatile const int *)addr, 1);
+}
+
+LACE_UNUSED
+static int lace_futex_wake_all(atomic_int *addr)
+{
+    return umtx_wakeup((volatile const int *)addr, 0);
 }
 
 #elif defined(__APPLE__)
