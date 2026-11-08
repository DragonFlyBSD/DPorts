--- libdnf/hy-iutil.cpp.orig
+++ libdnf/hy-iutil.cpp
@@ -22,7 +22,7 @@
 #include <errno.h>
 #include <dirent.h>
 #include <fcntl.h>
-#if defined(__APPLE__) || defined(__FreeBSD__)
+#if defined(__APPLE__) || defined(__FreeBSD__) || defined(__DragonFly__)
 #include <limits.h>
 #else
 #include <linux/limits.h>
