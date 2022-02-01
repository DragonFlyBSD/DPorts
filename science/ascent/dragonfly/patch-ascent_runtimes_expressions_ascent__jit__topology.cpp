--- ascent/runtimes/expressions/ascent_jit_topology.cpp.orig	2022-01-11 18:15:21 UTC
+++ ascent/runtimes/expressions/ascent_jit_topology.cpp
@@ -14,6 +14,7 @@
 #include <ascent_logging.hpp>
 #include "ascent_blueprint_topologies.hpp"
 #include <math.h>
+#include <cmath> // for std::pow()
 
 //-----------------------------------------------------------------------------
 // -- begin ascent:: --
