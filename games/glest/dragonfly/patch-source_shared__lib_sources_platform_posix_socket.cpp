--- source/shared_lib/sources/platform/posix/socket.cpp.intermediate	2016-09-02 16:52:56 UTC
+++ source/shared_lib/sources/platform/posix/socket.cpp
@@ -9,6 +9,7 @@
 #include "socket.h"
 
 #include <cstring>
+#include <cstdio> // for fprintf stderr
 #include <cstdlib>
 #include <stdexcept>
 #include <sstream>
