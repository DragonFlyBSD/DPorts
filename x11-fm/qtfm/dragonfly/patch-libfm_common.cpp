--- libfm/common.cpp.orig
+++ libfm/common.cpp
@@ -21,7 +21,7 @@
 #include <QPalette>
 #include <QVector>
 
-#if defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__APPLE__)
+#if defined(__FreeBSD__) || defined(__DragonFly__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__APPLE__)
 #include <sys/mount.h>
 #else
 #include <sys/vfs.h>
