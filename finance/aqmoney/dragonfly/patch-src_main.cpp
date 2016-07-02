--- src/main.cpp.orig	2016-06-23 11:52:39.000000000 +0300
+++ src/main.cpp
@@ -31,6 +31,12 @@
 #ifdef HAVE_CONFIG_H
 # include <config.h>
 #endif
+
+extern "C" {
+#include <strings.h>
+}
+#include <cstring>
+
 #include <openhbci.h>
 
 #include "aqminteractor.h"
