--- extern/Eigen3/Eigen/src/Core/util/Memory.h.orig	2016-03-23 10:49:43.000000000 +0200
+++ extern/Eigen3/Eigen/src/Core/util/Memory.h
@@ -56,6 +56,10 @@
   #define EIGEN_MALLOC_ALREADY_ALIGNED 0
 #endif
 
+#if defined(__DragonFly__)
+#define EIGEN_HAS_POSIX_MEMALIGN 1
+#endif
+
 #endif
 
 // See bug 554 (http://eigen.tuxfamily.org/bz/show_bug.cgi?id=554)
