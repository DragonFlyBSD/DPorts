--- src/CompositorResource.cpp.orig
+++ src/CompositorResource.cpp
@@ -3,6 +3,7 @@
 #include "backend.h"
 #include "CompositorResource.h"
 #include "compositor.h"
+#include <tuple>
 
 #include <algorithm>
 #include <unistd.h>
