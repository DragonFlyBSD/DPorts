--- lib/helper.c.intermediate	2019-05-14 22:19:51.000000000 +0000
+++ lib/helper.c
@@ -396,7 +396,7 @@ int fuse_version(void)
 
 #include "fuse_compat.h"
 
-#if !defined(__FreeBSD__) && !defined(__NetBSD__)
+#if !defined(__FreeBSD__) && !defined(__NetBSD__) && !defined(__DragonFly__)
 
 struct fuse *fuse_setup_compat22(int argc, char *argv[],
 				 const struct fuse_operations_compat22 *op,
