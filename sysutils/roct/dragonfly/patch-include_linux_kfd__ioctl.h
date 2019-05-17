--- include/linux/kfd_ioctl.h.orig	2018-11-15 20:11:47 UTC
+++ include/linux/kfd_ioctl.h
@@ -23,7 +23,7 @@
 #ifndef KFD_IOCTL_H_INCLUDED
 #define KFD_IOCTL_H_INCLUDED
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/types.h>
 #include <sys/ioccom.h>
 #include <sys/mman.h>
