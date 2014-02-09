--- ./lib/ext2fs/initialize.c.intermediate	2013-12-29 04:18:02.000000000 +0000
+++ ./lib/ext2fs/initialize.c
@@ -28,23 +28,16 @@
 #include "ext2_fs.h"
 #include "ext2fs.h"
 
-#if defined(__linux__)    &&	defined(EXT2_OS_LINUX)
-#define CREATOR_OS EXT2_OS_LINUX
-#else
-#if defined(__GNU__)     &&	defined(EXT2_OS_HURD)
+#if defined(__GNU__)     &&     defined(EXT2_OS_HURD)
 #define CREATOR_OS EXT2_OS_HURD
-#else
-#if defined(__FreeBSD__) &&	defined(EXT2_OS_FREEBSD)
-#define CREATOR_OS EXT2_OS_FREEBSD
-#else
-#if defined(LITES) 	   &&	defined(EXT2_OS_LITES)
+#elif (defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__) \
+    || defined(__DragonFly__)) && defined(EXT2_OS_BSD)
+#define CREATOR_OS EXT2_OS_BSD
+#elif defined(LITES)         &&   defined(EXT2_OS_LITES)
 #define CREATOR_OS EXT2_OS_LITES
 #else
 #define CREATOR_OS EXT2_OS_LINUX /* by default */
-#endif /* defined(LITES) && defined(EXT2_OS_LITES) */
-#endif /* defined(__FreeBSD__) && defined(EXT2_OS_FREEBSD) */
-#endif /* defined(__GNU__)     && defined(EXT2_OS_HURD) */
-#endif /* defined(__linux__)   && defined(EXT2_OS_LINUX) */
+#endif
 
 /*
  * Calculate the number of GDT blocks to reserve for online filesystem growth.
