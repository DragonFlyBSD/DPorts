--- src/appleseed/foundation/platform/snprintf/snprintf.cpp.orig	2016-09-30 11:36:29.000000000 +0300
+++ src/appleseed/foundation/platform/snprintf/snprintf.cpp
@@ -199,6 +199,7 @@
 #include <math.h>	/* For pow(3), NAN, and INFINITY. */
 #include <string.h>	/* For strcmp(3). */
 #if defined(__NetBSD__) || \
+    defined(__DragonFly__) || \
     defined(__FreeBSD__) || \
     defined(__OpenBSD__) || \
     defined(__NeXT__) || \
