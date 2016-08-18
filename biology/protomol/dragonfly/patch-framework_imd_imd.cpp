--- framework/imd/imd.cpp.orig	2005-05-07 17:40:25.000000000 +0300
+++ framework/imd/imd.cpp
@@ -1,6 +1,7 @@
 #include "imd.h"
 #include "vmdsock.h"
 #include <string>
+#include <cstring>
 using std::string;
 #include <errno.h>
 #include <stdlib.h>
