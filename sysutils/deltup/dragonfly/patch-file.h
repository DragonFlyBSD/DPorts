--- file.h.bak	2015-10-03 17:48:42.000000000 +0300
+++ file.h
@@ -12,6 +12,9 @@
  * Author: John Whitney <jjw@deltup.org>
  */
 
+#include <cstdio>  // for fopen printf stderr etc
+#include <cstdlib>
+#include <cstring> // for strlen
 #include <zlib.h>
 
 class IStream {
