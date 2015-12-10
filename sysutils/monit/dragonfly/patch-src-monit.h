--- src/monit.h.orig	2015-10-22 15:44:25.000000000 +0200
+++ src/monit.h	2015-12-06 11:11:15.855663000 +0100
@@ -29,6 +29,10 @@
 #include "config.h"
 #include <assert.h>
 
+#ifdef HAVE_KINFO_H
+#include <kinfo.h>
+#endif
+
 #ifdef HAVE_SYS_TYPES_H
 #include <sys/types.h>
 #endif
