--- src/dashboard.cpp.orig
+++ src/dashboard.cpp
@@ -3,6 +3,7 @@
 
 #include <vector>
 #include <memory>
+#include <mutex>
 #include <unistd.h>
 
 #include "pcm-accel-common.h"
