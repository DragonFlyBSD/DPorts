--- libv4lconvert/libv4lsyscall-priv.h.orig	2012-04-14 17:33:44 UTC
+++ libv4lconvert/libv4lsyscall-priv.h
@@ -49,7 +49,7 @@
 #endif
 #endif
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/time.h>
 #include <sys/syscall.h>
 #include <sys/types.h>
@@ -57,7 +57,9 @@
 #define	_IOC_NR(cmd) ((cmd) & 0xFF)
 #define	_IOC_TYPE(cmd) IOCGROUP(cmd)
 #define	_IOC_SIZE(cmd) IOCPARM_LEN(cmd)
+# ifndef  MAP_ANONYMOUS
 #define	MAP_ANONYMOUS MAP_ANON
+# endif
 #define	MMAP2_PAGE_SHIFT 0
 typedef off_t __off_t;
 #endif
@@ -83,7 +85,7 @@ typedef off_t __off_t;
 #define SYS_WRITE(fd, buf, len) \
 	syscall(SYS_write, (int)(fd), (void *)(buf), (size_t)(len));
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #define SYS_MMAP(addr, len, prot, flags, fd, off) \
 	__syscall(SYS_mmap, (void *)(addr), (size_t)(len), \
 			(int)(prot), (int)(flags), (int)(fd), (__off_t)(off))
