--- src/print_disk_info.c.orig	2022-10-04 21:34:03.254490000 +0200
+++ src/print_disk_info.c	2022-10-04 21:42:57.592448000 +0200
@@ -73,9 +73,17 @@
     } else if (strcasecmp(threshold_type, "percentage_avail") == 0) {
         return 100.0 * (double)buf.f_bavail / (double)buf.f_blocks < low_threshold;
     } else if (strcasecmp(threshold_type, "bytes_free") == 0) {
+#if defined(__FreeBSD__) || defined(__FreeBSD_kernel__) || defined(__OpenBSD__) || defined(__DragonFly__) || defined(__APPLE__)
+        return (double)buf.f_bsize * (double)buf.f_bfree < low_threshold;
+#else
         return (double)buf.f_frsize * (double)buf.f_bfree < low_threshold;
+#endif
     } else if (strcasecmp(threshold_type, "bytes_avail") == 0) {
+#if defined(__FreeBSD__) || defined(__FreeBSD_kernel__) || defined(__OpenBSD__) || defined(__DragonFly__) || defined(__APPLE__)
+        return (double)buf.f_bsize * (double)buf.f_bavail < low_threshold;
+#else
         return (double)buf.f_frsize * (double)buf.f_bavail < low_threshold;
+#endif
     } else if (threshold_type[0] != '\0' && strncasecmp(threshold_type + 1, "bytes_", strlen("bytes_")) == 0) {
         uint64_t base = strcasecmp(prefix_type, "decimal") == 0 ? DECIMAL_BASE : BINARY_BASE;
         double factor = 1;
@@ -127,7 +135,7 @@
 #if defined(__FreeBSD__) || defined(__FreeBSD_kernel__) || defined(__OpenBSD__) || defined(__DragonFly__) || defined(__APPLE__)
     struct statfs buf;
 
-    if (statfs(path, &buf) == -1)
+    if (statfs(ctx->path, &buf) == -1)
         return;
 
     mounted = true;
@@ -190,10 +198,17 @@
     char string_percentage_used[STRING_SIZE];
     char string_percentage_avail[STRING_SIZE];
 
+#if defined(__FreeBSD__) || defined(__FreeBSD_kernel__) || defined(__OpenBSD__) || defined(__DragonFly__) || defined(__APPLE__)
+    print_bytes_human(string_free, (uint64_t)buf.f_bsize * (uint64_t)buf.f_bfree, ctx->prefix_type);
+    print_bytes_human(string_used, (uint64_t)buf.f_bsize * ((uint64_t)buf.f_blocks - (uint64_t)buf.f_bfree), ctx->prefix_type);
+    print_bytes_human(string_total, (uint64_t)buf.f_bsize * (uint64_t)buf.f_blocks, ctx->prefix_type);
+    print_bytes_human(string_avail, (uint64_t)buf.f_bsize * (uint64_t)buf.f_bavail, ctx->prefix_type);
+#else
     print_bytes_human(string_free, (uint64_t)buf.f_frsize * (uint64_t)buf.f_bfree, ctx->prefix_type);
     print_bytes_human(string_used, (uint64_t)buf.f_frsize * ((uint64_t)buf.f_blocks - (uint64_t)buf.f_bfree), ctx->prefix_type);
     print_bytes_human(string_total, (uint64_t)buf.f_frsize * (uint64_t)buf.f_blocks, ctx->prefix_type);
     print_bytes_human(string_avail, (uint64_t)buf.f_frsize * (uint64_t)buf.f_bavail, ctx->prefix_type);
+#endif
     snprintf(string_percentage_free, STRING_SIZE, "%.01f%s", 100.0 * (double)buf.f_bfree / (double)buf.f_blocks, pct_mark);
     snprintf(string_percentage_used_of_avail, STRING_SIZE, "%.01f%s", 100.0 * (double)(buf.f_blocks - buf.f_bavail) / (double)buf.f_blocks, pct_mark);
     snprintf(string_percentage_used, STRING_SIZE, "%.01f%s", 100.0 * (double)(buf.f_blocks - buf.f_bfree) / (double)buf.f_blocks, pct_mark);
