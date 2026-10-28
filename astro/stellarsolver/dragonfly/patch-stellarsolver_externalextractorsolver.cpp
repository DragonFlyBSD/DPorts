--- stellarsolver/externalextractorsolver.cpp.orig
+++ stellarsolver/externalextractorsolver.cpp
@@ -126,7 +126,7 @@
     return getDefaultExternalPaths(MAC_HOMEBREW);
 #elif defined(Q_OS_LINUX)
     return getDefaultExternalPaths(LINUX_DEFAULT);
-#elif defined(Q_OS_FREEBSD)
+#elif defined(Q_OS_FREEBSD) || defined(Q_OS_DRAGONFLY)
     return getDefaultExternalPaths(FREEBSD_DEFAULT);
 #else //Windows
     return getDefaultExternalPaths(WIN_ANSVR);
