--- src/TagStream.hh.orig	2002-12-19 13:01:35.000000000 +0200
+++ src/TagStream.hh
@@ -25,6 +25,7 @@
 #include "Tag.hh"
 #include <fstream>
 #include <strstream>
+#include <cstring>
 
 class TagStream : public Tag
 {	// ---- for reading -----
