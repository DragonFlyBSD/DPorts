--- mpeg2play.c.intermediate	2016-07-12 17:36:02 UTC
+++ mpeg2play.c
@@ -47,7 +47,11 @@
 #include "config.h"
 #include "global.h"
 
+#ifdef __DragonFly__
+#include <errno.h>
+#else
 extern int errno;
+#endif
 
 /* private prototypes */
 static void initdecoder _ANSI_ARGS_((void));
