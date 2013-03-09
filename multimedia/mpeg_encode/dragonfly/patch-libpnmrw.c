--- libpnmrw.c.intermediate	2013-03-09 08:43:51.034622000 +0000
+++ libpnmrw.c
@@ -28,6 +28,7 @@
 #endif
 
 #include <stdio.h>
+#include <errno.h>
 #include "libpnmrw.h"
 
 /* if don't have string.h, try strings.h */
@@ -126,7 +127,7 @@ static void
   pm_perror( reason )
 char* reason;
 {
-#ifndef __FreeBSD__
+#if !defined(__FreeBSD__) && !defined(__DragonFly__)
   extern char* sys_errlist[];
 #endif
   extern int errno;
