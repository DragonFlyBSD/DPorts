--- src/System_Info.cpp.orig
+++ src/System_Info.cpp
@@ -2721,7 +2721,7 @@
 
 #endif  // Linux
 
-#ifdef Q_OS_FREEBSD
+#if defined(Q_OS_FREEBSD) || defined(Q_OS_DRAGONFLY)
 
 #include <sys/sysctl.h>
 #include <QDir>
