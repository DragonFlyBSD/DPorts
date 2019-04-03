--- threads.c.orig	2011-10-31 20:46:21 UTC
+++ threads.c
@@ -2,7 +2,7 @@
 #include <stdio.h>
 #ifdef __GLIBC__
 #include <sys/sysinfo.h>
-#elif defined(__APPLE__) || defined(__FreeBSD__)
+#elif defined(__APPLE__) || defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/types.h>
 #include <sys/sysctl.h>
 #endif
@@ -15,7 +15,7 @@
 
 #if defined(__GLIBC__)
 int ncpus(void) { return get_nprocs(); }
-#elif defined(__APPLE__) || defined(__FreeBSD__)
+#elif defined(__APPLE__) || defined(__FreeBSD__) || defined(__DragonFly__)
 int ncpus(void)
 {
 	int count;
