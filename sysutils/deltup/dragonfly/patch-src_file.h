--- src/file.h.orig
+++ src/file.h
@@ -12,6 +12,10 @@
  * Author: John Whitney <jjw@deltup.org>
  */
 
+#include <cstdio>  // for fopen printf stderr etc
+#include <cstdlib>
+#include <cstring> // for strlen
+
 class IStream {
 public:
 	virtual unsigned read(void *data, unsigned num) = 0;
