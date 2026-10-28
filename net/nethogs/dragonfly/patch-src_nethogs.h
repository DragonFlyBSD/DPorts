--- src/nethogs.h.orig	2026-10-26 06:34:47 UTC
+++ src/nethogs.h
@@ -31,7 +31,7 @@
 #include <sys/types.h>
 #ifdef __APPLE__
 #include <sys/malloc.h>
-#elif __FreeBSD__
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
 #include <stdlib.h>
 #else
 #include <malloc.h>
