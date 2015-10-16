--- src/DirectoryIndexing.cxx.orig	2005-10-04 10:45:52.000000000 +0300
+++ src/DirectoryIndexing.cxx
@@ -46,6 +46,8 @@
 #include <fstream>
 #include <vector>
 #include <set>
+// for sort()
+#include <algorithm>
 
 #include "Version.hxx"
 
