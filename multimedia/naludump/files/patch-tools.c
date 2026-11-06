--- a/tools.c
+++ b/tools.c
@@ -14,7 +14,12 @@
 #include <stdarg.h>
 #include <stdlib.h>
 #include <sys/time.h>
+#if defined(__FreeBSD__) || defined(__DragonFly__)
+#include <sys/param.h>
+#include <sys/mount.h>
+#else
 #include <sys/vfs.h>
+#endif
 #include <time.h>
 #include <unistd.h>
 #include <utime.h>
