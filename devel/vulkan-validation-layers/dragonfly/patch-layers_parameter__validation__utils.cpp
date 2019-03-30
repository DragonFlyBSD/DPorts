--- layers/parameter_validation_utils.cpp.orig	2018-07-30 17:53:08 UTC
+++ layers/parameter_validation_utils.cpp
@@ -27,6 +27,7 @@
 #include <stdlib.h>
 #include <string.h>
 
+#include <cmath>	// for std::isnan()
 #include <iostream>
 #include <string>
 #include <sstream>
