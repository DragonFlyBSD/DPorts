--- Directory.h.orig	1995-06-24 16:33:27 UTC
+++ Directory.h
@@ -27,6 +27,7 @@
 #define _DIRECTORY_H_
 
 #include <stdio.h>
+#include <stdlib.h>
 #include <string.h>
 #include <sys/param.h>
 #include <sys/types.h>
@@ -44,6 +45,10 @@
 #define	dirent direct
 #endif
 
+#if defined(__DragonFly__) && !defined(MAXNAMLEN)
+#define MAXNAMLEN 255
+#endif
+
 #ifndef _SYS_NAME_MAX
 #ifndef MAXNAMLEN
 ERROR, ONE OF THESE MUST BE DEFINED
