--- XMill/Input.cpp.orig
+++ XMill/Input.cpp
@@ -33,6 +33,9 @@
 // buffer management
 
 #include "stdafx.h"
+#ifndef min	/* libstdc++ #undefs it */
+#define min(x,y)  ( (x)>(y) ? (y) : (x))
+#endif
 
 // A macro for refilling the buffer to *at least* 'mylen' characters
 // If there are not enough characters in the file, then the program exits
