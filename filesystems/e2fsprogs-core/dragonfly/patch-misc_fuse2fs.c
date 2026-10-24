--- misc/fuse2fs.c.orig	2026-10-23 00:00:00 UTC
+++ misc/fuse2fs.c
@@ -38,6 +38,13 @@
 # define __SET_FOB_FOR_FUSE
 # define _FILE_OFFSET_BITS 64
 #endif /* _FILE_OFFSET_BITS */
+#ifdef __DragonFly__
+/* fuse.h pulls in <sys/statvfs.h>; its <sys/uuid.h> uuid_t clashes with libuuid's */
+#define uuid_t dfly_uuid_t
+#include <sys/uuid.h>
+#include <sys/statvfs.h>
+#undef uuid_t
+#endif
 #include <fuse.h>
 #ifdef __SET_FOB_FOR_FUSE
 # undef _FILE_OFFSET_BITS
