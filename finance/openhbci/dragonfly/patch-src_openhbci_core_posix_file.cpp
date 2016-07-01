--- src/openhbci/core/posix/file.cpp.orig	2003-04-08 12:38:00.000000000 +0300
+++ src/openhbci/core/posix/file.cpp
@@ -44,6 +44,7 @@
 # define DLLIMPORT
 #endif
 
+#include <cstring>
 
 #include "error.h"
 #include "file.h"
