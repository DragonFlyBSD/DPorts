--- ext/libsass/src/util.hpp.intermediate	2019-10-28 12:14:34.000000000 +0000
+++ ext/libsass/src/util.hpp
@@ -8,6 +8,7 @@
 #include "sass/base.h"
 #include "ast_fwd_decl.hpp"
 
+#include <cmath>	/* for std::fmod() */
 #include <cstring>
 #include <vector>
 #include <string>
