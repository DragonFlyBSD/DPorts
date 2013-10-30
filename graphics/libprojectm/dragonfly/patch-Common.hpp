--- Common.hpp.orig	2009-12-06 01:42:51.000000000 +0000
+++ Common.hpp
@@ -54,8 +54,9 @@ extern FILE *fmemopen(void *buf, size_t
 
 
 #ifdef LINUX
+#include <cmath>
 #include <cstdlib>
-#define projectM_isnan isnan
+#define projectM_isnan std::isnan
 
 #endif
 
