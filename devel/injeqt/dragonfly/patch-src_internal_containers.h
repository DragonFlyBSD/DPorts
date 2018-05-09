--- src/internal/containers.h.orig	2017-04-21 09:40:08.000000000 +0000
+++ src/internal/containers.h
@@ -23,6 +23,7 @@
 #include "internal.h"
 
 #include <algorithm>
+#include <functional>  // for std::function
 #include <vector>
 
 /**
