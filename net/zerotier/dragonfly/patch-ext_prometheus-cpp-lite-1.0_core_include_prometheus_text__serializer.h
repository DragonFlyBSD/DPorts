--- ext/prometheus-cpp-lite-1.0/core/include/prometheus/text_serializer.h.orig	2023-12-16 13:38:55 UTC
+++ ext/prometheus-cpp-lite-1.0/core/include/prometheus/text_serializer.h
@@ -3,7 +3,7 @@
 #include <iosfwd>
 #include <vector>
 #include <array>
-#include <math.h>
+#include <cmath>
 #include <ostream>
 
 #include "prometheus/metric_family.h"
