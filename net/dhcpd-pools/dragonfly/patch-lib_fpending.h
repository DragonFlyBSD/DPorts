--- lib/fpending.h.orig	2013-10-20 18:53:22.000000000 +0000
+++ lib/fpending.h
@@ -24,6 +24,3 @@
 # include <stdio_ext.h>
 #endif
 
-#ifndef __fpending
-size_t __fpending (FILE *) _GL_ATTRIBUTE_PURE;
-#endif
