--- libv4lconvert/libv4lsyscall-priv.h.orig	2012-04-14 19:33:44.000000000 +0200
+++ libv4lconvert/libv4lsyscall-priv.h	2012-12-29 11:02:58.304153000 +0100
@@ -49,7 +49,7 @@
 #endif
 #endif
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/time.h>
 #include <sys/syscall.h>
 #include <sys/types.h>
@@ -83,7 +83,7 @@
 #define SYS_WRITE(fd, buf, len) \
 	syscall(SYS_write, (int)(fd), (void *)(buf), (size_t)(len));
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #define SYS_MMAP(addr, len, prot, flags, fd, off) \
 	__syscall(SYS_mmap, (void *)(addr), (size_t)(len), \
 			(int)(prot), (int)(flags), (int)(fd), (__off_t)(off))
