--- src/rlwrap.h.orig	2021-06-09 09:14:23 UTC
+++ src/rlwrap.h
@@ -45,7 +45,9 @@
 #include <errno.h>
 #include <stdarg.h>
 
-
+#if defined(__DragonFly__)
+#include <stdbool.h>
+#endif
 
 /* #define __USE_XOPEN
    #define __USE_GNU */
