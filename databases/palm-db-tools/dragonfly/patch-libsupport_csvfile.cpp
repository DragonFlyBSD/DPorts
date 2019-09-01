--- libsupport/csvfile.cpp.orig	2003-06-19 23:37:47 UTC
+++ libsupport/csvfile.cpp
@@ -6,6 +6,7 @@
 #include <string>
 #include <stdexcept>
 #include <utility>
+#include <cstring>	/* for memset() */
 
 #include "libpalm/File.h"
 #include "libflatfile/Database.h"
