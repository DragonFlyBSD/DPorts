--- src/Baseresource.cxx.orig	2006-12-31 18:24:38.000000000 +0200
+++ src/Baseresource.cxx
@@ -20,6 +20,9 @@
 //
 
 #include <string>
+extern "C" {
+#include <strings.h>
+}
 #include "Baseresource.h"
 #include <stdio.h>
 #include "Menu.hh"
