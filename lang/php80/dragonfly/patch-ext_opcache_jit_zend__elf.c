--- ext/opcache/jit/zend_elf.c.orig	2020-10-13 21:58:13 UTC
+++ ext/opcache/jit/zend_elf.c
@@ -19,7 +19,7 @@
 
 #include <sys/types.h>
 #include <sys/stat.h>
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/sysctl.h>
 #elif defined(__HAIKU__)
 #include <FindDirectory.h>
@@ -55,7 +55,7 @@ void zend_elf_load_symbols(void)
 	int fd = open("/proc/self/exe", O_RDONLY);
 #elif defined(__NetBSD__)
 	int fd = open("/proc/curproc/exe", O_RDONLY);
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
 	char path[PATH_MAX];
 	size_t pathlen = sizeof(path);
 	int mib[4] = {CTL_KERN, KERN_PROC, KERN_PROC_PATHNAME, -1};
