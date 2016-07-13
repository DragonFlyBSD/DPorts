--- src/globals.h.orig	2000-10-27 12:59:23.000000000 +0200
+++ src/globals.h
@@ -1,6 +1,10 @@
 extern char     *optarg;
 extern int optind, opterr;
+#ifdef __DragonFly__
+#include <errno.h>
+#else
 extern int errno;
+#endif
 
 double original_percent=10; /* Automatic changing: 10, to 1, then 0.1 then 0.01% */
 double percent;
