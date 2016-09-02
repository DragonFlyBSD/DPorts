--- src/bbmail.cpp.intermediate	2016-07-09 19:16:20 UTC
+++ src/bbmail.cpp
@@ -22,6 +22,8 @@
 #include "bbmail.h"
 #include "config.h"
 #include <string>
+#include <cstdio>  // for fprintf popen stderr etc
+#include <cstring> // for strncmp
 #include <cstdlib>
 #include <cmath>
 
