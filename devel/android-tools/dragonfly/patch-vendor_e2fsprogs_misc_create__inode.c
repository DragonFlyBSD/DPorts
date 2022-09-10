--- vendor/e2fsprogs/misc/create_inode.c.orig	2022-06-10 23:11:16 UTC
+++ vendor/e2fsprogs/misc/create_inode.c
@@ -28,7 +28,7 @@
 #ifdef HAVE_SYS_IOCTL_H
 #include <sys/ioctl.h>
 #endif
-#if defined(HAVE_SYS_SYSMACROS_H) && !defined(__FreeBSD__)
+#if defined(HAVE_SYS_SYSMACROS_H) && !defined(__FreeBSD__) && !defined(__DragonFly__)
 #include <sys/sysmacros.h>
 #endif
 
