--- libsupport/csvfile.cpp.orig	2003-06-20 02:37:47.000000000 +0300
+++ libsupport/csvfile.cpp
@@ -6,6 +6,7 @@
 #include <string>
 #include <stdexcept>
 #include <utility>
+#include <cstring>
 
 #include "libpalm/File.h"
 #include "libflatfile/Database.h"
