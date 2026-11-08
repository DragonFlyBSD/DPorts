--- external/dmon/dmon.h.orig
+++ external/dmon/dmon.h
@@ -173,7 +173,7 @@
 #    include <dirent.h>
 #    include <errno.h>
 #    include <fcntl.h>
-//#    include <linux/limits.h>
+#    include <limits.h>
 #    include <pthread.h>
 #    include <sys/inotify.h>
 #    include <sys/stat.h>
