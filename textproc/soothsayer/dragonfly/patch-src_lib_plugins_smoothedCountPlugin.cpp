--- src/lib/plugins/smoothedCountPlugin.cpp.orig	2008-06-02 16:29:01.000000000 +0300
+++ src/lib/plugins/smoothedCountPlugin.cpp
@@ -22,6 +22,7 @@
                                                                 **********(*)*/
 
 #include "plugins/smoothedCountPlugin.h"
+#include <cstring>
 
 
 SmoothedCountPlugin::SmoothedCountPlugin(Configuration* config, ContextTracker* ct)
