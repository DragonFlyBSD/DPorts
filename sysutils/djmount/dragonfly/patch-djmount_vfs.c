--- djmount/vfs.c.orig	2006-08-27 20:12:20 UTC
+++ djmount/vfs.c
@@ -38,6 +38,10 @@
 #include "device_list.h"
 #include "xml_util.h"
 
+#ifdef __DragonFly__
+/* from vfs/ufs/dir.h */
+#define DTTOIF(dirtype) ((dirtype) << 12)
+#endif
 
 
 // for unknown file sizes e.g. streams
