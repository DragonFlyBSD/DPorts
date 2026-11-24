--- src/exfat.c.orig
+++ src/exfat.c
@@ -32,6 +32,9 @@
 #include <sys/disklabel.h>
 #endif
 
+#ifdef __DragonFly__
+#include <sys/diskslice.h>
+#endif
 #if defined(__APPLE__) || defined(__FreeBSD__)
 #include <sys/disk.h>
 #endif
