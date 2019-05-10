--- src/io/prom/fs/hfsplus/libhfsp.h.orig	2005-07-25 15:22:53 UTC
+++ src/io/prom/fs/hfsplus/libhfsp.h
@@ -30,7 +30,11 @@
 # include "hfs.h"
 # include "hfsp.h"
 
+#ifdef __DragonFly__
+#include <errno.h>
+#else
 extern int errno;
+#endif
 /* Last error is eventually found here */
 extern const char *hfsp_error; 
 
