--- include/fmt/os.h.orig	2020-05-09 16:13:20 UTC
+++ include/fmt/os.h
@@ -19,7 +19,7 @@
 #include <cstdio>
 #include <cstdlib>  // for strtod_l
 
-#if defined __APPLE__ || defined(__FreeBSD__)
+#if defined __APPLE__ || defined(__FreeBSD__) || defined(__DragonFly__)
 #  include <xlocale.h>  // for LC_NUMERIC_MASK on OS X
 #endif
 
