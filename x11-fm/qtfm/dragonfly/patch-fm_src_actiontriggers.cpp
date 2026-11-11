--- fm/src/actiontriggers.cpp.orig
+++ fm/src/actiontriggers.cpp
@@ -6,7 +6,7 @@
 #include <QDockWidget>
 #include <QStatusBar>
 #include <QToolBar>
-#if defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__APPLE__)
+#if defined(__FreeBSD__) || defined(__DragonFly__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__APPLE__)
 #include <sys/mount.h>
 #else
 #include <sys/vfs.h>
