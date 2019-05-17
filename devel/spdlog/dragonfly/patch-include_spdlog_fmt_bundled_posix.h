--- include/spdlog/fmt/bundled/posix.h.orig	2019-01-18 10:13:07 UTC
+++ include/spdlog/fmt/bundled/posix.h
@@ -21,7 +21,7 @@
 
 #include <cstddef>
 
-#if defined __APPLE__ || defined(__FreeBSD__)
+#if defined __APPLE__ || defined(__FreeBSD__) || defined(__DragonFly__)
 # include <xlocale.h>  // for LC_NUMERIC_MASK on OS X
 #endif
 
