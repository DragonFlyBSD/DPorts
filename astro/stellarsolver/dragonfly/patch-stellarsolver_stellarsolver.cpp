--- stellarsolver/stellarsolver.cpp.intermediate	2021-12-24 07:20:43.000000000 +0000
+++ stellarsolver/stellarsolver.cpp
@@ -7,7 +7,7 @@
 */
 #if defined(__APPLE__)
 #include <sys/sysctl.h>
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/types.h>
 #include <sys/sysctl.h>
 #elif defined(_WIN32)
@@ -833,8 +833,12 @@ bool StellarSolver::getAvailableRAM(doub
 {
 #if defined(Q_OS_OSX) || defined(Q_OS_FREEBSD)
 #if defined(Q_OS_FREEBSD)
+#ifdef HW_REALMEM
     int mib [] = { CTL_HW, HW_REALMEM };
 #else
+    int mib [] = { CTL_HW, HW_PHYSMEM };
+#endif
+#else
     int mib [] = { CTL_HW, HW_MEMSIZE };
 #endif
     size_t length;
