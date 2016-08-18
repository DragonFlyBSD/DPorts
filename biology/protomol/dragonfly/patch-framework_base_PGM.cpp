--- framework/base/PGM.cpp.orig	2005-05-07 17:40:23.000000000 +0300
+++ framework/base/PGM.cpp
@@ -1,5 +1,6 @@
 #include "PGM.h"
 #include "PPM.h"
+#include <cstddef> // C++11 NULL
 #include <vector> // NULL definition
 
 namespace ProtoMol {
