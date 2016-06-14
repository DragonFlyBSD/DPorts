--- src/resource.cxx.orig	2007-03-11 23:47:07.000000000 +0200
+++ src/resource.cxx
@@ -19,6 +19,9 @@
 // (See the included file COPYING / GPL-2.0)
 //
 
+extern "C" {
+#include <strings.h>
+}
 #include "resource.h"
 #include "blackboxstyle.h"
 
