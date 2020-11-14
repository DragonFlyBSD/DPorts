--- src/OpenPhySyn/src/BufferTree.cpp.orig	2020-09-12 17:40:11 UTC
+++ src/OpenPhySyn/src/BufferTree.cpp
@@ -39,6 +39,7 @@
 #include "OpenPhySyn/Types.hpp"
 
 #include <memory>
+#include <cmath>	// for std::log() std::pow()
 
 namespace psn
 {
