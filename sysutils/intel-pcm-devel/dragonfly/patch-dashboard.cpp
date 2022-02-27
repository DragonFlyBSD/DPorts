--- dashboard.cpp.orig	2021-10-13 18:22:34 UTC
+++ dashboard.cpp
@@ -13,6 +13,7 @@ THIS SOFTWARE IS PROVIDED BY THE COPYRIG
 
 #include <vector>
 #include <memory>
+#include <mutex>
 #include <unistd.h>
 #include "cpucounters.h"
 #include "dashboard.h"
