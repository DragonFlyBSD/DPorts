--- src/openhbci/core/job.cpp.orig	2003-01-26 21:46:59.000000000 +0200
+++ src/openhbci/core/job.cpp
@@ -43,6 +43,7 @@
 #endif
 
 
+#include <cstdlib> // for atoi
 #include <string>
 #include <list>
 #include "error.h"
