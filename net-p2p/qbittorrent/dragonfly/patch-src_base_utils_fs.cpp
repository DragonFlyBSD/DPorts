--- src/base/utils/fs.cpp.orig
+++ src/base/utils/fs.cpp
@@ -40,7 +40,7 @@
 
 #if defined(Q_OS_WIN)
 #include <windows.h>
-#elif defined(Q_OS_MACOS) || defined(Q_OS_FREEBSD) || defined(Q_OS_OPENBSD)
+#elif defined(Q_OS_MACOS) || defined(Q_OS_FREEBSD) || defined(Q_OS_DRAGONFLY) || defined(Q_OS_OPENBSD)
 #include <sys/param.h>
 #include <sys/mount.h>
 #elif defined(Q_OS_HAIKU)
