--- src/solid/devices/backends/fstab/fstabwatcher.cpp.orig	2026-07-03 11:04:47 UTC
+++ src/solid/devices/backends/fstab/fstabwatcher.cpp
@@ -18,6 +18,10 @@
 #include <sys/ucred.h>
 #include <sys/mount.h>
 #endif
+#if defined(Q_OS_DRAGONFLY)
+#include <sys/param.h>
+#include <sys/mount.h>
+#endif
 #ifdef Q_OS_NETBSD
 #include <sys/types.h>
 #include <sys/statvfs.h>
