--- xv.h.intermediate	2013-01-06 09:41:45.296460000 +0100
+++ xv.h	2013-01-06 09:43:29.946606000 +0100
@@ -139,7 +139,7 @@
 #endif
 
 
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #  include <sys/param.h>
 #endif
 
@@ -159,7 +159,7 @@
 
 #ifndef VMS
 #  include <errno.h>
-#  if !defined(__NetBSD__) && !defined(__FreeBSD__)
+#  if !defined(__NetBSD__) && !defined(__FreeBSD__) && !defined(__DragonFly__)
 #    if !(defined __GLIBC__ && __GLIBC__ >= 2)
        extern int   errno;         /* SHOULD be in errno.h, but often isn't */
        extern char *sys_errlist[]; /* this too... */
