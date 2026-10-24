--- src/util/u_thread.c.orig	2026-07-02 19:34:59 UTC
+++ src/util/u_thread.c
@@ -101,7 +101,21 @@ util_set_thread_affinity(thrd_t thread,
                          uint32_t *old_mask,
                          unsigned num_mask_bits)
 {
-#if defined(HAVE_PTHREAD_SETAFFINITY)
+#if defined(__DragonFly__)
+   /*
+    * Ownership: the caller owns thread, mask, and old_mask; this function does
+    * not retain any of them.
+    * Lifetime: all pointers are only read or written during this call.
+    * Threading: DragonFly's pthread affinity path can enter lwp_setaffinity in
+    * a way Mesa cannot safely use for topology probing or worker placement.
+    * Report unsupported so callers fall back to unpinned scheduling.
+    */
+   (void)thread;
+   (void)mask;
+   (void)old_mask;
+   (void)num_mask_bits;
+   return false;
+#elif defined(HAVE_PTHREAD_SETAFFINITY)
    cpu_set_t cpuset;

    if (old_mask) {
