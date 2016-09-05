--- src/iuse_actor.cpp.orig	2015-03-09 07:25:34.000000000 +0200
+++ src/iuse_actor.cpp
@@ -7,6 +7,7 @@
 #include "monstergenerator.h"
 #include <sstream>
 #include <algorithm>
+#include <cmath>  // for std::pow
 
 iuse_transform::~iuse_transform()
 {
