--- include/tscore/ts_file.h.orig	2020-12-14 21:47:34 UTC
+++ include/tscore/ts_file.h
@@ -31,6 +31,9 @@
 #include "tscore/ink_memory.h"
 #include "tscpp/util/TextView.h"
 #include "tscore/BufferWriter.h"
+#if defined(__DragonFly__)
+#include <sys/param.h>
+#endif
 
 namespace ts
 {
