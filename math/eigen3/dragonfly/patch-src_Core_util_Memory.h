
malloc(3) on DragonFly does not guarantee 16-bit alignment.
But posix_memalign(ptr, 16, size) does.

--- Eigen/src/Core/util/Memory.h.orig	2015-11-05 16:56:09.000000000 +0200
+++ Eigen/src/Core/util/Memory.h
@@ -56,6 +56,10 @@
   #define EIGEN_MALLOC_ALREADY_ALIGNED 0
 #endif
 
+#if defined(__DragonFly__)
+#define EIGEN_HAS_POSIX_MEMALIGN 1
+#endif
+
 #endif
 
 // See bug 554 (http://eigen.tuxfamily.org/bz/show_bug.cgi?id=554)
