--- stellarsolver/stellarsolver.cpp.orig
+++ stellarsolver/stellarsolver.cpp
@@ -9,7 +9,7 @@
 #include <QSettings>
 #if defined(__APPLE__)
 #include <sys/sysctl.h>
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/types.h>
 #include <sys/sysctl.h>
 #elif defined(_WIN32)
@@ -1023,7 +1023,7 @@
     addPathToListIfExists(&indexFilePaths, QDir::homePath() + "/Library/Application Support/Astrometry");
     //Homebrew location
     addPathToListIfExists(&indexFilePaths, "/usr/local/share/astrometry");
-#elif defined(Q_OS_FREEBSD)
+#elif defined(Q_OS_FREEBSD) || defined(Q_OS_DRAGONFLY)
     //FreeBSD Default Location
     addPathToListIfExists(&indexFilePaths, "/usr/local/share/astrometry/");
     //FreeBSD Local KStars Location
@@ -1052,9 +1052,11 @@
 //But from what I read, getting the Available RAM is inconsistent and buggy on many systems.
 bool StellarSolver::getAvailableRAM(double &availableRAM, double &totalRAM)
 {
-#if defined(Q_OS_MACOS) || defined(Q_OS_FREEBSD)
+#if defined(Q_OS_MACOS) || defined(Q_OS_FREEBSD) || defined(Q_OS_DRAGONFLY)
 #if defined(Q_OS_FREEBSD)
     int mib [] = { CTL_HW, HW_REALMEM };
+#elif defined(Q_OS_DRAGONFLY)
+    int mib [] = { CTL_HW, HW_PHYSMEM };
 #else
     int mib [] = { CTL_HW, HW_MEMSIZE };
 #endif
