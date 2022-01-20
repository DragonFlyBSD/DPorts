--- src/print_disk_info.c.intermediate	2022-01-19 10:31:57.000000000 +0000
+++ src/print_disk_info.c
@@ -63,7 +63,7 @@ static int print_bytes_human(char *outwa
  * Determines whether remaining bytes are below given threshold.
  *
  */
-#if defined(__OpenBSD__) || defined(__DragonFly__) || defined(__APPLE__)
+#if defined(__OpenBSD__) || defined(__APPLE__)
 static bool below_threshold(struct statfs buf, const char *prefix_type, const char *threshold_type, const double low_threshold) {
 #else
 static bool below_threshold(struct statvfs buf, const char *prefix_type, const char *threshold_type, const double low_threshold) {
@@ -124,14 +124,14 @@ void print_disk_info(disk_info_ctx_t *ct
 
     INSTANCE(ctx->path);
 
-#if defined(__OpenBSD__) || defined(__DragonFly__) || defined(__APPLE__)
+#if defined(__OpenBSD__) || defined(__APPLE__)
     struct statfs buf;
 
     if (statfs(path, &buf) == -1)
         return;
 
     mounted = true;
-#elif defined(__NetBSD__) || defined(__FreeBSD__) || defined(__FreeBSD_kernel__)
+#elif defined(__NetBSD__) || defined(__FreeBSD__) || defined(__FreeBSD_kernel__) || defined(__DragonFly__)
     struct statvfs buf;
 
     if (statvfs(ctx->path, &buf) == -1)
