--- Sources/Core/System/Unix/init_linux.cpp.intermediate	2016-07-04 19:23:49 UTC
+++ Sources/Core/System/Unix/init_linux.cpp
@@ -39,6 +39,7 @@
 #include <cstdio>
 #include <cstdlib>
 #include <cstring>
+#include <climits> // for PATH_MAX
 #include "implementation.h"
 #include "init_linux.h"
 // note: this cannot be replaced by <ctime>! (timeval needs to be defined)
