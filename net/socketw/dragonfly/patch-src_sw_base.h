--- src/sw_base.h.orig	2016-01-16 11:02:40.000000000 +0200
+++ src/sw_base.h
@@ -23,6 +23,7 @@
 #endif // _WIN32
 
 #include <string>
+#include <cstring>
 
 // Set error handling mode
 // throw_errors == true  : Throws the error class on unhandled errors
