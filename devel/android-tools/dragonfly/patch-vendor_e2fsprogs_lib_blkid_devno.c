--- vendor/e2fsprogs/lib/blkid/devno.c.orig	2022-06-10 23:11:16 UTC
+++ vendor/e2fsprogs/lib/blkid/devno.c
@@ -31,7 +31,7 @@
 #if HAVE_SYS_MKDEV_H
 #include <sys/mkdev.h>
 #endif
-#if defined(HAVE_SYS_SYSMACROS_H) && !defined(__FreeBSD__)
+#if defined(HAVE_SYS_SYSMACROS_H) && !defined(__FreeBSD__) && !defined(__DragonFly__)
 #include <sys/sysmacros.h>
 #endif
 
