--- utils.c.orig	2021-09-04 13:20:25 UTC
+++ utils.c
@@ -42,6 +42,10 @@
 #include <libprocstat.h>
 #endif
 
+#ifndef DTTOIF
+#define DTTOIF(dirtype) ((dirtype) << 12)
+#endif
+
 #ifdef HAVE_DEVINFO_H
 #include <devinfo.h>
 #include <pthread.h>
