--- src/common/convert.cpp.orig	2016-06-23 11:52:39.000000000 +0300
+++ src/common/convert.cpp
@@ -31,6 +31,9 @@
 #endif
 
 
+extern "C" {
+#include <strings.h>
+}
 
 #include "convert.h"
 #include "aqmconverter.h"
