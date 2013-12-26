--- simgear/sound/sample_group.cxx.orig	2013-09-16 17:56:31.000000000 +0000
+++ simgear/sound/sample_group.cxx
@@ -20,6 +20,8 @@
 //
 // $Id$
 
+#include <cmath>
+
 #ifdef HAVE_CONFIG_H
 #  include <simgear_config.h>
 #endif
@@ -40,7 +42,7 @@ using std::isnan;
 #endif
 
 bool isNaN(float *v) {
-   return (isnan(v[0]) || isnan(v[1]) || isnan(v[2]));
+   return (std::isnan(v[0]) || std::isnan(v[1]) || std::isnan(v[2]));
 }
 
 SGSampleGroup::SGSampleGroup () :
