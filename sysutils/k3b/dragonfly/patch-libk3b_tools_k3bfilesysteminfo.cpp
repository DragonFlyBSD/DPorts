--- libk3b/tools/k3bfilesysteminfo.cpp.orig	2026-11-05 10:49:24 UTC
+++ libk3b/tools/k3bfilesysteminfo.cpp
@@ -14,7 +14,7 @@
 #include <QFileInfo>
 #include <QRegularExpression>
 
-#ifdef Q_OS_FREEBSD
+#if defined(Q_OS_FREEBSD) || defined(Q_OS_DRAGONFLY)
 #include <sys/param.h>
 #include <sys/mount.h>
 #endif
