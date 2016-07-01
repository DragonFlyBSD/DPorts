--- src/openhbci/core/posix/directory.cpp.orig	2002-12-10 22:48:27.000000000 +0200
+++ src/openhbci/core/posix/directory.cpp
@@ -40,6 +40,7 @@
 #endif
 
 #include <string>
+#include <cstring>
 
 #include "file.h"
 #include "directory.h"
