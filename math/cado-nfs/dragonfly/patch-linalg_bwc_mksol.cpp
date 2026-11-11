--- linalg/bwc/mksol.cpp.orig
+++ linalg/bwc/mksol.cpp
@@ -5,6 +5,7 @@
 #include <climits>
 #include <ctime>                // for time
 #include <string>                // for string
+#include <memory>                // for unique_ptr
 #include <gmp.h>                 // for gmp_randclear, gmp_randinit_default
 #include "matmul.hpp"              // for matmul_public_s
 #include "parallelizing_info.hpp"
