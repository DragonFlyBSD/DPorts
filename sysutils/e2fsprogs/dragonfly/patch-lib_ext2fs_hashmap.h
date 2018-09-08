--- lib/ext2fs/hashmap.h.orig	2018-09-06 04:53:08 UTC
+++ lib/ext2fs/hashmap.h
@@ -4,6 +4,8 @@
 # include <stdlib.h>
 # include <stdint.h>
 
+#define __GNUC_PREREQ(a,b) 1
+
 struct ext2fs_hashmap {
 	uint32_t size;
 	uint32_t(*hash)(const void *key, size_t len);
