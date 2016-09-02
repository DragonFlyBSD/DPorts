--- src/resource.cpp.intermediate	2016-07-09 19:16:20 UTC
+++ src/resource.cpp
@@ -23,6 +23,10 @@
 #include "resource.h"
 #include "blackboxstyle.h"
 #include <cstdlib>
+#include <cstdio> // for fprintf snprintf
+extern "C" {
+#include <strings.h> // for strcasecmp
+}
 
 Resource::Resource(ToolWindow *toolwindow, const std::string &rc_file):
 		BaseResource(*toolwindow, toolwindow->getCurrentScreen(), rc_file), 
