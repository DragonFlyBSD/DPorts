--- Vc/global.h.orig	2021-07-31 18:16:49.176125000 +0200
+++ Vc/global.h	2021-07-31 18:17:22.785352000 +0200
@@ -132,10 +132,10 @@
 #endif
 
 #ifdef Vc_GCC
-#  if Vc_GCC >= 0x70000 && defined __i386__ && (!defined __GLIBC_PREREQ || !__GLIBC_PREREQ(2,26))
+#  if Vc_GCC >= 0x70000 && defined __i386__ && !defined __GLIBC_PREREQ
      // GCC 7 changed alignof(max_align_t) to 16. glibc 2.26 followed with malloc in 2.26.
-     // 1. If GCC >= 7 and libc is not glibc max_align_t and malloc mismatch
-     // 2. If GCC >= 7 and libc is glibc < 2.26 max_align_t and malloc mismatch
+     // If GCC >= 7 and libc is not glibc max_align_t and malloc mismatch
+     // If GCC >= 7 and libc is glibc < 2.26 max_align_t and malloc mismatch
 #  elif Vc_GCC >= 0x40900
 #    define Vc_HAVE_STD_MAX_ALIGN_T 1
 #  else
