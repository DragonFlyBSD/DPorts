--- src/io/prom/fs/hfs/libhfs.h.orig	2004-11-04 23:10:24 UTC
+++ src/io/prom/fs/hfs/libhfs.h
@@ -21,7 +21,11 @@
 # include "hfs.h"
 # include "apple.h"
 
+#ifdef __DragonFly__
+#include <errno.h>
+#else
 extern int errno;
+#endif
 
 # define ERROR(code, str)  \
     do { hfs_error = (str), errno = (code); goto fail; } while (0)
