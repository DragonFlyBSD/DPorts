--- CH2L.cpp.intermediate	2016-07-13 19:06:47 UTC
+++ CH2L.cpp
@@ -30,6 +30,10 @@ using namespace std;
 #include <stdlib.h>
 #include <assert.h>
 #include <fstream>
+#include <cstring>
+extern "C" {
+#include <strings.h>
+}
 
 using namespace Magick;
 
