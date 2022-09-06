--- vendor/e2fsprogs/lib/ext2fs/ismounted.c.orig	2022-06-10 23:11:16 UTC
+++ vendor/e2fsprogs/lib/ext2fs/ismounted.c
@@ -49,7 +49,7 @@
 #if HAVE_SYS_TYPES_H
 #include <sys/types.h>
 #endif
-#if defined(HAVE_SYS_SYSMACROS_H) && !defined(__FreeBSD__)
+#if defined(HAVE_SYS_SYSMACROS_H) && !defined(__FreeBSD__) && !defined(__DragonFly__)
 #include <sys/sysmacros.h>
 #endif
 
