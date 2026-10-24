--- src/zfile.c.orig	2023-11-29 22:40:36 UTC
+++ src/zfile.c
@@ -4,7 +4,7 @@
 #include <sys/types.h>
 
 #ifdef __CYGWIN__
-typedef _off64_t off64_t;
+typedef _off64_t z_off64_t;
 #endif
 
 #include <assert.h>
@@ -331,14 +331,14 @@ zfile_read(void *cookie_, char *buf, siz
 }
 
 static int
-zfile_seek(void *cookie_, off64_t *offset_, int whence) {
+zfile_seek(void *cookie_, z_off64_t *offset_, int whence) {
     struct zfile *cookie = cookie_;
-    off64_t new_offset = 0, offset = *offset_;
+    z_off64_t new_offset = 0, offset = *offset_;
 
     if (whence == SEEK_SET) {
         new_offset = offset;
     } else if (whence == SEEK_CUR) {
-        new_offset = (off64_t)cookie->logic_offset + offset;
+        new_offset = (z_off64_t)cookie->logic_offset + offset;
     } else {
         /* SEEK_END not ok */
         return -1;
@@ -348,7 +348,7 @@ zfile_seek(void *cookie_, off64_t *offse
         return -1;
 
     /* Backward seeks to anywhere but 0 are not ok */
-    if (new_offset < (off64_t)cookie->logic_offset && new_offset != 0) {
+    if (new_offset < (z_off64_t)cookie->logic_offset && new_offset != 0) {
         return -1;
     }
 
