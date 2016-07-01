--- src/openhbci/core/posix/inetaddress.cpp.orig	2002-12-28 01:06:54.000000000 +0200
+++ src/openhbci/core/posix/inetaddress.cpp
@@ -32,6 +32,7 @@
 #endif
 
 
+#include <cstring>
 #include "inetaddress.h"
 
 
