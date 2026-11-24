--- XMill/NoZip.cpp.orig
+++ XMill/NoZip.cpp
@@ -32,6 +32,9 @@
 // the interfaces to the ZLIB (either gzip or bzip) libary
 
 #include "stdafx.h"
+#ifndef min	/* libstdc++ #undefs it */
+#define min(x,y)  ( (x)>(y) ? (y) : (x))
+#endif
 
 #ifdef _DEBUG
 int totaldecomp = 0;
