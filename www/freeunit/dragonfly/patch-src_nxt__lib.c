--- src/nxt_lib.c.orig
+++ src/nxt_lib.c
@@ -89,8 +89,20 @@
     n = sysconf(_SC_NPROCESSORS_ONLN);
 #endif
 
-#if (NXT_HAVE_LINUX_SCHED_GETAFFINITY)
+#if (NXT_HAVE_LINUX_SCHED_GETAFFINITY) && defined(__DragonFly__)
+    /* DragonFly: fixed-size cpu_set_t, no CPU_ALLOC(). */
     if (n > 0) {
+        cpu_set_t  set;
+
+        CPU_ZERO(&set);
+
+        if (sched_getaffinity(0, sizeof(set), &set) == 0) {
+            n = CPU_COUNT(&set);
+        }
+    }
+
+#elif (NXT_HAVE_LINUX_SCHED_GETAFFINITY)
+    if (n > 0) {
         int        err;
         size_t     size;
         cpu_set_t  *set;
