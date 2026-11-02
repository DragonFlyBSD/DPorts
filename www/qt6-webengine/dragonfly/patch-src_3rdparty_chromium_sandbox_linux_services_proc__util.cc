--- src/3rdparty/chromium/sandbox/linux/services/proc_util.cc.orig
+++ src/3rdparty/chromium/sandbox/linux/services/proc_util.cc
@@ -7,6 +7,7 @@
 #include <dirent.h>
 #include <errno.h>
 #include <fcntl.h>
+#include <limits.h>
 #include <string.h>
 #include <sys/stat.h>
 #include <sys/types.h>
