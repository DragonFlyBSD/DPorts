--- common/include/pcl/pcl_macros.h.orig	2018-11-26 11:50:33 UTC
+++ common/include/pcl/pcl_macros.h
@@ -401,6 +401,10 @@ log2f (float x)
   #endif
 #endif
 
+#ifdef __DragonFly__
+#define HAVE_POSIX_MEMALIGN
+#endif
+
 inline void*
 aligned_malloc (size_t size)
 {
