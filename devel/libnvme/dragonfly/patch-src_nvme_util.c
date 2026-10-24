--- src/nvme/util.c.orig
+++ src/nvme/util.c
@@ -12,7 +12,9 @@
 #include <stdbool.h>
 #include <string.h>
 #include <errno.h>
+#ifndef __DragonFly__
 #include <malloc.h>
+#endif
 
 #include <sys/stat.h>
 #include <fcntl.h>
