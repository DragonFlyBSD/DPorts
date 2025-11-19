--- lib/helper.c.orig	2025-11-16 20:14:34.787243000 +0100
+++ lib/helper.c	2025-11-16 20:15:01.657464000 +0100
@@ -396,7 +396,7 @@ int fuse_version(void)
 
 #include "fuse_compat.h"
 
-#if !defined(__FreeBSD__) && !defined(__NetBSD__)
+#if !defined(__DragonFly__) && !defined(__FreeBSD__) && !defined(__NetBSD__)
 
 struct fuse *fuse_setup_compat22(int argc, char *argv[],
 				 const struct fuse_operations_compat22 *op,
