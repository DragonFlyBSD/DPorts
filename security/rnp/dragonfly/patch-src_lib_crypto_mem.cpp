--- src/lib/crypto/mem.cpp.orig
+++ src/lib/crypto/mem.cpp
@@ -25,6 +25,7 @@
  */
 
 #include <cstdio>
+#include <cstring>
 #include "mem.h"
 #include "logging.h"
 #include <botan/ffi.h>
