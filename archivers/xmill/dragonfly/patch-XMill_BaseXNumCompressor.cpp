--- XMill/BaseXNumCompressor.cpp.orig
+++ XMill/BaseXNumCompressor.cpp
@@ -44,6 +44,9 @@
 
 #include "stdafx.h"
 #include <math.h>
+#ifndef min	/* libstdc++ #undefs it */
+#define min(x,y)  ( (x)>(y) ? (y) : (x))
+#endif
 
 /* constructor */
 BaseXNumCompressor::BaseXNumCompressor(
