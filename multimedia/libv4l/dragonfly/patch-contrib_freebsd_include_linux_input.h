--- contrib/freebsd/include/linux/input.h.orig	2015-05-06 19:24:59 UTC
+++ contrib/freebsd/include/linux/input.h
@@ -42,7 +42,7 @@ typedef int8_t __s8;
 #endif
 #endif
 
-#if defined(__FreeBSD__) || defined(__FreeBSD_kernel__)
+#if defined(__FreeBSD__) || defined(__FreeBSD_kernel__) || defined(__DragonFly__)
 #define __user
 #define	_IOC_READ   IOC_OUT
 #define	_IOC_WRITE  IOC_IN
