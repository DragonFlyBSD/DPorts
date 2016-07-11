--- src/resource.cpp.intermediate	2016-07-09 19:16:20 UTC
+++ src/resource.cpp
@@ -23,6 +23,9 @@
 #include "resource.h"
 #include "blackboxstyle.h"
 #include <cstdlib>
+extern "C" {
+#include <strings.h>
+}
 
 Resource::Resource(ToolWindow *toolwindow, const std::string &rc_file):
 		BaseResource(*toolwindow, toolwindow->getCurrentScreen(), rc_file), 
