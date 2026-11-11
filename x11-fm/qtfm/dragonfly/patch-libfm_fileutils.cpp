--- libfm/fileutils.cpp.orig
+++ libfm/fileutils.cpp
@@ -1,7 +1,7 @@
 #include "fileutils.h"
 #include <QDirIterator>
 
-#if defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__APPLE__)
+#if defined(__FreeBSD__) || defined(__DragonFly__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__APPLE__)
 #include <sys/mount.h>
 #else
 #include <sys/vfs.h>
