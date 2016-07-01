--- src/openhbci/core/posix/datetime.cpp.orig	2002-08-14 11:15:29.000000000 +0200
+++ src/openhbci/core/posix/datetime.cpp
@@ -43,6 +43,7 @@
 
 #include <time.h>
 #include <string>
+#include <cstring>
 #include <stdio.h>
 #include "datetime.h"
 #include "error.h"
