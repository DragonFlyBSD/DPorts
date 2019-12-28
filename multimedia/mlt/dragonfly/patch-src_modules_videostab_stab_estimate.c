--- src/modules/videostab/stab/estimate.c.orig	2019-11-12 01:44:42 UTC
+++ src/modules/videostab/stab/estimate.c
@@ -18,7 +18,8 @@
 #include <stdlib.h>
 #include <math.h>
 #include <string.h>
-#if !defined(__APPLE__) && !defined(__FreeBSD__) && !defined(_WIN32) && !defined(__NetBSD__) && !defined(__OpenBSD__)
+#if !defined(__APPLE__) && !defined(__FreeBSD__) && !defined(_WIN32) && !defined(__NetBSD__) && \
+    !defined(__OpenBSD__) && !defined(__DragonFly__)
 #include <values.h>
 #endif
 
