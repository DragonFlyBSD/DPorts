--- getline.c.orig	2013-08-18 13:00:20.000000000 +0000
+++ getline.c
@@ -42,6 +42,10 @@
 #endif
 #endif
 
+#if defined(__DragonFly__)
+#define __GNU_LIBRARY__
+#endif
+
 #include <stdio.h>
 #include <sys/types.h>
 
