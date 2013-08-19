--- src/scrub.c.orig	2012-06-20 22:00:27.000000000 +0000
+++ src/scrub.c
@@ -632,7 +632,7 @@ scrub_disk(char *path, off_t size, const
 
     assert(ftype == FILE_BLOCK || ftype == FILE_CHAR);
     if (size == 0) {
-        if (getsize(path, &size) < 0) {
+        if (ds_getsize(path, &size) < 0) {
             fprintf(stderr, "%s: %s: %s\n", prog, path, strerror(errno));
             fprintf(stderr, "%s: could not determine size, use -s\n", prog);
             exit(1);
