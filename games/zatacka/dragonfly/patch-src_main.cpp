Since FreeBSD in MF does s/30/PATH_MAX/ it earns an extra include

--- src/main.cpp.intermediate	2016-07-04 19:42:13 UTC
+++ src/main.cpp
@@ -20,6 +20,7 @@
 #ifdef __FreeBSD__
 #include <unistd.h>
 #include <defaults.h>
+#include <limits.h> // for PATH_MAX
 #endif
 
 #include "fx.h"
