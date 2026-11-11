--- VTK/ThirdParty/eigen/vtkeigen/eigen/src/Core/util/Memory.h.orig
+++ VTK/ThirdParty/eigen/vtkeigen/eigen/src/Core/util/Memory.h
@@ -42,7 +42,7 @@
 //   See http://svn.freebsd.org/viewvc/base/stable/6/lib/libc/stdlib/malloc.c?view=markup
 // FreeBSD 7 seems to have 16-byte aligned malloc except on ARM and MIPS architectures
 //   See http://svn.freebsd.org/viewvc/base/stable/7/lib/libc/stdlib/malloc.c?view=markup
-#if defined(__FreeBSD__) && !(EIGEN_ARCH_ARM || EIGEN_ARCH_MIPS) && (EIGEN_DEFAULT_ALIGN_BYTES == 16)
+#if (defined(__FreeBSD__)||defined(__DragonFly__)) && !(EIGEN_ARCH_ARM || EIGEN_ARCH_MIPS) && (EIGEN_DEFAULT_ALIGN_BYTES == 16)
   #define EIGEN_FREEBSD_MALLOC_ALREADY_ALIGNED 1
 #else
   #define EIGEN_FREEBSD_MALLOC_ALREADY_ALIGNED 0
