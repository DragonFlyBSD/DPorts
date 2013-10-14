--- lib/fpending.h.orig	2013-09-22 06:15:20.000000000 +0000
+++ lib/fpending.h
@@ -24,6 +24,8 @@
 # include <stdio_ext.h>
 #endif
 
+#ifndef __DragonFly__
 #ifndef __fpending
 size_t __fpending (FILE *);
 #endif
+#endif
