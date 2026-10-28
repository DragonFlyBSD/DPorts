--- src/print_disk_info.c.orig
+++ src/print_disk_info.c
@@ -135,7 +135,7 @@
 #if defined(__DragonFly__) || defined(__APPLE__)
     struct statfs buf;
 
-    if (statfs(path, &buf) == -1)
+    if (statfs(ctx->path, &buf) == -1)
         return;
 
     mounted = true;
