--- src/scan_exiv2.cpp.orig	2021-10-17 19:46:43 UTC
+++ src/scan_exiv2.cpp
@@ -24,6 +24,9 @@
 //#include "md5.h"
 
 #ifdef HAVE_EXIV2
+#include <string>
+using std::string;
+#define dtos std::to_string
 
 /* exiv2 has errors */
 #ifdef HAVE_DIAGNOSTIC_SHADOW
