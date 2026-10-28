--- strings.c.orig
+++ strings.c
@@ -15,7 +15,7 @@
 #include <sys/stat.h>
 #include <ctype.h>
 #include <stdlib.h>
-#ifdef __FreeBSD__ 
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <string.h> 
 #endif
 #ifdef __linux__ 
