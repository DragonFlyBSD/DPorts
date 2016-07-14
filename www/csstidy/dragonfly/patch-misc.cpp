--- misc.cpp.orig	2007-07-10 10:20:54.000000000 +0300
+++ misc.cpp
@@ -17,6 +17,7 @@
  */
  
 #include "csspp_globals.hpp"
+#include <cstring>
 
 bool escaped(const string &istring, const int pos) 
 {
