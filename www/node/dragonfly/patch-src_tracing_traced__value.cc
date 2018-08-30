--- src/tracing/traced_value.cc.orig	2018-07-18 12:38:16 UTC
+++ src/tracing/traced_value.cc
@@ -4,7 +4,7 @@
 
 #include "tracing/traced_value.h"
 
-#include <math.h>
+#include <cmath>
 #include <sstream>
 #include <stdio.h>
 #include <string>
