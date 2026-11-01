--- src/pluginscheduler.c.orig
+++ src/pluginscheduler.c
@@ -21,7 +21,7 @@
 #include <gvm/base/prefs.h>     /* for prefs_get() */
 #include <gvm/util/nvticache.h> /* for nvticache_t */
 #include <stdlib.h>
-#if !defined(__FreeBSD__)
+#if !defined(__FreeBSD__) && !defined(__DragonFly__)
 #include <malloc.h>
 #endif
 #include <stdlib.h>
