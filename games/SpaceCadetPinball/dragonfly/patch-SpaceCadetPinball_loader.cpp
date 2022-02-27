--- SpaceCadetPinball/loader.cpp.orig	2021-10-30 07:12:30 UTC
+++ SpaceCadetPinball/loader.cpp
@@ -5,6 +5,8 @@
 #include "pinball.h"
 #include "Sound.h"
 #include "zdrv.h"
+#include <cmath>  // of std::isnan()
+using std::isnan;
 
 
 errorMsg loader::loader_errors[] =
