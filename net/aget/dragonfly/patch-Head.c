--- Head.c.orig	2009-05-12 08:22:42.000000000 +0300
+++ Head.c
@@ -1,6 +1,9 @@
 #ifndef SOLARIS
 #define _XOPEN_SOURCE 500
 #endif
+#if defined(__DragonFly__)
+#define __BSD_VISIBLE 1 /* for h_addr */
+#endif
 
 
 #include <stdio.h>
