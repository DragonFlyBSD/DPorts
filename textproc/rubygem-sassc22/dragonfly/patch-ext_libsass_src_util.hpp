--- ext/libsass/src/util.hpp.orig	2020-06-28 19:57:11 UTC
+++ ext/libsass/src/util.hpp
@@ -9,10 +9,10 @@
 #include "ast_fwd_decl.hpp"
 
 #include <cstring>
+#include <cmath>
 #include <vector>
 #include <string>
 #include <assert.h>
-#include <math.h>
 
 #define SASS_ASSERT(cond, msg) assert(cond && msg)
 
