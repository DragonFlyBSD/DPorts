--- src/OBPager.cc.intermediate	2016-07-10 10:12:16 UTC
+++ src/OBPager.cc
@@ -22,6 +22,8 @@
 
 #include <string>
 #include <sstream>
+#include <cstdlib>
+#include <memory> // for std::auto_ptr
 
 
 // We need to work with these properties
