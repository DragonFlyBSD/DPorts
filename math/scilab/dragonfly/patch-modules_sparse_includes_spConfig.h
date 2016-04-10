--- modules/sparse/includes/spConfig.h.orig	2015-03-31 09:31:40 UTC
+++ modules/sparse/includes/spConfig.h
@@ -504,7 +504,7 @@
 #   define  LARGEST_SHORT_INTEGER   SHRT_MAX
 #   define  LARGEST_LONG_INTEGER    LONG_MAX
 #endif
-#if defined(netbsd) || defined(freebsd)
+#if defined(netbsd) || defined(freebsd) || defined __DragonFly__
 #   include <limits.h>
 #   include <float.h>
 #   define  MACHINE_RESOLUTION      DBL_EPSILON
