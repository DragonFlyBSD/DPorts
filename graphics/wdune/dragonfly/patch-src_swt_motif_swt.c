--- src/swt/motif/swt.c.orig	2020-07-18 14:12:20 UTC
+++ src/swt/motif/swt.c
@@ -68,7 +68,7 @@
 # include <sys/stat.h>
 #else
 # include <sys/param.h>
-# ifndef __FreeBSD__ 
+# if !defined(__FreeBSD__) && !defined(__DragonFly__)
 #  include <wait.h>
 # endif
 #endif
