--- lib/replace/replace.h.orig	2019-12-06 10:11:08 UTC
+++ lib/replace/replace.h
@@ -37,7 +37,9 @@
 #endif
 
 /* Needs to be defined before std*.h and string*.h are included */
+#ifndef __STDC_WANT_LIB_EXT1__
 #define __STDC_WANT_LIB_EXT1__ 1
+#endif
 
 #include <stdio.h>
 #include <stdlib.h>
