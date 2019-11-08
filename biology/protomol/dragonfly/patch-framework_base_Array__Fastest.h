--- framework/base/Array_Fastest.h.orig	2005-05-07 14:40:23 UTC
+++ framework/base/Array_Fastest.h
@@ -4,6 +4,7 @@
 
 #include <algorithm>
 #include <assert.h>
+#include <cstddef>	// for std::ptrdiff_t
 
 namespace ProtoMol {
 
