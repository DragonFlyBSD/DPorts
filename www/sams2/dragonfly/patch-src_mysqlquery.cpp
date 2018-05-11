--- src/mysqlquery.cpp.orig	2010-01-12 21:52:24.000000000 +0000
+++ src/mysqlquery.cpp
@@ -17,6 +17,7 @@
 #include <string.h>
 #include <stdlib.h>
 #include <limits.h>
+#include <climits>  // for LLONG_MAX
 
 #include "mysqlquery.h"
 
