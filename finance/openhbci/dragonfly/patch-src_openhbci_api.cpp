--- src/openhbci/api.cpp.orig	2004-07-01 11:42:37.000000000 +0300
+++ src/openhbci/api.cpp
@@ -30,6 +30,9 @@
 #include <config.h>
 #endif
 
+extern "C" {
+#include <strings.h>
+}
 #include "assert.h"
 
 #include "api.h"
