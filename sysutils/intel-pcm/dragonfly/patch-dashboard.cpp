--- dashboard.cpp.orig	2021-05-15 15:52:05 UTC
+++ dashboard.cpp
@@ -13,6 +13,7 @@ THIS SOFTWARE IS PROVIDED BY THE COPYRIG
 
 #include <vector>
 #include <memory>
+#include <mutex>
 #include <unistd.h>
 #include "cpucounters.h"
 #include "dashboard.h"
