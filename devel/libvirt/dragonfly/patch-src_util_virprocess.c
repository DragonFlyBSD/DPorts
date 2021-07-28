--- src/util/virprocess.c.orig	2021-07-27 15:34:37.463931000 +0200
+++ src/util/virprocess.c	2021-07-27 15:44:27.630492000 +0200
@@ -444,11 +444,29 @@
 int virProcessSetAffinity(pid_t pid, virBitmap *map, bool quiet)
 {
     size_t i;
+#ifndef CPU_ALLOC
+    /* Legacy method uses a fixed size cpu mask, only allows up to 1024 cpus */
+    cpu_set_t mask;
+
+    CPU_ZERO(&mask);
+    for (i = 0; i < virBitmapSize(map); i++) {
+        if (virBitmapIsBitSet(map, i))
+            CPU_SET(i, &mask);
+    }
+
+    if (sched_setaffinity(pid, sizeof(mask), &mask) < 0) {
+        virReportSystemError(errno,
+                             _("cannot set CPU affinity on process %d"), pid);
+        return -1;
+    }
+#else
     int numcpus = 1024;
     size_t masklen;
     cpu_set_t *mask;
+
     int rv = -1;
 
+	/* New method dynamically allocates cpu mask, allowing unlimted cpus */
     VIR_DEBUG("Set process affinity on %lld", (long long)pid);
 
     /* Not only may the statically allocated cpu_set_t be too small,
@@ -480,6 +498,7 @@
             numcpus = numcpus << 2;
             goto realloc;
         }
+
         if (quiet) {
             VIR_DEBUG("cannot set CPU affinity on process %d: %s",
                       pid, g_strerror(errno));
@@ -489,6 +508,7 @@
             return -1;
         }
     }
+#endif
 
     return 0;
 }
@@ -497,11 +517,16 @@
 virProcessGetAffinity(pid_t pid)
 {
     size_t i;
+#ifdef CPU_ALLOC
     cpu_set_t *mask;
+#else
+	cpu_set_t maskt;
+#endif
     size_t masklen;
     size_t ncpus;
     virBitmap *ret = NULL;
 
+#ifdef CPU_ALLOC
     /* 262144 cpus ought to be enough for anyone */
     ncpus = 1024 << 8;
     masklen = CPU_ALLOC_SIZE(ncpus);
@@ -511,8 +536,17 @@
         abort();
 
     CPU_ZERO_S(masklen, mask);
-
-    if (sched_getaffinity(pid, masklen, mask) < 0) {
+#else
+    ncpus = 256; /* XXX */
+    masklen = sizeof(maskt);
+    CPU_ZERO(&maskt);
+# endif
+
+# ifdef CPU_ALLOC
+     if (sched_getaffinity(pid, masklen, mask) < 0) {
+# else
+    if (sched_getaffinity(pid, masklen, &maskt) < 0) {
+#endif
         virReportSystemError(errno,
                              _("cannot get CPU affinity of process %d"), pid);
         goto cleanup;
@@ -521,12 +555,19 @@
     ret = virBitmapNew(ncpus);
 
     for (i = 0; i < ncpus; i++) {
+#ifdef CPU_ALLOC
         if (CPU_ISSET_S(i, masklen, mask))
             ignore_value(virBitmapSetBit(ret, i));
+#else
+        if (CPU_ISSET(i, &maskt))
+            ignore_value(virBitmapSetBit(ret, i));
+# endif
     }
 
  cleanup:
+#ifdef CPU_ALLOC
     CPU_FREE(mask);
+#endif
 
     return ret;
 }
@@ -1165,7 +1206,7 @@
 
     return 0;
 }
-#elif defined(__FreeBSD__) || defined(__FreeBSD_kernel__)
+#elif defined(__FreeBSD__) && ! defined __DragonFly__
 int virProcessGetStartTime(pid_t pid,
                            unsigned long long *timestamp)
 {
