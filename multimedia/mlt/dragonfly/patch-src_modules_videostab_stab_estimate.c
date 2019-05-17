--- src/modules/videostab/stab/estimate.c.orig	2019-03-30 20:59:21 UTC
+++ src/modules/videostab/stab/estimate.c
@@ -18,7 +18,7 @@
 #include <stdlib.h>
 #include <math.h>
 #include <string.h>
-#if !defined(__APPLE__) && !defined(__FreeBSD__) && !defined(_WIN32) && !defined(__NetBSD__)
+#if !defined(__APPLE__) && !defined(__DragonFly__) && !defined(__FreeBSD__) && !defined(_WIN32) && !defined(__NetBSD__)
 #include <values.h>
 #endif
 
