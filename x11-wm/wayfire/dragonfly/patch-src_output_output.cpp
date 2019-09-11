--- src/output/output.cpp.orig	2019-06-24 13:49:23 UTC
+++ src/output/output.cpp
@@ -19,6 +19,7 @@ extern "C"
 #include <algorithm>
 #include <assert.h>
 #include <config.hpp>
+#include <cmath>	/* for std::floor() */
 
 wf::output_t::output_t(wlr_output *handle)
 {
