--- framework/base/Array_NoPartialSpecialization.h.orig	2005-05-07 14:40:23.000000000 +0000
+++ framework/base/Array_NoPartialSpecialization.h
@@ -5,6 +5,7 @@
 #include <algorithm>
 #include <vector>
 #include <assert.h>
+#include <cstddef>	// for std::ptrdiff_t
 
 namespace ProtoMol {
 
