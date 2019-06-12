--- src/util.hpp.orig	2019-05-05 14:58:33 UTC
+++ src/util.hpp
@@ -13,6 +13,7 @@
 #include <string>
 #include <assert.h>
 #include <math.h>
+#include <cmath>  // for std::fmod()
 
 #define SASS_ASSERT(cond, msg) assert(cond && msg)
 
