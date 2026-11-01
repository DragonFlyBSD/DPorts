--- src/cpputils/cpputilsshared/cppdir.cc.orig
+++ src/cpputils/cpputilsshared/cppdir.cc
@@ -26,6 +26,7 @@
 #include <sys/types.h>
 #include <vector>
 #include <cstdlib>
+#include <climits> // PATH_MAX
 
 #ifdef _WIN32
 # if !defined(WIN32)
